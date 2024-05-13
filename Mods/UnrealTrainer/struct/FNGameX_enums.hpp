#pragma once
enum class EAIState
{
    None = 0,
    NonBattleTask = 1,
    BattleTask_Move = 2,
    BattleTask_Basic = 3,
    BattlaTask_Random = 4,
    BattleTask_Special = 5,
    SummonBackToMaster = 6,
    SummonForceMove = 7,
    ChangeStage = 8,
    EAIState_MAX = 9,
};

enum class EActorInteractionType
{
    EAT_None = 0,
    EAT_Interact = 1,
    EAT_MoveToInteract = 2,
    EAT_OutLine = 3,
    EAT_MAX = 4,
};

enum class EAnimationAxis
{
    Enum_OnlyX = 0,
    Enum_OnlyY = 1,
    Enum_Both = 2,
    Enum_MAX = 3,
};

enum EAppearancePartEnum
{
    EM_Default = 0,
    EM_Face = 1,
    EM_Hair = 2,
    EM_HairBehind = 3,
    EM_Makeup = 4,
    EM_EyeBrown = 5,
    EM_Eye = 6,
    EM_Nose = 7,
    EM_Mouth = 8,
    EM_EyeMakeup = 9,
    EM_ClothStyle = 10,
    EM_Bread = 11,
    EM_MAX = 12,
};

enum class EArenaCompetitionType
{
    EM_Neibi = 0,
    EM_Huangcheng = 1,
    EM_Wuzong = 2,
    EM_Zhaoqin = 3,
    EM_MAX = 4,
};

enum class EAttributeValueShowType
{
    EAVST_Normal = 0,
    EAVST_100Percent = 1,
    EAVST_ForceInt = 2,
    EAVST_MAX = 3,
};

enum class EBGMType
{
    BigWorld = 0,
    City = 1,
    ZongMen = 2,
    Battle = 3,
    Stop = 7,
    EBGMType_MAX = 8,
};

enum class EBagType
{
    EM_DEPOSITORY = 0,
    EM_BAG = 1,
    EM_EQUIP = 2,
    EM_MAX = 3,
};

enum class EBattleEndType
{
    None = 0,
    AutoComplete = 1,
    KillTarget = 2,
    KillAll = 3,
    DecreaseTargetHp = 4,
    KillCountWithinTime = 5,
    SurviveWithinTime = 6,
    KeepTargetAliveWithTime = 7,
    EBattleEndType_MAX = 8,
};

enum class EBattleResult
{
    None = 0,
    Victory = 1,
    Failure = 2,
    EBattleResult_MAX = 3,
};

enum class EBattleRoomType
{
    Default = 0,
    Award = 1,
    Event = 2,
    OnePath = 3,
    Normal = 4,
    Start = 5,
    Heal = 6,
    Boss = 7,
    EBattleRoomType_MAX = 8,
};

enum class EBattleType
{
    Enum_BrightRay = 0,
    Enum_FieldBattle = 1,
    Enum_NpcBattle = 2,
    Enum_SkyfallRift = 3,
    Enum_WorldRift = 4,
    Enum_ChaosRift = 5,
    Enum_InvadeRift = 6,
    Enum_MAX = 7,
};

enum class EBuffChangeType
{
    BuffAdd = 0,
    BuffStackChange = 1,
    BuffRemove = 2,
    EBuffChangeType_MAX = 3,
};

enum class EBuffDurationType
{
    EM_Infinite = 0,
    EM_BigWorldTurn = 1,
    EM_BattleTime = 2,
    EM_Instance = 3,
    EM_MAX = 4,
};

enum class EButtonState
{
    Normal = 0,
    Hovered = 1,
    Pressed = 2,
    Disabled = 3,
    EButtonState_MAX = 4,
};

enum class ECantCastAbilityType
{
    EM_Default = 0,
    EM_TargetTooFar = 1,
    EM_NoTarget = 2,
    EM_AbsenceCondition = 3,
    EM_Unavailable = 4,
    EM_MAX = 5,
};

enum class ECityScale
{
    EM_BigScale = 0,
    EM_MidScale = 1,
    EM_SmallScale = 2,
    EM_MAX = 3,
};

enum class EDaiGongType
{
    EM_DanYao = 0,
    EM_Equipment = 1,
    EM_MAX = 2,
};

enum class EDanLuSubtype
{
    EM_LianDan = 0,
    EM_LianQi = 1,
    EM_MAX = 2,
};

enum class EDaoYunType
{
    JIN = 0,
    SHUI = 1,
    MU = 2,
    HUO = 3,
    TU = 4,
    TIAN = 5,
    DI = 6,
    SHENG = 7,
    SI = 8,
    YU = 9,
    ZHOU = 10,
    None = 99,
    EDaoYunType_MAX = 100,
};

