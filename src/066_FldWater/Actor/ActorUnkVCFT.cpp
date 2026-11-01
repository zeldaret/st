#include "Actor/ActorUnkVCFT.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkRMW0.hpp"
#include "CommonFuncs.hpp"
#include "Game/GameModeManager.hpp"
#include "LinkList.hpp"
#include "MainGame/AdventureMode.hpp"
#include "Render/ModelRender.hpp"
#include "Save/SaveManager.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_02049be0.hpp"
#include "Unknown/UnkStruct_027e0954.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_ov000_020b504c.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov089_02171540.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

static char data_ov066_0215eefc[4] = "peR";
static char data_ov066_0215eef4[4] = "leo";
static char data_ov066_0215ef00[4] = "pER";
static char data_ov066_0215ef04[4] = "boy";
static char data_ov066_0215eef8[4] = "#Om";

static char data_ov066_0215ef10[8] = "girl";
static char data_ov066_0215ef28[8] = "#veR";
static char data_ov066_0215ef18[8] = "#blU";
static char data_ov066_0215ef20[8] = "#baI";
static char data_ov066_0215ef30[8] = "ウオ";
static char data_ov066_0215ef08[8] = "シタ";
static char data_ov066_0215ef38[8] = "ウエ";
static char data_ov066_0215ef40[8] = "#bl@";
static char data_ov066_0215ef48[8] = "エー";
static char data_ov066_0215ef50[8] = "#jUN";
static char data_ov066_0215ef58[8] = "#fam";
static char data_ov066_0215ef60[8] = "#gRi";
static char data_ov066_0215ef68[8] = "ビー";
static char data_ov066_0215ef70[8] = "blau";
static char data_ov066_0215ef78[8] = "アカ";
static char data_ov066_0215ef80[8] = "toro";
static char data_ov066_0215ef88[8] = "ミギ";
static char data_ov066_0215ef90[8] = "#bQI";
static char data_ov066_0215ef98[8] = "#blu";
static char data_ov066_0215efa0[8] = "blue";
static char data_ov066_0215efa8[8] = "シシ";
static char data_ov066_0215efb0[8] = "#lio";
static char data_ov066_0215efb8[8] = "カニ";
static char data_ov066_0215efc0[8] = "グー";
static char data_ov066_0215efc8[8] = "イテ";
static char data_ov066_0215efd0[8] = "#pSi";
static char data_ov066_0215efd8[8] = "#g@l";
static char data_ov066_0215efe0[8] = "#fij";
static char data_ov066_0215efe8[8] = "#ner";
static char data_ov066_0215eff0[8] = "#bl9";
static char data_ov066_0215eff8[8] = "neri";
static char data_ov066_0215f000[8] = "#bO:";
static char data_ov066_0215f008[8] = "クロ";
static char data_ov066_0215f010[8] = "#leo";
static char data_ov066_0215f018[8] = "#bOI";
static char data_ov066_0215f020[8] = "#jON";
static char data_ov066_0215f028[8] = "オー";
static char data_ov066_0215f030[8] = "レオ";
static char data_ov066_0215f038[8] = "#boi";
static char data_ov066_0215f040[8] = "#gVl";
static char data_ov066_0215f048[8] = "#mue";
static char data_ov066_0215f050[8] = "#tOr";
static char data_ov066_0215f058[8] = "ハイ";
static char data_ov066_0215f060[8] = "#vER";
static char data_ov066_0215f068[8] = "grey";
static char data_ov066_0215f070[8] = "ヤギ";
static char data_ov066_0215f078[8] = "grau";
static char data_ov066_0215f080[8] = "シロ";
static char data_ov066_0215f088[8] = "アオ";
static char data_ov066_0215f090[8] = "green";
static char data_ov066_0215f098[8] = "#g3`l";
static char data_ov066_0215f0a0[8] = "#b@lU";
static char data_ov066_0215f0a8[8] = "#leon";
static char data_ov066_0215f0b0[8] = "#kRaO";
static char data_ov066_0215f0b8[8] = "virgo";
static char data_ov066_0215f0c0[8] = "#vag@";
static char data_ov066_0215f0c8[8] = "#blu:";
static char data_ov066_0215f0d0[8] = "#g3`o";
static char data_ov066_0215f0d8[8] = "#fIS@";
static char data_ov066_0215f0e0[8] = "#grin";
static char data_ov066_0215f0e8[8] = "#toRo";
static char data_ov066_0215f0f0[8] = "krebs";
static char data_ov066_0215f0f8[8] = "#ombe";
static char data_ov066_0215f100[8] = "#bede";
static char data_ov066_0215f108[8] = "#l2:v";
static char data_ov066_0215f110[8] = "#bliu";
static char data_ov066_0215f118[8] = "#ZEmo";
static char data_ov066_0215f120[8] = "#li:Q";
static char data_ov066_0215f128[8] = "#gRaO";
static char data_ov066_0215f130[8] = "#lio~";
static char data_ov066_0215f138[8] = "chico";
static char data_ov066_0215f140[8] = "#gQrl";
static char data_ov066_0215f148[8] = "aries";
static char data_ov066_0215f150[8] = "#muer";
static char data_ov066_0215f158[8] = "#Tika";
static char data_ov066_0215f160[8] = "#greI";
static char data_ov066_0215f168[8] = "#grI@";
static char data_ov066_0215f170[8] = "#tORO";
static char data_ov066_0215f178[8] = "black";
static char data_ov066_0215f180[8] = "#nEri";
static char data_ov066_0215f188[8] = "#verd";
static char data_ov066_0215f190[8] = "#bRe~";
static char data_ov066_0215f198[8] = "#g3:l";
static char data_ov066_0215f1a0[8] = "#br@n";
static char data_ov066_0215f1a8[8] = "verdi";
static char data_ov066_0215f1b0[8] = "#Tiko";
static char data_ov066_0215f1b8[8] = "#gri:";
static char data_ov066_0215f1c0[8] = "#arie";
static char data_ov066_0215f1c8[8] = "#bl3:";
static char data_ov066_0215f1d0[8] = "chica";
static char data_ov066_0215f1d8[8] = "#onbe";
static char data_ov066_0215f1e0[8] = "#leeo";
static char data_ov066_0215f1e8[8] = "#peSi";
static char data_ov066_0215f1f0[8] = "#blaU";
static char data_ov066_0215f1f8[8] = "#ljo~";
static char data_ov066_0215f200[8] = "#taro";
static char data_ov066_0215f208[8] = "#fISE";
static char data_ov066_0215f210[8] = "libra";
static char data_ov066_0215f218[8] = "#Zemo";
static char data_ov066_0215f220[8] = "#tORo";
static char data_ov066_0215f228[8] = "#piTi";
static char data_ov066_0215f230[8] = "#asul";
static char data_ov066_0215f238[8] = "#bl{k";
static char data_ov066_0215f240[8] = "#{riz";
static char data_ov066_0215f248[8] = "#eriz";
static char data_ov066_0215f250[8] = "#nwaR";
static char data_ov066_0215f258[8] = "waage";
static char data_ov066_0215f260[8] = "#muxe";
static char data_ov066_0215f268[8] = "#fYSE";
static char data_ov066_0215f270[8] = "#nego";
static char data_ov066_0215f278[8] = "brown";
static char data_ov066_0215f280[8] = "#b@lu";
static char data_ov066_0215f288[8] = "#g@rl";
static char data_ov066_0215f290[8] = "#graI";
static char data_ov066_0215f298[8] = "leone";
static char data_ov066_0215f2a0[8] = "#adie";
static char data_ov066_0215f2a8[8] = "braun";
static char data_ov066_0215f2b0[8] = "#kRaU";
static char data_ov066_0215f2b8[8] = "#plaU";
static char data_ov066_0215f2c0[8] = "stier";
static char data_ov066_0215f2c8[8] = "gruen";
static char data_ov066_0215f2d0[8] = "#vIda";
static char data_ov066_0215f2d8[8] = "#Eriz";
static char data_ov066_0215f2e0[8] = "#gRaU";
static char data_ov066_0215f2e8[8] = "#tOro";
static char data_ov066_0215f2f0[8] = "junge";
static char data_ov066_0215f2f8[8] = "#vId@";
static char data_ov066_0215f300[8] = "#gUrl";
static char data_ov066_0215f308[8] = "#taudo";
static char data_ov066_0215f310[8] = "#piTis";
static char data_ov066_0215f318[8] = "widder";
static char data_ov066_0215f320[8] = "#vIdaR";
static char data_ov066_0215f328[8] = "#Sti:a";
static char data_ov066_0215f330[8] = "#Sti:@";
static char data_ov066_0215f338[8] = "#kankr";
static char data_ov066_0215f340[8] = "トマレ";
static char data_ov066_0215f348[8] = "#kenkr";
static char data_ov066_0215f350[8] = "#grI@n";
static char data_ov066_0215f358[8] = "セーブ";
static char data_ov066_0215f360[8] = "#leOne";
static char data_ov066_0215f368[8] = "#gREbs";
static char data_ov066_0215f370[8] = "オイデ";
static char data_ov066_0215f378[8] = "#vERso";
static char data_ov066_0215f380[8] = "ヒイテ";
static char data_ov066_0215f388[8] = "#kanse";
static char data_ov066_0215f390[8] = "キック";
static char data_ov066_0215f398[8] = "#ombre";
static char data_ov066_0215f3a0[8] = "キイロ";
static char data_ov066_0215f3a8[8] = "ミドリ";
static char data_ov066_0215f3b0[8] = "#SYts@";
static char data_ov066_0215f3b8[8] = "ヒラク";
static char data_ov066_0215f3c0[8] = "#barde";
static char data_ov066_0215f3c8[8] = "フタゴ";
static char data_ov066_0215f3d0[8] = "#berde";
static char data_ov066_0215f3d8[8] = "シシザ";
static char data_ov066_0215f3e0[8] = "#gRy:n";
static char data_ov066_0215f3e8[8] = "#v@rgQ";
static char data_ov066_0215f3f0[8] = "#bidgo";
static char data_ov066_0215f3f8[8] = "サ\x83\x5Cリ";
static char data_ov066_0215f400[8] = "オトメ";
static char data_ov066_0215f408[8] = "ススメ";
static char data_ov066_0215f410[8] = "#va:g@";
static char data_ov066_0215f418[8] = "オンナ";
static char data_ov066_0215f420[8] = "#ynfam";
static char data_ov066_0215f428[8] = "#libra";
static char data_ov066_0215f430[8] = "ヒダリ";
static char data_ov066_0215f438[8] = "#lebra";
static char data_ov066_0215f440[8] = "#muxer";
static char data_ov066_0215f448[8] = "#gri:n";
static char data_ov066_0215f450[8] = "#tSiko";
static char data_ov066_0215f458[8] = "#braUn";
static char data_ov066_0215f460[8] = "#maRo~";
static char data_ov066_0215f468[8] = "#tSika";
static char data_ov066_0215f470[8] = "ウオザ";
static char data_ov066_0215f478[8] = "azules";
static char data_ov066_0215f480[8] = "#bElje";
static char data_ov066_0215f488[8] = "#aTule";
static char data_ov066_0215f490[8] = "#li:@U";
static char data_ov066_0215f498[8] = "#li:O:";
static char data_ov066_0215f4a0[8] = "オリテ";
static char data_ov066_0215f4a8[8] = "#asule";
static char data_ov066_0215f4b0[8] = "オトコ";
static char data_ov066_0215f4b8[8] = "#vjERZ";
static char data_ov066_0215f4c0[8] = "#viERZ";
static char data_ov066_0215f4c8[8] = "#vjeRZ";
static char data_ov066_0215f4d0[8] = "#vieRZ";
static char data_ov066_0215f4d8[8] = "#e~nOm";
static char data_ov066_0215f4e0[8] = "#muxel";
static char data_ov066_0215f4e8[8] = "#birgo";
static char data_ov066_0215f4f0[8] = "#peSSi";
static char data_ov066_0215f4f8[8] = "パンチ";
static char data_ov066_0215f500[8] = "#ynfij";
static char data_ov066_0215f508[8] = "ヤギザ";
static char data_ov066_0215f510[8] = "イテザ";
static char data_ov066_0215f518[8] = "#onbre";
static char data_ov066_0215f520[8] = "#bilgo";
static char data_ov066_0215f528[8] = "pisces";
static char data_ov066_0215f530[8] = "fische";
static char data_ov066_0215f538[8] = "cancer";
static char data_ov066_0215f540[8] = "トジル";
static char data_ov066_0215f548[8] = "#vERsO";
static char data_ov066_0215f550[8] = "#veRso";
static char data_ov066_0215f558[8] = "#g3`@l";
static char data_ov066_0215f560[8] = "#veRsO";
static char data_ov066_0215f568[8] = "#belje";
static char data_ov066_0215f570[8] = "#nagro";
static char data_ov066_0215f578[8] = "#masko";
static char data_ov066_0215f580[8] = "#vIrgo";
static char data_ov066_0215f588[8] = "#tor@s";
static char data_ov066_0215f590[8] = "#negro";
static char data_ov066_0215f598[8] = "taurus";
static char data_ov066_0215f5a0[8] = "#Iri:z";
static char data_ov066_0215f5a8[8] = "gemini";
static char data_ov066_0215f5b0[8] = "カニザ";
static char data_ov066_0215f5b8[8] = "#v3`go";
static char data_ov066_0215f5c0[8] = "#libr@";
static char data_ov066_0215f5c8[8] = "#femna";
static char data_ov066_0215f5d0[8] = "#eri:z";
static char data_ov066_0215f5d8[8] = "#tAr@s";
static char data_ov066_0215f5e0[8] = "#va:x@";
static char data_ov066_0215f5e8[8] = "#kanTe";
static char data_ov066_0215f5f0[8] = "#aries";
static char data_ov066_0215f5f8[8] = "#sIts@";
static char data_ov066_0215f600[8] = "オシテ";
static char data_ov066_0215f608[8] = "ウシザ";
static char data_ov066_0215f610[8] = "#l2:v@";
static char data_ov066_0215f618[8] = "#vErdi";
static char data_ov066_0215f620[8] = "#adies";
static char data_ov066_0215f628[8] = "バルゴ";
static char data_ov066_0215f630[8] = "#jUNg@";
static char data_ov066_0215f638[8] = "#jONg@";
static char data_ov066_0215f640[8] = "#tauro";
static char data_ov066_0215f648[8] = "オウシ";
static char data_ov066_0215f650[8] = "#taoro";
static char data_ov066_0215f658[8] = "#kREbs";
static char data_ov066_0215f660[8] = "イイエ";
static char data_ov066_0215f668[8] = "ariete";
static char data_ov066_0215f670[8] = "#kRy:n";
static char data_ov066_0215f678[8] = "#pisTi";
static char data_ov066_0215f680[8] = "#bRaUn";
static char data_ov066_0215f688[8] = "#pRaUn";
static char data_ov066_0215f690[8] = "#ariEt";
static char data_ov066_0215f698[8] = "#taugo";
static char data_ov066_0215f6a0[8] = "#xemini";
static char data_ov066_0215f6a8[8] = "#Sti:@R";
static char data_ov066_0215f6b0[8] = "#kankro";
static char data_ov066_0215f6b8[8] = "#kanTer";
static char data_ov066_0215f6c0[8] = "#kanser";
static char data_ov066_0215f6c8[8] = "#gRe:bs";
static char data_ov066_0215f6d0[8] = "#va:ge:";
static char data_ov066_0215f6d8[8] = "#birgos";
static char data_ov066_0215f6e0[8] = "#bilgos";
static char data_ov066_0215f6e8[8] = "#Sy:ts@";
static char data_ov066_0215f6f0[8] = "#bl@gRi";
static char data_ov066_0215f6f8[8] = "#bl9gRi";
static char data_ov066_0215f700[8] = "#bl@vER";
static char data_ov066_0215f708[8] = "#libras";
static char data_ov066_0215f710[8] = "#bl9vER";
static char data_ov066_0215f718[8] = "#nwazEt";
static char data_ov066_0215f720[8] = "#eIri:z";
static char data_ov066_0215f728[8] = "#tO:r@s";
static char data_ov066_0215f730[8] = "#tO:rUs";
static char data_ov066_0215f738[8] = "#tA:rVs";
static char data_ov066_0215f740[8] = "#tA:r@s";
static char data_ov066_0215f748[8] = "#aTules";
static char data_ov066_0215f750[8] = "#k{ns@r";
static char data_ov066_0215f758[8] = "#k{nser";
static char data_ov066_0215f760[8] = "#asules";
static char data_ov066_0215f768[]  = "#v3:rgQ";
static char data_ov066_0215f770[8] = "#ka~sER";
static char data_ov066_0215f778[8] = "#v@rg@U";
static char data_ov066_0215f780[8] = "#li:br@";
static char data_ov066_0215f788[8] = "#berdes";
static char data_ov066_0215f790[8] = "#li:br{";
static char data_ov066_0215f798[8] = "#li:bre";
static char data_ov066_0215f7a0[8] = "scorpio";
static char data_ov066_0215f7a8[8] = "#bardes";
static char data_ov066_0215f7b0[8] = "#bala~s";
static char data_ov066_0215f7b8[8] = "#paIsIz";
static char data_ov066_0215f7c0[8] = "#magone";
static char data_ov066_0215f7c8[8] = "#pwaso~";
static char data_ov066_0215f7d0[8] = "#puaso~";
static char data_ov066_0215f7d8[8] = "#negros";
static char data_ov066_0215f7e0[8] = "#nagros";
static char data_ov066_0215f7e8[8] = "#maskio";
static char data_ov066_0215f7f0[8] = "#kRe:bs";
static char data_ov066_0215f7f8[8] = "#tO:rVs";
static char data_ov066_0215f800[8] = "#k{ns3`";
static char data_ov066_0215f808[8] = "femmina";
static char data_ov066_0215f810[8] = "#gaRso~";
static char data_ov066_0215f818[8] = "#laIbr@";
static char data_ov066_0215f820[8] = "#paIsiz";
static char data_ov066_0215f828[8] = "#pIskes";
static char data_ov066_0215f830[8] = "marroni";
static char data_ov066_0215f838[8] = "#marron";
static char data_ov066_0215f840[8] = "#pisTis";
static char data_ov066_0215f848[8] = "#ariEte";

