# Spirit Tracks — décompilation préparatoire au futur port PC natif

**Objectif final :** démarrer et jouer à *The Legend of Zelda: Spirit Tracks* sans émulateur Nintendo DS. **Ce document n'est pas un port PC et ne lance pas le jeu.** Nous continuons maintenant à reconstruire, documenter et vérifier le code Nintendo DS. Cible ROM de recherche : **Europe Rev 1 (BKIP)**.

## Architecture concrète déjà observée dans le code du dépôt

| Rang | Système | Sources existantes | Preuve dans le code | Travail de décompilation à terminer |
| --- | --- | --- | --- | --- |
| P0 | Initialisation | [`src/Main/Main.cpp`](../../src/Main/Main.cpp) | `Entry()` initialise mémoire, registres/caches puis appelle `main()` | Corriger les fonctions `non-matching`; isoler l'ordre des initialisations, la gestion mémoire et les interruptions |
| P0 | Boucle de jeu | [`src/Main/Game/Game.cpp`](../../src/Main/Game/Game.cpp) | `main() -> gGame.Run()`; `Game::Run()` sélectionne le mode, exécute les méthodes virtuelles, synchronise les frames et soumet le rendu | Reconstituer un diagramme de frame et les signatures de tous les appels non résolus; établir des traces reproductibles sur DS |
| P0 | Modes et scènes | [`src/Main/Game/GameModeBase.cpp`](../../src/Main/Game/GameModeBase.cpp), [`src/Main/System/OverlayManager.cpp`](../../src/Main/System/OverlayManager.cpp) | Modes à méthodes virtuelles; `FS_LoadOverlay`/`FS_UnloadOverlay` par slot | Cartographier les transitions et l'appartenance des fonctions/data aux 114 overlays ARM9, pas seulement les adresses brutes |
| P0 | Écran-titre et passage au menu | [`src/025_Title/TitleScreen.cpp`](../../src/025_Title/TitleScreen.cpp), [`GameModeTitleScreen.cpp`](../../src/025_Title/GameModeTitleScreen.cpp) | États `IdleBeforeUI`, `DrawUIOnInput`, `IdleBeforeFileSelect`, `ToFileSelect`; touch/PAD en entrée | Vérifier conditions de transitions, animations, chronologie de rendu; tester un parcours titre -> sélection de fichier |
| P0 | Sauvegardes | [`src/001_SceneInit/Save/SaveManager_001.cpp`](../../src/001_SceneInit/Save/SaveManager_001.cpp) | Copie structurée des slots, accès `CARD_ReadFlashAsync`, double exemplaire et contrôle d'intégrité | Documenter le format exact des blocs, CRC/checksum, valeurs d'erreur, tests aller-retour et reprise après sauvegarde corrompue |
| P0 | Entrée tactile | Références `TouchControl` dans les écrans et `GameModeManagerBase` | Transitions utilisant `mFlags`, `CHECK_TOUCH_FLAGS`, `PAD_BUTTON_START` | Retrouver les états press/hold/release, coordonnées DS et séquence de lecture par frame |
| P1 | Logique du train | [`src/026_Train/code_02102924.cpp`](../../src/026_Train/code_02102924.cpp) et sous-dossiers Train | `TrainSpeedPreset` (marche arrière, arrêt, vitesse lente/rapide) | Extraire la logique d'accélération, de freinage, collisions, itinéraires et events avant toute adaptation matérielle |
| P1 | Progression/objets | [`src/024_MainGame/MiscAdvManager.cpp`](../../src/024_MainGame/MiscAdvManager.cpp) | Courrier, tampons, cartes, compteurs et dates | Vérifier valeurs limites et disposition binaire des données persistantes |
| P1 | Aléatoire | [`src/Main/System/Random.cpp`](../../src/Main/System/Random.cpp) | `Random::Init()` initialise une graine depuis les fonctions existantes | Documenter graine et répétabilité pour rejouer les mêmes entrées, une frame à la fois |
| P1 | Ressources, audio et rendu | Assets de la ROM utilisateur, NitroFS/Nitro SDK et usages GX/NNS dans `src/` | Systèmes matériels utilisés dans les fonctions ci-dessus | Identifier formats et dépendances **sans** copier de ROM/ressources propriétaires dans GitHub |