enum class EDeadzoneStick
{
    MoveStick = 0,
    LookStick = 1,
    EDeadzoneStick_MAX = 2,
};

enum class EDeathReasonType
{
    EDeathReasonType_Battle = 0,
    EDeathReasonType_Natural = 1,
    EDeathReasonType_ByEvent = 2,
    EDeathReasonType_InvadeDefend = 3,
    EDeathReasonType_InvadeCounterAttack = 4,
    EDeathReasonType_MAX = 5,
};

enum class EDescriptionType
{
    EM_LGZZ = 0,
    EM_WRCS = 1,
    EM_XXGW = 2,
    EM_XTTZ = 3,
    EM_ZDSY = 4,
    EM_MAX = 5,
};

enum EDropSubType
{
    EM_Lingshi = 0,
    EM_LQ = 1,
    EM_LQMax = 2,
    EM_SkillExp = 3,
    EM_JGLQ = 4,
    EM_LDZY = 5,
    EM_FLZF = 6,
    EM_FSKY = 7,
    EM_SWJZ = 8,
    EM_SkillPoint = 9,
};

enum class EDropType
{
    EM_Currency = 0,
    EM_Item = 1,
    EM_SubPack = 2,
    EM_MAX = 3,
};

enum class EEquipAffixValueGenerateType
{
    EM_None = 0,
    EM_Max = 1,
    EM_Min = 2,
    EM_Random = 3,
};

enum class EEquipTraitAscription
{
    EM_None = 0,
    EM_Base = 1,
    EM_Fixed = 2,
    EM_Extern = 3,
    EM_JingLian = 4,
    EM_MAX = 5,
};

enum class EEventShowType
{
    NONE = 0,
    OPTIONAL = 1,
    FORCE = 2,
    EEventShowType_MAX = 3,
};

enum class EEventTriggerType
{
    TURN = 0,
    MOVE = 1,
    BACKTOBIGWORLD = 2,
    EEventTriggerType_MAX = 3,
};

enum class EFNGameWidgetInputMode
{
    Default = 0,
    Game = 1,
    Menu = 2,
    EFNGameWidgetInputMode_MAX = 3,
};

enum class EForgeSecondType
{
    EM_None = 0,
    EM_Jin = 1,
    EM_Shui = 2,
    EM_Mu = 3,
    EM_Huo = 4,
    EM_Tu = 5,
    EM_MAX = 6,
};

enum class EGameDisplayablePerformanceStat
{
    ClientFPS = 0,
    IdleTime = 1,
    FrameTime = 2,
    FrameTime_GameThread = 3,
    FrameTime_RenderThread = 4,
    FrameTime_RHIThread = 5,
    FrameTime_GPU = 6,
    Count = 7,
    EGameDisplayablePerformanceStat_MAX = 8,
};

enum class EGameFramePacingMode
{
    DesktopStyle = 0,
    ConsoleStyle = 1,
    MobileStyle = 2,
    EGameFramePacingMode_MAX = 3,
};

enum class EGameFunctionType
{
    EM_None = 0,
    EM_BigWorldMove = 1,
    EM_GongFa = 2,
    EM_Xiulian = 3,
    EM_Condense = 4,
    EM_Skill = 5,
    EM_Train = 6,
    EM_PracticeTime = 7,
    EM_DaoYun = 8,
    EM_StageBreak = 9,
    EM_MiniMap = 10,
    EM_KnowledgeAndWiki = 11,
    EM_SkyfallRift = 12,
    EM_DelegateQuest = 13,
    EM_FuntionType_Count = 14,
    EM_MAX = 15,
};

enum class EGameLockDomain
{
    EGameLockDemain_NormalStuff = 0,
    EGameLockDemain_SscriptStuff = 1,
    EGameLockDemain_Count = 2,
    EGameLockDemain_MAX = 3,
};

enum class EGameStatDisplayMode
{
    Hidden = 0,
    TextOnly = 1,
    GraphOnly = 2,
    TextAndGraph = 3,
    EGameStatDisplayMode_MAX = 4,
};

enum class EGameWidgetInputMode
{
    Default = 0,
    GameAndMenu = 1,
    Game = 2,
    Menu = 3,
    EGameWidgetInputMode_MAX = 4,
};

enum class EGuideStepCompleteType
{
    EM_Default = 0,
    EM_BigWorldMove = 1,
    EM_BattleLevelMove = 2,
    EM_BattleLevelUserSkill = 3,
    EM_EquipSkill = 4,
    EM_ForceComplete = 5,
    EM_MAX = 6,
};

enum class EGuideType
{
    EM_Image = 0,
    EM_Effect = 1,
    EM_HUD = 2,
    EM_MAX = 3,
};

enum class EHexGridDescType
{
    Rectangle = 0,
    Circle = 1,
    AbsoluteOffset = 2,
    EHexGridDescType_MAX = 3,
};