static char data_ov066_0215f850[12] = "#xeminis";
static char data_ov066_0215f85c[12] = "#dZemEll";
static char data_ov066_0215f868[12] = "ダンセイ";
static char data_ov066_0215f874[12] = "ジョセイ";
static char data_ov066_0215f880[12] = "シャガメ";
static char data_ov066_0215f88c[12] = "#jUNfRaU";
static char data_ov066_0215f898[12] = "ユックリ";
static char data_ov066_0215f8a4[12] = "イ\x83\x5Cイデ";
static char data_ov066_0215f8b0[12] = "#jONfRaU";
static char data_ov066_0215f8bc[12] = "jungfrau";
static char data_ov066_0215f8c8[12] = "ノボッテ";
static char data_ov066_0215f8d4[12] = "ジャンプ";
static char data_ov066_0215f8e0[12] = "#verdzne";
static char data_ov066_0215f8ec[12] = "ダッシュ";
static char data_ov066_0215f8f8[12] = "シュート";
static char data_ov066_0215f904[12] = "#blantSa";
static char data_ov066_0215f910[12] = "スタート";
static char data_ov066_0215f91c[12] = "skorpion";
static char data_ov066_0215f928[12] = "エーガタ";
static char data_ov066_0215f934[12] = "ビーガタ";
static char data_ov066_0215f940[12] = "オーガタ";
static char data_ov066_0215f94c[12] = "エービー";
static char data_ov066_0215f958[12] = "ヒツジザ";
static char data_ov066_0215f964[12] = "オウシザ";
static char data_ov066_0215f970[12] = "#vas@man";
static char data_ov066_0215f97c[12] = "フタゴザ";
static char data_ov066_0215f988[12] = "タウロス";
static char data_ov066_0215f994[12] = "ジェミニ";
static char data_ov066_0215f9a0[12] = "#vasaman";
static char data_ov066_0215f9ac[12] = "オトメザ";
static char data_ov066_0215f9b8[12] = "テンビン";
static char data_ov066_0215f9c4[12] = "ライブラ";
static char data_ov066_0215f9d0[12] = "サ\x83\x5Cリザ";
static char data_ov066_0215f9dc[12] = "#akuario";
static char data_ov066_0215f9e8[12] = "#akkuaro";
static char data_ov066_0215f9f4[12] = "ミズガメ";
static char data_ov066_0215fa00[12] = "ピスケス";
static char data_ov066_0215fa0c[12] = "#femine~";
static char data_ov066_0215fa18[12] = "#ekorpio";
static char data_ov066_0215fa24[12] = "#k{ns3:r";
static char data_ov066_0215fa30[12] = "アリエス";
static char data_ov066_0215fa3c[12] = "#v3:rg@U";
static char data_ov066_0215fa48[12] = "#v3:rgO:";
static char data_ov066_0215fa54[12] = "aquarius";
static char data_ov066_0215fa60[12] = "#saZitER";
static char data_ov066_0215fa6c[12] = "ムラサキ";
static char data_ov066_0215fa78[12] = "#saZiteR";
static char data_ov066_0215fa84[12] = "オヒツジ";
static char data_ov066_0215fa90[12] = "#paIsi:z";
static char data_ov066_0215fa9c[12] = "#marrone";
static char data_ov066_0215faa8[12] = "#magones";
static char data_ov066_0215fab4[12] = "#dZEm@ni";
static char data_ov066_0215fac0[12] = "#dZEmIni";
static char data_ov066_0215facc[12] = "#masskio";
static char data_ov066_0215fad8[12] = "モドッテ";
static char data_ov066_0215fae4[12] = "#k{nts3`";
static char data_ov066_0215faf0[12] = "#fEmmina";
static char data_ov066_0215fafc[12] = "#skArpio";
static char data_ov066_0215fb08[12] = "#addzuri";
static char data_ov066_0215fb14[12] = "ストップ";
static char data_ov066_0215fb20[12] = "#akuadio";
static char data_ov066_0215fb2c[12] = "#marrOni";
static char data_ov066_0215fb38[12] = "#me:dx@n";
static char data_ov066_0215fb44[12] = "#me:dS@n";
static char data_ov066_0215fb50[12] = "#me:tx@n";
static char data_ov066_0215fb5c[12] = "#me:tS@n";
static char data_ov066_0215fb68[12] = "maedchen";
static char data_ov066_0215fb74[12] = "#dZemElli";
static char data_ov066_0215fb80[12] = "#dZemelli";
static char data_ov066_0215fb8c[12] = "#tsvIlIN@";
static char data_ov066_0215fb98[12] = "zwillinge";
static char data_ov066_0215fba4[12] = "#verdzine";
static char data_ov066_0215fbb0[12] = "#vErdzine";
static char data_ov066_0215fbbc[12] = "#bilantSa";
static char data_ov066_0215fbc8[12] = "#skOpIo:n";
static char data_ov066_0215fbd4[12] = "#skOpjo:n";
static char data_ov066_0215fbe0[12] = "#skorpone";
static char data_ov066_0215fbec[12] = "#StaInbOk";
static char data_ov066_0215fbf8[12] = "#staInbOk";
static char data_ov066_0215fc04[12] = "steinbock";
static char data_ov066_0215fc10[12] = "#vas@Rman";
static char data_ov066_0215fc1c[12] = "#akkuario";
static char data_ov066_0215fc28[12] = "#e~gaRso~";
static char data_ov066_0215fc34[12] = "#maskyle~";
static char data_ov066_0215fc40[12] = "#exkorpio";
static char data_ov066_0215fc4c[12] = "#bRe~klER";
static char data_ov066_0215fc58[12] = "#eskorpio";
static char data_ov066_0215fc64[12] = "#dZem@naI";
static char data_ov066_0215fc70[12] = "#dZem@ni:";
static char data_ov066_0215fc7c[12] = "#eTkorpio";
static char data_ov066_0215fc88[12] = "#sajtario";
static char data_ov066_0215fc94[12] = "#skO:rpIQ";
static char data_ov066_0215fca0[12] = "capricorn";
static char data_ov066_0215fcac[12] = "#skORpjo~";
static char data_ov066_0215fcb8[12] = "#skORpio~";
static char data_ov066_0215fcc4[12] = "#@kwerI@s";
static char data_ov066_0215fcd0[12] = "#{kwerI@s";
static char data_ov066_0215fcdc[12] = "#{kwerI{s";
static char data_ov066_0215fce8[12] = "#@kwerI{s";
static char data_ov066_0215fcf4[12] = "#marrones";
static char data_ov066_0215fd00[12] = "#Tajtario";
static char data_ov066_0215fd0c[12] = "#dZEmInaI";
static char data_ov066_0215fd18[12] = "#dZEm@naI";
static char data_ov066_0215fd24[12] = "#addzurri";
static char data_ov066_0215fd30[12] = "#attsurri";
static char data_ov066_0215fd3c[12] = "#@kw{riVs";
static char data_ov066_0215fd48[12] = "#Akw{riVs";
static char data_ov066_0215fd54[12] = "#tsvIlINg@";
static char data_ov066_0215fd60[12] = "#skORpIo:n";
static char data_ov066_0215fd6c[12] = "#skORpjo:n";
static char data_ov066_0215fd78[12] = "#skorpione";
static char data_ov066_0215fd84[12] = "#skorpiOne";
static char data_ov066_0215fd90[12] = "オヒツジザ";
static char data_ov066_0215fd9c[12] = "wassermann";
static char data_ov066_0215fda8[12] = "#sadzttaro";
static char data_ov066_0215fdb4[12] = "キャンサー";
static char data_ov066_0215fdc0[12] = "#kaprikOrn";
static char data_ov066_0215fdcc[12] = "テンビンザ";
static char data_ov066_0215fdd8[12] = "スコーピオ";
static char data_ov066_0215fde4[12] = "ミズガメザ";
static char data_ov066_0215fdf0[12] = "#bRe~fo~se";
static char data_ov066_0215fdfc[12] = "#skO:rpI@U";
static char data_ov066_0215fe08[12] = "#skO:rpIO:";
static char data_ov066_0215fe14[12] = "#saxitario";
static char data_ov066_0215fe20[12] = "#Taxitario";
static char data_ov066_0215fe2c[12] = "#kapRikORn";
static char data_ov066_0215fe38[12] = "#k{prIkorn";
static char data_ov066_0215fe44[12] = "#k{pr@korn";
static char data_ov066_0215fe50[12] = "#k{prIkArn";
static char data_ov066_0215fe5c[12] = "#k{pr@kArn";
static char data_ov066_0215fe68[12] = "#sadzttario";
static char data_ov066_0215fe74[12] = "#kaprikOrno";
static char data_ov066_0215fe80[12] = "#maRo~fo~se";
static char data_ov066_0215fe8c[12] = "sagittarius";
static char data_ov066_0215fe98[]   = "#k{pr@kO:rn";
static char data_ov066_0215fea4[12] = "#k{prIkO:rn";
static char data_ov066_0215feb0[12] = "#k{prIkA:rn";
static char data_ov066_0215febc[12] = "#kaprikonio";

