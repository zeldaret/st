# Overlays
Below is a list of all the overlays and what they called them. These can also be found in `OverlayManager.hpp`. Feel free to
contribute to this list!

Each overlay is tied to an index which is used to access the overlay in two different arrays:
- `data_0203e0e8`: maps the overlay index to the original ID.
- `data_02043c88`: maps the overlay index to its internal name (which is how we know how their names).

 ID   | Internal Name     | Index   | Slot | Description
------|-------------------|---------|------|-------------
`000` | Second            | `000`   | `0`  | Core game engine
`001` | SceneInit         | `001`   | `1`  |
`002` | Collect           | `002`   |      |
`003` | SoftKeyboard      | `003`   |      |
`004` | Factory           | `014`   |      |
`005` | NormalScreen      | `004`   |      |
`006` | Paint             | `005`   |      |
`007` | RailEdit          | `006`   |      |
`008` | GameOver          | `007`   |      |
`009` | CloseUp           | `009`   |      |
`010` | TabMenu           | `008`   |      |
`011` | WorldMap          | `010`   |      |
`012` | PanFlute          | `011`   |      |
`013` | TetsuoMap         | `012`   |      |
`014` | Stamp             | `013`   |      |
`015` | Shop              | `015`   |      |
`016` | RabbitCapture     | `016`   |      |
`017` | CourseExec        | `017`   |      |
`018` | StartUp           | `021`   | `4`  | Exists briefly on game startup. Initializes RNG, messages, and more.
`019` | MainSelect        | `024`   |      | File Select
`020` | WirelessCommon    | `025`   |      |
`021` | BattleGame        | `026`   |      |
`022` | Download          | `027`   |      | Handles DS download play.
`023` | Wxc               | `028`   |      |
`024` | MainGame          | `022`   |      |
`025` | Title             | `023`   | `4`  | Title Screen
`026` | Train             | `030`   |      |
`027` | TrainForest       | `058`   |      |
`028` | TrainSnow         | `059`   |      |
`029` | TrainWater        | `060`   |      |
`030` | TrainFlame        | `061`   |      |
`031` | Land              | `029`   |      |
`032` | MapA1             | `077`   |      |
`033` | MapA2             | `078`   |      |
`034` | MapA3             | `079`   |      |
`035` | MapA4             | `080`   |      |
`036` | MapA5             | `081`   |      |
`037` | MapA6             | `082`   |      |
`038` | MapA7             | `083`   |      |
`039` | MapA8             | `084`   |      |
`040` | MapB1             | `085`   |      |
`041` | MapB2             | `086`   |      |
`042` | MapB3             | `087`   |      |
`043` | MapB4             | `088`   |      |
`044` | MapB5             | `089`   |      |
`045` | MapB6             | `090`   |      |
`046` | MapB7             | `091`   |      |
`047` | MapC1             | `092`   |      |
`048` | MapC2             | `093`   |      |
`049` | MapC3             | `094`   |      |
`050` | MapC4             | `095`   |      |
`051` | MapC5             | `096`   |      |
`052` | MapC6             | `097`   |      |
`053` | MapD1             | `098`   |      |
`054` | MapD2             | `099`   |      |
`055` | MapD3             | `100`   |      |
`056` | MapD4             | `101`   |      |
`057` | MapD5             | `102`   |      |
`058` | Field             | `032`   |      |
`059` | InTrain           | `047`   |      |
`060` | Castle            | `048`   |      |
`061` | CastleTown        | `049`   |      |
`062` | Village           | `050`   |      |
`063` | Shrine            | `051`   |      |
`064` | FldForest         | `052`   |      |
`065` | FldSnow           | `053`   |      |
`066` | FldWater          | `054`   |      |
`067` | FldFlame          | `055`   |      |
`068` | FldAjito          | `056`   |      |
`069` | FldRabbit         | `057`   |      |
`070` | Dungeon           | `031`   |      |
`071` | Tower             | `033`   | `8`  |
`072` | TowerLobby        | `034`   |      |
`073` | BossDeago         | `040`   | `8`  |
`074` | BossLast1         | `041`   | `8`  |
`075` | BossLast2         | `042`   | `8`  |
`076` | DgnLv1            | `071`   |      |
`077` | DgnForest         | `043`   |      |
`078` | BossForest        | `035`   |      |
`079` | DgnSnow           | `044`   |      |
`080` | BossSnow          | `036`   |      |
`081` | DgnLv3            | `072`   |      |
`082` | DgnWater          | `045`   |      |
`083` | BossWater         | `037`   |      |
`084` | BossFlame         | `038`   |      |
`085` | DgnLv5            | `073`   |      |
`086` | DgnDesert         | `046`   |      |
`087` | BossDesert        | `039`   |      |
`088` | Stb               | `062`   |      |
`089` | ASR               | `063`   |      |
`090` | TrainNormal       | `066`   |      |
`091` | TrainExtra        | `067`   |      |
`092` | TrainDark         | `068`   |      |
`093` | PlayerSub         | `064`   |      |
`094` | Land2             | `065`   |      |
`095` | PlayerPhantom     | `069`   |      |
`096` | PlayerZelda       | `070`   |      |
`097` | TrainMsg          | `076`   |      |
`098` | MapWater          | `074`   |      |
`099` | MapLava           | `075`   |      |
`100` | CollectMsg        | `020`   |      |
`101` | SceneInitLand     | `018`   |      |
`102` | CourseExecLand    | `019`   |      |
`103` | PlayerTornado     | `103`   |      | Handles the Whirlwind.
`104` | PlayerBoomerang   | `104`   |      | Handles the Boomerang.
`105` | PlayerWhip        | `105`   |      | Handles the Whip.
`106` | PlayerBow         | `106`   |      | Handles the Bow.
`107` | PlayerSandrock    | `107`   |      | Handles the Sand Wand.
`108` | PlayerPanFlute    | `109`   |      | Handles the Spirit Flute.
`109` | PlayerBomb        | `108`   |      | Handles the Bombs (and potions?)
`110` | PlayerGet         | `110`   |      |
`111` | PlayerDown        | `111`   |      |
`112` | PlayerSceneChange | `112`   |      |
`113` | PlayerDemo        | `113`   |      |