enum class EHexGridTriggerType
{
    NONE = 0,
    OnlyTurn = 1,
    OnlyMove = 2,
    EHexGridTriggerType_MAX = 3,
};

enum class EInfoDataCatagory
{
    BasicJin = 0,
    BasicShui = 1,
    BasicMu = 2,
    LiuxueZhongchuang = 3,
    Feijian = 4,
    Kuanglie = 5,
    BinghuanBingDong = 6,
    Lingjin = 7,
    Zhongdu = 8,
    Summon = 9,
    Fengling = 10,
    ZhuoshaoRanshao = 11,
    Canying = 12,
    Yuhuo = 13,
    FushiChenke = 14,
    Yinji = 15,
    Xuneng = 16,
    EInfoDataCatagory_MAX = 17,
};

enum class EInfoDataType
{
    Attribute = 0,
    AttributeCarryEffect = 1,
    UsualEffectPro = 2,
    TraitParamAttribute = 3,
    SummonAttribute = 4,
    SummonUsualEffectPro = 5,
    SkillExcuteAttribute = 6,
    Special = 7,
    EInfoDataType_MAX = 8,
};

enum EInfomationType
{
    EInfomationType_Base = 0,
    EInfomationType_Relation = 1,
    EInfomationType_Item = 2,
    EInfomationType_Cultivation = 3,
    EInfomationType_JY = 4,
    EInfomationType_MAX = 5,
};

enum class EInformationRarity
{
    EM_BaseKnowledge = 0,
    EM_EventKnowledge = 1,
    EM_SmallKnowledge = 2,
    EM_MAX = 3,
};

enum class EInformationSubType
{
    EM_None = 0,
    EM_PresetNpc = 1,
    EM_RareEquipment = 2,
    EM_CityInfo = 3,
    EM_ZongmenInfo = 4,
    EM_Tiancai = 5,
    EM_RareLingfa = 6,
    EM_Danfang = 7,
    EM_NormalNpc = 8,
    EM_MAX = 9,
};

enum class EInvadeCoreStage
{
    EM_InvadeCoreStatge_Grow = 0,
    EM_InvadeCoreStatge_Crystal = 1,
    EM_InvadeCoreStatge_LVLUp = 2,
    EM_InvadeCoreStatge_Spread = 3,
    EM_InvadeCoreStatge_MAX = 4,
};

enum class EItemBaseType
{
    EM_NORMAL = 0,
    EM_CONSUME = 1,
    EM_EQUIP = 2,
    EM_WEAPON = 3,
    EM_PRECIOUS = 4,
    EM_JEWELRY = 5,
    EM_INSTRUMENT = 6,
    EM_MOUNT = 7,
    EM_GONGFA = 8,
    EM_XINJUE = 9,
    EM_SKILLBOOK = 10,
    EM_JiYiBOOK = 11,
    EM_MATERIAL = 12,
    EM_Currency = 13,
    EM_FuWen = 14,
    EM_FuZhi = 15,
    EM_FuMo = 16,
    EM_Quest = 17,
    EM_SpecialProduct = 18,
    EM_XinjueTraitBook = 19,
    EM_SPECIAL = 20,
    EM_ITEM_TYPE_COUNT = 21,
    EM_MAX = 22,
};

enum class EItemConsumeType
{
    EM_ConsumeType_Attribute = 0,
    EM_ConsumeType_Buff = 1,
    EM_ConsumeType_GA = 2,
    EM_ConsumeType_BigWorldEffect = 3,
    EM_ConsumeType_RemoveTraumaTrait = 4,
    EM_ConsumeType_Max = 5,
};

enum class EItemEuipSubType
{
    EM_SubType_None = 0,
    EM_SubType_Jian = 10,
    EM_SubType_Dao = 11,
    EM_SubType_Lun = 12,
    EM_SubType_Qin = 13,
    EM_SubType_Ling = 14,
    EM_SubType_San = 15,
    EM_SubType_Zhua = 16,
    EM_SubType_Wei = 17,
    EM_SubType_Yi = 20,
    EM_SubType_Jia = 21,
    EM_SubType_Pao = 22,
    EM_SubType_Pi = 23,
    EM_SubType_JiaKe = 24,
    EM_SubType_XiangLian = 30,
    EM_SubType_YuPei = 31,
    EM_SubType_JieZhi = 32,
    EM_SubType_YanZhu = 33,
    EM_SubType_XinZang = 34,
    EM_SubType_MAX = 35,
};

enum class EJiYiType
{
    Enum_JiYi_JGLQ = 0,
    Enum_JiYi_LDZY = 1,
    Enum_JiYi_FSKY = 2,
    Enum_JiYi_FLZF = 3,
    Enum_JiYi_SWJZ = 4,
    Enum_JiYi_MAX = 5,
};

enum class EJiYiValueShowType
{
    Enum_ShowInt = 0,
    Enum_ShowPercentage = 1,
    Enum_Status = 2,
    Enum_MAX = 3,
};