static char data_ov066_0215fec8[16] = "エービーガタ";
static char data_ov066_0215fed8[16] = "#sadzittario";
static char data_ov066_0215fee8[16] = "サジタリウス";
static char data_ov066_0215fef8[16] = "カプリコーン";
static char data_ov066_0215ff08[16] = "アクエリアス";
static char data_ov066_0215ff18[16] = "#s{dZIterIVs";
static char data_ov066_0215ff28[16] = "#s{dZIterI{s";
static char data_ov066_0215ff38[16] = "#s{dZUterI{s";
static char data_ov066_0215ff48[16] = "#kaprikornio";
static char data_ov066_0215ff58[16] = "#kaprikonnio";
static char data_ov066_0215ff68[16] = "#s{dZEtEriVs";
static char data_ov066_0215ff78[16] = "#s{dZItEriVs";
static char data_ov066_0215ff88[16] = "#s{dZ@tEriVs";
static char data_ov066_0215ff98[16] = "#kaprikodnio";

static UnkDataStruct5 data_ov066_021601f4[] = {
    {
        .entries =
            {
                data_ov066_0215f138,
                data_ov066_0215f1b0,
                data_ov066_0215f450,
                data_ov066_0215f1d0,
                data_ov066_0215f158,
                data_ov066_0215f468,
            },
        .numEntries = 6,
    },
    {
        .entries =
            {
                data_ov066_0215f478, data_ov066_0215f748, data_ov066_0215f488, data_ov066_0215f760, data_ov066_0215f4a8,
                data_ov066_0215f788, data_ov066_0215f3d0, data_ov066_0215f7a8, data_ov066_0215f3c0, data_ov066_0215f100,
                data_ov066_0215fcf4, data_ov066_0215fa9c, data_ov066_0215f838, data_ov066_0215f7c0, data_ov066_0215faa8,
                data_ov066_0215f7d8, data_ov066_0215f590, data_ov066_0215f7e0, data_ov066_0215f570, data_ov066_0215f270,
            },
        .numEntries = 20,
    },
    {
        .entries =
            {
                data_ov066_0215f5f0, data_ov066_0215f1c0, data_ov066_0215f620, data_ov066_0215f2a0, data_ov066_0215f640,
                data_ov066_0215f650, data_ov066_0215f200, data_ov066_0215f698, data_ov066_0215f308, data_ov066_0215f850,
                data_ov066_0215f6a0, data_ov066_0215f6b8, data_ov066_0215f6c0, data_ov066_0215f5e8, data_ov066_0215f388,
                data_ov066_0215f010, data_ov066_0215f1e0, data_ov066_0215f4e8, data_ov066_0215f520, data_ov066_0215f6d8,
                data_ov066_0215f6e0, data_ov066_0215f3f0, data_ov066_0215f428, data_ov066_0215f428, data_ov066_0215f438,
                data_ov066_0215f708, data_ov066_0215fc40, data_ov066_0215fc58, data_ov066_0215fa18, data_ov066_0215fc7c,
                data_ov066_0215fc88, data_ov066_0215fe14, data_ov066_0215fe20, data_ov066_0215fd00, data_ov066_0215ff48,
                data_ov066_0215ff48, data_ov066_0215ff58, data_ov066_0215febc, data_ov066_0215ff98, data_ov066_0215f9dc,
                data_ov066_0215fb20, data_ov066_0215f840, data_ov066_0215f678, data_ov066_0215f310, data_ov066_0215f228,
            },
        .numEntries = 45,
    },
};

static UnkDataStruct5 data_ov066_02160500[] = {
    {
        .entries =
            {
                data_ov066_0215f630,
                data_ov066_0215ef50,
                data_ov066_0215f020,
                data_ov066_0215f638,
                data_ov066_0215f2f0,
                data_ov066_0215fb38,
                data_ov066_0215fb44,
                data_ov066_0215fb50,
                data_ov066_0215fb5c,
                data_ov066_0215fb68,
            },
        .numEntries = 10,
    },
    {
        .entries =
            {
                data_ov066_0215f1f0,
                data_ov066_0215f2b8,
                data_ov066_0215ef70,
                data_ov066_0215f3e0,
                data_ov066_0215f670,
                data_ov066_0215f2c8,
                data_ov066_0215f680,
                data_ov066_0215f688,
                data_ov066_0215f2a8,
                data_ov066_0215f2e0,
                data_ov066_0215f2b0,
                data_ov066_0215f078,
                data_ov066_0215f128,
                data_ov066_0215f0b0,
            },
        .numEntries = 14,
    },
    {
        .entries =
            {
                data_ov066_0215f2d0, data_ov066_0215f2f8, data_ov066_0215f318, data_ov066_0215f320, data_ov066_0215f328,
                data_ov066_0215f330, data_ov066_0215f2c0, data_ov066_0215f6a8, data_ov066_0215fb8c, data_ov066_0215fd54,
                data_ov066_0215fb98, data_ov066_0215f7f0, data_ov066_0215f658, data_ov066_0215f0f0, data_ov066_0215f6c8,
                data_ov066_0215f368, data_ov066_0215f610, data_ov066_0215f108, data_ov066_0215f108, data_ov066_0215f88c,
                data_ov066_0215f8b0, data_ov066_0215f8bc, data_ov066_0215f410, data_ov066_0215f6d0, data_ov066_0215f258,
                data_ov066_0215f0c0, data_ov066_0215f5e0, data_ov066_0215fd60, data_ov066_0215fbc8, data_ov066_0215fbd4,
                data_ov066_0215fd6c, data_ov066_0215f91c, data_ov066_0215f3b0, data_ov066_0215f6e8, data_ov066_0215f5f8,
                data_ov066_0215f5f8, data_ov066_0215fbec, data_ov066_0215fbf8, data_ov066_0215fc04, data_ov066_0215fc10,
                data_ov066_0215f970, data_ov066_0215fd9c, data_ov066_0215f9a0, data_ov066_0215f0d8, data_ov066_0215f208,
                data_ov066_0215f268, data_ov066_0215f530, data_ov066_0215f530,
            },
        .numEntries = 48,
    },
};