## Ce que nous devons préserver pour éviter de repartir de zéro

1. **Sémantique de la boucle de jeu :** l'ordre initialisation -> entrée -> simulation -> mise à jour -> rendu -> synchronisation. Le code `Game::Run()` prouve que le jeu est largement plus complexe qu'une collection de 1 000 fonctions isolées.
2. **Frontières matériel/jeu :** DS registers, GX, FS/overlays, CARD, interruption, tactile, audio. Ne pas transformer maintenant les sources originales en appels SDL ou DirectX ; **recenser les contrats** en premier.
3. **État portable :** classes, struct layout, tailles, flags, sauvegardes, données de scènes. Une traduction conceptuelle qui corrompt l'état du jeu est inutile même si elle compile sur PC.
4. **Transitions :** titre -> sélection de sauvegarde -> démarrage de partie -> contrôle de Link/train -> sauvegarde/chargement. C'est la future chaîne de validation fonctionnelle.
5. **Tests :** utiliser une ROM EUR Rev 1 décryptée, dump personnel si nécessaire, puis comparer traces et sorties de la même séquence de jeu. Ne pas confondre désassemblage, fonctions candidates, source approchante, code Clang identique et matching CodeWarrior.

## Livrables et jalons de décompilation

- [x] ROM EUR Rev 1 identifiée ; ARM9, ARM7 et overlays extraits localement
- [x] Arbre de source `zeldaret/st` réutilisé dans `zeranemesis/st`
- [x] Lot de 1 000 fonctions répertoriées avec statuts explicites (ne signifie pas 1 000 fonctions décompilées)
- [x] Points d'entrée `main`, `Game::Run`, `OverlayManager`, écran-titre et sauvegarde localisés dans les sources existantes
- [x] Outil d'inventaire des usages de l'API DS et marqueurs `non-matching` ajouté
- [ ] **Établir la compilation de référence `eur1`** via `ninja` sur le PC utilisateur avec la ROM locale
- [ ] Compléter la décompilation et les tests des chemins `Entry` / `Game::Run` / overlay / écran-titre
- [ ] Produire la table ROM -> fichier de code -> fonction -> appels -> dépendances -> statut
- [ ] Tracer et vérifier les callbacks de la frame et les transitions de modes sous émulateur DS
- [ ] Documenter et vérifier la gestion du tactile, des sauvegardes et des assets dans leurs formats DS
- [ ] Couvrir le chargement d'une partie et une séquence réelle de gameplay (incluant train)
- [ ] **Plus tard seulement :** écrire les couches de plateforme PC (fenêtre, manette/souris/tactile, rendu, audio, fichiers) et l'exécutable natif

## Audit reproductible, sans ROM

Le script [`scripts/decomp_readiness.py`](scripts/decomp_readiness.py) parcourt seulement les `.cpp` de `src/` et produit un JSON contenant des marqueurs de dépendances matérielles et de code à examiner. Ces métriques sont **lexicales**, non des taux de décompilation.

```powershell
python research/eur1/scripts/decomp_readiness.py --verify-core --out research/eur1/reports/decomp_readiness_local.json
python -m unittest discover -s research/eur1/scripts -p test_decomp_readiness.py -v
```

Le JSON de travail peut rester local. Aucun binaire ni asset Nintendo n'est nécessaire pour cet audit de source.

**Règle de priorité :** choisir les prochains groupes de fonctions selon leur utilité pour le chemin démarrage -> titre -> jeu -> sauvegarde, pas leur seule petite taille. Le pourcentage officiel CodeWarrior est un indicateur utile, mais un port jouable demandera surtout une couverture *fonctionnelle* réelle et des tests d'intégration.