enum class ELearnState
{
    EM_DISABLE = 0,
    EM_LEARNING = 1,
    EM_ENABLE = 2,
    EM_MAX = 3,
};

enum class ELifeRecordType
{
    Enum_Xiulian = 0,
    Enum_Attribute = 1,
    Enum_Social = 2,
    Enum_Battle = 3,
    Enum_Other = 4,
    Enum_MAX = 5,
};

enum EMDestinyTrigram
{
    EM_Trigram_Qian = 0,
    EM_Trigram_Kun = 1,
    EM_Trigram_Zhen = 2,
    EM_Trigram_Kan = 3,
    EM_Trigram_Xun = 4,
    EM_Trigram_Li = 5,
    EM_Trigram_Gen = 6,
    EM_Trigram_Dui = 7,
    EM_Trigram_MAX = 8,
};

enum class EMFirstWaveType
{
    TimeDelay = 0,
    PreClear = 1,
    Touch = 2,
    EMFirstWaveType_MAX = 3,
};

enum class EMLandscapeAreaType
{
    EM_LANDTYPE_FLATLAND = 0,
    EM_LANDTYPE_GRASS = 1,
    EM_LANDTYPE_DESERT = 2,
    EM_LANDTYPE_FROZEN = 3,
    EM_LANDTYPE_SNOW = 4,
    EM_LANDTYPE_TREE = 5,
    EM_LANDTYPE_MOUNTAIN = 6,
    EM_LANDTYPE_WATER = 7,
    EM_LANDTYPE_BRIDGE = 8,
    EM_LANDTYPE_JIN = 9,
    EM_LANDTYPE_SHUI = 10,
    EM_LANDTYPE_MU = 11,
    EM_LANDTYPE_HUO = 12,
    EM_LANDTYPE_TU = 13,
    EM_LANDTYPE_POLLUTED = 14,
    EM_LANDTYPE_GOBI = 15,
    EM_LANDTYPE_MAX = 16,
};

enum class EMRelationshipClassType
{
    EM_DEFAULT = 0,
    EM_FRIEND = 1,
    EM_RELATIVE = 2,
    EM_MASTER_APPRENTICE = 3,
    EM_LOVE = 4,
    EM_Enemy = 5,
    EM_MAX = 6,
};

enum class EMRelationshipType
{
    EM_DEFAULT = 0,
    EM_ENEMY = 1,
    EM_GOODFRIEND = 2,
    EM_CLOSEFRIEND = 3,
    EM_MASTER = 4,
    EM_APPRENTICE = 5,
    EM_SAMEMASTER = 6,
    EM_FOSTERFATHER = 7,
    EM_FOSTERMOTHER = 8,
    EM_FOSTERSON = 9,
    EM_FOSTERDAUGHTER = 10,
    EM_FOSTERBROTHER = 11,
    EM_FOSTERYOUNGERBROTHER = 12,
    EM_FOSTERSISTER = 13,
    EM_FOSTERYOUNGERSISTER = 14,
    EM_FATHER = 15,
    EM_MOTHER = 16,
    EM_SON = 17,
    EM_DAUGHTER = 18,
    EM_BROTHER = 19,
    EM_YOUNGERBROTHER = 20,
    EM_SISTER = 21,
    EM_YOUNGERSISTER = 22,
    EM_COUPLE = 23,
    EM_SPOUSE = 24,
    EM_SWEETHEART = 25,
    EM_ADMIRER = 26,
    EM_MAX = 27,
};

enum EMSkillTargetType
{
    EM_None = 0,
    EM_Source = 2,
    EM_Target = 4,
    EM_TraitOwner = 8,
    EM_Both = 6,
    EM_Count = -1,
    EM_MAX = 9,
};

enum class EMSpawnerType
{
    Sequence = 0,
    Infinite = 1,
    SpawnNpc = 2,
    EMSpawnerType_MAX = 3,
};

enum EMTaritAttributeOprateType
{
    EMTaritAttributeOprateType_Base = 0,
    EMTaritAttributeOprateType_Multi = 1,
    EMTaritAttributeOprateType_PostAdd = 2,
    EMTaritAttributeOprateType_MAX = 3,
};