static UnkDataStruct5 data_ov066_0216080c[] = {
    {
        .entries =
            {
                data_ov066_0215f4b0, data_ov066_0215f868, data_ov066_0215f418, data_ov066_0215f874, data_ov066_0215f358,
                data_ov066_0215f3b8, data_ov066_0215f540, data_ov066_0215ef38, data_ov066_0215ef08, data_ov066_0215f430,
                data_ov066_0215ef88, data_ov066_0215f880, data_ov066_0215f370, data_ov066_0215f340, data_ov066_0215f408,
                data_ov066_0215f898, data_ov066_0215f8a4, data_ov066_0215f910, data_ov066_0215fb14, data_ov066_0215f8c8,
                data_ov066_0215f4a0, data_ov066_0215f600, data_ov066_0215f380, data_ov066_0215fad8, data_ov066_0215f8d4,
                data_ov066_0215f4f8, data_ov066_0215f390, data_ov066_0215f8ec, data_ov066_0215f8f8, data_ov066_0215f080,
                data_ov066_0215f008, data_ov066_0215ef78, data_ov066_0215f3a0, data_ov066_0215f3a8, data_ov066_0215f088,
                data_ov066_0215fa6c, data_ov066_0215f058, data_ov066_0215f660, data_ov066_0215efc0,
            },
        .numEntries = 39,
    },
    {
        .entries =
            {
                data_ov066_0215ef48, data_ov066_0215f928, data_ov066_0215ef68, data_ov066_0215f934, data_ov066_0215f028,
                data_ov066_0215f940, data_ov066_0215f94c, data_ov066_0215fec8, data_ov066_0215f358, data_ov066_0215f3b8,
                data_ov066_0215f540, data_ov066_0215ef38, data_ov066_0215ef08, data_ov066_0215f430, data_ov066_0215ef88,
                data_ov066_0215f880, data_ov066_0215f370, data_ov066_0215f340, data_ov066_0215f408, data_ov066_0215f898,
                data_ov066_0215f8a4, data_ov066_0215f910, data_ov066_0215fb14, data_ov066_0215f8c8, data_ov066_0215f4a0,
                data_ov066_0215f600, data_ov066_0215f380, data_ov066_0215fad8, data_ov066_0215f8d4, data_ov066_0215f4f8,
                data_ov066_0215f390, data_ov066_0215f8ec, data_ov066_0215f8f8, data_ov066_0215f080, data_ov066_0215f008,
                data_ov066_0215ef78, data_ov066_0215f3a0, data_ov066_0215f3a8, data_ov066_0215f088, data_ov066_0215fa6c,
                data_ov066_0215f058, data_ov066_0215f660, data_ov066_0215efc0,
            },
        .numEntries = 43,
    },
    {
        .entries =
            {
                data_ov066_0215fd90, data_ov066_0215f958, data_ov066_0215fa84, data_ov066_0215fa30, data_ov066_0215f964,
                data_ov066_0215f608, data_ov066_0215f648, data_ov066_0215f988, data_ov066_0215f97c, data_ov066_0215f3c8,
                data_ov066_0215f994, data_ov066_0215f5b0, data_ov066_0215efb8, data_ov066_0215fdb4, data_ov066_0215f3d8,
                data_ov066_0215efa8, data_ov066_0215f030, data_ov066_0215f9ac, data_ov066_0215f400, data_ov066_0215f628,
                data_ov066_0215fdcc, data_ov066_0215f9b8, data_ov066_0215f9c4, data_ov066_0215f9d0, data_ov066_0215f3f8,
                data_ov066_0215fdd8, data_ov066_0215f510, data_ov066_0215efc8, data_ov066_0215fee8, data_ov066_0215f508,
                data_ov066_0215f070, data_ov066_0215fef8, data_ov066_0215fde4, data_ov066_0215f9f4, data_ov066_0215ff08,
                data_ov066_0215f470, data_ov066_0215ef30, data_ov066_0215fa00,
            },
        .numEntries = 38,
    },
};

static UnkDataStruct5 data_ov066_02160b18[] = {
    {
        .entries =
            {
                data_ov066_0215f7e8,
                data_ov066_0215facc,
                data_ov066_0215f578,
                data_ov066_0215f808,
                data_ov066_0215faf0,
                data_ov066_0215f5c8,
            },
        .numEntries = 6,
    },
    {
        .entries =
            {
                data_ov066_0215fd24,
                data_ov066_0215fb08,
                data_ov066_0215fd30,
                data_ov066_0215f1a8,
                data_ov066_0215f618,
                data_ov066_0215f188,
                data_ov066_0215f830,
                data_ov066_0215fb2c,
                data_ov066_0215f838,
                data_ov066_0215eff8,
                data_ov066_0215f180,
                data_ov066_0215efe8,
            },
        .numEntries = 12,
    },
    {
        .entries =
            {
                data_ov066_0215f668, data_ov066_0215f848, data_ov066_0215f690, data_ov066_0215f2e8, data_ov066_0215ef80,
                data_ov066_0215f050, data_ov066_0215fb74, data_ov066_0215fb80, data_ov066_0215f85c, data_ov066_0215f6b0,
                data_ov066_0215f338, data_ov066_0215f348, data_ov066_0215f298, data_ov066_0215f360, data_ov066_0215f0a8,
                data_ov066_0215fba4, data_ov066_0215fbb0, data_ov066_0215f8e0, data_ov066_0215fbbc, data_ov066_0215f904,
                data_ov066_0215fd78, data_ov066_0215fd84, data_ov066_0215fbe0, data_ov066_0215fed8, data_ov066_0215fe68,
                data_ov066_0215fda8, data_ov066_0215fe74, data_ov066_0215fdc0, data_ov066_0215fc1c, data_ov066_0215f9dc,
                data_ov066_0215f9e8, data_ov066_0215f1e8, data_ov066_0215f4f0, data_ov066_0215efd0,
            },
        .numEntries = 34,
    },
};

static UnkDataStruct5 data_ov066_02160e24[] = {
    {
        .entries =
            {
                data_ov066_0215ef04,
                data_ov066_0215ef90,
                data_ov066_0215f018,
                data_ov066_0215f000,
                data_ov066_0215ef20,
                data_ov066_0215ef10,
                data_ov066_0215f198,
                data_ov066_0215efd8,
                data_ov066_0215f040,
                data_ov066_0215f300,
                data_ov066_0215f140,
            },
        .numEntries = 11,
    },
    {
        .entries =
            {
                data_ov066_0215efa0,
                data_ov066_0215ef18,
                data_ov066_0215f0c8,
                data_ov066_0215f1c8,
                data_ov066_0215f090,
                data_ov066_0215f448,
                data_ov066_0215f350,
                data_ov066_0215f278,
                data_ov066_0215f458,
                data_ov066_0215f1a0,
                data_ov066_0215f068,
                data_ov066_0215f160,
                data_ov066_0215f1b8,
                data_ov066_0215f290,
                data_ov066_0215f168,
            },
        .numEntries = 15,
    },
    {
        .entries =
            {
                data_ov066_0215f148, data_ov066_0215f5d0, data_ov066_0215f5a0, data_ov066_0215f720, data_ov066_0215f598,
                data_ov066_0215f7f8, data_ov066_0215f728, data_ov066_0215f730, data_ov066_0215f738, data_ov066_0215f740,
                data_ov066_0215f5a8, data_ov066_0215fc64, data_ov066_0215fc70, data_ov066_0215f538, data_ov066_0215fa24,
                data_ov066_0215f750, data_ov066_0215f758, data_ov066_0215eef4, data_ov066_0215f490, data_ov066_0215f120,
                data_ov066_0215f498, data_ov066_0215f0b8, data_ov066_0215fa3c, data_ov066_0215f768, data_ov066_0215fa48,
                data_ov066_0215f778, data_ov066_0215f3e8, data_ov066_0215f210, data_ov066_0215f780, data_ov066_0215f790,
                data_ov066_0215f798, data_ov066_0215f7a0, data_ov066_0215fdfc, data_ov066_0215fc94, data_ov066_0215fe08,
                data_ov066_0215fe8c, data_ov066_0215ff18, data_ov066_0215ff28, data_ov066_0215ff38, data_ov066_0215fca0,
                data_ov066_0215fe98, data_ov066_0215fea4, data_ov066_0215feb0, data_ov066_0215fa54, data_ov066_0215fcc4,
                data_ov066_0215fcd0, data_ov066_0215fcdc, data_ov066_0215fce8, data_ov066_0215f528, data_ov066_0215fa90,
                data_ov066_0215f7b8,
            },
        .numEntries = 51,
    },
};

static UnkDataStruct5 data_ov066_02161130[] = {
    {
        .entries =
            {
                data_ov066_0215f810,
                data_ov066_0215fc28,
                data_ov066_0215eef8,
                data_ov066_0215f4d8,
                data_ov066_0215fc34,
                data_ov066_0215efe0,
                data_ov066_0215f500,
                data_ov066_0215ef58,
                data_ov066_0215f420,
                data_ov066_0215fa0c,
            },
        .numEntries = 10,
    },
    {
        .entries =
            {
                data_ov066_0215ef40,
                data_ov066_0215eff0,
                data_ov066_0215ef60,
                data_ov066_0215f6f0,
                data_ov066_0215f6f8,
                data_ov066_0215f060,
                data_ov066_0215ef28,
                data_ov066_0215f700,
                data_ov066_0215f710,
                data_ov066_0215f460,
                data_ov066_0215f190,
                data_ov066_0215f718,
                data_ov066_0215fc4c,
                data_ov066_0215f250,
                data_ov066_0215fdf0,
                data_ov066_0215fe80,
            },
        .numEntries = 16,
    },
    {
        .entries =
            {
                data_ov066_0215f568, data_ov066_0215f480, data_ov066_0215f0e8, data_ov066_0215f220, data_ov066_0215f170,
                data_ov066_0215f218, data_ov066_0215f118, data_ov066_0215f770, data_ov066_0215f1f8, data_ov066_0215f130,
                data_ov066_0215f4b8, data_ov066_0215f4c0, data_ov066_0215f4c8, data_ov066_0215f4d0, data_ov066_0215f7b0,
                data_ov066_0215fcac, data_ov066_0215fcb8, data_ov066_0215fa60, data_ov066_0215fa78, data_ov066_0215fe2c,
                data_ov066_0215f378, data_ov066_0215f548, data_ov066_0215f550, data_ov066_0215f560, data_ov066_0215f7c8,
                data_ov066_0215f7d0,
            },
        .numEntries = 26,
    },
};

static UnkDataStruct5 data_ov066_0216143c[] = {
    {
        .entries =
            {
                data_ov066_0215f810,
                data_ov066_0215fc28,
                data_ov066_0215eef8,
                data_ov066_0215f4d8,
                data_ov066_0215fc34,
                data_ov066_0215efe0,
                data_ov066_0215f500,
                data_ov066_0215ef58,
                data_ov066_0215f420,
                data_ov066_0215fa0c,
            },
        .numEntries = 10,
    },
    {
        .entries =
            {
                data_ov066_0215ef40,
                data_ov066_0215eff0,
                data_ov066_0215ef60,
                data_ov066_0215f6f0,
                data_ov066_0215f6f8,
                data_ov066_0215f060,
                data_ov066_0215ef28,
                data_ov066_0215f700,
                data_ov066_0215f710,
                data_ov066_0215eefc,
                data_ov066_0215ef00,
                data_ov066_0215f460,
                data_ov066_0215f190,
                data_ov066_0215f718,
                data_ov066_0215fc4c,
                data_ov066_0215f250,
                data_ov066_0215fdf0,
                data_ov066_0215fe80,
            },
        .numEntries = 18,
    },
    {
        .entries =
            {
                data_ov066_0215f568, data_ov066_0215f480, data_ov066_0215f0e8, data_ov066_0215f220, data_ov066_0215f170,
                data_ov066_0215f218, data_ov066_0215f118, data_ov066_0215f770, data_ov066_0215f1f8, data_ov066_0215f130,
                data_ov066_0215f4b8, data_ov066_0215f4c0, data_ov066_0215f4c8, data_ov066_0215f4d0, data_ov066_0215f7b0,
                data_ov066_0215fcac, data_ov066_0215fcb8, data_ov066_0215fa60, data_ov066_0215fa78, data_ov066_0215fe2c,
                data_ov066_0215f378, data_ov066_0215f548, data_ov066_0215f550, data_ov066_0215f560, data_ov066_0215f7c8,
                data_ov066_0215f7d0,
            },
        .numEntries = 26,
    },
};

