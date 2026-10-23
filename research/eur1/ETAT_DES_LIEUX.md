# État des lieux — The Legend of Zelda: Spirit Tracks (NDS, Europe Rev 1)

Date de l'analyse : 23 octobre 2026.

## Résultats vérifiés sur la ROM envoyée

| Élément | Résultat | Statut |
|---|---:|---|
| Identification de la ROM | `SPIRITTRACKS`, code `BKIP`, Rev 1 | Vérifié |
| Taille physique de la ROM | 134 217 728 octets (128 Mio) | Vérifié |
| SHA-1 ROM complète | `dcb221a89acb894503a461c2c7d4cfdad9a06b68` | Vérifié, référencé par zeldaret/st `eur1` |
| ARM9 principal | 214 848 octets compressés ; 314 872 décompressés | BLZ réussi |
| ARM7 principal | 160 048 octets | Extrait, pas de BLZ détecté |
| Overlays ARM9 | 114 | 114/114 décompressés |
| Overlays ARM7 | 0 | Aucun déclaré |
| Total des overlays décompressés | 4 681 024 octets | Vérifié |
| Concordance taille attendue overlays | 114/114 | Vérifiée |
| Entrées FAT | 3 556 | Vérifié |
| Fichiers NitroFS nommés | 3 442 | FNT entièrement lue sans erreur |
| Candidats fonction ARM/Thumb (toutes qualités confondues) | 27 785 | Heuristique, non exhaustif |
| Candidats avec prologue ET cible BL interne | 9 248 | Heuristique, faux positifs possibles |
| Fonctions traduites manuellement en C | 3 | Traductions **préliminaires** |
| Validité syntaxique C | OK | Vérifiée par Clang |
| Matching code machine de ces C | Non mesuré | NON validé |
| Build ROM recompilé / test DS | Aucun | Non réalisé |
| Port PC | Aucun | Non réalisé |

Le grand nombre de candidats n'est **pas** le nombre de fonctions authentifiées ou décompilées ; les tables de données peuvent accidentellement imiter des instructions. Les cibles d'appels externes et appels indirects ne sont pas comptés.

## Sous-systèmes / familles de ressources visibles

L'inventaire NitroFS révèle des ressources pour les cartes et donjons (`Map/`), le personnage (`Player/`), les langues (`English/`, `French/`, etc.), le son (`SoundData/final_sound_data.sdat`), et les séquences de train (`train`, `TrainS.bin`). Le catalogue compte notamment 1 148 fichiers `.nsbtx`, 262 `.narc`, 151 `.bmg`, 97 `.nsbmd`, 47 `.nsbca` et 61 `.spa`.

Ces noms montrent l'organisation des assets, pas l'existence d'un code C décompilé correspondant.

## Trois fonctions C reconstruites

1. **ARM9 `0x0200093C`** : remplissage d'une plage mémoire par mots 32 bits ; reconstruction de la boucle et du registre de retour.
2. **Overlay 1, Thumb `0x020B6560`** : appel à l'allocateur puis initialisation conditionnelle d'un objet ; signatures des appels inférées.
3. **Overlay 0, ARM `0x02051AE0`** : interpolation de trois valeurs signées 16 bits, selon deux seuils temporels codés sur un octet ; écrit un résultat 16 bits à l'offset +0x34 ; l'appel de division a été observé à `0x0203A1BC`.

Les reconstructions et les petites tranches de désassemblage servant de preuve se trouvent dans `src/` et `asm/`.

## Rapport avec le projet de référence

La communauté **zeldaret/st** travaille déjà sur une décompilation *matching* de Spirit Tracks ; elle accepte la version `eur1` examinée. Une consultation du tableau `decmp.dev` montre une progression publique proche de **10,32 % de code matching** autour du 23 octobre 2026. **Ceci est un indicateur externe du projet communautaire, pas le taux produit par nos trois fonctions, ni un taux calculé sur la ROM locale.** La mesure peut évoluer.

- Référentiel : https://github.com/zeldaret/st
- Instructions : https://github.com/zeldaret/st/blob/main/INSTALL.md
- Empreintes eur1 : https://github.com/zeldaret/st/blob/main/st_eur1.sha1
- Indicateur externe : https://www.decmp.dev/

## Suite conseillée

Travailler dans `zeldaret/st` comme base principale et y importer seulement les résultats qui sont vérifiés. Pour chaque nouvelle fonction : identifier un début et une fin certains par CFG/débogueur, documenter la convention ARM/Thumb et les adresses d'appels, écrire un C/C++ lisible, recompiler avec le toolchain d'origine et vérifier le matching des instructions, puis tester la ROM reconstruite avec une base légalement obtenue.

L'analyse automatique des 114 overlays est une première étape reproductible ; elle ne remplace ni l'identification des fonctions ni une décompilation complète.
