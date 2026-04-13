#!/usr/bin/env python3

import json
import argparse
import subprocess
import glob

from typing import List, Dict, Any
from pathlib import Path
from project import ProjectConfig, Object, process_project


parser = argparse.ArgumentParser(description="Generates build.ninja")
parser.add_argument('-w', type=str, default="./wibo", dest="wine", required=False, help="Path to Wine/Wibo (linux only)")
parser.add_argument("--compiler", type=Path, required=False, help="Path to pre-installed compiler root directory")
parser.add_argument("--no-extract", action="store_true", help="Skip extract step")
parser.add_argument("--dsd", type=Path, required=False, help="Path to pre-installed dsd CLI")
parser.add_argument("--version", "-v", help='Game version', required=False)
args = parser.parse_args()

config = ProjectConfig("st", args.compiler, "dsi/1.2p1", args.wine, args.dsd, Path(__file__).resolve())
config.dsd_tag = "v0.11.0"
config.wibo_tag = "1.1.0"
config.objdiff_tag = "v3.7.1"

GAME_VERSIONS = [
    "eur",
    "jp",
]

# Only configure versions for which a baserom file exists
def version_exists(version: str) -> bool:
    return glob.glob(str(Path("extract") / f"baserom_st_{version}.nds")) != []

if args.version is not None:
    config.game_versions = [args.version]
else:
    config.game_versions = [
        version
        for version in GAME_VERSIONS
        if version_exists(version)
    ]


config.cflags_base = [
    "-O4,p",                # Optimize maximally for performance
    "-enum int",            # Use int-sized enums
    "-char signed",         # Char type is signed
    "-str noreuse",         # Equivalent strings are different objects
    "-proc arm946e",        # Target processor
    "-gccext,on",           # Enable GCC extensions
    "-fp soft",             # Compute float operations in software
    "-inline noauto",       # Inline only functions marked with 'inline'
    "-lang=c++",            # Set language to C++
    "-Cpp_exceptions off",  # Disable C++ exceptions
    "-RTTI off",            # Disable runtime type information
    "-interworking",        # Enable ARM/Thumb interworking
    "-w off",               # Disable warnings
    "-sym on",              # Debug info, including line numbers
    "-gccinc",              # Interpret #include "..." and #include <...> equally
    "-nolink",              # Do not link
    "-msgstyle gcc",        # Use GCC-like messages (some IDEs will make file names clickable)
    "-ipa file",            # InterProcedural Analysis
]

config.ldflags = [
    "-proc arm946e",        # Target processor
    "-dead",                # Strip unused code
    "-nostdlib",            # No C/C++ standard library
    "-interworking",        # Enable ARM/Thumb interworking
    "-map closure,unused",  # Generate map file
    "-msgstyle gcc",        # Use GCC-like messages (some IDEs will make file names clickable)
]


# Helper function for Nitro libraries
def NitroLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "dsi/1.2p1",
        "src_dir": "libs/nitro/src",
        "cflags": config.cflags_base,
        "objects": objects,
    }


# Helper function for libc libraries
def LibC(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "dsi/1.2p1",
        "src_dir": "libs/c/src",
        "cflags": [*config.cflags_base, "-str reuse"],
        "objects": objects,
    }


# Helper function for libcpp libraries
def LibCPP(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "dsi/1.2p1",
        "src_dir": "libs/cpp/src",
        "cflags": config.cflags_base,
        "objects": objects,
    }


# Helper function for overlays and similar modules
def GameLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "dsi/1.2p1",
        "cflags": [*config.cflags_base, "-str reuse"],
        "objects": objects,
    }


config.auto_add_sources = False
config.warn_missing_source = True

