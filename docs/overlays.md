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
`002` | Collect           | `002`   | `1`  |
`003` | SoftKeyboard      | `003`   | `1`  |
`004` | Factory           | `014`   | `1`  | The train part screen, either when editing the train or preview the parts
`005` | NormalScreen      | `004`   | `1`  |
`006` | Paint             | `005`   | `1`  | Map drawing
`007` | RailEdit          | `006`   | `1`  |
`008` | GameOver          | `007`   | `1`  |
`009` | CloseUp           | `009`   | `1`  |
`010` | TabMenu           | `008`   | `1`  |
`011` | WorldMap          | `010`   | `1`  |
`012` | PanFlute          | `011`   | `1`  |
`013` | TetsuoMap         | `012`   | `1`  |
`014` | Stamp             | `013`   | `1`  |
`015` | Shop              | `015`   | `1`  |
`016` | RabbitCapture     | `016`   | `1`  |
`017` | CourseExec        | `017`   | `2`  |
`018` | StartUp           | `021`   | `4`  | Exists briefly on game startup. Initializes RNG, messages, and more.
`019` | MainSelect        | `024`   | `4`  | File Select
`020` | WirelessCommon    | `025`   | `4`  |
`021` | BattleGame        | `026`   | `5`  |
`022` | Download          | `027`   | `5`  | Handles DS download play.
`023` | Wxc               | `028`   | `5`  |
`024` | MainGame          | `022`   | `4`  |
`025` | Title             | `023`   | `4`  | Title Screen
`026` | Train             | `030`   | `6`  |
`027` | TrainForest       | `058`   | `8`  |
`028` | TrainSnow         | `059`   | `8`  |
`029` | TrainWater        | `060`   | `8`  |
`030` | TrainFlame        | `061`   | `8`  |
`031` | Land              | `029`   | `6`  |
`032` | MapA1             | `077`   | `13` |
`033` | MapA2             | `078`   | `13` |
`034` | MapA3             | `079`   | `13` |
`035` | MapA4             | `080`   | `13` |
`036` | MapA5             | `081`   | `13` |
`037` | MapA6             | `082`   | `13` |
`038` | MapA7             | `083`   | `13` |
`039` | MapA8             | `084`   | `13` |
`040` | MapB1             | `085`   | `14` |
`041` | MapB2             | `086`   | `14` |
`042` | MapB3             | `087`   | `14` |
`043` | MapB4             | `088`   | `14` |
`044` | MapB5             | `089`   | `14` |
`045` | MapB6             | `090`   | `14` |
`046` | MapB7             | `091`   | `14` |
`047` | MapC1             | `092`   | `15` |
`048` | MapC2             | `093`   | `15` |
`049` | MapC3             | `094`   | `15` |
`050` | MapC4             | `095`   | `15` |
`051` | MapC5             | `096`   | `15` |
`052` | MapC6             | `097`   | `15` |
`053` | MapD1             | `098`   | `16` |
`054` | MapD2             | `099`   | `16` |
`055` | MapD3             | `100`   | `16` |
`056` | MapD4             | `101`   | `16` |
`057` | MapD5             | `102`   | `16` |
`058` | Field             | `032`   | `7`  |
`059` | InTrain           | `047`   | `8`  |
`060` | Castle            | `048`   | `8`  |
`061` | CastleTown        | `049`   | `8`  |
`062` | Village           | `050`   | `8`  |
`063` | Shrine            | `051`   | `8`  |
`064` | FldForest         | `052`   | `8`  |
`065` | FldSnow           | `053`   | `8`  |
`066` | FldWater          | `054`   | `8`  |
`067` | FldFlame          | `055`   | `8`  |
`068` | FldAjito          | `056`   | `8`  |
`069` | FldRabbit         | `057`   | `8`  |
`070` | Dungeon           | `031`   | `7`  |
`071` | Tower             | `033`   | `8`  | Tower of Spirit staircase
`072` | TowerLobby        | `034`   | `8`  | Tower of Spirit train station
`073` | BossDeago         | `040`   | `8`  |
`074` | BossLast1         | `041`   | `8`  |
`075` | BossLast2         | `042`   | `8`  |
`076` | DgnLv1            | `071`   | `11` |
`077` | DgnForest         | `043`   | `8`  |
`078` | BossForest        | `035`   | `8`  |
`079` | DgnSnow           | `044`   | `8`  |
`080` | BossSnow          | `036`   | `8`  |
`081` | DgnLv3            | `072`   | `11` |
`082` | DgnWater          | `045`   | `8`  |
`083` | BossWater         | `037`   | `8`  |
`084` | BossFlame         | `038`   | `8`  |
`085` | DgnLv5            | `073`   | `11` |
`086` | DgnDesert         | `046`   | `8`  |
`087` | BossDesert        | `039`   | `8`  |
`088` | Stb               | `062`   | `9`  |
`089` | ASR               | `063`   | `9`  |
`090` | TrainNormal       | `066`   | `9`  |
`091` | TrainExtra        | `067`   | `9`  |
`092` | TrainDark         | `068`   | `9`  |
`093` | PlayerSub         | `064`   | `9`  |
`094` | Land2             | `065`   | `9`  |
`095` | PlayerPhantom     | `069`   | `10` |
`096` | PlayerZelda       | `070`   | `10` |
`097` | TrainMsg          | `076`   | `12` |
`098` | MapWater          | `074`   | `12` |
`099` | MapLava           | `075`   | `12` |
`100` | CollectMsg        | `020`   | `3`  |
`101` | SceneInitLand     | `018`   | `3`  |
`102` | CourseExecLand    | `019`   | `3`  |
`103` | PlayerTornado     | `103`   | `17` | Handles the Whirlwind.
`104` | PlayerBoomerang   | `104`   | `17` | Handles the Boomerang.
`105` | PlayerWhip        | `105`   | `17` | Handles the Whip.
`106` | PlayerBow         | `106`   | `17` | Handles the Bow.
`107` | PlayerSandrock    | `107`   | `17` | Handles the Sand Wand.
`108` | PlayerPanFlute    | `109`   | `17` | Handles the Spirit Flute.
`109` | PlayerBomb        | `108`   | `17` | Handles the Bombs (and potions?)
`110` | PlayerGet         | `110`   | `17` |
`111` | PlayerDown        | `111`   | `17` |
`112` | PlayerSceneChange | `112`   | `17` |
`113` | PlayerDemo        | `113`   | `17` |