static UnkDataStruct5 data_ov066_02161748[] = {
    {
        .entries =
            {
                data_ov066_0215f398,
                data_ov066_0215f518,
                data_ov066_0215f0f8,
                data_ov066_0215f1d8,
                data_ov066_0215f440,
                data_ov066_0215f150,
                data_ov066_0215f260,
                data_ov066_0215f048,
                data_ov066_0215f4e0,
            },
        .numEntries = 9,
    },
    {
        .entries =
            {
                data_ov066_0215f748, data_ov066_0215f488, data_ov066_0215f760, data_ov066_0215f4a8, data_ov066_0215f230,
                data_ov066_0215f788, data_ov066_0215f3d0, data_ov066_0215f7a8, data_ov066_0215f3c0, data_ov066_0215f100,
                data_ov066_0215fcf4, data_ov066_0215fa9c, data_ov066_0215f838, data_ov066_0215f7c0, data_ov066_0215faa8,
                data_ov066_0215f7d8, data_ov066_0215f590, data_ov066_0215f7e0, data_ov066_0215f570, data_ov066_0215f270,
            },
        .numEntries = 20,
    },
    {
        .entries =
            {
                data_ov066_0215f5f0, data_ov066_0215f1c0, data_ov066_0215f620, data_ov066_0215f2a0, data_ov066_0215f640,
                data_ov066_0215f650, data_ov066_0215f200, data_ov066_0215f698, data_ov066_0215f308, data_ov066_0215f850,
                data_ov066_0215f6a0, data_ov066_0215f6b8, data_ov066_0215f6c0, data_ov066_0215f5e8, data_ov066_0215f388,
                data_ov066_0215f010, data_ov066_0215f1e0, data_ov066_0215f4e8, data_ov066_0215f520, data_ov066_0215f6d8,
                data_ov066_0215f6e0, data_ov066_0215f3f0, data_ov066_0215f428, data_ov066_0215f428, data_ov066_0215f438,
                data_ov066_0215f708, data_ov066_0215fc40, data_ov066_0215fc58, data_ov066_0215fa18, data_ov066_0215fc7c,
                data_ov066_0215fc88, data_ov066_0215fe14, data_ov066_0215fe20, data_ov066_0215fd00, data_ov066_0215ff48,
                data_ov066_0215ff48, data_ov066_0215ff58, data_ov066_0215febc, data_ov066_0215ff98, data_ov066_0215f9dc,
                data_ov066_0215fb20, data_ov066_0215f840, data_ov066_0215f678, data_ov066_0215f310, data_ov066_0215f228,
            },
        .numEntries = 45,
    },
};

static UnkDataStruct5 data_ov066_02161a54[] = {
    {
        .entries =
            {
                data_ov066_0215ef04,
                data_ov066_0215f038,
                data_ov066_0215ef10,
                data_ov066_0215f288,
                data_ov066_0215f098,
                data_ov066_0215f558,
                data_ov066_0215f0d0,
            },
        .numEntries = 7,
    },
    {
        .entries =
            {
                data_ov066_0215efa0,
                data_ov066_0215ef98,
                data_ov066_0215ef18,
                data_ov066_0215f0a0,
                data_ov066_0215f280,
                data_ov066_0215f110,
                data_ov066_0215f090,
                data_ov066_0215f0e0,
                data_ov066_0215f278,
                data_ov066_0215f458,
                data_ov066_0215f178,
                data_ov066_0215f238,
            },
        .numEntries = 12,
    },
    {
        .entries =
            {
                data_ov066_0215f148, data_ov066_0215f240, data_ov066_0215f2d8, data_ov066_0215f248, data_ov066_0215f598,
                data_ov066_0215f5d8, data_ov066_0215f588, data_ov066_0215f5a8, data_ov066_0215fd0c, data_ov066_0215fd18,
                data_ov066_0215fab4, data_ov066_0215fac0, data_ov066_0215f538, data_ov066_0215f800, data_ov066_0215fae4,
                data_ov066_0215eef4, data_ov066_0215efb0, data_ov066_0215f0b8, data_ov066_0215f5b8, data_ov066_0215f580,
                data_ov066_0215f210, data_ov066_0215f5c0, data_ov066_0215f818, data_ov066_0215f7a0, data_ov066_0215fafc,
                data_ov066_0215fe8c, data_ov066_0215ff68, data_ov066_0215ff78, data_ov066_0215ff88, data_ov066_0215fca0,
                data_ov066_0215fe38, data_ov066_0215fe44, data_ov066_0215fe50, data_ov066_0215fe5c, data_ov066_0215fa54,
                data_ov066_0215fd3c, data_ov066_0215fd48, data_ov066_0215f528, data_ov066_0215f820, data_ov066_0215f828,
            },
        .numEntries = 40,
    },
};

static const UnkStackStruct2 data_ov066_0215d830 = {.data = {0x11C71000, 0xFC72, 0x1800, 0x00, 0x0B33}};

static ActorUnkZLSL_AnimationTag data_ov066_0215ffe8[] = {
    {0x00, "action_end", 0x00},
    {0x01, "close", 0x00},
};

static ActorUnkZLSL_AnimationTag data_ov066_02160018[] = {
    {0x00, "wait", 0x00},       {0x01, "wait", 0x00}, {0x02, "talk", 0x00},     {0x03, "action", 0x00},
    {0x04, "action_end", 0x01}, {0x05, "nod", 0x00},  {0x06, "question", 0x00}, {0x07, "hear", 0x00},
};

static const u32 data_ov066_0215d7d8[] = {
    BMG_ID(BMGGroup_water, MsgIndex_Unk65),
    BMG_ID(BMGGroup_water, MsgIndex_Unk66),
};

static const u32 data_ov066_0215d7e0[] = {
    BMG_ID(BMGGroup_water, MsgIndex_Unk67),
    BMG_ID(BMGGroup_water, MsgIndex_Unk68),
    BMG_ID(BMGGroup_water, MsgIndex_Unk69),
    BMG_ID(BMGGroup_water, MsgIndex_Unk6A),
};

static const u32 data_ov066_0215d7f0[] = {
    BMG_ID(BMGGroup_water, MsgIndex_Unk67),
    BMG_ID(BMGGroup_water, MsgIndex_Unk68),
    BMG_ID(BMGGroup_water, MsgIndex_Unk69),
    BMG_ID(BMGGroup_water, MsgIndex_Unk6A),
};

static const u32 data_ov066_0215d800[] = {
    BMG_ID(BMGGroup_water, MsgIndex_Unk6B), BMG_ID(BMGGroup_water, MsgIndex_Unk6C), BMG_ID(BMGGroup_water, MsgIndex_Unk6D),
    BMG_ID(BMGGroup_water, MsgIndex_Unk6E), BMG_ID(BMGGroup_water, MsgIndex_Unk6F), BMG_ID(BMGGroup_water, MsgIndex_Unk70),
    BMG_ID(BMGGroup_water, MsgIndex_Unk71), BMG_ID(BMGGroup_water, MsgIndex_Unk72), BMG_ID(BMGGroup_water, MsgIndex_Unk73),
    BMG_ID(BMGGroup_water, MsgIndex_Unk74), BMG_ID(BMGGroup_water, MsgIndex_Unk75), BMG_ID(BMGGroup_water, MsgIndex_Unk76),
};

static const u32 data_ov066_0215d850[] = {
    BMG_ID(BMGGroup_water, MsgIndex_Unk86), BMG_ID(BMGGroup_water, MsgIndex_Unk87), BMG_ID(BMGGroup_water, MsgIndex_Unk88),
    BMG_ID(BMGGroup_water, MsgIndex_Unk89), BMG_ID(BMGGroup_water, MsgIndex_Unk8A), BMG_ID(BMGGroup_water, MsgIndex_Unk8B),
    BMG_ID(BMGGroup_water, MsgIndex_Unk8C), BMG_ID(BMGGroup_water, MsgIndex_Unk8D), BMG_ID(BMGGroup_water, MsgIndex_Unk8E),
    BMG_ID(BMGGroup_water, MsgIndex_Unk8F), BMG_ID(BMGGroup_water, MsgIndex_Unk90), BMG_ID(BMGGroup_water, MsgIndex_Unk91),
    BMG_ID(BMGGroup_water, MsgIndex_Unk92), BMG_ID(BMGGroup_water, MsgIndex_Unk93),
};

static u16 data_ov066_02161d60[] = {0x30D0, 0x30B0, 0x0000, 0x0000};

DECL_PROFILE(ActorProfileUnkVCFT);

Actor *ActorProfileUnkVCFT::Create() {
    return new(HeapIndex_2) ActorUnkVCFT();
}

ActorProfileUnkVCFT::ActorProfileUnkVCFT() :
    ActorProfile_Derived1(ActorId_VCFT) {
    this->mUnk_04.Init(0, FX_F32_TO_FX32(0.5f), 0, FX_F32_TO_FX32(0.4f));
    this->mUnk_1C             = 0xCCC;
    this->mUnk_1A             = 0x199A;
    this->vfunc_04()->mUnk_15 = 1;
}

ActorUnkVCFT_328::ActorUnkVCFT_328(ActorUnkVCFT *pActor) :
    ActorUnkVCFT_328_Base(data_ov066_0216080c),
    mUnk_34(pActor),
    mUnk_38(1),
    mUnk_3C(0),
    mUnk_40(0),
    mUnk_41(0) {}

ActorUnkVCFT_328::~ActorUnkVCFT_328() {
    this->mUnk_34 = NULL;
}

void ActorUnkVCFT_328::func_ov066_02158eb4(void) {
    this->UnknownAction1(0, 0, 0);
}