config.libs = [
    GameLib(
        "Main",
        [
            Object("Main/Main.cpp"),
            Object("Main/System/SysNew.cpp"),
            Object("Main/System/SysFault.cpp"),
            Object("Main/Game/Game.cpp"),
            Object("Main/Player/TouchControl.cpp"),
            Object("Main/System/OverlayManager.cpp"),
            Object("Main/UnkFileSystem.cpp"),
            Object("Main/System/Random.cpp"),
            Object("Main/Game/GameModeLinkListNode.cpp"),
            Object("Main/func_02017ea4.cpp"),
            Object("Main/Game/GameModeBase.cpp"),
            Object("Main/UnkStruct_0204a060.cpp"),
            Object("Main/Game/GameModeManagerBase.cpp"),
            Object("Main/func_020196fc.cpp"),
        ]
    ),
    GameLib(
        "Overlay 0",
        [
            Object("000_Second/Game/GameModeManagerBase_104_0C.cpp"),
            Object("000_Second/Game/GameModeManagerBase_104.cpp"),
            Object("000_Second/UnkSystem1_Base.cpp"),
            Object("000_Second/UnkSystem1_Derived1.cpp"),
            Object("000_Second/Actor/Actor.cpp"),
            Object("000_Second/Actor/ActorManager.cpp"),
            Object("000_Second/Actor/ActorUnk_ov000_020a8bb0.cpp"),
            Object("000_Second/Item/ItemManager.cpp"),
            Object("000_Second/Item/TreasureManager.cpp"),
            Object("000_Second/Actor/ActorUnkEFIK.cpp"),
            Object("000_Second/Actor/ActorEventIcon.cpp"),
            Object("000_Second/Actor/ActorUnkSWOB.cpp"),
            Object("000_Second/Actor/ActorUnkSWTM.cpp"),
            Object("000_Second/MapObject/MapObjectUnkBLCM.cpp"),
            Object("000_Second/MapObject/MapObjectUnkSWST.cpp"),
        ]
    ),
    GameLib(
        "Overlay 1",
        [
            Object("001_SceneInit/Actor/ActorManager_001.cpp"),
        ]
    ),
    GameLib(
        "Overlay 18",
        [
            Object("018_StartUp/GameModeStartUp.cpp"),
            Object("018_StartUp/StartUpInitializers.cpp"),
        ]
    ),
    GameLib(
        "Overlay 19",
        [
            Object("019_MainSelect/GameModeFileSelect.cpp"),
            Object("019_MainSelect/FileSelectManager.cpp"),
            Object("019_MainSelect/019_UnkSystem1_ov019_Derived1.cpp"),
            Object("019_MainSelect/FileSelectMain.cpp"),
            Object("019_MainSelect/019_UnkSubStruct9.cpp"),
            Object("019_MainSelect/FileSelectOptions.cpp"),
            Object("019_MainSelect/FileSelectMicTest.cpp"),
            Object("019_MainSelect/FileSelectSubScreen.cpp"),
            Object("019_MainSelect/FileSelectManager_160.cpp"),
            Object("019_MainSelect/FileSelectManager_164.cpp"),
            Object("019_MainSelect/019_UnkSystem1_ov019_Derived2.cpp"),
            Object("019_MainSelect/019_UnkSystem1_ov019_Derived3.cpp"),
            Object("019_MainSelect/019_SaveManager.cpp"),
        ]
    ),
    GameLib(
        "Overlay 21",
        [
            Object("021_BattleGame/Actor/ActorUnkBAEY.cpp"),
            Object("021_BattleGame/Actor/ActorUnkBAFO.cpp"),
            Object("021_BattleGame/Actor/ActorUnkBAPH.cpp"),
            Object("021_BattleGame/Actor/ActorUnkBFFN.cpp"),
            Object("021_BattleGame/Actor/ActorUnkBPAP.cpp"),
            Object("021_BattleGame/Actor/ActorUnkBTIR.cpp"),
            Object("021_BattleGame/Actor/ActorUnkCLZN.cpp"),
            Object("021_BattleGame/Actor/ActorUnkFOFA.cpp"),
            Object("021_BattleGame/Actor/ActorUnkLVOF.cpp"),
            Object("021_BattleGame/MapObject/MapObjectUnkBAPL.cpp"),
            Object("021_BattleGame/MapObject/MapObjectUnkBFFL.cpp"),
            Object("021_BattleGame/MapObject/MapObjectUnkBFSP.cpp"),
        ]
    ),
    GameLib(
        "Overlay 24",
        [
            Object("024_MainGame/Actor/ActorUnkOBPC.cpp"),
        ]
    ),
    GameLib(
        "Overlay 25",
        [
            Object("025_Title/GameModeTitleScreen.cpp"),
            Object("025_Title/TitleScreenManager.cpp"),
            Object("025_Title/TitleScreen.cpp"),
        ]
    ),
    GameLib(
        "Overlay 26",
        [
            Object("026_Train/Actor/ActorUnkBDEM.cpp"),
            Object("026_Train/Actor/ActorUnkCNBL.cpp"),
            Object("026_Train/Actor/ActorUnkDKCL.cpp"),
            Object("026_Train/Actor/ActorUnkDKTR.cpp"),
            Object("026_Train/Actor/ActorUnkKLTR.cpp"),
            Object("026_Train/Actor/ActorUnkRB1T.cpp"),
            Object("026_Train/Actor/ActorUnkRBNT.cpp"),
            Object("026_Train/Actor/ActorUnkRBRT.cpp"),
            Object("026_Train/Actor/ActorUnkSNST.cpp"),
            Object("026_Train/Actor/ActorUnkTBRD.cpp"),
            Object("026_Train/Actor/ActorUnkTCOW_WCAS.cpp"),
            Object("026_Train/Actor/ActorUnkTFAT.cpp"),
            Object("026_Train/Actor/ActorUnkTHER.cpp"),
            Object("026_Train/Actor/ActorUnkTRBC.cpp"),
            Object("026_Train/Actor/ActorUnkTRCB.cpp"),
            Object("026_Train/Actor/ActorUnkTRSG.cpp"),
            Object("026_Train/Actor/ActorUnkTRSP.cpp"),
            Object("026_Train/Actor/ActorUnkTRTT.cpp"),
            Object("026_Train/Actor/ActorUnkTRUP.cpp"),
            Object("026_Train/Actor/ActorUnkTTET.cpp"),
            Object("026_Train/Actor/ActorUnkTVLR.cpp"),
            Object("026_Train/MapObject/MapObjectUnkEBRD.cpp"),
            Object("026_Train/MapObject/MapObjectUnkEFRS.cpp"),
            Object("026_Train/MapObject/MapObjectUnkETNL.cpp"),
            Object("026_Train/MapObject/MapObjectUnkETSD.cpp"),
            Object("026_Train/MapObject/MapObjectUnkMTGT.cpp"),
            Object("026_Train/MapObject/MapObjectUnkMTWR.cpp"),
            Object("026_Train/MapObject/MapObjectUnkPLFA.cpp"),
            Object("026_Train/MapObject/MapObjectUnkPLFM.cpp"),
            Object("026_Train/MapObject/MapObjectUnkTBSF.cpp"),
            Object("026_Train/MapObject/MapObjectUnkTRET.cpp"),
            Object("026_Train/MapObject/MapObjectUnkTRPT.cpp"),
            Object("026_Train/MapObject/MapObjectUnkTRRC.cpp"),
            Object("026_Train/MapObject/MapObjectUnkTRTF.cpp"),
        ]
    ),
    GameLib(
        "Overlay 27",
        [
            Object("027_TrainForest/Actor/ActorUnkFKTR.cpp"),
            Object("027_TrainForest/Actor/ActorUnkTRER.cpp"),
            Object("027_TrainForest/MapObject/MapObjectUnkCSTL.cpp"),
            Object("027_TrainForest/MapObject/MapObjectUnkETDK.cpp"),
            Object("027_TrainForest/MapObject/MapObjectUnkMBRG.cpp"),
            Object("027_TrainForest/MapObject/MapObjectUnkMZFE.cpp"),
            Object("027_TrainForest/MapObject/MapObjectUnkTMFR.cpp"),
            Object("027_TrainForest/MapObject/MapObjectUnkTRBR.cpp"),
            Object("027_TrainForest/MapObject/MapObjectUnkTRDA.cpp"),
            Object("027_TrainForest/MapObject/MapObjectUnkTRFO.cpp"),
            Object("027_TrainForest/MapObject/MapObjectUnkTRFV.cpp"),
            Object("027_TrainForest/MapObject/MapObjectUnkTRRA.cpp"),
            Object("027_TrainForest/MapObject/MapObjectUnkTRSH.cpp"),
        ]
    ),
    GameLib(
        "Overlay 28",
        [
            Object("028_TrainSnow/Actor/ActorUnkSNMA.cpp"),
            Object("028_TrainSnow/Actor/ActorUnkSNMB.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkEFRF.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkETNS.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkETSW.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkRBSR.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkRLPT.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkTMSN.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkTRBM.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkTRFS.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkTRH0.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkTRMA.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkTRRS.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkTRSR.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkTRSS.cpp"),
            Object("028_TrainSnow/MapObject/MapObjectUnkTRTS.cpp"),
        ]
    ),
    GameLib(
        "Overlay 29",
        [
            Object("029_TrainWater/Actor/ActorUnkBLJF.cpp"),
            Object("029_TrainWater/Actor/ActorUnkDLPN.cpp"),
            Object("029_TrainWater/Actor/ActorUnkMDYG.cpp"),
            Object("029_TrainWater/Actor/ActorUnkPRSP.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkRBBL.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkSBDE.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkSTDE.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkTBSS.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkTCBT.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkTMDE.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkTMWT.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkTRBL.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkTRH1.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkTRPI.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkTRRD.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkTRRW.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkTRSA.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkTRWA.cpp"),
            Object("029_TrainWater/MapObject/MapObjectUnkWHSW.cpp"),
        ]
    ),
    GameLib(
        "Overlay 30",
        [
            Object("030_TrainFlame/Actor/ActorUnkFDKY.cpp"),
            Object("030_TrainFlame/Actor/ActorUnkGOVT.cpp"),
            Object("030_TrainFlame/Actor/ActorUnkHELA.cpp"),
            Object("030_TrainFlame/Actor/ActorUnkHLMG.cpp"),
            Object("030_TrainFlame/Actor/ActorUnkSGMG.cpp"),
            Object("030_TrainFlame/Actor/ActorUnkTTFT.cpp"),
            Object("030_TrainFlame/Actor/ActorUnkWKTR.cpp"),
            Object("030_TrainFlame/MapObject/MapObjectUnkETTV.cpp"),
            Object("030_TrainFlame/MapObject/MapObjectUnkTRFI.cpp"),
            Object("030_TrainFlame/MapObject/MapObjectUnkTRGM.cpp"),
            Object("030_TrainFlame/MapObject/MapObjectUnkTRH2.cpp"),
            Object("030_TrainFlame/MapObject/MapObjectUnkTRH3.cpp"),
            Object("030_TrainFlame/MapObject/MapObjectUnkTRST.cpp"),
        ]
    ),
    GameLib(
        "Overlay 31",
        [
            Object("031_Land/Actor/ActorRupee.cpp"),
            Object("031_Land/Actor/ActorUnkAROW.cpp"),
            Object("031_Land/Actor/ActorUnkATTG.cpp"),
            Object("031_Land/Actor/ActorUnkBLST.cpp"),
            Object("031_Land/Actor/ActorUnkBOMB.cpp"),
            Object("031_Land/Actor/ActorUnkCLLT.cpp"),
            Object("031_Land/Actor/ActorUnkEFSB.cpp"),
            Object("031_Land/Actor/ActorUnkFLEN.cpp"),
            Object("031_Land/Actor/ActorUnkHERT.cpp"),
            Object("031_Land/Actor/ActorUnkITBM.cpp"),
            Object("031_Land/Actor/ActorUnkITTD.cpp"),
            Object("031_Land/Actor/ActorUnkMLCK.cpp"),
            Object("031_Land/Actor/ActorUnkNFSP.cpp"),
            Object("031_Land/Actor/ActorUnkNITF.cpp"),
            Object("031_Land/Actor/ActorUnkNORE.cpp"),
            Object("031_Land/Actor/ActorUnkNTTZ.cpp"),
            Object("031_Land/Actor/ActorUnkNTUB.cpp"),
            Object("031_Land/Actor/ActorUnkRLST.cpp"),
            Object("031_Land/Actor/ActorUnkRMTG.cpp"),
            Object("031_Land/Actor/ActorUnkROCK.cpp"),
            Object("031_Land/Actor/ActorUnkSCCN.cpp"),
            Object("031_Land/Actor/ActorUnkSKDO.cpp"),
            Object("031_Land/Actor/ActorUnkSPAR_SPBM_SPDR_SPTR.cpp"),
            Object("031_Land/Actor/ActorUnkSWBM.cpp"),
            Object("031_Land/Actor/ActorUnkSWCH.cpp"),
            Object("031_Land/Actor/ActorUnkSWON.cpp"),
            Object("031_Land/Actor/ActorUnkTGTZ.cpp"),
            Object("031_Land/Actor/ActorUnkTLKT.cpp"),
            Object("031_Land/Actor/ActorUnkZLSL_ZSRS.cpp"),
            Object("031_Land/MapObject/MapObjectUnkBLCC.cpp"),
            Object("031_Land/MapObject/MapObjectUnkBMFL.cpp"),
            Object("031_Land/MapObject/MapObjectUnkBREX.cpp"),
            Object("031_Land/MapObject/MapObjectUnkCRWL.cpp"),
            Object("031_Land/MapObject/MapObjectUnkDRCK.cpp"),
            Object("031_Land/MapObject/MapObjectUnkDRDS.cpp"),
            Object("031_Land/MapObject/MapObjectUnkDRKY.cpp"),
            Object("031_Land/MapObject/MapObjectUnkDRSW.cpp"),
            Object("031_Land/MapObject/MapObjectUnkDRTC.cpp"),
            Object("031_Land/MapObject/MapObjectUnkEXIT.cpp"),
            Object("031_Land/MapObject/MapObjectUnkGATE.cpp"),
            Object("031_Land/MapObject/MapObjectUnkGRSS.cpp"),
            Object("031_Land/MapObject/MapObjectUnkGSST.cpp"),
            Object("031_Land/MapObject/MapObjectUnkITFL.cpp"),
            Object("031_Land/MapObject/MapObjectUnkRLSG.cpp"),
            Object("031_Land/MapObject/MapObjectUnkSAND.cpp"),
            Object("031_Land/MapObject/MapObjectUnkSKBN.cpp"),
            Object("031_Land/MapObject/MapObjectUnkSKDI.cpp"),
            Object("031_Land/MapObject/MapObjectUnkSPTB.cpp"),
            Object("031_Land/MapObject/MapObjectUnkSTIR.cpp"),
            Object("031_Land/MapObject/MapObjectUnkSTSP.cpp"),
            Object("031_Land/MapObject/MapObjectUnkSWFS.cpp"),
            Object("031_Land/MapObject/MapObjectUnkSWHT.cpp"),
            Object("031_Land/MapObject/MapObjectUnkTATZ.cpp"),
            Object("031_Land/MapObject/MapObjectUnkTRED.cpp"),
            Object("031_Land/MapObject/MapObjectUnkTREN.cpp"),
            Object("031_Land/MapObject/MapObjectUnkTRES.cpp"),
            Object("031_Land/MapObject/MapObjectUnkTREW.cpp"),
            Object("031_Land/MapObject/MapObjectUnkTRWS.cpp"),
            Object("031_Land/MapObject/MapObjectUnkTSUB.cpp"),
        ]
    ),
    GameLib(
        "Overlay 32",
        [
            Object("032_MapA1/Actor/ActorUnkKETH.cpp"),
            Object("032_MapA1/Actor/ActorUnkKURI.cpp"),
            Object("032_MapA1/Actor/ActorUnkMKUR.cpp"),
            Object("032_MapA1/Actor/ActorUnkNSSW.cpp"),
            Object("032_MapA1/MapObject/MapObjectUnkSWSW.cpp"),
        ]
    ),
    GameLib(
        "Overlay 33",
        [
            Object("033_MapA2/Actor/ActorUnkRCFO.cpp"),
            Object("033_MapA2/MapObject/MapObjectUnkDOPA.cpp"),
            Object("033_MapA2/MapObject/MapObjectUnkRCFL.cpp"),
        ]
    ),
    GameLib(
        "Overlay 34",
        [
            Object("034_MapA3/Actor/ActorUnkBSFC.cpp"),
            Object("034_MapA3/Actor/ActorUnkFCHL.cpp"),
            Object("034_MapA3/Actor/ActorUnkRMM1.cpp"),
            Object("034_MapA3/Actor/ActorUnkTRLY.cpp"),
            Object("034_MapA3/Actor/ActorUnkTRRL.cpp"),
            Object("034_MapA3/MapObject/MapObjectUnkGELG.cpp"),
            Object("034_MapA3/MapObject/MapObjectUnkTRSW.cpp"),
            Object("034_MapA3/MapObject/MapObjectUnkWPHL.cpp"),
        ]
    ),
    GameLib(
        "Overlay 35",
        [
            Object("035_MapA4/Actor/ActorUnkFIFI.cpp"),
            Object("035_MapA4/Actor/ActorUnkFIMA.cpp"),
            Object("035_MapA4/Actor/ActorUnkFIML.cpp"),
            Object("035_MapA4/Actor/ActorUnkFMAS_FMLS.cpp"),
        ]
    ),
    GameLib(
        "Overlay 36",
        [
            Object("036_MapA5/Actor/ActorUnkCAMY.cpp"),
            Object("036_MapA5/Actor/ActorUnkFOMY.cpp"),
            Object("036_MapA5/Actor/ActorUnkGORY.cpp"),
            Object("036_MapA5/Actor/ActorUnkRMST.cpp"),
            Object("036_MapA5/Actor/ActorUnkSHIT.cpp"),
            Object("036_MapA5/Actor/ActorUnkTEHT.cpp"),
            Object("036_MapA5/Actor/ActorUnkTERY.cpp"),
            Object("036_MapA5/Actor/ActorUnkWAWY.cpp"),
            Object("036_MapA5/Actor/ActorUnkYUKY.cpp"),
        ]
    ),
    GameLib(
        "Overlay 37",
        [
            Object("037_MapA6/Actor/ActorUnkSOLF.cpp"),
            Object("037_MapA6/Actor/ActorUnkSOLT.cpp"),
            Object("037_MapA6/Actor/ActorUnkTUTO.cpp"),
        ]
    ),
    GameLib(
        "Overlay 38",
        [
            Object("038_MapA7/Actor/ActorUnkBLBL.cpp"),
            Object("038_MapA7/Actor/ActorUnkBLBR.cpp"),
            Object("038_MapA7/Actor/ActorUnkGRCF.cpp"),
            Object("038_MapA7/Actor/ActorUnkPLSR.cpp"),
            Object("038_MapA7/Actor/ActorUnkWWFS.cpp"),
            Object("038_MapA7/MapObject/MapObjectUnkBLSR.cpp"),
            Object("038_MapA7/MapObject/MapObjectUnkFSSN.cpp"),
            Object("038_MapA7/MapObject/MapObjectUnkSWBR.cpp"),
        ]
    ),
    GameLib(
        "Overlay 39",
        [
            Object("039_MapA8/Actor/ActorUnkRMM4.cpp"),
            Object("039_MapA8/Actor/ActorUnkSIRO_SIRS_SRNM_SRSL.cpp"),
            Object("039_MapA8/Actor/ActorUnkZELD.cpp"),
            Object("039_MapA8/Actor/ActorUnkZLSS.cpp"),
            Object("039_MapA8/MapObject/MapObjectUnkGTAT.cpp"),
        ]
    ),
    GameLib(
        "Overlay 40",
        [
            Object("040_MapB1/Actor/ActorUnkCAWB_CRFP_FOMA_FOMB_FOMC_FOMR_FOMS_FOPD_GOCP_GORP_NCCA_NCCS_WAMA.cpp"),
            Object("040_MapB1/Actor/ActorUnkFTRN.cpp"),
            Object("040_MapB1/Actor/ActorUnkOLDS.cpp"),
            Object("040_MapB1/Actor/ActorUnkTMNP.cpp"),
            Object("040_MapB1/Actor/ActorUnkYKAP_YKCP_YKEP.cpp"),
            Object("040_MapB1/Actor/ActorUnkZSTG.cpp"),
            Object("040_MapB1/MapObject/MapObjectUnkFRAI.cpp"),
            Object("040_MapB1/MapObject/MapObjectUnkFSTA.cpp"),
        ]
    ),
    GameLib(
        "Overlay 41",
        [
            Object("041_MapB2/Actor/ActorUnkKEYB.cpp"),
            Object("041_MapB2/Actor/ActorUnkKEYT.cpp"),
            Object("041_MapB2/Actor/ActorUnkKGDB.cpp"),
            Object("041_MapB2/Actor/ActorUnkKGDN.cpp"),
            Object("041_MapB2/Actor/ActorUnkRPMT.cpp"),
            Object("041_MapB2/MapObject/MapObjectUnkDRBK.cpp"),
            Object("041_MapB2/MapObject/MapObjectUnkDRMC.cpp"),
            Object("041_MapB2/MapObject/MapObjectUnkDRTK.cpp"),
        ]
    ),
    GameLib(
        "Overlay 42",
        [
            Object("042_MapB3/Actor/ActorUnkMIFR.cpp"),
            Object("042_MapB3/Actor/ActorUnkOCTA.cpp"),
            Object("042_MapB3/Actor/ActorUnkOCTS.cpp"),
            Object("042_MapB3/Actor/ActorUnkPHEY.cpp"),
            Object("042_MapB3/Actor/ActorUnkPMTT.cpp"),
            Object("042_MapB3/MapObject/MapObjectUnkSWRA.cpp"),
        ]
    ),
    GameLib(
        "Overlay 43",
        [
            Object("043_MapB4/Actor/ActorUnkSHDL.cpp"),
            Object("043_MapB4/Actor/ActorUnkSTFB.cpp"),
            Object("043_MapB4/Actor/ActorUnkSTFH.cpp"),
            Object("043_MapB4/Actor/ActorUnkSTLF.cpp"),
        ]
    ),
    GameLib(
        "Overlay 44",
        [
            Object("044_MapB5/Actor/ActorUnkIBBA.cpp"),
            Object("044_MapB5/Actor/ActorUnkIBSP.cpp"),
            Object("044_MapB5/Actor/ActorUnkICBB.cpp"),
            Object("044_MapB5/Actor/ActorUnkL2MT.cpp"),
            Object("044_MapB5/Actor/ActorUnkL2V1.cpp"),
            Object("044_MapB5/Actor/ActorUnkL2V2.cpp"),
            Object("044_MapB5/Actor/ActorUnkRBL2.cpp"),
        ]
    ),
    GameLib(
        "Overlay 45",
        [
            Object("045_MapB6/Actor/ActorUnkBDBA.cpp"),
            Object("045_MapB6/Actor/ActorUnkBDGA.cpp"),
            Object("045_MapB6/Actor/ActorUnkBDLB.cpp"),
            Object("045_MapB6/Actor/ActorUnkRMBD.cpp"),
            Object("045_MapB6/Actor/ActorUnkWPCL.cpp"),
            Object("045_MapB6/MapObject/MapObjectUnkRDSD.cpp"),
        ]
    ),
    GameLib(
        "Overlay 46",
        [
            Object("046_MapB7/Actor/ActorUnkWBN2.cpp"),
            Object("046_MapB7/Actor/ActorUnkWBTN.cpp"),
            Object("046_MapB7/Actor/ActorUnkWTH2.cpp"),
            Object("046_MapB7/Actor/ActorUnkWTH3.cpp"),
            Object("046_MapB7/Actor/ActorUnkWTTH.cpp"),
        ]
    ),
    GameLib(
        "Overlay 47",
        [
            Object("047_MapC1/Actor/ActorUnkDLTG.cpp"),
            Object("047_MapC1/Actor/ActorUnkEVCH.cpp"),
            Object("047_MapC1/Actor/ActorUnkFLDK.cpp"),
            Object("047_MapC1/Actor/ActorUnkGHOS.cpp"),
        ]
    ),
    GameLib(
        "Overlay 48",
        [
            Object("048_MapC2/Actor/ActorUnkPBK2.cpp"),
            Object("048_MapC2/Actor/ActorUnkPSBK.cpp"),
            Object("048_MapC2/MapObject/MapObjectUnkDRTW.cpp"),
        ]
    ),
    GameLib(
        "Overlay 49",
        [
            Object("049_MapC3/Actor/ActorUnkBEEE.cpp"),
            Object("049_MapC3/Actor/ActorUnkBEEH.cpp"),
            Object("049_MapC3/Actor/ActorUnkCRCH.cpp"),
            Object("049_MapC3/Actor/ActorUnkCROW.cpp"),
            Object("049_MapC3/Actor/ActorUnkPOST.cpp"),
            Object("049_MapC3/Actor/ActorUnkPTMN.cpp"),
        ]
    ),
    GameLib(
        "Overlay 50",
        [
            Object("050_MapC4/Actor/ActorUnkFRTN.cpp"),
            Object("050_MapC4/Actor/ActorUnkKMOH.cpp"),
            Object("050_MapC4/Actor/ActorUnkKMOS.cpp"),
            Object("050_MapC4/MapObject/MapObjectUnkGTTN.cpp"),
        ]
    ),
    GameLib(
        "Overlay 51",
        [
            Object("051_MapC5/Actor/ActorUnkGYAM.cpp"),
        ]
    ),
    GameLib(
        "Overlay 52",
        [
            Object("052_MapC6/Actor/ActorUnkNAVI.cpp"),
            Object("052_MapC6/Actor/ActorUnkPTSW.cpp"),
            Object("052_MapC6/Actor/ActorUnkSTLW.cpp"),
            Object("052_MapC6/Actor/ActorUnkSTWH.cpp"),
        ]
    ),
    GameLib(
        "Overlay 53",
        [
            Object("053_MapD1/Actor/ActorUnkLIKE.cpp"),
            Object("053_MapD1/Actor/ActorUnkRAT0.cpp"),
        ]
    ),
    GameLib(
        "Overlay 54",
        [
            Object("054_MapD2/Actor/ActorUnkFBBF.cpp"),
            Object("054_MapD2/Actor/ActorUnkFBBH.cpp"),
            Object("054_MapD2/Actor/ActorUnkFIBB.cpp"),
        ]
    ),
    GameLib(
        "Overlay 55",
        [
            Object("055_MapD3/Actor/ActorUnkCHUC.cpp"),
            Object("055_MapD3/Actor/ActorUnkRCHU.cpp"),
            Object("055_MapD3/Actor/ActorUnkRCMS.cpp"),
        ]
    ),
    GameLib(
        "Overlay 56",
        [
            Object("056_MapD4/Actor/ActorUnkFSIR.cpp"),
            Object("056_MapD4/Actor/ActorUnkPASS.cpp"),
            Object("056_MapD4/MapObject/MapObjectUnkFSVC.cpp"),
        ]
    ),
    GameLib(
        "Overlay 57",
        [
            Object("057_MapD5/Actor/ActorUnkELVT.cpp"),
            Object("057_MapD5/Actor/ActorUnkFSSF.cpp"),
            Object("057_MapD5/Actor/ActorUnkFSST.cpp"),
            Object("057_MapD5/Actor/ActorUnkGTTG.cpp"),
            Object("057_MapD5/Actor/ActorUnkHYSW.cpp"),
            Object("057_MapD5/Actor/ActorUnkRMFK.cpp"),
            Object("057_MapD5/MapObject/MapObjectUnkTRLN.cpp"),
        ]
    ),
    GameLib(
        "Overlay 58",
        [
            Object("058_Field/Actor/ActorUnkBSTG.cpp"),
            Object("058_Field/Actor/ActorUnkCRFT.cpp"),
            Object("058_Field/Actor/ActorUnkFBRD.cpp"),
            Object("058_Field/Actor/ActorUnkFBSC.cpp"),
            Object("058_Field/Actor/ActorUnkKOAT.cpp"),
            Object("058_Field/Actor/ActorUnkKOCH.cpp"),
            Object("058_Field/Actor/ActorUnkKOKO.cpp"),
            Object("058_Field/Actor/ActorUnkNSTN.cpp"),
            Object("058_Field/Actor/ActorUnkSYDE_SYDL_SYDS_SYFI_SYFO_SYIL_SYIS_SYOL_SYOS_SYSL_SYSN_SYSS_SYWA_SYWL_SYWS.cpp"),
            Object("058_Field/Actor/ActorUnkTMNA.cpp"),
            Object("058_Field/Actor/ActorUnkTMNC.cpp"),
            Object("058_Field/Actor/ActorUnkWPBD.cpp"),
            Object("058_Field/Actor/ActorUnkWPCH.cpp"),
            Object("058_Field/MapObject/MapObjectUnkBBFL.cpp"),
            Object("058_Field/MapObject/MapObjectUnkDRHS.cpp"),
            Object("058_Field/MapObject/MapObjectUnkEXHS.cpp"),
            Object("058_Field/MapObject/MapObjectUnkGRSV.cpp"),
            Object("058_Field/MapObject/MapObjectUnkHOST.cpp"),
            Object("058_Field/MapObject/MapObjectUnkHOUS.cpp"),
            Object("058_Field/MapObject/MapObjectUnkKNBN.cpp"),
            Object("058_Field/MapObject/MapObjectUnkLEVS.cpp"),
            Object("058_Field/MapObject/MapObjectUnkMSCL.cpp"),
            Object("058_Field/MapObject/MapObjectUnkSTNE.cpp"),
            Object("058_Field/MapObject/MapObjectUnkSWCB.cpp"),
            Object("058_Field/MapObject/MapObjectUnkTREE.cpp"),
        ]
    ),
    GameLib(
        "Overlay 59",
        [
            Object("059_InTrain/Actor/ActorUnkCAGE.cpp"),
            Object("059_InTrain/Actor/ActorUnkPBSP.cpp"),
            Object("059_InTrain/Actor/ActorUnkPSBS.cpp"),
            Object("059_InTrain/Actor/ActorUnkPSEM.cpp"),
            Object("059_InTrain/Actor/ActorUnkPSNP.cpp"),
            Object("059_InTrain/Actor/ActorUnkRMTB.cpp"),
            Object("059_InTrain/Actor/ActorUnkRMTR.cpp"),
            Object("059_InTrain/Actor/ActorUnkRMVD.cpp"),
            Object("059_InTrain/Actor/ActorUnkRMVF.cpp"),
            Object("059_InTrain/Actor/ActorUnkRMVS.cpp"),
            Object("059_InTrain/Actor/ActorUnkRMVT.cpp"),
            Object("059_InTrain/Actor/ActorUnkRMVV.cpp"),
            Object("059_InTrain/Actor/ActorUnkRMVW.cpp"),
            Object("059_InTrain/MapObject/MapObjectUnkEXTR.cpp"),
        ]
    ),
    GameLib(
        "Overlay 60",
        [
            Object("060_Castle/Actor/ActorUnkCASL.cpp"),
            Object("060_Castle/Actor/ActorUnkCAST.cpp"),
            Object("060_Castle/Actor/ActorUnkCOMM.cpp"),
            Object("060_Castle/Actor/ActorUnkKIMA.cpp"),
            Object("060_Castle/Actor/ActorUnkOLDM.cpp"),
            Object("060_Castle/Actor/ActorUnkRMC0.cpp"),
            Object("060_Castle/Actor/ActorUnkRMC1.cpp"),
            Object("060_Castle/Actor/ActorUnkRMC2.cpp"),
            Object("060_Castle/Actor/ActorUnkRMC3.cpp"),
            Object("060_Castle/Actor/ActorUnkRMC4.cpp"),
            Object("060_Castle/Actor/ActorUnkRMC5.cpp"),
            Object("060_Castle/Actor/ActorUnkRMC6.cpp"),
            Object("060_Castle/Actor/ActorUnkSOGB_SOGC_SOLG.cpp"),
            Object("060_Castle/Actor/ActorUnkSOLB_SOLC_SOLD.cpp"),
            Object("060_Castle/Actor/ActorUnkZLSN.cpp"),
            Object("060_Castle/MapObject/MapObjectUnkDFNC.cpp"),
            Object("060_Castle/MapObject/MapObjectUnkEXCT.cpp"),
            Object("060_Castle/MapObject/MapObjectUnkPLCT.cpp"),
        ]
    ),
    GameLib(
        "Overlay 61",
        [
            Object("061_CastleTown/Actor/ActorUnkCAMA_CAMB_CAMS.cpp"),
            Object("061_CastleTown/Actor/ActorUnkCAWA.cpp"),
            Object("061_CastleTown/Actor/ActorUnkFLCT.cpp"),
            Object("061_CastleTown/Actor/ActorUnkJOLN.cpp"),
            Object("061_CastleTown/Actor/ActorUnkRMT0.cpp"),
            Object("061_CastleTown/Actor/ActorUnkRMT1.cpp"),
            Object("061_CastleTown/Actor/ActorUnkRMT2.cpp"),
            Object("061_CastleTown/Actor/ActorUnkRMT3.cpp"),
            Object("061_CastleTown/Actor/ActorUnkRMT4.cpp"),
            Object("061_CastleTown/MapObject/MapObjectUnkDRTY.cpp"),
            Object("061_CastleTown/MapObject/MapObjectUnkFSCT.cpp"),
        ]
    ),
    GameLib(
        "Overlay 62",
        [
            Object("062_Village/Actor/ActorUnkFBCH.cpp"),
            Object("062_Village/Actor/ActorUnkLBCK.cpp"),
            Object("062_Village/Actor/ActorUnkMOCT.cpp"),
            Object("062_Village/Actor/ActorUnkNCCB_NCMB.cpp"),
            Object("062_Village/Actor/ActorUnkNCWA.cpp"),
            Object("062_Village/Actor/ActorUnkNICO.cpp"),
            Object("062_Village/Actor/ActorUnkNSHD.cpp"),
            Object("062_Village/Actor/ActorUnkRMBC.cpp"),
            Object("062_Village/Actor/ActorUnkRML0.cpp"),
            Object("062_Village/Actor/ActorUnkRML1.cpp"),
            Object("062_Village/Actor/ActorUnkRML2.cpp"),
            Object("062_Village/Actor/ActorUnkRML3.cpp"),
            Object("062_Village/Actor/ActorUnkRMLF.cpp"),
            Object("062_Village/Actor/ActorUnkTSLB.cpp"),
            Object("062_Village/MapObject/MapObjectUnkFSFS.cpp"),
            Object("062_Village/MapObject/MapObjectUnkGBDR.cpp"),
            Object("062_Village/MapObject/MapObjectUnkHOL0.cpp"),
            Object("062_Village/MapObject/MapObjectUnkHOL1.cpp"),
            Object("062_Village/MapObject/MapObjectUnkHOL2.cpp"),
            Object("062_Village/MapObject/MapObjectUnkHOLB.cpp"),
            Object("062_Village/MapObject/MapObjectUnkHOSB.cpp"),
        ]
    ),
    GameLib(
        "Overlay 63",
        [
            Object("063_Shrine/Actor/ActorUnkCANS.cpp"),
            Object("063_Shrine/Actor/ActorUnkCASE.cpp"),
            Object("063_Shrine/Actor/ActorUnkRBLS.cpp"),
            Object("063_Shrine/Actor/ActorUnkRMSD.cpp"),
            Object("063_Shrine/Actor/ActorUnkRMSF.cpp"),
            Object("063_Shrine/Actor/ActorUnkRMSS.cpp"),
            Object("063_Shrine/Actor/ActorUnkRMSV.cpp"),
            Object("063_Shrine/Actor/ActorUnkRMSW.cpp"),
            Object("063_Shrine/MapObject/MapObjectUnkLTRW.cpp"),
            Object("063_Shrine/MapObject/MapObjectUnkMTJR.cpp"),
            Object("063_Shrine/MapObject/MapObjectUnkSTAT.cpp"),
            Object("063_Shrine/MapObject/MapObjectUnkSWCR.cpp"),
            Object("063_Shrine/MapObject/MapObjectUnkWLMS.cpp"),
        ]
    ),
    GameLib(
        "Overlay 64",
        [
            Object("064_FldForest/Actor/ActorUnkFOMD.cpp"),
            Object("064_FldForest/Actor/ActorUnkRMF0.cpp"),
            Object("064_FldForest/Actor/ActorUnkRMF1.cpp"),
            Object("064_FldForest/Actor/ActorUnkRMTZ.cpp"),
            Object("064_FldForest/MapObject/MapObjectUnkFSFR.cpp"),
            Object("064_FldForest/MapObject/MapObjectUnkHOF0.cpp"),
            Object("064_FldForest/MapObject/MapObjectUnkHOF1.cpp"),
            Object("064_FldForest/MapObject/MapObjectUnkLEVN.cpp"),
        ]
    ),
    GameLib(
        "Overlay 65",
        [
            Object("065_FldSnow/Actor/ActorUnkRMS0.cpp"),
            Object("065_FldSnow/Actor/ActorUnkRMS1.cpp"),
            Object("065_FldSnow/Actor/ActorUnkRMS2.cpp"),
            Object("065_FldSnow/Actor/ActorUnkRMS3.cpp"),
            Object("065_FldSnow/Actor/ActorUnkRMS4.cpp"),
            Object("065_FldSnow/Actor/ActorUnkRMS5.cpp"),
            Object("065_FldSnow/Actor/ActorUnkRMTE.cpp"),
            Object("065_FldSnow/Actor/ActorUnkYUKI.cpp"),
            Object("065_FldSnow/Actor/ActorUnkYWIS.cpp"),
            Object("065_FldSnow/MapObject/MapObjectUnkHOSO.cpp"),
            Object("065_FldSnow/MapObject/MapObjectUnkMTIC.cpp"),
            Object("065_FldSnow/MapObject/MapObjectUnkTSGM.cpp"),
        ]
    ),
    GameLib(
        "Overlay 66",
        [
            Object("066_FldWater/Actor/ActorUnkRMW0.cpp"),
            Object("066_FldWater/Actor/ActorUnkRMW1.cpp"),
            Object("066_FldWater/Actor/ActorUnkSWHI.cpp"),
            Object("066_FldWater/Actor/ActorUnkVCCH.cpp"),
            Object("066_FldWater/Actor/ActorUnkVCFT.cpp"),
            Object("066_FldWater/Actor/ActorUnkWAWA_WAWC.cpp"),
            Object("066_FldWater/Actor/ActorUnkWAWB_WAWS.cpp"),
            Object("066_FldWater/MapObject/MapObjectUnkFSWT.cpp"),
            Object("066_FldWater/MapObject/MapObjectUnkHOW0.cpp"),
            Object("066_FldWater/MapObject/MapObjectUnkHOW1.cpp"),
            Object("066_FldWater/MapObject/MapObjectUnkMTFS.cpp"),
        ]
    ),
    GameLib(
        "Overlay 67",
        [
            Object("067_FldFlame/Actor/ActorUnkDMFT.cpp"),
            Object("067_FldFlame/Actor/ActorUnkDMGN.cpp"),
            Object("067_FldFlame/Actor/ActorUnkGOCA_GOCB_GORK_GORM.cpp"),
            Object("067_FldFlame/Actor/ActorUnkGORS.cpp"),
            Object("067_FldFlame/Actor/ActorUnkRMV0.cpp"),
            Object("067_FldFlame/Actor/ActorUnkRMV1.cpp"),
            Object("067_FldFlame/MapObject/MapObjectUnkBRGL.cpp"),
            Object("067_FldFlame/MapObject/MapObjectUnkDRGN.cpp"),
            Object("067_FldFlame/MapObject/MapObjectUnkDRVT.cpp"),
            Object("067_FldFlame/MapObject/MapObjectUnkLVVT.cpp"),
            Object("067_FldFlame/MapObject/MapObjectUnkMTIR.cpp"),
            Object("067_FldFlame/MapObject/MapObjectUnkMTOR.cpp"),
        ]
    ),
    GameLib(
        "Overlay 68",
        [
            Object("068_FldAjito/Actor/ActorUnkAJAI.cpp"),
            Object("068_FldAjito/Actor/ActorUnkAJBS.cpp"),
            Object("068_FldAjito/Actor/ActorUnkAJCR.cpp"),
            Object("068_FldAjito/Actor/ActorUnkAJEM.cpp"),
            Object("068_FldAjito/Actor/ActorUnkAJET.cpp"),
            Object("068_FldAjito/Actor/ActorUnkAJMN.cpp"),
            Object("068_FldAjito/Actor/ActorUnkAJNP.cpp"),
            Object("068_FldAjito/Actor/ActorUnkAJSP.cpp"),
            Object("068_FldAjito/Actor/ActorUnkAJTM.cpp"),
            Object("068_FldAjito/Actor/ActorUnkMGAJ.cpp"),
            Object("068_FldAjito/Actor/ActorUnkRMA0.cpp"),
            Object("068_FldAjito/Actor/ActorUnkRMA1.cpp"),
            Object("068_FldAjito/Actor/ActorUnkRMA2.cpp"),
            Object("068_FldAjito/Actor/ActorUnkRMA3.cpp"),
            Object("068_FldAjito/Actor/ActorUnkRMAJ.cpp"),
            Object("068_FldAjito/Actor/ActorUnkTSCN.cpp"),
            Object("068_FldAjito/MapObject/MapObjectUnkDRVC.cpp"),
            Object("068_FldAjito/MapObject/MapObjectUnkRKAG.cpp"),
        ]
    ),
    GameLib(
        "Overlay 69",
        [
            Object("069_FldRabbit/Actor/ActorUnkBANI.cpp"),
            Object("069_FldRabbit/Actor/ActorUnkRB1F.cpp"),
            Object("069_FldRabbit/Actor/ActorUnkRBRP.cpp"),
            Object("069_FldRabbit/MapObject/MapObjectUnkGTRB.cpp"),
        ]
    ),
    GameLib(
        "Overlay 70",
        [
            Object("070_Dungeon/Actor/ActorUnkALEV.cpp"),
            Object("070_Dungeon/Actor/ActorUnkBMHN.cpp"),
            Object("070_Dungeon/Actor/ActorUnkBROW.cpp"),
            Object("070_Dungeon/Actor/ActorUnkENGE.cpp"),
            Object("070_Dungeon/Actor/ActorUnkKEYN.cpp"),
            Object("070_Dungeon/Actor/ActorUnkLIRA.cpp"),
            Object("070_Dungeon/Actor/ActorUnkRCSG.cpp"),
            Object("070_Dungeon/Actor/ActorUnkRYAW.cpp"),
            Object("070_Dungeon/Actor/ActorUnkSWDS.cpp"),
            Object("070_Dungeon/Actor/ActorUnkTRAP.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkARWL.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkBLCK.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkBLRB.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkDRST.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkFLSP.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkFRWL.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkFSPS.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkPTFL.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkSTSH.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkSWEY.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkSWRB.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkSWWN.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkTRLD.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkTRLS.cpp"),
            Object("070_Dungeon/MapObject/MapObjectUnkTRLW.cpp"),
        ]
    ),
    GameLib(
        "Overlay 71",
        [
            Object("071_Tower/Actor/ActorUnkKMSO.cpp"),
            Object("071_Tower/Actor/ActorUnkSZKU.cpp"),
            Object("071_Tower/MapObject/MapObjectUnkBLCE.cpp"),
            Object("071_Tower/MapObject/MapObjectUnkBLCT.cpp"),
            Object("071_Tower/MapObject/MapObjectUnkBRGS.cpp"),
            Object("071_Tower/MapObject/MapObjectUnkRNBO.cpp"),
            Object("071_Tower/MapObject/MapObjectUnkRPFL.cpp"),
            Object("071_Tower/MapObject/MapObjectUnkSTAL.cpp"),
        ]
    ),
    GameLib(
        "Overlay 72",
        [
            Object("072_TowerLobby/Actor/ActorUnkRMM0.cpp"),
            Object("072_TowerLobby/Actor/ActorUnkRMM3.cpp"),
        ]
    ),
    GameLib(
        "Overlay 73",
        [
            Object("073_BossDeago/Actor/ActorUnkBDEA.cpp"),
            Object("073_BossDeago/Actor/ActorUnkDGPC.cpp"),
        ]
    ),
    GameLib(
        "Overlay 74",
        [
            Object("074_BossLast1/Actor/ActorUnkBKST.cpp"),
            Object("074_BossLast1/Actor/ActorUnkBSKM.cpp"),
            Object("074_BossLast1/Actor/ActorUnkKIMB.cpp"),
            Object("074_BossLast1/Actor/ActorUnkMAGR.cpp"),
            Object("074_BossLast1/Actor/ActorUnkPPPM.cpp"),
            Object("074_BossLast1/Actor/ActorUnkRBL1.cpp"),
            Object("074_BossLast1/Actor/ActorUnkZLBB.cpp"),
            Object("074_BossLast1/Actor/ActorUnkZLBS.cpp"),
        ]
    ),
    GameLib(
        "Overlay 75",
        [
            Object("075_BossLast2/Actor/ActorUnkMABL.cpp"),
            Object("075_BossLast2/Actor/ActorUnkMRD2.cpp"),
            Object("075_BossLast2/Actor/ActorUnkMRDA_MRDO.cpp"),
            Object("075_BossLast2/Actor/ActorUnkMRDL.cpp"),
        ]
    ),
    GameLib(
        "Overlay 76",
        [
            Object("076_DgnLv1/Actor/ActorUnkBGOK.cpp"),
        ]
    ),
    GameLib(
        "Overlay 77",
        [
            Object("077_DgnForest/Actor/ActorUnkASBA.cpp"),
            Object("077_DgnForest/Actor/ActorUnkASYU.cpp"),
            Object("077_DgnForest/Actor/ActorUnkBBLE.cpp"),
            Object("077_DgnForest/Actor/ActorUnkDSFR.cpp"),
            Object("077_DgnForest/Actor/ActorUnkGOKI.cpp"),
            Object("077_DgnForest/Actor/ActorUnkOFSW.cpp"),
            Object("077_DgnForest/Actor/ActorUnkPMST.cpp"),
            Object("077_DgnForest/MapObject/MapObjectUnkGTRK.cpp"),
            Object("077_DgnForest/MapObject/MapObjectUnkPLFR.cpp"),
        ]
    ),
    GameLib(
        "Overlay 78",
        [
            Object("078_BossForest/Actor/ActorUnkFRBS.cpp"),
            Object("078_BossForest/Actor/ActorUnkRBFR.cpp"),
            Object("078_BossForest/MapObject/MapObjectUnkSTSF.cpp"),
        ]
    ),
    GameLib(
        "Overlay 79",
        [
            Object("079_DgnSnow/Actor/ActorUnkDSSN.cpp"),
            Object("079_DgnSnow/Actor/ActorUnkOCTW.cpp"),
            Object("079_DgnSnow/Actor/ActorUnkOCWS.cpp"),
            Object("079_DgnSnow/Actor/ActorUnkPSBL.cpp"),
            Object("079_DgnSnow/Actor/ActorUnkSSFC.cpp"),
            Object("079_DgnSnow/MapObject/MapObjectUnkBLHL.cpp"),
            Object("079_DgnSnow/MapObject/MapObjectUnkDRSN.cpp"),
            Object("079_DgnSnow/MapObject/MapObjectUnkFSSV.cpp"),
            Object("079_DgnSnow/MapObject/MapObjectUnkGTSN.cpp"),
            Object("079_DgnSnow/MapObject/MapObjectUnkICGR.cpp"),
        ]
    ),
    GameLib(
        "Overlay 80",
        [
            Object("080_BossSnow/Actor/ActorUnkICBA.cpp"),
            Object("080_BossSnow/Actor/ActorUnkICBS.cpp"),
            Object("080_BossSnow/Actor/ActorUnkRBSN.cpp"),
            Object("080_BossSnow/MapObject/MapObjectUnkSTSS.cpp"),
        ]
    ),
    GameLib(
        "Overlay 81",
        [
            Object("081_DgnLv3/Actor/ActorUnkPRPL.cpp"),
            Object("081_DgnLv3/Actor/ActorUnkPRPP.cpp"),
            Object("081_DgnLv3/MapObject/MapObjectUnkPRSH.cpp"),
        ]
    ),
    GameLib(
        "Overlay 82",
        [
            Object("082_DgnWater/Actor/ActorUnkDSWT.cpp"),
            Object("082_DgnWater/Actor/ActorUnkEWHI.cpp"),
            Object("082_DgnWater/Actor/ActorUnkWHMA.cpp"),
        ]
    ),
    GameLib(
        "Overlay 83",
        [
            Object("083_BossWater/Actor/ActorUnkEFR3.cpp"),
            Object("083_BossWater/Actor/ActorUnkEFW3.cpp"),
            Object("083_BossWater/Actor/ActorUnkNPWC.cpp"),
            Object("083_BossWater/Actor/ActorUnkRBWS.cpp"),
            Object("083_BossWater/Actor/ActorUnkRBWT.cpp"),
            Object("083_BossWater/Actor/ActorUnkWBEF.cpp"),
            Object("083_BossWater/Actor/ActorUnkWBPS.cpp"),
            Object("083_BossWater/Actor/ActorUnkWTBS.cpp"),
            Object("083_BossWater/MapObject/MapObjectUnkSHWB.cpp"),
        ]
    ),
    GameLib(
        "Overlay 84",
        [
            Object("084_BossFlame/Actor/ActorUnkDSVC.cpp"),
            Object("084_BossFlame/Actor/ActorUnkFIRB.cpp"),
            Object("084_BossFlame/Actor/ActorUnkITSC.cpp"),
            Object("084_BossFlame/Actor/ActorUnkIWTS.cpp"),
            Object("084_BossFlame/Actor/ActorUnkLAVA.cpp"),
            Object("084_BossFlame/Actor/ActorUnkLBRC.cpp"),
            Object("084_BossFlame/Actor/ActorUnkLVBD.cpp"),
            Object("084_BossFlame/Actor/ActorUnkRBVC.cpp"),
            Object("084_BossFlame/Actor/ActorUnkWIDR.cpp"),
            Object("084_BossFlame/Actor/ActorUnkWIDT.cpp"),
            Object("084_BossFlame/MapObject/MapObjectUnkLVCM.cpp"),
            Object("084_BossFlame/MapObject/MapObjectUnkMLVC.cpp"),
            Object("084_BossFlame/MapObject/MapObjectUnkPLV2.cpp"),
            Object("084_BossFlame/MapObject/MapObjectUnkSTSV.cpp"),
            Object("084_BossFlame/MapObject/MapObjectUnkTMLV.cpp"),
        ]
    ),
    GameLib(
        "Overlay 85",
        [
            Object("085_DgnLv5/Actor/ActorUnkGRCM.cpp"),
            Object("085_DgnLv5/Actor/ActorUnkSRST.cpp"),
            Object("085_DgnLv5/MapObject/MapObjectUnkCTPT.cpp"),
        ]
    ),
    GameLib(
        "Overlay 86",
        [
            Object("086_DgnDesert/Actor/ActorUnkDSDS.cpp"),
            Object("086_DgnDesert/Actor/ActorUnkEFSC.cpp"),
            Object("086_DgnDesert/Actor/ActorUnkHAMN.cpp"),
            Object("086_DgnDesert/Actor/ActorUnkOCGS.cpp"),
            Object("086_DgnDesert/Actor/ActorUnkOCTG.cpp"),
            Object("086_DgnDesert/Actor/ActorUnkQKSD.cpp"),
            Object("086_DgnDesert/Actor/ActorUnkQKTG.cpp"),
            Object("086_DgnDesert/Actor/ActorUnkRMDS.cpp"),
            Object("086_DgnDesert/Actor/ActorUnkRNTN.cpp"),
            Object("086_DgnDesert/MapObject/MapObjectUnkDRBR.cpp"),
            Object("086_DgnDesert/MapObject/MapObjectUnkDRRS.cpp"),
            Object("086_DgnDesert/MapObject/MapObjectUnkGRSG.cpp"),
            Object("086_DgnDesert/MapObject/MapObjectUnkSTDS.cpp"),
        ]
    ),
    GameLib(
        "Overlay 87",
        [
            Object("087_BossDesert/Actor/ActorUnkDSBB.cpp"),
            Object("087_BossDesert/Actor/ActorUnkDSBH.cpp"),
            Object("087_BossDesert/Actor/ActorUnkDSBN.cpp"),
            Object("087_BossDesert/Actor/ActorUnkRBD2.cpp"),
            Object("087_BossDesert/Actor/ActorUnkRBDS.cpp"),
            Object("087_BossDesert/MapObject/MapObjectUnkSTSD.cpp"),
        ]
    ),
    GameLib(
        "Overlay 88",
        [
            Object("088_Stb/Actor/ActorUnkDMCH.cpp"),
            Object("088_Stb/Actor/ActorUnkDMEQ.cpp"),
            Object("088_Stb/Actor/ActorUnkDMET.cpp"),
            Object("088_Stb/Actor/ActorUnkDMFR.cpp"),
            Object("088_Stb/Actor/ActorUnkDMGM.cpp"),
            Object("088_Stb/Actor/ActorUnkDMMM.cpp"),
            Object("088_Stb/Actor/ActorUnkDMMS.cpp"),
            Object("088_Stb/Actor/ActorUnkDMMT.cpp"),
            Object("088_Stb/Actor/ActorUnkDMPK.cpp"),
            Object("088_Stb/Actor/ActorUnkDMPS.cpp"),
            Object("088_Stb/Actor/ActorUnkDMSS.cpp"),
            Object("088_Stb/Actor/ActorUnkDMST.cpp"),
            Object("088_Stb/Actor/ActorUnkDMT2.cpp"),
            Object("088_Stb/Actor/ActorUnkDMTR.cpp"),
            Object("088_Stb/Actor/ActorUnkDMWS.cpp"),
            Object("088_Stb/Actor/ActorUnkDMWT.cpp"),
            Object("088_Stb/Actor/ActorUnkDMZS.cpp"),
            Object("088_Stb/Actor/ActorUnkRMDO.cpp"),
            Object("088_Stb/Actor/ActorUnkRMM2.cpp"),
        ]
    ),
    GameLib(
        "Overlay 90",
        [
            Object("090_TrainNormal/Actor/ActorUnkE3GL.cpp"),
            Object("090_TrainNormal/Actor/ActorUnkE3ST.cpp"),
            Object("090_TrainNormal/Actor/ActorUnkE3TT.cpp"),
            Object("090_TrainNormal/Actor/ActorUnkSPID.cpp"),
            Object("090_TrainNormal/Actor/ActorUnkSZRD.cpp"),
            Object("090_TrainNormal/Actor/ActorUnkWDBA.cpp"),
            Object("090_TrainNormal/Actor/ActorUnkWDRD.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkETNM.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkNPST.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkRBMR.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkRBRC.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkSTTR.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkTRCC.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkTRDT.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkTRGW.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkTRMR.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkTRSD.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkTWGS.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkTWPC.cpp"),
            Object("090_TrainNormal/MapObject/MapObjectUnkTWPG.cpp"),
        ]
    ),
    GameLib(
        "Overlay 91",
        [
            Object("091_TrainExtra/Actor/ActorUnkBMOC.cpp"),
            Object("091_TrainExtra/Actor/ActorUnkCTFS.cpp"),
            Object("091_TrainExtra/Actor/ActorUnkMZCT.cpp"),
            Object("091_TrainExtra/Actor/ActorUnkNLTR.cpp"),
            Object("091_TrainExtra/Actor/ActorUnkSEFS.cpp"),
            Object("091_TrainExtra/Actor/ActorUnkSMCT.cpp"),
            Object("091_TrainExtra/Actor/ActorUnkSTCT.cpp"),
            Object("091_TrainExtra/Actor/ActorUnkTPDO.cpp"),
            Object("091_TrainExtra/Actor/ActorUnkTRIC.cpp"),
            Object("091_TrainExtra/Actor/ActorUnkTSMT.cpp"),
            Object("091_TrainExtra/Actor/ActorUnkTTKB.cpp"),
            Object("091_TrainExtra/Actor/ActorUnkTTUT.cpp"),
            Object("091_TrainExtra/MapObject/MapObjectUnkBOGN.cpp"),
            Object("091_TrainExtra/MapObject/MapObjectUnkETUS.cpp"),
            Object("091_TrainExtra/MapObject/MapObjectUnkFRSH.cpp"),
            Object("091_TrainExtra/MapObject/MapObjectUnkMZFX.cpp"),
            Object("091_TrainExtra/MapObject/MapObjectUnkMZTR.cpp"),
            Object("091_TrainExtra/MapObject/MapObjectUnkTMSB.cpp"),
        ]
    ),
    GameLib(
        "Overlay 92",
        [
            Object("092_TrainDark/Actor/ActorUnkDKCB.cpp"),
            Object("092_TrainDark/Actor/ActorUnkMABC.cpp"),
            Object("092_TrainDark/Actor/ActorUnkMAFI.cpp"),
            Object("092_TrainDark/Actor/ActorUnkMARG.cpp"),
            Object("092_TrainDark/Actor/ActorUnkMATR.cpp"),
            Object("092_TrainDark/Actor/ActorUnkMBCC.cpp"),
            Object("092_TrainDark/Actor/ActorUnkMTFB.cpp"),
            Object("092_TrainDark/Actor/ActorUnkMTFL.cpp"),
            Object("092_TrainDark/Actor/ActorUnkMTWP.cpp"),
            Object("092_TrainDark/Actor/ActorUnkSZKL.cpp"),
            Object("092_TrainDark/Actor/ActorUnkTDKT.cpp"),
            Object("092_TrainDark/Actor/ActorUnkTEVT.cpp"),
            Object("092_TrainDark/MapObject/MapObjectUnkETDD.cpp"),
            Object("092_TrainDark/MapObject/MapObjectUnkETET.cpp"),
            Object("092_TrainDark/MapObject/MapObjectUnkETFD.cpp"),
            Object("092_TrainDark/MapObject/MapObjectUnkETMW.cpp"),
            Object("092_TrainDark/MapObject/MapObjectUnkETYG.cpp"),
            Object("092_TrainDark/MapObject/MapObjectUnkTBSD.cpp"),
            Object("092_TrainDark/MapObject/MapObjectUnkTDBP.cpp"),
            Object("092_TrainDark/MapObject/MapObjectUnkTDBR.cpp"),
            Object("092_TrainDark/MapObject/MapObjectUnkTDDR.cpp"),
            Object("092_TrainDark/MapObject/MapObjectUnkTRDR.cpp"),
        ]
    ),
    GameLib(
        "Overlay 93",
        [
            Object("093_PlayerSub/Actor/ActorUnkBLON.cpp"),
            Object("093_PlayerSub/Actor/ActorUnkPHTM.cpp"),
            Object("093_PlayerSub/Actor/ActorUnkPMTB.cpp"),
            Object("093_PlayerSub/Actor/ActorUnkPMTC.cpp"),
            Object("093_PlayerSub/Actor/ActorUnkPMTD.cpp"),
            Object("093_PlayerSub/Actor/ActorUnkSPTT.cpp"),
            Object("093_PlayerSub/Actor/ActorUnkTCAM.cpp"),
        ]
    ),
    GameLib(
        "Overlay 94",
        [
            Object("094_Land2/Actor/ActorUnkEFOC.cpp"),
            Object("094_Land2/Actor/ActorUnkEFR2.cpp"),
            Object("094_Land2/Actor/ActorUnkEFW2.cpp"),
            Object("094_Land2/Actor/ActorUnkFBRG.cpp"),
            Object("094_Land2/Actor/ActorUnkKOTA.cpp"),
            Object("094_Land2/Actor/ActorUnkLOCK.cpp"),
            Object("094_Land2/Actor/ActorUnkMNCB.cpp"),
            Object("094_Land2/Actor/ActorUnkPCTG.cpp"),
            Object("094_Land2/Actor/ActorUnkPSWB.cpp"),
            Object("094_Land2/Actor/ActorUnkSNOW.cpp"),
            Object("094_Land2/Actor/ActorUnkSPTG.cpp"),
            Object("094_Land2/Actor/ActorUnkSTTG.cpp"),
            Object("094_Land2/Actor/ActorUnkSYRN.cpp"),
            Object("094_Land2/Actor/ActorUnkVLCR.cpp"),
            Object("094_Land2/Actor/ActorUnkVRGN.cpp"),
            Object("094_Land2/MapObject/MapObjectUnkBRGW.cpp"),
            Object("094_Land2/MapObject/MapObjectUnkCLMN.cpp"),
            Object("094_Land2/MapObject/MapObjectUnkFNCE.cpp"),
            Object("094_Land2/MapObject/MapObjectUnkICEB.cpp"),
            Object("094_Land2/MapObject/MapObjectUnkMBBS.cpp"),
            Object("094_Land2/MapObject/MapObjectUnkMTWD.cpp"),
            Object("094_Land2/MapObject/MapObjectUnkTHAW.cpp"),
            Object("094_Land2/MapObject/MapObjectUnkWDST.cpp"),
            Object("094_Land2/MapObject/MapObjectUnkWLMP.cpp"),
        ]
    ),
    GameLib(
        "Overlay 96",
        [
            Object("096_PlayerZelda/Actor/ActorUnkBPBS.cpp"),
            Object("096_PlayerZelda/Actor/ActorUnkCLBT.cpp"),
            Object("096_PlayerZelda/Actor/ActorUnkLZET.cpp"),
            Object("096_PlayerZelda/Actor/ActorUnkTKYT.cpp"),
        ]
    ),
    GameLib(
        "Overlay 98",
        [
            Object("098_MapWater/Actor/ActorUnkEFRI.cpp"),
            Object("098_MapWater/Actor/ActorUnkEFRP.cpp"),
            Object("098_MapWater/Actor/ActorUnkEFWI.cpp"),
            Object("098_MapWater/Actor/ActorUnkEFWV.cpp"),
            Object("098_MapWater/Actor/ActorUnkSEAT.cpp"),
        ]
    ),
    GameLib(
        "Overlay 99",
        [
            Object("099_MapLava/Actor/ActorUnkE3LV.cpp"),
            Object("099_MapLava/Actor/ActorUnkEFRL.cpp"),
            Object("099_MapLava/Actor/ActorUnkEFWL.cpp"),
            Object("099_MapLava/Actor/ActorUnkVOLV.cpp"),
        ]
    ),
    GameLib(
        "Overlay 105",
        [
            Object("105_PlayerWhip/Actor/ActorUnkITWP.cpp"),
        ]
    ),
    GameLib(
        "Overlay 110",
        [
            Object("110_PlayerGet/PlayerGet.cpp"),
        ]
    ),
    GameLib(
        "Overlay 112",
        [
            Object("112_PlayerSceneChange/PlayerSceneChange.cpp"),
            Object("112_PlayerSceneChange/PlayerSceneChange2.cpp"),
        ]
    ),
    LibC(
        "libc",
        [
            Object("abort_exit_arm_eabi.c"),
            Object("ansi_files.c"),
            Object("float.c"),
            Object("locale.c"),
            Object("arith.c"),
            Object("buffer_io.c"),
            Object("file_io.c"),
            Object("math_api.c"),
            Object("mbstring.c"),
            Object("mem.c"),
            Object("mem_funcs.c"),
            Object("secure_error.c"),
            Object("signal.c"),
            Object("string.c"),
            Object("wmem.c"),
            Object("wprintf.c"),
            Object("wstring.c"),
            Object("ansi_fp.c"),
            Object("extras.c"),
            Object("math/e_log.c"),
            Object("math/e_log10.c"),
            Object("math/e_pow.c"),
            Object("math/s_ceil.c"),
            Object("math/s_copysign.c"),
            Object("math/s_fabs.c"),
            Object("math/s_frexp.c"),
            Object("math/s_ldexp.c"),
            Object("math/w_log.c"),
            Object("math/w_log10f.c"),
            Object("math/w_pow.c"),
        ]
    ),
    LibCPP(
        "libcpp",
        [
            Object("__register_global_object.c")
        ]
    ),
]


def main():
    for version in config.game_versions:
        config.delinks_files[version] = config.get_config_files(version, "delinks.txt")
        config.relocs_files[version] = config.get_config_files(version, "relocs.txt")
        config.symbols_files[version] = config.get_config_files(version, "symbols.txt")

        if config.check_can_run_dsd():
            out = subprocess.run([
                str(config.dsd_path),
                "--force-color",
                "json",
                "delinks",
                "--config-path", config.config_path / version / "arm9" / "config.yaml"
            ], capture_output=True, text=True)
            assert out.returncode == 0, f"Error running dsd:\n{out.stderr.strip()}"

            config.delinks_jsons[version] = json.loads(out.stdout)

    process_project(config, args)


if __name__ == "__main__":
    main()