enum EMTraitAttributeType
{
    EM_TRAITTYPE_Bullet = 0,
    EM_TRAITTYPE_AttackDistance = 1,
    EM_TRAITTYPE_SummonCount = 2,
    EM_TRAITTYPE_SummonTime = 3,
    EM_TRAITTYPE_BufferTime = 4,
    EM_TRAITTYPE_HitCounter = 5,
    EM_TRAITTYPE_TagCounter = 6,
    EM_TRAITTYPE_AttackRangeX = 7,
    EM_TRAITTYPE_AttackRangeY = 8,
    EM_TRAITTYPE_CatapultDamageMaxCount = 9,
    EM_TRAITTYPE_CatapultDamageMaxDistance = 10,
    EM_TRAITTYPE_MaxProjectilePassThrough = 11,
    EM_TRAITTYPE_MaxProjectileSplit = 12,
    EM_TRAITTYPE_MaxProjectileDamageRange = 13,
    EM_TRAITTYPE_CastCount = 14,
    EM_TRAITTYPE_DamageExecuteCount = 15,
    EM_TRAITTYPE_DamageExecuteInternal = 16,
    EM_TRAITTYPE_CohesionTime = 17,
    EM_TRAITTYPE_ProjectileBack = 18,
    EM_TRAITTYPE_ProjectileSpeed = 19,
    EM_TRAITTYPE_MaxProjectileSplitCount = 20,
    EM_TRAITTYPE_MAX = 21,
};

enum class EMTraitChildType
{
    EMTraitChildType_Default = 0,
    EMTraitChildType_BaseAttribute = 1,
    EMTraitChildType_TraitAttribute = 2,
    EMTraitChildType_CustomAtribute = 3,
    EMTraitChildType_DynamicGameplayEffect = 4,
    EMTraitChildType_None = 5,
    EMTraitChildType_MAX = 6,
};

enum class EMTraitEffectType
{
    EMTraitEffectType_None = 0,
    EMTraitEffectType_BaseProbability = 1,
    EMTraitEffectType_Value = 2,
    EMTraitEffectType_Both = 3,
    EMTraitEffectType_MAX = 4,
};

enum EMTrigramHierachy
{
    EM_TH_One = 0,
    EM_TH_Two = 1,
    EM_TH_Three = 2,
    EM_TH_Four = 3,
    EM_TH_MAX = 4,
};

enum class EM_BASICTRANSACTIONTYPE
{
    EM_BASIC_BACK = 0,
    EM_BASIC_SOCIAL = 1,
    EM_BASIC_PRACTICE = 2,
    EM_BASIC_EXPLORE = 3,
    EM_BAISC_OTHER = 4,
    EM_BASIC_COUNT = 5,
    EM_MAX = 6,
};

enum class EM_BASIC_TRANSACTION_OPERATE_PRIORITY
{
    EM_OPERATE_ADD = 0,
    EM_OPERATE_SUB = 1,
    EM_OPERATE_OVERRIDE = 2,
    EM_OPERATE_MUL = 3,
    EM_OPERATE_DIV = 4,
    EM_OPERATE_MAX = 5,
};

enum EM_BattleCampType
{
    EM_CAMPTYPE_Any = 0,
    EM_CAMPTYPE_EnemyMain = 2,
    EM_CAMPTYPE_FriendMain = 4,
    EM_CAMPTYPE_SelfMain = 8,
    EM_CAMPTYPE_EnemySummon = 16,
    EM_CAMPTYPE_FriendSummon = 32,
    EM_CAMPTYPE_SelfSummon = 64,
    EM_CAMPTYPE_Enemy = 18,
    EM_CAMPTYPE_Friend = 36,
    EM_CAMPTYPE_MAX = 65,
};

enum EM_BattleType
{
    EM_BattleType_Normal = 0,
    EM_BattleType_SkyfallRift = 1,
    EM_BattleType_MAX = 2,
};

enum class EM_BigWorldAttributeOperateType
{
    EM_ATTR_ADD = 0,
    EM_ATTR_OVERRIDE = 1,
    EM_ATTR_MAX = 2,
};

enum EM_CharacterType
{
    EM_CharacterType_Player = 0,
    EM_CharacterType_Npc = 1,
    EM_CharacterType_Monst = 2,
    EM_CharacterType_Summon = 3,
    EM_CharacterType_DefaultNPC = 4,
    EM_CharacterType_MAX = 5,
};

enum class EM_ClientState
{
    EM_CS_MainMenu = 0,
    EM_CS_BigWorld = 1,
    EM_CS_Battle = 2,
    EM_CS_Travel = 3,
    EM_CS_MAX = 4,
};

enum EM_FNGAME_COLLISIONTYPE
{
    EM_Collision_WorldStatic = 0,
    EM_Collision_Weapon = 14,
    EM_Collision_Player = 15,
    EM_Collision_DeathType = 16,
    EM_Collision_DropItem = 17,
    EM_Collision_Summon = 19,
    EM_Collision_Monster = 21,
    EM_Collision_MAX = 22,
};

enum EM_FengLing_State
{
    EM_FengLing_Normal = 0,
    EM_FengLing_Fanyan = 1,
    EM_FengLing_Death = 2,
    EM_FengLing_MAX = 3,
};

enum class EM_GAMEDIFFICULTY_LEVEL
{
    EM_SIMPLE = 0,
    EM_MEDIUM = 1,
    EM_DIFFICULTY = 2,
    EM_HARDEST = 3,
    EM_MAX = 4,
};