// biggest function in the game!
bool ActorUnkVCFT_328::vfunc_08(void) {
    this->func_ov089_021658ec();

    if (this->func_ov089_02165a28(0) >= -0x3E8) {
        switch (data_02049be0.mUnk_00) {
            case 0:
                switch (this->mUnk_34->mUnk_3D0) {
                    case 0:
                        switch (this->func_ov089_02165a18(0)) {
                            case 0:
                            case 1:
                                this->UnknownAction1(1, 1, 0);
                                break;
                            case 2:
                            case 3:
                                this->UnknownAction2(2, 1);
                                break;
                            default:
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                                break;
                        }
                        break;
                    case 1:
                        switch (this->func_ov089_02165a18(0)) {
                            case 0:
                            case 1:
                                this->UnknownAction1(1, 1, 0);
                                break;
                            case 2:
                            case 3:
                                this->UnknownAction2(2, 1);
                                break;
                            case 4:
                            case 5:
                                this->UnknownAction2(3, 2);
                                break;
                            case 6:
                            case 7:
                                this->UnknownAction2(4, 3);
                                break;
                            default:
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                                break;
                        }
                        break;
                    case 2:
                        switch (this->func_ov089_02165a18(0)) {
                            case 0:
                            case 1:
                            case 2:
                            case 3:
                                this->UnknownAction1(1, 1, 0);
                                break;
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                                this->UnknownAction2(2, 1);
                                break;
                            case 8:
                            case 9:
                            case 10:
                                this->UnknownAction2(3, 2);
                                break;
                            case 11:
                            case 12:
                            case 13:
                                this->UnknownAction2(4, 3);
                                break;
                            case 14:
                            case 15:
                            case 16:
                                this->UnknownAction2(5, 4);
                                break;
                            case 17:
                            case 18:
                            case 19:
                                this->UnknownAction2(6, 5);
                                break;
                            case 20:
                            case 21:
                            case 22:
                                this->UnknownAction2(7, 6);
                                break;
                            case 23:
                            case 24:
                            case 25:
                                this->UnknownAction2(8, 7);
                                break;
                            case 26:
                            case 27:
                            case 28:
                                this->UnknownAction2(9, 8);
                                break;
                            case 29:
                            case 30:
                            case 31:
                                this->UnknownAction2(10, 9);
                                break;
                            case 32:
                            case 33:
                            case 34:
                                this->UnknownAction2(11, 10);
                                break;
                            case 35:
                            case 36:
                            case 37:
                                this->UnknownAction2(12, 11);
                                break;
                            default:
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                                break;
                        }
                        break;
                    default:
                        break;
                }
                break;
            case 2:
                switch (this->mUnk_34->mUnk_3D0) {
                    case 0:
                        if (this->func_ov089_02165a18(0) <= 4) {
                            this->UnknownAction1(1, 1, 0);
                        } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 9)) {
                            this->UnknownAction2(2, 1);
                        } else {
                            this->mUnk_40 = 1;
                            this->mUnk_41 = 0;
                        }

                        break;
                    case 1:
                        if (this->func_ov089_02165a18(0) <= 2) {
                            this->UnknownAction1(1, 1, 0);
                        } else if ((this->func_ov089_02165a18(0) >= 3 && this->func_ov089_02165a18(0) <= 5)) {
                            this->UnknownAction2(2, 1);
                        } else if ((this->func_ov089_02165a18(0) >= 6 && this->func_ov089_02165a18(0) <= 8)) {
                            this->UnknownAction2(3, 2);
                        } else if ((this->func_ov089_02165a18(0) >= 9 && this->func_ov089_02165a18(0) <= 0xD)) {
                            this->UnknownAction2(4, 3);
                        } else {
                            this->mUnk_40 = 1;
                            this->mUnk_41 = 0;
                        }

                        break;
                    case 2:
                        if (this->func_ov089_02165a18(0) <= 3) {
                            this->UnknownAction1(1, 1, 0);
                        } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 7)) {
                            this->UnknownAction2(2, 1);
                        } else if ((this->func_ov089_02165a18(0) >= 8 && this->func_ov089_02165a18(0) <= 0xA)) {
                            this->UnknownAction2(3, 2);
                        } else if ((this->func_ov089_02165a18(0) >= 0xB && this->func_ov089_02165a18(0) <= 0xF)) {
                            this->UnknownAction2(4, 3);
                        } else if (this->func_ov089_02165a18(0) >= 0x10 && this->func_ov089_02165a18(0) <= 0x12) {
                            this->UnknownAction2(5, 4);
                        } else if ((this->func_ov089_02165a18(0) >= 0x13 && this->func_ov089_02165a18(0) <= 0x15)) {
                            this->UnknownAction2(6, 5);
                        } else if ((this->func_ov089_02165a18(0) >= 0x16 && this->func_ov089_02165a18(0) <= 0x1A)) {
                            this->UnknownAction2(7, 6);
                        } else if (this->func_ov089_02165a18(0) >= 0x1B && this->func_ov089_02165a18(0) <= 0x1F) {
                            this->UnknownAction2(8, 7);
                        } else if (this->func_ov089_02165a18(0) >= 0x20 && this->func_ov089_02165a18(0) <= 0x23) {
                            this->UnknownAction2(9, 8);
                        } else if ((this->func_ov089_02165a18(0) >= 0x24 && this->func_ov089_02165a18(0) <= 0x26)) {
                            this->UnknownAction2(10, 9);
                        } else if ((this->func_ov089_02165a18(0) >= 0x27 && this->func_ov089_02165a18(0) <= 0x2A)) {
                            this->UnknownAction2(11, 10);
                        } else if ((this->func_ov089_02165a18(0) >= 0x2B && this->func_ov089_02165a18(0) <= 0x2F)) {
                            this->UnknownAction2(12, 11);
                        } else {
                            this->mUnk_40 = 1;
                            this->mUnk_41 = 0;
                        }

                        break;
                    default:
                        break;
                }
                break;
            case 3:
                if (func_02014fe0() == 2) {
                    switch (this->mUnk_34->mUnk_3D0) {
                        case 0:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(2, 1);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 1:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 8)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 9 && this->func_ov089_02165a18(0) <= 12)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 13 && this->func_ov089_02165a18(0) <= 15)) {
                                this->UnknownAction2(4, 3);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 2:
                            if (this->func_ov089_02165a18(0) <= 1) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 2 && this->func_ov089_02165a18(0) <= 4)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 6)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 7 && this->func_ov089_02165a18(0) <= 7)) {
                                this->UnknownAction2(4, 3);
                            } else if (this->func_ov089_02165a18(0) >= 8 && this->func_ov089_02165a18(0) <= 9) {
                                this->UnknownAction2(5, 4);
                            } else if ((this->func_ov089_02165a18(0) >= 0xA && this->func_ov089_02165a18(0) <= 0xD)) {
                                this->UnknownAction2(6, 5);
                            } else if ((this->func_ov089_02165a18(0) >= 0xE && this->func_ov089_02165a18(0) <= 0xE)) {
                                this->UnknownAction2(7, 6);
                            } else if (this->func_ov089_02165a18(0) >= 0xF && this->func_ov089_02165a18(0) <= 0x10) {
                                this->UnknownAction2(8, 7);
                            } else if (this->func_ov089_02165a18(0) >= 0x11 && this->func_ov089_02165a18(0) <= 0x12) {
                                this->UnknownAction2(9, 8);
                            } else if ((this->func_ov089_02165a18(0) >= 0x13 && this->func_ov089_02165a18(0) <= 0x13)) {
                                this->UnknownAction2(10, 9);
                            } else if ((this->func_ov089_02165a18(0) >= 0x14 && this->func_ov089_02165a18(0) <= 0x17)) {
                                this->UnknownAction2(11, 10);
                            } else if ((this->func_ov089_02165a18(0) >= 0x18 && this->func_ov089_02165a18(0) <= 0x19)) {
                                this->UnknownAction2(12, 11);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        default:
                            break;
                    }
                } else {
                    switch (this->mUnk_34->mUnk_3D0) {
                        case 0:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(2, 1);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 1:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 10)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 11 && this->func_ov089_02165a18(0) <= 14)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 15 && this->func_ov089_02165a18(0) <= 17)) {
                                this->UnknownAction2(4, 3);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 2:
                            if (this->func_ov089_02165a18(0) <= 1) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 2 && this->func_ov089_02165a18(0) <= 4)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 6)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 7 && this->func_ov089_02165a18(0) <= 7)) {
                                this->UnknownAction2(4, 3);
                            } else if (this->func_ov089_02165a18(0) >= 8 && this->func_ov089_02165a18(0) <= 9) {
                                this->UnknownAction2(5, 4);
                            } else if ((this->func_ov089_02165a18(0) >= 0xA && this->func_ov089_02165a18(0) <= 0xD)) {
                                this->UnknownAction2(6, 5);
                            } else if ((this->func_ov089_02165a18(0) >= 0xE && this->func_ov089_02165a18(0) <= 0xE)) {
                                this->UnknownAction2(7, 6);
                            } else if (this->func_ov089_02165a18(0) >= 0xF && this->func_ov089_02165a18(0) <= 0x10) {
                                this->UnknownAction2(8, 7);
                            } else if (this->func_ov089_02165a18(0) >= 0x10 && this->func_ov089_02165a18(0) <= 0x11) {
                                this->UnknownAction2(9, 8);
                            } else if ((this->func_ov089_02165a18(0) >= 0x12 && this->func_ov089_02165a18(0) <= 0x12)) {
                                this->UnknownAction2(10, 9);
                            } else if ((this->func_ov089_02165a18(0) >= 0x13 && this->func_ov089_02165a18(0) <= 0x16)) {
                                this->UnknownAction2(11, 10);
                            } else if ((this->func_ov089_02165a18(0) >= 0x17 && this->func_ov089_02165a18(0) <= 0x18)) {
                                this->UnknownAction2(12, 11);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        default:
                            break;
                    }
                }
                break;
            case 4:
                switch (this->mUnk_34->mUnk_3D0) {
                    case 0:
                        if (this->func_ov089_02165a18(0) <= 2) {
                            this->UnknownAction1(1, 1, 0);
                        } else if ((this->func_ov089_02165a18(0) >= 3 && this->func_ov089_02165a18(0) <= 5)) {
                            this->UnknownAction2(2, 1);
                        } else {
                            this->mUnk_40 = 1;
                            this->mUnk_41 = 0;
                        }

                        break;
                    case 1:
                        if (this->func_ov089_02165a18(0) <= 2) {
                            this->UnknownAction1(1, 1, 0);
                        } else if ((this->func_ov089_02165a18(0) >= 3 && this->func_ov089_02165a18(0) <= 5)) {
                            this->UnknownAction2(2, 1);
                        } else if ((this->func_ov089_02165a18(0) >= 6 && this->func_ov089_02165a18(0) <= 8)) {
                            this->UnknownAction2(3, 2);
                        } else if ((this->func_ov089_02165a18(0) >= 9 && this->func_ov089_02165a18(0) <= 11)) {
                            this->UnknownAction2(4, 3);
                        } else {
                            this->mUnk_40 = 1;
                            this->mUnk_41 = 0;
                        }

                        break;
                    case 2:
                        if (this->func_ov089_02165a18(0) <= 2) {
                            this->UnknownAction1(1, 1, 0);
                        } else if ((this->func_ov089_02165a18(0) >= 3 && this->func_ov089_02165a18(0) <= 5)) {
                            this->UnknownAction2(2, 1);
                        } else if ((this->func_ov089_02165a18(0) >= 6 && this->func_ov089_02165a18(0) <= 8)) {
                            this->UnknownAction2(3, 2);
                        } else if ((this->func_ov089_02165a18(0) >= 9 && this->func_ov089_02165a18(0) <= 0xB)) {
                            this->UnknownAction2(4, 3);
                        } else if (this->func_ov089_02165a18(0) >= 0xC && this->func_ov089_02165a18(0) <= 0xE) {
                            this->UnknownAction2(5, 4);
                        } else if ((this->func_ov089_02165a18(0) >= 0xF && this->func_ov089_02165a18(0) <= 0x11)) {
                            this->UnknownAction2(6, 5);
                        } else if ((this->func_ov089_02165a18(0) >= 0x12 && this->func_ov089_02165a18(0) <= 0x13)) {
                            this->UnknownAction2(7, 6);
                        } else if (this->func_ov089_02165a18(0) >= 0x14 && this->func_ov089_02165a18(0) <= 0x16) {
                            this->UnknownAction2(8, 7);
                        } else if (this->func_ov089_02165a18(0) >= 0x17 && this->func_ov089_02165a18(0) <= 0x19) {
                            this->UnknownAction2(9, 8);
                        } else if ((this->func_ov089_02165a18(0) >= 0x1A && this->func_ov089_02165a18(0) <= 0x1B)) {
                            this->UnknownAction2(10, 9);
                        } else if ((this->func_ov089_02165a18(0) >= 0x1C && this->func_ov089_02165a18(0) <= 0x1E)) {
                            this->UnknownAction2(11, 10);
                        } else if ((this->func_ov089_02165a18(0) >= 0x1F && this->func_ov089_02165a18(0) <= 0x21)) {
                            this->UnknownAction2(12, 11);
                        } else {
                            this->mUnk_40 = 1;
                            this->mUnk_41 = 0;
                        }

                        break;
                    default:
                        break;
                }
                break;
            case 5:
                if (func_02014fe0() == 2) {
                    switch (this->mUnk_34->mUnk_3D0) {
                        case 0:
                            if (this->func_ov089_02165a18(0) <= 2) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 3 && this->func_ov089_02165a18(0) <= 5)) {
                                this->UnknownAction2(2, 1);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 1:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 10 && this->func_ov089_02165a18(0) <= 14)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 15 && this->func_ov089_02165a18(0) <= 19)) {
                                this->UnknownAction2(4, 3);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 2:
                            if (this->func_ov089_02165a18(0) <= 3) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 8)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 9 && this->func_ov089_02165a18(0) <= 0xA)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 0xB && this->func_ov089_02165a18(0) <= 0xE)) {
                                this->UnknownAction2(4, 3);
                            } else if (this->func_ov089_02165a18(0) >= 0xF && this->func_ov089_02165a18(0) <= 0x10) {
                                this->UnknownAction2(5, 4);
                            } else if ((this->func_ov089_02165a18(0) >= 0x11 && this->func_ov089_02165a18(0) <= 0x15)) {
                                this->UnknownAction2(6, 5);
                            } else if ((this->func_ov089_02165a18(0) >= 0x16 && this->func_ov089_02165a18(0) <= 0x19)) {
                                this->UnknownAction2(7, 6);
                            } else if (this->func_ov089_02165a18(0) >= 0x1A && this->func_ov089_02165a18(0) <= 0x1D) {
                                this->UnknownAction2(8, 7);
                            } else if (this->func_ov089_02165a18(0) >= 0x1E && this->func_ov089_02165a18(0) <= 0x21) {
                                this->UnknownAction2(9, 8);
                            } else if ((this->func_ov089_02165a18(0) >= 0x22 && this->func_ov089_02165a18(0) <= 0x26)) {
                                this->UnknownAction2(10, 9);
                            } else if ((this->func_ov089_02165a18(0) >= 0x27 && this->func_ov089_02165a18(0) <= 0x28)) {
                                this->UnknownAction2(11, 10);
                            } else if ((this->func_ov089_02165a18(0) >= 0x29 && this->func_ov089_02165a18(0) <= 0x2C)) {
                                this->UnknownAction2(12, 11);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        default:
                            break;
                    }
                } else {
                    switch (this->mUnk_34->mUnk_3D0) {
                        case 0:
                            if (this->func_ov089_02165a18(0) <= 3) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 8)) {
                                this->UnknownAction2(2, 1);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 1:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 10 && this->func_ov089_02165a18(0) <= 14)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 15 && this->func_ov089_02165a18(0) <= 19)) {
                                this->UnknownAction2(4, 3);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 2:
                            if (this->func_ov089_02165a18(0) <= 3) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 8)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 9 && this->func_ov089_02165a18(0) <= 0xA)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 0xB && this->func_ov089_02165a18(0) <= 0xE)) {
                                this->UnknownAction2(4, 3);
                            } else if (this->func_ov089_02165a18(0) >= 0xF && this->func_ov089_02165a18(0) <= 0x10) {
                                this->UnknownAction2(5, 4);
                            } else if ((this->func_ov089_02165a18(0) >= 0x11 && this->func_ov089_02165a18(0) <= 0x15)) {
                                this->UnknownAction2(6, 5);
                            } else if ((this->func_ov089_02165a18(0) >= 0x16 && this->func_ov089_02165a18(0) <= 0x19)) {
                                this->UnknownAction2(7, 6);
                            } else if (this->func_ov089_02165a18(0) >= 0x1A && this->func_ov089_02165a18(0) <= 0x1D) {
                                this->UnknownAction2(8, 7);
                            } else if (this->func_ov089_02165a18(0) >= 0x1E && this->func_ov089_02165a18(0) <= 0x21) {
                                this->UnknownAction2(9, 8);
                            } else if ((this->func_ov089_02165a18(0) >= 0x22 && this->func_ov089_02165a18(0) <= 0x26)) {
                                this->UnknownAction2(10, 9);
                            } else if ((this->func_ov089_02165a18(0) >= 0x27 && this->func_ov089_02165a18(0) <= 0x28)) {
                                this->UnknownAction2(11, 10);
                            } else if ((this->func_ov089_02165a18(0) >= 0x29 && this->func_ov089_02165a18(0) <= 0x2C)) {
                                this->UnknownAction2(12, 11);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        default:
                            break;
                    }
                }
                break;
            case 1:
            default:
                if (func_02014fe0() == 2) {
                    switch (this->mUnk_34->mUnk_3D0) {
                        case 0:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 10)) {
                                this->UnknownAction2(2, 1);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 1:
                            if (this->func_ov089_02165a18(0) <= 3) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 6)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 7 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 0xA && this->func_ov089_02165a18(0) <= 0xE)) {
                                this->UnknownAction2(4, 3);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 2:
                            if (this->func_ov089_02165a18(0) <= 3) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 0xA && this->func_ov089_02165a18(0) <= 0xC)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 0xD && this->func_ov089_02165a18(0) <= 0x10)) {
                                this->UnknownAction2(4, 3);
                            } else if (this->func_ov089_02165a18(0) >= 0x11 && this->func_ov089_02165a18(0) <= 0x14) {
                                this->UnknownAction2(5, 4);
                            } else if ((this->func_ov089_02165a18(0) >= 0x15 && this->func_ov089_02165a18(0) <= 0x1A)) {
                                this->UnknownAction2(6, 5);
                            } else if ((this->func_ov089_02165a18(0) >= 0x1B && this->func_ov089_02165a18(0) <= 0x1E)) {
                                this->UnknownAction2(7, 6);
                            } else if (this->func_ov089_02165a18(0) >= 0x1F && this->func_ov089_02165a18(0) <= 0x22) {
                                this->UnknownAction2(8, 7);
                            } else if (this->func_ov089_02165a18(0) >= 0x23 && this->func_ov089_02165a18(0) <= 0x26) {
                                this->UnknownAction2(9, 8);
                            } else if ((this->func_ov089_02165a18(0) >= 0x27 && this->func_ov089_02165a18(0) <= 0x2A)) {
                                this->UnknownAction2(10, 9);
                            } else if ((this->func_ov089_02165a18(0) >= 0x2B && this->func_ov089_02165a18(0) <= 0x2F)) {
                                this->UnknownAction2(11, 10);
                            } else if ((this->func_ov089_02165a18(0) >= 0x30 && this->func_ov089_02165a18(0) <= 0x32)) {
                                this->UnknownAction2(12, 11);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        default:
                            break;
                    }
                } else {
                    switch (this->mUnk_34->mUnk_3D0) {
                        case 0:
                            if (this->func_ov089_02165a18(0) <= 1) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 2 && this->func_ov089_02165a18(0) <= 6)) {
                                this->UnknownAction2(2, 1);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 1:
                            if (this->func_ov089_02165a18(0) <= 5) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 6 && this->func_ov089_02165a18(0) <= 7)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 8 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 0xA && this->func_ov089_02165a18(0) <= 11)) {
                                this->UnknownAction2(4, 3);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 2:
                            if (this->func_ov089_02165a18(0) <= 3) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 6)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 7 && this->func_ov089_02165a18(0) <= 0xB)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 0xC && this->func_ov089_02165a18(0) <= 0xE)) {
                                this->UnknownAction2(4, 3);
                            } else if (this->func_ov089_02165a18(0) >= 0xF && this->func_ov089_02165a18(0) <= 0x10) {
                                this->UnknownAction2(5, 4);
                            } else if ((this->func_ov089_02165a18(0) >= 0x11 && this->func_ov089_02165a18(0) <= 0x13)) {
                                this->UnknownAction2(6, 5);
                            } else if ((this->func_ov089_02165a18(0) >= 0x14 && this->func_ov089_02165a18(0) <= 0x16)) {
                                this->UnknownAction2(7, 6);
                            } else if (this->func_ov089_02165a18(0) >= 0x17 && this->func_ov089_02165a18(0) <= 0x18) {
                                this->UnknownAction2(8, 7);
                            } else if (this->func_ov089_02165a18(0) >= 0x19 && this->func_ov089_02165a18(0) <= 0x1C) {
                                this->UnknownAction2(9, 8);
                            } else if ((this->func_ov089_02165a18(0) >= 0x1D && this->func_ov089_02165a18(0) <= 0x21)) {
                                this->UnknownAction2(10, 9);
                            } else if ((this->func_ov089_02165a18(0) >= 0x22 && this->func_ov089_02165a18(0) <= 0x24)) {
                                this->UnknownAction2(11, 10);
                            } else if ((this->func_ov089_02165a18(0) >= 0x25 && this->func_ov089_02165a18(0) <= 0x27)) {
                                this->UnknownAction2(12, 11);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        default:
                            break;
                    }
                }

                break;
        }
    } else {
        this->mUnk_40 = 1;
        this->mUnk_41 = 0;
    }

    return true;
}

void ActorUnkVCFT_328::func_ov066_0215ac68(UnkDataStruct5 *param1) {
    this->mUnk_30 = param1;
}

ActorUnkVCFT::ActorUnkVCFT() :
    ActorCharacter_Derived1(&this->mUnk_24C, GET_PROFILE(ActorProfileUnkVCFT)->vfunc_04()),
    mUnk_24C(G3d_GetModelPtr(GET_PROFILE(ActorProfileUnkVCFT)->vfunc_04()->mUnk_50)),
    mUnk_2BC(&this->mUnk_24C, GET_PROFILE(ActorProfileUnkVCFT)->vfunc_04()),
    mUnk_328(this),
    mUnk_36C(this),
    mUnk_3D0(-1),
    mUnk_3D4(0) {
    *(u16 *) &this->mUnk_3D8.value = 0;
    this->mUnk_3D8.max             = 300;

    *(u16 *) &this->mUnk_3DC.value = 0;
    this->mUnk_3DC.max             = 120;

    this->mUnk_3E0.SetAlt(0, 0);
    this->mUnk_3E4 = 0;
    this->mUnk_3E8 = false;
    this->mUnk_3E9 = false;
    this->mUnk_3EA = false;
    this->mUnk_0B8 = data_ov066_02160018;
    this->mUnk_3EC = gSaveManager.mUnk_000->unk_B78.unk_2E;
}