enum class EM_GRIDINSIGHT_TYPE
{
    EM_GRIDINSIGHT_NONE = 0,
    EM_GRIDINSIGHT_PLAYER = 1,
    EM_GRIDINSIGHT_TEMP = 2,
    EM_IN_INSIGHT = 3,
    EM_OUT_INSIGHT = 0,
    EM_MAX = 4,
};

enum class EM_INVADE_BATTLETYPE
{
    EM_InvadePoi_Null = 0,
    EM_InvadePoi_Battle = 1,
    EM_InvadeCell_Battle = 2,
    EM_InvadeCellTurn_Battle = 4,
    EM_InvadeTroop_Battle = 8,
    EM_InvadeTroop_AttackPOI = 16,
    EM_MAX = 17,
};

enum EM_LevelType
{
    EM_LevelByStage = 0,
    EM_LevelByAbility = 1,
    EM_LevelTypeMax = 2,
};

enum class EM_LingFaActionType
{
    EM_LingFaAction_None = 0,
    EM_LingFaAction_UpdateBDList = 1,
    EM_LingFaAction_UpdateSkillAndGongFaLevel = 2,
    EM_LingFaAction_UpdateNewXinJue = 4,
    EM_LingFaAction_UpdateEquipmentSkill = 8,
    EM_LingFaAction_UpdateEquipmentGongFa = 16,
    EM_LingFaAction_MAX = 17,
};

enum class EM_LoadWorldOption
{
    EMLoadWorld_Switch = 0,
    EMLoadWorld_Back = 1,
    EMLoadWorld_MAX = 2,
};

enum class EM_MonsterType
{
    EM_MonsterType_Normal = 0,
    EM_MonsterType_Jingying1 = 1,
    EM_MonsterType_Jingying2 = 2,
    EM_MonsterType_Jingying3 = 3,
    EM_MonsterType_Boss = 4,
    EM_MonsterType_MAX = 5,
};

enum class EM_PRATICE_EVOLVE_TYPE
{
    EM_PracticeType_Self = 0,
    EM_PracticeType_Base = 1,
    EM_PracticeType_MAX = 2,
};

enum EM_Projectile_PostionType
{
    EM_UseDistance = 0,
    EM_UseMousePosition = 1,
    EM_PosMax = 2,
};

enum class EM_TransactionState
{
    EM_TransactionState_Normal = 0,
    EM_TransactionState_Pause = 1,
    EM_TransactionState_Break = 2,
    EM_TransactionState_History = 3,
    EM_TransactionState_MAX = 4,
};

enum class EM_ZONGMEN_BOOK_LEVEL
{
    EM_Book_Invalid = 0,
    EM_Book_Basic = 2,
    EM_Book_Rare = 4,
    EM_Book_Secret = 8,
    EM_Book_All = 14,
    EM_Book_MAX = 15,
};

enum EMoveType
{
    EM_MoveType_BaseSpeed = 0,
    EM_MoveType_BaseTime = 1,
    EM_MoveType_MAX = 2,
};

enum class ENUM_CALLUIEVNET
{
    ENUM_CALLUIEVNET_CAMERAMOVE = 0,
    ENUM_CALLUIEVNET_CAMERARESET = 1,
    ENUM_CALLUIEVENT_NEXTTURN = 2,
    ENUM_CALLUIEVENT_CONSUMESTEP = 3,
    ENUM_CALLUIEVENT_COMMONUPDATE = 4,
    ENUM_CALLUIEVENT_BIGWORLDATTRIBUTECHANGE = 5,
    ENUM_CALLUIEVENT_ADDBATTLEENERGYSTORAGEATT = 6,
    ENUM_CALLUIEVENT_Evolving = 7,
    ENUM_CALLUIEVENT_CANTCASTABILITY = 8,
    ENUM_CALLUIEVENT_LoadGame = 9,
    ENUM_CALLUIEVENT_GameUserSettingChange = 10,
    ENUM_CALLUIEVENT_BATTLEDIALOG = 11,
    ENUM_CALLUIEVNET_MAX = 12,
    ENUM_MAX = 13,
};

enum class ENotifyMessageType
{
    EMsgType_TypeA = 0,
    EMsgType_TypeB = 1,
    EMsgType_TypeC = 2,
    EMsgType_MAX = 3,
};

enum class EOutLineType
{
    EOutLine_None = 0,
    EOutLine_Red = 1,
    EOutLine_Green = 2,
    EOutLine_Blue = 3,
    EOutLine_MonsterType = 4,
    EOutLine_MAX = 5,
};

enum EPOIInvadeState
{
    EM_Invade_Normal = 0,
    EM_Invade_Budge = 1,
    EM_Invade_Fall = 2,
    EM_Abandon = 3,
};

enum class EPoiFunctionEnum
{
    Enum_Default = 0,
    Enum_ShanMen = 1,
    Enum_YiShiTing = 2,
    Enum_XiuLianGe = 3,
    Enum_CangJingGe = 4,
    Enum_JiYiGe = 5,
    Enum_JuBaoGe = 6,
    Enum_ChuanSong = 7,
    Enum_HuangGong = 8,
    Enum_GaoShiLan = 9,
    Enum_JiuGuan = 10,
    Enum_YanWuChang = 11,
    Enum_ShangDian = 12,
    Enum_Auction = 13,
    Enum_ChengZhuFu = 14,
    Enum_ShiFuFangJian = 15,
    Enum_ShiMeiFangJian = 16,
    Enum_CitySpecialBuild = 17,
    Enum_LianQiGe = 18,
    Enum_DanGe = 19,
    Enum_XunLianChang = 20,
    Enum_HouShan = 21,
    Enum_MAX = 22,
};

enum class EPointType
{
    EM_Normal = 0,
    EM_Origin = 1,
    EM_Terminal = 2,
    EM_MAX = 3,
};

enum class EPositionType
{
    REGION = 0,
    BIGWORLD = 1,
    POI = 2,
    EPositionType_MAX = 3,
};

enum class EPracticeType
{
    EM_OutDoor = 0,
    EM_ZongMen = 1,
    EM_ShuangXiu = 2,
    EM_MAX = 3,
};

enum class EProductType
{
    EM_Mineral = 0,
    EM_Plant = 1,
    EM_Dinas = 2,
    EM_MAX = 3,
};

enum class EPronounType
{
    EM_PresetNpc = 0,
    EM_ByAttribute = 1,
    EM_ByImpress = 2,
    EM_MAX = 3,
};

enum class EQuestActionRes
{
    EQuestActionRes_Standby = 0,
    EQuestActionRes_Pendding = 1,
    EQuestActionRes_OnGoing = 2,
    EQuestActionRes_Failed = 3,
    EQuestActionRes_Sucessed_Option0 = 4,
    EQuestActionRes_Sucessed_Option1 = 5,
    EQuestActionRes_Sucessed_Option2 = 6,
    EQuestActionRes_Sucessed_Option3 = 7,
    EQuestActionRes_Sucessed_Option4 = 8,
    EQuestActionRes_Sucessed_Option5 = 9,
    EQuestActionRes_MAX = 10,
};

enum class EQuestDomainType
{
    EQuestDomain_None = 0,
    EQuestDomain_MainLine = 1,
    EQuestDomain_TianDao = 2,
    EQuestDomain_Delegate = 3,
    EQuestDomain_BranchLine = 4,
    EQuestDomain_Zongmen = 5,
    EquestDomain_Other = 6,
    EQuestDomainType_MAX = 7,
};

enum class EQuestFailureType
{
    OutOfTime = 0,
    LostItem = 1,
    RelativeNpcDead = 2,
    EQuestFailureType_MAX = 3,
};

enum class EQuestState
{
    EM_Standby = 0,
    EM_Completion = 1,
    EM_InProgress = 2,
    EM_Failure = 3,
    EM_Interrupt = 4,
    EM_MAX = 5,
};

enum class ERarityType
{
    EM_LingCai = 0,
    EM_TianCaiDiBao = 1,
    EM_MAX = 2,
};

enum class ERegionType
{
    None = 0,
    Jin = 1,
    Shui = 2,
    Mu = 3,
    Huo = 4,
    Tu = 5,
    Zongmen = 6,
    City = 7,
    ERegionType_MAX = 8,
};

enum class EReputationType
{
    None = 0,
    TotalValue = 1,
    RegionValue = 2,
    BiasValue = 3,
    EReputationType_MAX = 4,
};

enum class ERideState
{
    ENoRide = 0,
    ERideShow = 1,
    ERideHide = 2,
    ERideState_MAX = 3,
};

enum class ESaveType
{
    None = 0,
    Normal = 1,
    AutoSave = 2,
    QuickSave = 3,
    ESaveType_MAX = 4,
};

enum class ESeclusionType
{
    ESeclusionType_Affair = 0,
    ESeclusionType_Quest = 1,
    ESeclusionType_MAX = 2,
};

enum EShieldRecoverEnum
{
    Enum_SuckBlood = 0,
    Enum_AutoRecover = 1,
    Enum_MAX = 2,
};

enum class EShowBattleType
{
    EM_BrightLight = 0,
    EM_DarkLight = 1,
    EM_YZCX = 2,
    EM_YDDJ = 3,
    EM_FQFZ = 4,
    EM_MAX = 5,
};

enum class ESpecialProductSubtype
{
    EM_Wine = 0,
    EM_Luxurious = 1,
    EM_Charm = 2,
    EM_Sentiment = 3,
    EM_MAX = 4,
};