unk32 ActorUnkVCFT::vfunc_7C(unk32 param1) {
    UnkStackStruct2 sp0;
    UnkStruct_ov000_020b504c_28 *temp_r0;

    switch (param1) {
        case 0:
            this->mUnk_3D0++;
            this->mUnk_3D8.Set(0, 300);
            this->mUnk_328.func_ov066_02158eb4();

            switch (data_02049be0.mUnk_00) {
                case 0:
                    this->mUnk_328.func_ov066_0215ac68(&data_ov066_0216080c[this->mUnk_3D0]);
                    data_ov089_02171540.func_ov089_02165c80(&data_ov066_0216080c[this->mUnk_3D0], &this->mUnk_328);
                    break;
                case 2:
                    this->mUnk_328.func_ov066_0215ac68(&data_ov066_02160500[this->mUnk_3D0]);
                    data_ov089_02171540.func_ov089_02165c80(&data_ov066_02160500[this->mUnk_3D0], &this->mUnk_328);
                    break;
                case 3:
                    if (func_02014fe0() == 2) {
                        this->mUnk_328.func_ov066_0215ac68(&data_ov066_02161130[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80(&data_ov066_02161130[this->mUnk_3D0], &this->mUnk_328);
                    } else {
                        this->mUnk_328.func_ov066_0215ac68(&data_ov066_0216143c[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80(&data_ov066_0216143c[this->mUnk_3D0], &this->mUnk_328);
                    }
                    break;
                case 5:
                    if (func_02014fe0() == 2) {
                        this->mUnk_328.func_ov066_0215ac68(&data_ov066_021601f4[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80(&data_ov066_021601f4[this->mUnk_3D0], &this->mUnk_328);
                    } else {
                        this->mUnk_328.func_ov066_0215ac68(&data_ov066_02161748[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80(&data_ov066_02161748[this->mUnk_3D0], &this->mUnk_328);
                    }
                    break;
                case 4:
                    this->mUnk_328.func_ov066_0215ac68(&data_ov066_02160b18[this->mUnk_3D0]);
                    data_ov089_02171540.func_ov089_02165c80(&data_ov066_02160b18[this->mUnk_3D0], &this->mUnk_328);
                    break;
                case 1:
                default:
                    if (func_02014fe0() == 2) {
                        this->mUnk_328.func_ov066_0215ac68(&data_ov066_02160e24[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80(&data_ov066_02160e24[this->mUnk_3D0], &this->mUnk_328);
                    } else {
                        this->mUnk_328.func_ov066_0215ac68(&data_ov066_02161a54[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80(&data_ov066_02161a54[this->mUnk_3D0], &this->mUnk_328);
                    }
                    break;
            }

            this->mUnk_3E8 = true;
            this->mUnk_3E0.Init();
            this->vfunc_98(7);
            break;
        case 5:
            this->mUnk_3D8.Set(0, 300);
            this->mUnk_328.func_ov066_02158eb4();

            switch (data_02049be0.mUnk_00) {
                case 0:
                    this->mUnk_328.func_ov066_0215ac68(&data_ov066_0216080c[this->mUnk_3D0]);
                    data_ov089_02171540.func_ov089_02165c80(&data_ov066_0216080c[this->mUnk_3D0], &this->mUnk_328);
                    break;
                case 2:
                    this->mUnk_328.func_ov066_0215ac68(&data_ov066_02160500[this->mUnk_3D0]);
                    data_ov089_02171540.func_ov089_02165c80(&data_ov066_02160500[this->mUnk_3D0], &this->mUnk_328);
                    break;
                case 3:
                    if (func_02014fe0() == 2) {
                        this->mUnk_328.func_ov066_0215ac68(&data_ov066_02161130[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80(&data_ov066_02161130[this->mUnk_3D0], &this->mUnk_328);
                    } else {
                        this->mUnk_328.func_ov066_0215ac68(&data_ov066_0216143c[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80(&data_ov066_0216143c[this->mUnk_3D0], &this->mUnk_328);
                    }
                    break;
                case 5:
                    if (func_02014fe0() == 2) {
                        this->mUnk_328.func_ov066_0215ac68(&data_ov066_021601f4[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80(&data_ov066_021601f4[this->mUnk_3D0], &this->mUnk_328);
                    } else {
                        this->mUnk_328.func_ov066_0215ac68(&data_ov066_02161748[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80(&data_ov066_02161748[this->mUnk_3D0], &this->mUnk_328);
                    }
                    break;
                case 4:
                    this->mUnk_328.func_ov066_0215ac68(&data_ov066_02160b18[this->mUnk_3D0]);
                    data_ov089_02171540.func_ov089_02165c80(&data_ov066_02160b18[this->mUnk_3D0], &this->mUnk_328);
                    break;
                case 1:
                default:
                    if (func_02014fe0() == 2) {
                        this->mUnk_328.func_ov066_0215ac68(&data_ov066_02160e24[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80(&data_ov066_02160e24[this->mUnk_3D0], &this->mUnk_328);
                    } else {
                        this->mUnk_328.func_ov066_0215ac68(&data_ov066_02161a54[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80(&data_ov066_02161a54[this->mUnk_3D0], &this->mUnk_328);
                    }
                    break;
            }

            this->mUnk_3E8 = true;
            this->mUnk_3E0.Init();
            this->vfunc_98(7);
            break;
        case 1:
            data_ov089_02171540.func_ov089_02165d9c();
            this->mUnk_3E8 = false;
            this->mUnk_3E0.Init();
            this->vfunc_98(5);
            break;
        case 2:
            GetAdventureModeManager()->func_ov024_020c6a48(4, 0);
            this->mAngle  = 0;
            sp0           = data_ov066_0215d830;
            sp0.s.mUnk_06 = this->mAngle.angle_s;
            data_027e09bc->mUnk_04[2]->func_ov000_0207834c(&this->mPos, &sp0, 0);

            temp_r0                                              = data_ov000_020b504c.func_ov000_02067bc4(0);
            temp_r0->mUnk_08->mUnk_020.mCellAnim.unk_34          = (void *) 0xC;
            temp_r0->mUnk_08->mUnk_020.mCellAnim.unk_38          = 1;
            temp_r0->mUnk_08->mUnk_020.mCellAnim.animCtrl.unk_1C = (void *) UnkMsgDataStruct1::func_ov066_0215b2f4;
            break;
        case 3:
            GetAdventureModeManager()->func_ov024_020c6a48(4, 1);
            data_027e09bc->mUnk_04[2]->func_ov000_02078230(0);
            this->mUnk_3D0 = -1;
            this->vfunc_98(0);
            break;
        case 4:
            if (this->mUnk_3EA) {
                if (this->mUnk_3DC.HasExpired()) {
                    switch (this->mUnk_094.mUnk_0C->vfunc_30()) {
                        case 3:
                            this->vfunc_98(4);
                            this->func_ov066_0215b938();
                            return 0;
                        case 4:
                            if (this->mUnk_094.mUnk_0C->vfunc_28()->func_01ff8fa8() == 0) {
                                return 0;
                            }

                            this->vfunc_98(2);
                            this->mUnk_3EA = false;
                            return 1;
                        default:
                            break;
                    }
                } else {
                    return 0;
                }
            } else {
                this->vfunc_98(3);
                this->mUnk_3EA = true;
                this->mUnk_3DC.Set(0, 120);
                this->func_ov066_0215b8c4();
                data_ov000_020b51b8.func_ov000_0206d274(0x140);
                return 0;
            }
            break;
        default:
            break;
    }

    return 1;
}

void UnkMsgDataStruct1::func_ov066_0215b2f4(UnkMsgDataStruct1 *thisx, s32 param2) {
    UnkStruct_ov000_020b3000 sp4(ActorId_VCFT);

    Actor **temp_r0 = gpActorManager->func_01fff350(&sp4, gpActorManager->mActorTable);

    ActorUnkVCFT *var_r3 = NULL;
    if (temp_r0 != gpActorManager->mUnk_08) {
        RefStruct ref = (*temp_r0)->mRef;
        var_r3        = (ActorUnkVCFT *) gpActorManager->func_01fff3b4(ref);
    }

    UnkStruct_ov000_020b504c_Sub3 *ptr = data_ov000_020b504c.mUnk_000;

    //! @bug: `var_r3` can be NULL
    switch (param2) {
        case 0:
            thisx->func_ov000_02067a60(ptr, data_ov066_0215d7d8[var_r3->mUnk_328.mUnk_3C]);
            break;
        case 1:
            if (data_02049be0.mUnk_00 == 0) {
                thisx->func_ov000_02067a60(ptr, data_ov066_0215d7f0[var_r3->mUnk_328.mUnk_3C]);
            } else {
                thisx->func_ov000_02067a60(ptr, data_ov066_0215d7e0[var_r3->mUnk_328.mUnk_3C]);
            }
            break;
        case 2:
            thisx->func_ov000_02067a60(ptr, data_ov066_0215d800[var_r3->mUnk_328.mUnk_3C]);
            break;
        case 3:
            thisx->func_ov000_02067a60(ptr, data_ov066_0215d850[var_r3->mUnk_3D4]);
            break;
        default:
            thisx->mUnk_00 = data_ov066_02161d60;
            break;
    }
}

s16 ActorUnkVCFT::vfunc_80(unk32 param1, unk32 param2, unk32 param3) {
#pragma unused(param1, param2)

    if (param3 == 3) {
        this->mUnk_3D4 = gRandom.Next32(20);
        return (data_02049bac.mUnk_08 + this->mUnk_328.mUnk_38) % 5;
    }

    if (this->mUnk_3E0.max != 0) {
        if (!this->mUnk_3E0.HasExpired()) {
            return -1;
        }

        this->mUnk_3E0.Init();
        return this->mUnk_3E4;
    }

    switch (this->mUnk_328.func_ov089_02165a34()) {
        case 0:
            this->mUnk_3B0.func_ov089_0216642c(0);
            break;
        case 1:
            this->mUnk_3B0.func_ov089_0216642c(1);
            break;
        case 2:
            if (this->mUnk_328.mUnk_41 != 0) {
                this->mUnk_3B0.func_ov089_0216642c(2);
            } else {
                this->mUnk_3B0.func_ov089_0216642c(3);
            }
            break;
        case 3:
            this->mUnk_3B0.func_ov089_0216642c(3);
            break;
        default:
            break;
    }

    if (this->mUnk_3D8.HasExpired()) {
        this->mUnk_3D8.Set(0, 300);
        this->mUnk_3E8 = false;
        return 2;
    }

    if (this->mUnk_328.mUnk_40 != 0) {
        this->mUnk_3E0.Set(0, 30);

        if (this->mUnk_328.mUnk_41 != 0) {
            this->mUnk_3E4 = 0;
        } else {
            this->mUnk_3E4 = 1;
        }

        this->mUnk_328.mUnk_40 = 0U;
        return -1;
    }

    return -1;
}

void ActorUnkVCFT::vfunc_2C(unk32 param1) {
    this->Actor_Derived1::vfunc_2C(param1);

    if (this->mUnk_3E8) {
#if __MWERKS__
        Vec2s vec(0x80, 0xA0);
        this->mUnk_3B0.mUnk_1C.coords = vec.coords;
#else
        this->mUnk_3B0.mUnk_1C = Vec2s(0x80, 0xA0);
#endif

        UnkStruct_027e0954_00 *ptr = &data_027e0954->mUnk_00[1];
        ptr->mUnk_04.Prepend((ActorUnkVCFT_3B0 *) GetLinkListRef(this->mUnk_3B0));
    }
}

void ActorUnkVCFT::Update(void) {
    s16 sp0;

    func_ov000_020986b4(&sp0, this, 0);

    if (((u32) ((sp0 + 0x2000) << 0x10) >> 0x1E) == 2) {
        this->mUnk_4A[0] = 0;
    } else {
        this->mUnk_4A[0] = 5;
    }

    this->ActorCharacter::Update();

    if (this->mUnk_3E9) {
        this->mUnk_2BC.vfunc_34();
    }

    this->mUnk_3B0.func_ov089_021664b8();

    if (this->mUnk_3E8) {
        data_ov000_020b51b8.func_ov000_0206c608(8, 0, 0x1000);
    }
}

void ActorUnkVCFT::vfunc_98(u32 index) {
    if (index < 8) {
        this->mUnk_094.mUnk_0C->vfunc_1C(this->mUnk_0B8[index], 0x1000, 0x19A, 0);

        switch (index) {
            case 4:
                this->func_ov066_0215b864(0);
                break;
            case 3:
            case 7:
                this->func_ov066_0215b864(1);
                break;
            case 0:
            case 2:
            case 5:
                this->func_ov066_0215b848();
                break;
            default:
                break;
        }

        if (!(index != 3 && index != 4)) {
            this->mUnk_0B0 |= 0x10;
        } else {
            this->mUnk_0B0 &= ~0x10;
        }
    }

    if (index < 0x32) {
        return;
    }

    if (index < 0x34) {
        if (index == 0x32) {
            this->func_ov066_0215b848();
        } else {
            this->func_ov066_0215b864(index - 0x33);
        }
    }
}

void ActorUnkVCFT::vfunc_0BC(void) {
    this->ActorCharacter::vfunc_0BC();
    this->func_ov066_0215b848();
}

void ActorUnkVCFT::func_ov066_0215b848(void) {
    this->mUnk_2BC.mUnk_08->func_ov000_02057cf4();
    this->mUnk_3E9 = false;
}

void ActorUnkVCFT::func_ov066_0215b864(s32 index) {
    this->mUnk_2BC.func_ov000_02099ddc(data_ov066_0215ffe8[index], 0x1000, 0);
    this->mUnk_3E9 = true;
}

void ActorUnkVCFT::func_ov066_0215b8c4(void) {
    UnkStruct_ov000_020b3000 sp0(ActorId_RMW0);
    ActorManager *pActorMgr = gpActorManager;

    Actor **temp_r0 = pActorMgr->func_01fff350(&sp0, pActorMgr->mActorTable);

    if (temp_r0 != pActorMgr->mUnk_08) {
        ActorUnkRMW0 *pActor = (ActorUnkRMW0 *) pActorMgr->func_01fff3b4((*temp_r0)->mRef);

        if (pActor != NULL) {
            pActor->func_ov066_0215c80c();
        }
    }
}

void ActorUnkVCFT::func_ov066_0215b938(void) {
    UnkStruct_ov000_020b3000 sp0(ActorId_RMW0);
    ActorManager *pActorMgr = gpActorManager;

    Actor **temp_r0 = pActorMgr->func_01fff350(&sp0, pActorMgr->mActorTable);

    if (temp_r0 != pActorMgr->mUnk_08) {
        ActorUnkRMW0 *pActor = (ActorUnkRMW0 *) pActorMgr->func_01fff3b4((*temp_r0)->mRef);

        if (pActor != NULL) {
            pActor->func_ov066_0215c868();
        }
    }
}