namespace ESplineMovementState
{
    enum Type
    {
        Idle = 0,
        BackToIdle = 1,
        Moving = 2,
        Paused = 3,
        ESplineMovementState_MAX = 4,
    };
}

enum class EStateAreaType
{
    EStateAreaType_Normal = 0,
    EStateAreaType_Enemy = 1,
    EStateAreaType_Friend = 2,
    EStateAreaType_MAX = 3,
};

enum class ESubConsumeType
{
    EM_Battle_Pill = 0,
    EM_Break = 1,
    EM_Poison = 2,
    EM_DaoJing = 3,
    EM_Infinite = 4,
    EM_Boost = 5,
    EM_Heal = 6,
    EM_Formula = 7,
    EM_MAX = 8,
};

enum class ESummonBattleState
{
    Attack = 0,
    Defense = 1,
    ESummonBattleState_MAX = 2,
};

enum class ETextType
{
    EM_Normal = 0,
    EM_Buff = 1,
    EM_NormalCrit = 2,
    EM_BuffCrit = 3,
    EM_HpHeal = 4,
    EM_MpHeal = 5,
    EM_MAX = 6,
};

enum class ETideType
{
    EM_Initial = 0,
    EM_Begin = 1,
    EM_Special = 2,
    EM_Open = 3,
    EM_Close = 4,
    EM_Fall = 5,
    EM_Dormancy = 6,
    EM_MAX = 7,
};

enum ETraitOpType
{
    EM_TraitOP_Add = 1,
    EM_TraitOP_Mul = 2,
    EM_TraitOP_MAX = 3,
};

enum ETraitType
{
    EM_Tarit_None = 0,
    EM_Tarit_ExcutePre = 1,
    EM_Tarit_ExcutePost = 2,
    EM_Trait_CD = 4,
    EM_Trait_Cost = 8,
    EM_Trait_PreCast = 16,
    EM_Trait_Death = 32,
    EM_Trait_CalcBufferTime = 64,
    EM_Trait_PostCast = 128,
    EM_Trait_BuffExecute = 256,
    EM_Trait_SummonCreate = 512,
    EM_Trait_EnergyStorageValueChange = 1024,
    EM_Trait_AbilityEnd = 4096,
    EM_Trait_BuffStateChange = 8192,
    EM_Trait_Catapult = 16384,
    EM_Trait_SheildRemove = 134217728,
    EM_Trait_TraitFunction = 268435456,
    EM_Trait_CarryEffect = 536870912,
    EM_Trait_Crit = 1073741824,
    EM_Trait_Infinite = 2147483647,
};

enum class ETraumaState
{
    None = 0,
    Mild = 1,
    Moderate = 2,
    Severe = 3,
    ETraumaState_MAX = 4,
};

enum class ETurnBaseState
{
    ETurnBaseIdle = 0,
    ETurnBaseMoving = 1,
    ETurnBaseMovingWait = 2,
    ETurnBaseDungon = 3,
    ETurnBaseState_MAX = 4,
};

enum class EWaveTriggerType
{
    ClearLastWave = 0,
    TimeDelay = 1,
    NotAnyMonsterExisting = 2,
    EWaveTriggerType_MAX = 3,
};

enum class EWuXingType
{
    EM_JIN = 0,
    EM_SHUI = 1,
    EM_MU = 2,
    EM_HUO = 3,
    EM_TU = 4,
    EM_Mixed = 5,
    EM_COUNT = 6,
    EM_MAX = 7,
};

enum class EYiShiTingShowBattleType
{
    Enum_None = 0,
    Enum_ZongMenNeiBi = 1,
    Enum_HuangChengBiWu = 2,
    Enum_MAX = 3,
};

enum class EZhongmenPopulation
{
    EM_BigScale = 0,
    EM_MidScale = 1,
    EM_SmallScale = 2,
    EM_MAX = 3,
};

enum class EZongMenJobType
{
    EM_TaiShangZhangLao = 0,
    EM_ZhangMen = 1,
    EM_WaiMenZhangMen = 2,
    EM_ZhangLao = 3,
    EM_ZhiShi = 4,
    EM_NeiMenDiZi = 5,
    EM_WaiMenDiZi = 6,
    EM_None = 99,
    EM_MAX = 100,
};

enum EZongMenReputationType
{
    EZongMenReputationType_Npc = 0,
    EZongMenReputationType_Strength = 1,
    EZongMenReputationType_Task = 2,
    EZongMenReputationType_Other = 3,
    EZongMenReputationType_MAX = 4,
};

enum class Enum_AttitudeType
{
    None = 0,
    Fear = 1,
    Compliance = 2,
    Admiration = 3,
    Zeal = 4,
    Harmonious = 5,
    Apathy = 6,
    Vigilance = 7,
    Contempt = 8,
    Hate = 9,
    Hatred = 10,
    Enum_MAX = 11,
};
