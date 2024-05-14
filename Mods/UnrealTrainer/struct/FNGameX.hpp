// #pragma once
// #include <DynamicOutput/DynamicOutput.hpp>
// #include <Mod/CppUserModBase.hpp>
// #include <UE4SSProgram.hpp>
// #include <Unreal/World.hpp>
// #include <UnrealDef.hpp>

// #include "FNGameX_enums.hpp"

// #ifndef UE4SS_SDK_FNGameX_HPP
// #define UE4SS_SDK_FNGameX_HPP

// struct FAIEvolveBasicTransaction_WrapInfo : public FGameDataBase
// {
//     EM_BASICTRANSACTIONTYPE BasicEvolveType; // 0x0008 (size: 0x1)
//     int32 DynamicTurnCounts;                 // 0x000C (size: 0x4)

// }; // Size: 0x10

// struct FAIEvolveGlobalData
// {
//     float DataAffairProp;                                                                                    // 0x0000 (size: 0x4)
//     TMap<class EM_BASICTRANSACTIONTYPE, class FFixedOperateDynamicPriority> BasicTransactionOperatePriority; // 0x0008 (size: 0x50)
//     int32 BasicPractice_NoOperateDynamicPriority_BaseLQValue;                                                // 0x0058 (size: 0x4)
//     int32 BasicPractice_NoOperateDynamicPriority_StageCoff;                                                  // 0x005C (size: 0x4)
//     int32 DataAffairMinTurn;                                                                                 // 0x0060 (size: 0x4)
//     int32 DataAffairMaxTurn;                                                                                 // 0x0064 (size: 0x4)
//     int32 AffairMoveBase;                                                                                    // 0x0068 (size: 0x4)
//     float AffairMoveStageFix;                                                                                // 0x006C (size: 0x4)
//     int32 SpecialAffairMoveAdd;                                                                              // 0x0070 (size: 0x4)
//     int32 AcceptableTraceRange;                                                                              // 0x0074 (size: 0x4)
//     float ChooseSelfPOICoefficient;                                                                          // 0x0078 (size: 0x4)
//     int32 StageDelta;                                                                                        // 0x007C (size: 0x4)
//     float DataAffairFavBase;                                                                                 // 0x0080 (size: 0x4)
//     float StereoFixBaseValue;                                                                                // 0x0084 (size: 0x4)
//     float DataAffairFavPerSoc;                                                                               // 0x0088 (size: 0x4)
//     TArray<EMRelationshipType> ExcludeRelationShips;                                                         // 0x0090 (size: 0x10)
//     uint64 DataAffairMoneyBySocMin;                                                                          // 0x00A0 (size: 0x8)
//     uint64 DataAffairMoneyBySocMax;                                                                          // 0x00A8 (size: 0x8)
//     TArray<float> MoneyPerFavByStage;                                                                        // 0x00B0 (size: 0x10)
//     float AffairLeadToEventProp;                                                                             // 0x00C0 (size: 0x4)
//     float PracticeEvolveHQCoef;                                                                              // 0x00C4 (size: 0x4)
//     float PracticeFixedTurn;                                                                                 // 0x00C8 (size: 0x4)
//     float ConsumeLQBaseLQValue;                                                                              // 0x00CC (size: 0x4)
//     float ConsumeLQLogBaseValue;                                                                             // 0x00D0 (size: 0x4)
//     float ConsumeLQFinalCoef;                                                                                // 0x00D4 (size: 0x4)
//     TArray<float> NpcStageBreakSuccessProb;                                                                  // 0x00D8 (size: 0x10)
//     float PerBreakItemAddProbValue;                                                                          // 0x00E8 (size: 0x4)
//     float StageBreakAmbCoef;                                                                                 // 0x00EC (size: 0x4)
//     float StageBreakRandomRangeMin;                                                                          // 0x00F0 (size: 0x4)
//     float StageBreakRandomRangeMax;                                                                          // 0x00F4 (size: 0x4)
//     float StageBreakAffMaxValue;                                                                             // 0x00F8 (size: 0x4)
//     float StageBreakAffMinValue;                                                                             // 0x00FC (size: 0x4)
//     float StageBreakTempCoef;                                                                                // 0x0100 (size: 0x4)
//     float PhaseBreakRandomRangeAmbDivLeft;                                                                   // 0x0104 (size: 0x4)
//     float PhaseBreakRandomRangeAmbDivRight;                                                                  // 0x0108 (size: 0x4)
//     float PhaseBreakTraumaCoef;                                                                              // 0x010C (size: 0x4)
//     TArray<int32> StageExpectTurn;                                                                           // 0x0110 (size: 0x10)
//     TMap<class EZongMenJobType, class FZmJobReqInfoInAIEvolve> ZmJobMinStageConfig;                          // 0x0120 (size: 0x50)
//     TMap<class EZongMenJobType, class FZmJobLevelUpGainsInfos> ZmLevelUpGainBooks;                           // 0x0170 (size: 0x50)
//     TArray<EZongMenJobType> AllowLevelUpJob;                                                                 // 0x01C0 (size: 0x10)
//     int32 StageBreakGotNewXinjueCount;                                                                       // 0x01D0 (size: 0x4)
//     FReputationEvolveConfigData ReputationConfigData;                                                        // 0x01D4 (size: 0x18)
//     int32 EquipmentMinFixCompareStage;                                                                       // 0x01EC (size: 0x4)
//     int32 EquipmentMinBDCompareStage;                                                                        // 0x01F0 (size: 0x4)
//     int32 SkyFallRiftMaxDistanceTurn;                                                                        // 0x01F4 (size: 0x4)
//     int32 SkyFallExploreDropID;                                                                              // 0x01F8 (size: 0x4)
//     int32 MinStageForWorldRiftExplore;                                                                       // 0x01FC (size: 0x4)
//     int32 WorldRiftExploreDropID;                                                                            // 0x0200 (size: 0x4)
//     int32 MinStageForWuXingCoreExplore;                                                                      // 0x0204 (size: 0x4)
//     TMap<EWuXingType, int32> WuXingExploreDropIndex;                                                         // 0x0208 (size: 0x50)
//     FSoftObjectPath JiYiDataConfigDataTable;                                                                 // 0x0258 (size: 0x20)
//     TMap<int32, FJiYiEvolveDataConfig> JiYiEvolveDataConfig;                                                 // 0x0278 (size: 0x50)
//     int32 MinTraumaValueForHeal;                                                                             // 0x02C8 (size: 0x4)

// }; // Size: 0x2D0

// struct FAIEvolve_ZongMenSelect : public FGameDataBase
// {
//     TArray<FZongMenSelectData> DataInfos;            // 0x0008 (size: 0x10)
//     TWeakObjectPtr<class UZhongMenBase> HandleZMPoI; // 0x0018 (size: 0x8)
//     TArray<int32> NewMasters;                        // 0x0020 (size: 0x10)

// }; // Size: 0x30

// struct FAIMoveInfoData : public FAITransactionBase
// {
//     int32 MaxMoveStepsPerTurn; // 0x0008 (size: 0x4)
//     int32 RemainMoveSteps;     // 0x000C (size: 0x4)
//     uint8 bSword;              // 0x0010 (size: 0x1)
//     uint8 bSpecMove;           // 0x0010 (size: 0x1)
//     int32 CurPosition;         // 0x0014 (size: 0x4)

// }; // Size: 0x18

// struct FAISpecActConfig
// {
//     int32 ConditionType;            // 0x0000 (size: 0x4)
//     float CdtPara1;                 // 0x0004 (size: 0x4)
//     float CdtPara2;                 // 0x0008 (size: 0x4)
//     int32 ActType;                  // 0x000C (size: 0x4)
//     FSoftClassPath SkillObjectPath; // 0x0010 (size: 0x20)
//     float ActPara1;                 // 0x0030 (size: 0x4)
//     float ActPara2;                 // 0x0034 (size: 0x4)
//     float ActPara3;                 // 0x0038 (size: 0x4)

// }; // Size: 0x40

// struct FAIStageConfig : public FTableRowBase
// {
//     FSoftClassPath BasicAttack;                   // 0x0008 (size: 0x20)
//     TMap<FSoftClassPath, int32> RandomAttackList; // 0x0028 (size: 0x50)
//     TArray<FAISpecActConfig> SpecActList;         // 0x0078 (size: 0x10)
//     FSoftClassPath StageChangeGA;                 // 0x0088 (size: 0x20)

// }; // Size: 0xA8

// struct FAITransactionBase : public FGameDataBase
// {
// }; // Size: 0x8

// struct FAITransactionConfigData
// {
//     uint8 Priority;         // 0x0000 (size: 0x1)
//     int32 TransactionIndex; // 0x0004 (size: 0x4)
//     FText DescText;         // 0x0008 (size: 0x18)

// }; // Size: 0x20

// struct FAITransactionDynamicStateData : public FGameDataBase
// {
// }; // Size: 0x70

// struct FAITransactionEquipment_Main : public FAITransactionBase
// {
//     bool bUpdateAllEquipment;                   // 0x0008 (size: 0x1)
//     TArray<class UItemBase *> GainedEquipments; // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FAITransactionExplore_Main : public FAITransactionBase
// {
//     TArray<int32> DropID; // 0x0008 (size: 0x10)
//     int32 LingShiAdd;     // 0x0018 (size: 0x4)

// }; // Size: 0x20

// struct FAITransactionExplore_Sell : public FAITransactionBase
// {
// }; // Size: 0x8

// struct FAITransactionHeal_Hospital : public FAITransactionBase
// {
// }; // Size: 0x8

// struct FAITransactionHeal_Retreat : public FAITransactionBase
// {
// }; // Size: 0x8

// struct FAITransactionInstanceData : public FGameDataBase
// {
//     FCommonEcsSaveEntityIndex MainOwnerEntity; // 0x0008 (size: 0x18)
//     EM_TransactionState TransactionState;      // 0x0020 (size: 0x1)

// }; // Size: 0x40

// struct FAITransactionInstance_HistoryData : public FGameDataBase
// {
// }; // Size: 0x8

// struct FAITransactionLingFa_LearnBook : public FAITransactionBase
// {
//     int32 CurrentLearningBookID; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FAITransactionLingFa_UpdateLingFaAction : public FAITransactionBase
// {
//     EM_LingFaActionType LingFaActions; // 0x0008 (size: 0x1)

// }; // Size: 0x10

// struct FAITransactionReputation_Update : public FAITransactionBase
// {
// }; // Size: 0x8

// struct FAITransactionSocial_Battle : public FAITransactionBase
// {
//     int32 TargetId; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FAITransactionSocial_Exchange : public FAITransactionBase
// {
//     int32 TargetNpcIndex; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FAITransactionSocial_FavorAbilityProcess : public FAITransactionBase
// {
//     int32 ActiveTurnCount; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FAITransactionSpec_Event : public FAITransactionBase
// {
// }; // Size: 0x8

// struct FAITransactionZongmen_JobLevelUp : public FAITransactionBase
// {
// }; // Size: 0x8

// struct FAITransaction_BackToNewHome : public FAITransactionBase
// {
// }; // Size: 0x8

// struct FAITransaction_BudgeDefend : public FAITransactionBase
// {
// }; // Size: 0x10

// struct FAITransaction_ClearInvadeCell : public FAITransactionBase
// {
// }; // Size: 0x28

// struct FAITransaction_CounterAttack : public FAITransactionBase
// {
// }; // Size: 0x28

// struct FAITransaction_Empty : public FAITransactionBase
// {
// }; // Size: 0x8

// struct FAITransaction_JiYiEvolveMain : public FAITransactionBase
// {
// }; // Size: 0x10

// struct FAITransaction_Practice : public FAITransactionBase
// {
//     int32 PracticeTimeTotal;                      // 0x0008 (size: 0x4)
//     EM_PRATICE_EVOLVE_TYPE EM_PracticeEvolveType; // 0x000C (size: 0x1)

// }; // Size: 0x10

// struct FAITransaction_SupportDefend : public FAITransactionBase
// {
// }; // Size: 0x20

// struct FAITransaction_WaitAttachPosition : public FAITransactionBase
// {
//     TArray<int32> TargetCellIndexes; // 0x0008 (size: 0x10)

// }; // Size: 0x18

// struct FAITransaction_WaitTraceTarget : public FAITransactionBase
// {
//     int32 TargetId; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FAITransaction_WaitTurnTime : public FAITransactionBase
// {
//     int32 AbsTurnCount;   // 0x0008 (size: 0x4)
//     int32 StartTurnCount; // 0x000C (size: 0x4)

// }; // Size: 0x10

// struct FAbilityRuntimePriorityModify : public FBattleAI_ConditionActionBase
// {
//     int32 ValueAdd; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FActorTagList
// {
//     TArray<FName> ActorTagList; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FAnimationChannelKeys
// {
//     TArray<FVector2D> Keys;  // 0x0000 (size: 0x10)
//     int32 InterpolationType; // 0x0010 (size: 0x4)
//     EAnimationAxis AniAxis;  // 0x0014 (size: 0x1)

// }; // Size: 0x18

// struct FAppearanceConfig : public FTableRowBase
// {
//     int32 ID;                    // 0x0008 (size: 0x4)
//     int32 Gender;                // 0x000C (size: 0x4)
//     int32 Style;                 // 0x0010 (size: 0x4)
//     int32 Colour;                // 0x0014 (size: 0x4)
//     int32 Charm;                 // 0x0018 (size: 0x4)
//     FString Skin;                // 0x0020 (size: 0x10)
//     FSoftObjectPath SkeMeshPath; // 0x0030 (size: 0x20)

// }; // Size: 0x50

// struct FArenaCompetitionConfig : public FTableRowBase
// {
//     int32 ConsumeDay;          // 0x0008 (size: 0x4)
//     int32 drop_Winner;         // 0x000C (size: 0x4)
//     int32 DropID;              // 0x0010 (size: 0x4)
//     int32 Drop_Top2;           // 0x0014 (size: 0x4)
//     int32 Drop_Top4;           // 0x0018 (size: 0x4)
//     int32 Drop_Top8;           // 0x001C (size: 0x4)
//     int32 StartTurn;           // 0x0020 (size: 0x4)
//     int32 IntervalRound;       // 0x0024 (size: 0x4)
//     int32 IntervalGammeRound;  // 0x0028 (size: 0x4)
//     int32 Stage;               // 0x002C (size: 0x4)
//     int32 StartDiaLog;         // 0x0030 (size: 0x4)
//     TArray<int32> EndDiaLog;   // 0x0038 (size: 0x10)
//     FSoftObjectPath LevelPath; // 0x0048 (size: 0x20)

// }; // Size: 0x68

// struct FArrayIntPointContainer
// {
//     TArray<FIntPoint> Container; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FAskForItemConfig
// {
//     float H_Coefficient; // 0x0000 (size: 0x4)
//     float F_Coefficient; // 0x0004 (size: 0x4)
//     int32 Refuse_Mood;   // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FAttributeCptInsightInfo
// {
//     FIntPoint CurPosition;                              // 0x0000 (size: 0x8)
//     FIntPoint LastPosition;                             // 0x0008 (size: 0x8)
//     int32 CurInsigtSize;                                // 0x0010 (size: 0x4)
//     class UTextureRenderTarget2D *GridInfoRT;           // 0x0040 (size: 0x8)
//     class UTextureRenderTarget2D *GridInfoBlurRT;       // 0x0048 (size: 0x8)
//     class UTextureRenderTarget2D *GridInfoBlurSecondRT; // 0x0050 (size: 0x8)
//     class UMaterialInterface *GridInfoMat;              // 0x0058 (size: 0x8)

// }; // Size: 0x60

// struct FAttributeNameConifg : public FTableRowBase
// {
//     EAttributeValueShowType ValueShowType; // 0x0008 (size: 0x1)
//     FName DisplayName;                     // 0x000C (size: 0x8)
//     FString FullName;                      // 0x0018 (size: 0x10)
//     FString DisplayDesc;                   // 0x0028 (size: 0x10)

// }; // Size: 0x38

// struct FAttributeTraitPoolConfig : public FTableRowBase
// {
//     int32 PoolID;                     // 0x0008 (size: 0x4)
//     TArray<EWuXingType> WuxingPrefer; // 0x0010 (size: 0x10)
//     int32 AttributeTraitID;           // 0x0020 (size: 0x4)
//     int32 AttributeTraitLevel;        // 0x0024 (size: 0x4)
//     int32 RandomWeight;               // 0x0028 (size: 0x4)
//     bool IsOnly;                      // 0x002C (size: 0x1)
//     bool WeaponLimit;                 // 0x002D (size: 0x1)
//     bool ArmorLimit;                  // 0x002E (size: 0x1)
//     bool JewelryLimit;                // 0x002F (size: 0x1)
//     int32 RarityLimit;                // 0x0030 (size: 0x4)
//     int32 JiYiChose;                  // 0x0034 (size: 0x4)

// }; // Size: 0x38

// struct FAttributeTraitTemplateConfig : public FTableRowBase
// {
//     int32 AttributeTraitID;                          // 0x0008 (size: 0x4)
//     FBaseAttributeValueParam BaseAttributeDescs;     // 0x0010 (size: 0x90)
//     FAttributeTraitValueConfig AttributeValueConfig; // 0x00A0 (size: 0x58)
//     FDynamicTraitSpec DynamicTraitDescs;             // 0x00F8 (size: 0x100)
//     FAttributeTraitValueConfig TraitValueConfig;     // 0x01F8 (size: 0x58)

// }; // Size: 0x250

// struct FAttributeTraitValueConfig
// {
//     TMap<int32, FValueSectionConfig> LevelValueList; // 0x0000 (size: 0x50)
//     bool IsGrowth;                                   // 0x0050 (size: 0x1)

// }; // Size: 0x58

// struct FAuctionBubbleTextData
// {
//     int32 Type;   // 0x0000 (size: 0x4)
//     FString Text; // 0x0008 (size: 0x10)
//     int32 Weight; // 0x0018 (size: 0x4)

// }; // Size: 0x20

// struct FAuctionConfigData
// {
//     int32 FirstAuctionTurn;             // 0x0000 (size: 0x4)
//     int32 AuctionInterval;              // 0x0004 (size: 0x4)
//     int32 AuctionNotifyInterval;        // 0x0008 (size: 0x4)
//     int32 DropID_HighValue;             // 0x000C (size: 0x4)
//     int32 DropID_NormalValue;           // 0x0010 (size: 0x4)
//     FFloatRange AuctionBaseValueFixed;  // 0x0014 (size: 0x10)
//     TMap<int32, float> AuctionValueInc; // 0x0028 (size: 0x50)
//     FFloatRange Attitude1ValueRange;    // 0x0078 (size: 0x10)
//     FFloatRange Attitude2ValueRange;    // 0x0088 (size: 0x10)
//     FFloatRange Attitude3ValueRange;    // 0x0098 (size: 0x10)
//     FFloatRange Attitude4ValueRange;    // 0x00A8 (size: 0x10)
//     int32 NpcStageLimit;                // 0x00B8 (size: 0x4)
//     int32 NpcMoneyLimit;                // 0x00BC (size: 0x4)
//     int32 NpcCount;                     // 0x00C0 (size: 0x4)
//     int32 AuctioneerNpcID;              // 0x00C4 (size: 0x4)
//     int32 AuctionKnowledgeID;           // 0x00C8 (size: 0x4)
//     int32 NpcGrabQuestID;               // 0x00CC (size: 0x4)
//     int32 PlayerGrabQuestID;            // 0x00D0 (size: 0x4)

// }; // Size: 0xD8

// struct FAuctionItemInfo
// {
//     class UItemBase *ItemBase; // 0x0000 (size: 0x8)
//     int32 FloorPrice;          // 0x0008 (size: 0x4)
//     bool bManual;              // 0x000C (size: 0x1)

// }; // Size: 0x10

// struct FAuctionSettlement
// {
//     int32 UserID;                // 0x0000 (size: 0x4)
//     int32 FinalPrice;            // 0x0004 (size: 0x4)
//     int32 AuctionItemTemplateID; // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FAudioData : public FTableRowBase
// {
//     FName AudioName;           // 0x0008 (size: 0x8)
//     FSoftObjectPath AudioPath; // 0x0010 (size: 0x20)

// }; // Size: 0x30

// struct FAutoPassTurnProcessGameData : public FGameDataBase
// {
//     int32 NeedCountTotal;      // 0x0008 (size: 0x4)
//     int32 RemainCount;         // 0x000C (size: 0x4)
//     int32 AutoPassIntenalStep; // 0x0010 (size: 0x4)
//     float AutoPassIntenalTime; // 0x0014 (size: 0x4)
//     float CurInternal;         // 0x0018 (size: 0x4)
//     bool bAutoPassTurnStatus;  // 0x001C (size: 0x1)
//     bool bEnoughTime;          // 0x001D (size: 0x1)
//     bool bNeedPassTurn;        // 0x001E (size: 0x1)
//     bool bInterrupt;           // 0x001F (size: 0x1)
//     FString StrWndName;        // 0x0028 (size: 0x10)

// }; // Size: 0x38

// struct FBagBase
// {
//     EBagType BagType;                   // 0x0000 (size: 0x1)
//     TArray<class UItemBase *> ItemList; // 0x0008 (size: 0x10)

// }; // Size: 0x18

// struct FBaseAttributeArray
// {
//     TArray<FBaseAttributeValueParam> MonsterAttributeFix; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FBaseAttributeValueParam
// {
//     FGameplayAttribute PropertyPathName;          // 0x0000 (size: 0x38)
//     TEnumAsByte<EGameplayModOp::Type> ModifierOp; // 0x0038 (size: 0x1)
//     float BaseValueAdd;                           // 0x003C (size: 0x4)
//     FGameplayTag ToAddTag;                        // 0x0040 (size: 0x8)
//     FGameplayTagContainer SourceReqTags;          // 0x0048 (size: 0x20)
//     FGameplayTagContainer TargetReqTags;          // 0x0068 (size: 0x20)
//     bool bStrengthen;                             // 0x0088 (size: 0x1)

// }; // Size: 0x90

// struct FBaseOperateData
// {
//     int32 Value;                                   // 0x0000 (size: 0x4)
//     bool bUseDynamicCountsAsValue;                 // 0x0004 (size: 0x1)
//     EM_BASIC_TRANSACTION_OPERATE_PRIORITY Operate; // 0x0005 (size: 0x1)
//     EM_BASICTRANSACTIONTYPE TransactionType;       // 0x0006 (size: 0x1)

// }; // Size: 0x8

// struct FBattleAIAction_BeFollowedData : public FGameDataBase
// {
// }; // Size: 0x1F0

// struct FBattleAIAction_FollowActor : public FGameDataBase
// {
// }; // Size: 0x18

// struct FBattleAIAction_MoveToActor
// {
// }; // Size: 0x18

// struct FBattleAIAction_SummonForceMove : public FGameDataBase
// {
// }; // Size: 0x28

// struct FBattleAIEntityMainData
// {
// }; // Size: 0x80

// struct FBattleAI_AbilityConfigInfo : public FBattleAI_GameAbilityDataBase
// {
//     int32 DefaultPriory;                                    // 0x0008 (size: 0x4)
//     int32 ReqMinDistance;                                   // 0x000C (size: 0x4)
//     int32 ReqMaxDistance;                                   // 0x0010 (size: 0x4)
//     int32 InRangePrioryAdd;                                 // 0x0014 (size: 0x4)
//     int32 MaxOverTime;                                      // 0x0018 (size: 0x4)
//     int32 OverTimePriory;                                   // 0x001C (size: 0x4)
//     TArray<FBattleAbilityExternCondition> ExternConditions; // 0x0020 (size: 0x10)

// }; // Size: 0x38

// struct FBattleAI_AbilityInfo
// {
// }; // Size: 0x28

// struct FBattleAI_AbilityManger
// {
// }; // Size: 0x28

// struct FBattleAI_AgentSpaceInfo : public FGameDataBase
// {
// }; // Size: 0x28

// struct FBattleAI_BasicBehaviorCtrl : public FGameDataBase
// {
//     FBattleAI_BasicBehaviorData BehaviorData; // 0x0008 (size: 0x24)
//     int32 MoveSeed;                           // 0x002C (size: 0x4)

// }; // Size: 0x40

// struct FBattleAI_BasicBehaviorData
// {
//     int32 RandomStepNum;       // 0x0000 (size: 0x4)
//     int32 RandomStepTime;      // 0x0004 (size: 0x4)
//     int32 MoveProbValue;       // 0x0008 (size: 0x4)
//     int32 MaxStepForStop;      // 0x000C (size: 0x4)
//     int32 MinStepForStop;      // 0x0010 (size: 0x4)
//     int32 MaxStopTime;         // 0x0014 (size: 0x4)
//     int32 MinStopTime;         // 0x0018 (size: 0x4)
//     int32 MaxDistanceToTarget; // 0x001C (size: 0x4)
//     int32 TravelWeight;        // 0x0020 (size: 0x4)

// }; // Size: 0x24

// struct FBattleAI_BasicStageConfig : public FGameDataBase
// {
// }; // Size: 0xB0

// struct FBattleAI_ConditionActionBase : public FGameDataBase
// {
// }; // Size: 0x8

// struct FBattleAI_GameAbilityDataBase : public FGameDataBase
// {
// }; // Size: 0x8

// struct FBattleAI_SudokuMoveData : public FGameDataBase
// {
// }; // Size: 0x40

// struct FBattleAI_SummonBehaviorData : public FGameDataBase
// {
//     float AttStandEnterRange;     // 0x0008 (size: 0x4)
//     float BlinkReturnRange;       // 0x000C (size: 0x4)
//     float ForceMoveBlinkDistance; // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FBattleAI_SummonEntity : public FGameDataBase
// {
// }; // Size: 0x18

// struct FBattleAI_SummonMasterEntity : public FGameDataBase
// {
// }; // Size: 0x18

// struct FBattleAI_SwitchStageMainData : public FGameDataBase
// {
// }; // Size: 0x70

// struct FBattleAI_TargetSpaceInfo : public FGameDataBase
// {
// }; // Size: 0x28

// struct FBattleAI_WorldData
// {
// }; // Size: 0x4

// struct FBattleAbilityExternCondition
// {
//     TSubclassOf<class UBattleAIConditionCheckBase> ConditionCheckClass; // 0x0000 (size: 0x8)
//     TArray<FInstancedStruct> ConditionData;                             // 0x0008 (size: 0x10)
//     TArray<FInstancedStruct> ActionCpt;                                 // 0x0018 (size: 0x10)

// }; // Size: 0x28

// struct FBattleActorInfo : public FGameDataBase
// {
// }; // Size: 0x40

// struct FBattleAttribute
// {
//     int32 HpBase;              // 0x0000 (size: 0x4)
//     int32 HpAdd;               // 0x0004 (size: 0x4)
//     float HpMul;               // 0x0008 (size: 0x4)
//     int32 HpCurrent;           // 0x000C (size: 0x4)
//     int32 MpBase;              // 0x0010 (size: 0x4)
//     int32 MpAdd;               // 0x0014 (size: 0x4)
//     int32 MpMul;               // 0x0018 (size: 0x4)
//     int32 MpCurrent;           // 0x001C (size: 0x4)
//     int32 LQHeal;              // 0x0020 (size: 0x4)
//     float LQHealRatio;         // 0x0024 (size: 0x4)
//     int32 LQHealAdd;           // 0x0028 (size: 0x4)
//     int32 LQHealMul;           // 0x002C (size: 0x4)
//     int32 LQRegen;             // 0x0030 (size: 0x4)
//     float LQRegenRatio;        // 0x0034 (size: 0x4)
//     int32 LQRegenAdd;          // 0x0038 (size: 0x4)
//     int32 LQRegenMul;          // 0x003C (size: 0x4)
//     int32 Att;                 // 0x0040 (size: 0x4)
//     int32 AttAdd;              // 0x0044 (size: 0x4)
//     int32 AttMul;              // 0x0048 (size: 0x4)
//     int32 Def;                 // 0x004C (size: 0x4)
//     int32 DefAdd;              // 0x0050 (size: 0x4)
//     int32 DefMul;              // 0x0054 (size: 0x4)
//     float CritChance;          // 0x0058 (size: 0x4)
//     float CritChanceAdd;       // 0x005C (size: 0x4)
//     float CritChanceMul;       // 0x0060 (size: 0x4)
//     float CritDamageRate;      // 0x0064 (size: 0x4)
//     float CritDamageRateAdd;   // 0x0068 (size: 0x4)
//     float CritDamageRateMul;   // 0x006C (size: 0x4)
//     int32 MoveSpeed;           // 0x0070 (size: 0x4)
//     int32 MoveSpeedMul;        // 0x0074 (size: 0x4)
//     int32 MoveSpeedAdd;        // 0x0078 (size: 0x4)
//     int32 DamageFinalIncrease; // 0x007C (size: 0x4)
//     int32 DamageFinalDecrease; // 0x0080 (size: 0x4)
//     int32 BasicDamage;         // 0x0084 (size: 0x4)
//     float DamageJinDec;        // 0x0088 (size: 0x4)
//     float DamageShuiDec;       // 0x008C (size: 0x4)
//     float DamageMuDec;         // 0x0090 (size: 0x4)
//     float DamageHuoDec;        // 0x0094 (size: 0x4)
//     float DamageTuDec;         // 0x0098 (size: 0x4)
//     float DamageJinMul;        // 0x009C (size: 0x4)
//     float DamageShuiMul;       // 0x00A0 (size: 0x4)
//     float DamageMuMul;         // 0x00A4 (size: 0x4)
//     float DamageHuoMul;        // 0x00A8 (size: 0x4)
//     float DamageTuMul;         // 0x00AC (size: 0x4)
//     float BasicAtkSpeed;       // 0x00B0 (size: 0x4)
//     float BasicCDR;            // 0x00B4 (size: 0x4)

// }; // Size: 0xB8

// struct FBattleAttributeBackUp
// {
//     int32 OwnerID;          // 0x0000 (size: 0x4)
//     float Health;           // 0x0004 (size: 0x4)
//     float Mana;             // 0x0008 (size: 0x4)
//     FTraumaData TraumaData; // 0x0010 (size: 0x30)
//     float Lq;               // 0x0040 (size: 0x4)

// }; // Size: 0x48

// struct FBattleAttributeMonitor_AbsValueConfig : public FGameDataBase
// {
//     float MinValue; // 0x0008 (size: 0x4)
//     float MaxValue; // 0x000C (size: 0x4)

// }; // Size: 0x10

// struct FBattleAttributeMonitor_PercentConfig : public FGameDataBase
// {
//     float MinPercent; // 0x0008 (size: 0x4)
//     float MaxPercent; // 0x000C (size: 0x4)

// }; // Size: 0x10

// struct FBattleCustomEffecthandle
// {
//     TArray<class UGasCustomEffectbase *> CustomEffectbases; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FBattleDamageTextConfig : public FTableRowBase
// {
//     ETextType TextType;              // 0x0008 (size: 0x1)
//     int32 LeftRightOffset;           // 0x000C (size: 0x4)
//     int32 BackFrontOffset;           // 0x0010 (size: 0x4)
//     FString FontStylePath;           // 0x0018 (size: 0x10)
//     float DefaultSize;               // 0x0028 (size: 0x4)
//     TArray<FTextPhase> TextPhaseMap; // 0x0030 (size: 0x10)

// }; // Size: 0x40

// struct FBattleEndData
// {
//     EBattleEndType BattleEndType; // 0x0000 (size: 0x1)
//     TArray<int32> TargetIDs;      // 0x0008 (size: 0x10)
//     float TargetHpPercent;        // 0x0018 (size: 0x4)
//     float LimitTime;              // 0x001C (size: 0x4)
//     float KillCount;              // 0x0020 (size: 0x4)
//     bool bBattleSettle;           // 0x0024 (size: 0x1)

// }; // Size: 0x28

// struct FBattleGameplayEffectContainer
// {
//     TSubclassOf<class UBattleTargetType> TargetType;                        // 0x0000 (size: 0x8)
//     TArray<class TSubclassOf<UGameplayEffect>> TargetGameplayEffectClasses; // 0x0008 (size: 0x10)
//     TArray<FBuffInfoParam> TargetGameplayBuffes;                            // 0x0018 (size: 0x10)
//     FGameplayTagContainer GameEffectAssetDynamicTags;                       // 0x0028 (size: 0x20)
//     FGameplayTagContainer GameEffectGrantedDynamicTags;                     // 0x0048 (size: 0x20)
//     TArray<float> CatapultDamageFixCoef;                                    // 0x0068 (size: 0x10)

// }; // Size: 0x78

// struct FBattleGameplayEffectContainerMap : public FTraitModiyAttributeBase
// {
//     TMap<class FGameplayTag, class FBattleGameplayEffectContainerSpec> AbilityGEContainerMap; // 0x0020 (size: 0x50)
//     float DamageTagAdd;                                                                       // 0x0078 (size: 0x4)
//     FGameplayEventData CurGameplayEventData;                                                  // 0x0090 (size: 0xB0)
//     TArray<class AActor *> CaptureHittedActor;                                                // 0x0140 (size: 0x10)

// }; // Size: 0x150

// struct FBattleGameplayEffectContainerSpec
// {
//     FGameplayAbilityTargetDataHandle TargetData;                 // 0x0000 (size: 0x28)
//     TArray<FGameplayEffectSpecHandle> TargetGameplayEffectSpecs; // 0x0028 (size: 0x10)
//     FGameplayAbilityTargetingLocationInfo SourceLocationInfo;    // 0x0040 (size: 0xA0)

// }; // Size: 0x130

// struct FBattleLevelData
// {
//     TArray<FSoftObjectPath> LevelPaths;                // 0x0000 (size: 0x10)
//     bool bUseEscapeArea;                               // 0x0010 (size: 0x1)
//     float LightIntensity;                              // 0x0014 (size: 0x4)
//     FColor LightColor;                                 // 0x0018 (size: 0x4)
//     FSoftObjectPath CameraEffect;                      // 0x0020 (size: 0x20)
//     FActorTagList ActorTagList;                        // 0x0040 (size: 0x10)
//     TMap<int32, FActorTagList> Difficulty2ActorTagMap; // 0x0050 (size: 0x50)
//     int32 DialogID;                                    // 0x00A0 (size: 0x4)
//     TArray<FName> OptionToTag;                         // 0x00A8 (size: 0x10)

// }; // Size: 0xB8

// struct FBattleOverrideMonsterLevelData
// {
//     int32 InitLevel;            // 0x0000 (size: 0x4)
//     bool bOverrideMonsterLevel; // 0x0004 (size: 0x1)
//     bool bUpdateMonsterLevel;   // 0x0005 (size: 0x1)
//     bool bDynamicMonsterLevel;  // 0x0006 (size: 0x1)

// }; // Size: 0x8

// struct FBattlePOIEvolveGameData
// {
//     int32 RegionID;                                                              // 0x0000 (size: 0x4)
//     int32 LastTurn;                                                              // 0x0004 (size: 0x4)
//     TMap<class EShowBattleType, class FBattlePoiPointInfo> CurTurnGenerateCells; // 0x0008 (size: 0x50)
//     TMap<class EShowBattleType, class FBattlePoiPointInfo> CurTurnRemoveCells;   // 0x0058 (size: 0x50)

// }; // Size: 0xA8

// struct FBattlePOIFixedData : public FTableRowBase
// {
//     FName PoiDisplayName;                             // 0x0008 (size: 0x8)
//     EShowBattleType BattleType;                       // 0x0010 (size: 0x1)
//     EDaoYunType DaoYunType;                           // 0x0011 (size: 0x1)
//     int32 StageMin;                                   // 0x0014 (size: 0x4)
//     int32 StageMax;                                   // 0x0018 (size: 0x4)
//     int32 Weight;                                     // 0x001C (size: 0x4)
//     int32 LifeTurns;                                  // 0x0020 (size: 0x4)
//     int32 BattleID;                                   // 0x0024 (size: 0x4)
//     TArray<int32> DialogID;                           // 0x0028 (size: 0x10)
//     int32 ActorIndex;                                 // 0x0038 (size: 0x4)
//     TMap<int32, FDifficultyConfig> DifficultyConfigs; // 0x0040 (size: 0x50)

// }; // Size: 0x90

// struct FBattlePoiPointInfo
// {
//     TArray<int32> PoiPoints; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FBattleRoomData
// {
//     FName RoomName;             // 0x0000 (size: 0x8)
//     EBattleRoomType RoomType;   // 0x0008 (size: 0x1)
//     int32 Weight;               // 0x000C (size: 0x4)
//     FString TipText;            // 0x0010 (size: 0x10)
//     FSoftClassPath PortalActor; // 0x0020 (size: 0x20)
//     FVector PortalNiagaraColor; // 0x0040 (size: 0x18)
//     FSoftObjectPath IconPath;   // 0x0058 (size: 0x20)
//     FVector2D IconSize;         // 0x0078 (size: 0x10)

// }; // Size: 0x88

// struct FBattleRoomPlayData
// {
//     int32 LoopCount;    // 0x0000 (size: 0x4)
//     int32 ExtraRoom;    // 0x0004 (size: 0x4)
//     int32 CurRoomCount; // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FBattleSettlementConfig : public FTableRowBase
// {
//     int32 BattleID;                                                 // 0x0008 (size: 0x4)
//     int32 RiftStage;                                                // 0x000C (size: 0x4)
//     int32 GroupID;                                                  // 0x0010 (size: 0x4)
//     FBattleLevelData BattleLevelData;                               // 0x0018 (size: 0xB8)
//     FBattleEndData BattleEndData;                                   // 0x00D0 (size: 0x28)
//     FBattleOverrideMonsterLevelData BattleOverrideMonsterLevelData; // 0x00F8 (size: 0x8)
//     FName BattleRoomName;                                           // 0x0100 (size: 0x8)
//     FBattleRoomData BattleRoomData;                                 // 0x0108 (size: 0x88)
//     FName BattleDesc;                                               // 0x0190 (size: 0x8)
//     float ExpFix;                                                   // 0x0198 (size: 0x4)
//     float DifficultyFix;                                            // 0x019C (size: 0x4)
//     EBattleType BattleType;                                         // 0x01A0 (size: 0x1)
//     FString BattleTargetDesc;                                       // 0x01A8 (size: 0x10)
//     bool AllowClose;                                                // 0x01B8 (size: 0x1)
//     bool bRandomMonsterAffix;                                       // 0x01B9 (size: 0x1)
//     bool AbleToLeave;                                               // 0x01BA (size: 0x1)
//     FSoftClassPath BattleSettlementClass;                           // 0x01C0 (size: 0x20)
//     FSoftObjectPath BattleImagePath;                                // 0x01E0 (size: 0x20)
//     FSoftObjectPath EnemyEffectPath;                                // 0x0200 (size: 0x20)

// }; // Size: 0x220

// struct FBattleSettlementGameData
// {
// }; // Size: 0x20

// struct FBattleTriggerGameData : public FGameDataBase
// {
//     int32 EnterBattleID;                    // 0x0008 (size: 0x4)
//     float EnterBattleAVPara;                // 0x000C (size: 0x4)
//     int32 MinTroopCountValve;               // 0x0010 (size: 0x4)
//     float ArmyValueFix;                     // 0x0014 (size: 0x4)
//     int32 MonsterLevel;                     // 0x0018 (size: 0x4)
//     int32 BattleAffectRange;                // 0x001C (size: 0x4)
//     float MaxCountFix;                      // 0x0020 (size: 0x4)
//     int32 MinFinalArmyValue;                // 0x0024 (size: 0x4)
//     int32 MaxFinalArmyValue;                // 0x0028 (size: 0x4)
//     float MonsterAttributeFixByInvadeLQCof; // 0x002C (size: 0x4)

// }; // Size: 0x30

// struct FBigWorldActorConfigInfo
// {
//     FSoftClassPath ActorPath;                      // 0x0000 (size: 0x20)
//     TArray<FInstancedStruct> ExComponentDataArray; // 0x0020 (size: 0x10)

// }; // Size: 0x30

// struct FBigWorldActorData : public FGameDataBase
// {
//     int32 WorldID;                                          // 0x0008 (size: 0x4)
//     int32 CurPosition;                                      // 0x000C (size: 0x4)
//     TArray<int32> ExternPosition;                           // 0x0010 (size: 0x10)
//     int32 LastPosition;                                     // 0x0020 (size: 0x4)
//     int32 EffectInsightRange;                               // 0x0024 (size: 0x4)
//     uint8 RotatorIndex;                                     // 0x0028 (size: 0x1)
//     int32 PreFixBigWorldActorIndex;                         // 0x002C (size: 0x4)
//     TWeakObjectPtr<class ABigWorldActorBase> BigWorldActor; // 0x0034 (size: 0x8)

// }; // Size: 0x40

// struct FBigWorldActorDataModifyDynamicStack : public FGameDataBase
// {
// }; // Size: 0x20

// struct FBigWorldActorShowIndexModifyData : public FGameDataBase
// {
//     int32 OverrideActorIndex; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FBigWorldAttributeConfig : public FTableRowBase
// {
//     FName DisplayName;                                                      // 0x0008 (size: 0x8)
//     FString AttributeDesc;                                                  // 0x0010 (size: 0x10)
//     FFloatAttributeValue DefaultValue;                                      // 0x0020 (size: 0x18)
//     FFloatAttributeValue MaxValue;                                          // 0x0038 (size: 0x18)
//     FBigWorldAttributeName RPGAttributeName;                                // 0x0050 (size: 0x8)
//     TSubclassOf<class UBigWorldAttributeApplyFunction> CustomApplyFunction; // 0x0058 (size: 0x8)

// }; // Size: 0x60

// struct FBigWorldAttributeName
// {
//     FName AttributeName; // 0x0000 (size: 0x8)

// }; // Size: 0x8

// struct FBigWorldBaseAttributeParam
// {
//     FBigWorldAttributeName RPGAttributeName;  // 0x0000 (size: 0x8)
//     FFloatAttributeValue FloatAttributeValue; // 0x0008 (size: 0x18)

// }; // Size: 0x20

// struct FBigWorldEffectContainer
// {
//     TArray<FBigWorldEffectSpec> BigWorldEffectContainerToSaveGame;       // 0x0000 (size: 0x10)
//     TMap<class FName, class FBigWorldEffectSpecArray> GroupWorldEffects; // 0x0010 (size: 0x50)
//     TArray<FBigWorldEffectSpecArray> GroupWorldEffectArray;              // 0x0060 (size: 0x10)

// }; // Size: 0x160

// struct FBigWorldEffectSpec
// {
//     int32 BigWorldBuffID;                       // 0x0008 (size: 0x4)
//     int32 BigWorldEffectTime;                   // 0x000C (size: 0x4)
//     int32 StartTurn;                            // 0x0010 (size: 0x4)
//     FCommonEcsSaveEntityIndex BuffCauserEntity; // 0x0018 (size: 0x18)
//     bool IsChildBuff;                           // 0x0030 (size: 0x1)

// }; // Size: 0x48

// struct FBigWorldEffectSpecArray
// {
//     TArray<FBigWorldEffectSpec> BigWorldEffectSpecs; // 0x0000 (size: 0x10)
//     int32 ActiveIndex;                               // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FBigWorldEffectTableConfig : public FTableRowBase
// {
//     int32 BigWorldBuffID;                                                                    // 0x0008 (size: 0x4)
//     FName BuffName;                                                                          // 0x000C (size: 0x8)
//     EBuffDurationType BuffDurationType;                                                      // 0x0014 (size: 0x1)
//     int32 LifePara;                                                                          // 0x0018 (size: 0x4)
//     TArray<FBuffEntity> BattleBuffIDs;                                                       // 0x0020 (size: 0x10)
//     TArray<FDynamicTraitSpec> BigWorldEffectTrait;                                           // 0x0030 (size: 0x10)
//     TArray<FBigWorldTraitAttributeParam> BigWorldTraitAttributeParams;                       // 0x0040 (size: 0x10)
//     TSubclassOf<class UBigworldDynamicAttributeProcessBase> DynamicBigWorldAttributeProcess; // 0x0050 (size: 0x8)
//     FName BigWorldGroup;                                                                     // 0x0058 (size: 0x8)
//     bool ChangeWorldClear;                                                                   // 0x0060 (size: 0x1)
//     FSlateColor DisplayColor;                                                                // 0x0064 (size: 0x14)
//     FName Desc;                                                                              // 0x0078 (size: 0x8)
//     bool DisplayOnUI;                                                                        // 0x0080 (size: 0x1)
//     bool bWorldLimited;                                                                      // 0x0081 (size: 0x1)
//     TArray<int32> EffectWorldIndexes;                                                        // 0x0088 (size: 0x10)
//     FSoftObjectPath BuffIconPath;                                                            // 0x0098 (size: 0x20)
//     FSoftObjectPath BuffBorderPath;                                                          // 0x00B8 (size: 0x20)
//     int32 ApplyStepTurn;                                                                     // 0x00D8 (size: 0x4)
//     int32 ChildBuffID;                                                                       // 0x00DC (size: 0x4)
//     bool IsMainNotice;                                                                       // 0x00E0 (size: 0x1)

// }; // Size: 0xE8

// struct FBigWorldMiniMapMainData : public FGameDataBase
// {
// }; // Size: 0x38

// struct FBigWorldMiniMapViewData : public FGameDataBase
// {
//     FVector2D WorldSize;                                          // 0x0008 (size: 0x10)
//     FVector2D ViewSize;                                           // 0x0018 (size: 0x10)
//     FVector2D AbsViewSize;                                        // 0x0028 (size: 0x10)
//     FVector2D WorldCenterPosition;                                // 0x0038 (size: 0x10)
//     double Scale;                                                 // 0x0048 (size: 0x8)
//     TWeakObjectPtr<class UMiniMapViewWidget> MiniMapMainWidget;   // 0x0050 (size: 0x8)
//     int32 PerceptionRange;                                        // 0x0058 (size: 0x4)
//     int32 ViewOriginPositionIndex;                                // 0x005C (size: 0x4)
//     FVector ViewCenterPosition;                                   // 0x0060 (size: 0x18)
//     bool bKeepRatio;                                              // 0x0088 (size: 0x1)
//     bool bTeleportMode;                                           // 0x0089 (size: 0x1)
//     bool bTeleportMode_ShowAllIcon;                               // 0x008A (size: 0x1)
//     uint8 bMinimapMoveUp;                                         // 0x008C (size: 0x1)
//     uint8 bMinimapMoveDown;                                       // 0x008C (size: 0x1)
//     uint8 bMinimapMoveLeft;                                       // 0x008C (size: 0x1)
//     uint8 bMinimapMoveRight;                                      // 0x008C (size: 0x1)
//     TWeakObjectPtr<class UMaterialInstanceDynamic> BackGroundMat; // 0x00A0 (size: 0x8)
//     TWeakObjectPtr<class UMaterialInstanceDynamic> FogLayerMat;   // 0x00A8 (size: 0x8)
//     TWeakObjectPtr<class UMaterialInstanceDynamic> AreaMat;       // 0x00B0 (size: 0x8)
//     TWeakObjectPtr<class UMaterialInstanceDynamic> LQTideMat;     // 0x00B8 (size: 0x8)
//     TWeakObjectPtr<class UMaterialInstanceDynamic> GanZiMat;      // 0x00C0 (size: 0x8)
//     TWeakObjectPtr<class UMaterialInstanceDynamic> InvadeMat;     // 0x00C8 (size: 0x8)

// }; // Size: 0xD0

// struct FBigWorldMiniMap_IconConfigData : public FGameDataBase
// {
//     FName IconCategory;                  // 0x0008 (size: 0x8)
//     FSoftObjectPath IconTexturePath;     // 0x0010 (size: 0x20)
//     FSoftObjectPath IconBGTexturePath;   // 0x0030 (size: 0x20)
//     int32 IconZOrder;                    // 0x0050 (size: 0x4)
//     FSoftClassPath IconWidgetClass;      // 0x0058 (size: 0x20)
//     uint8 bIconRotates;                  // 0x0078 (size: 0x1)
//     uint8 bIconVisiblePermanent;         // 0x0078 (size: 0x1)
//     uint8 bIconVisibleExplore;           // 0x0078 (size: 0x1)
//     uint8 bNeedMoveUpdate;               // 0x0078 (size: 0x1)
//     uint8 bIconVisibleInPerceptionRange; // 0x0078 (size: 0x1)
//     uint8 bExploredPermanentVisible;     // 0x0078 (size: 0x1)
//     uint8 bFollowMiniMapScale;           // 0x0078 (size: 0x1)
//     uint8 bHoverShowName;                // 0x0078 (size: 0x1)
//     FName DisplayNameStr;                // 0x007C (size: 0x8)
//     uint8 bDynamicName;                  // 0x0084 (size: 0x1)
//     FSlateColor NameColor;               // 0x0088 (size: 0x14)
//     int32 SortPriority;                  // 0x009C (size: 0x4)

// }; // Size: 0xA0

// struct FBigWorldMoveAIData : public FGameDataBase
// {
//     TArray<int32> TargetGridIndex;    // 0x0008 (size: 0x10)
//     TArray<int32> CurrentMovingGrids; // 0x0020 (size: 0x10)

// }; // Size: 0x30

// struct FBigWorldMoveFlag_Done
// {
// }; // Size: 0x1

// struct FBigWorldTraitAttributeParam
// {
//     FName TraitIndexName;       // 0x0000 (size: 0x8)
//     FFloatAttributeValue Value; // 0x0008 (size: 0x18)

// }; // Size: 0x20

// struct FBigWorldTraitAttributeSet
// {
//     TMap<class FName, class FFloatAttributeValue> BigWorldTraitAttributeSetValues; // 0x0000 (size: 0x50)

// }; // Size: 0x50

// struct FBlackmailConfig
// {
//     int32 MoodDecrease;                               // 0x0000 (size: 0x4)
//     TMap<int32, int32> Stage2MinItemRelativeValueMap; // 0x0008 (size: 0x50)

// }; // Size: 0x58

// struct FBoardTargetPoint
// {
//     FIntPoint TargetPosition; // 0x0000 (size: 0x8)
//     int32 TargetInsightSize;  // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FBridgePoint
// {
//     TArray<FIntPoint> BridgeWayArray; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FBrightLightCreateConfig : public FTableRowBase
// {
//     int32 RegionLevel;                                // 0x0008 (size: 0x4)
//     int32 ExBrightLightCount;                         // 0x000C (size: 0x4)
//     int32 ExBrightLightCountMax;                      // 0x0010 (size: 0x4)
//     int32 GrowInterval;                               // 0x0014 (size: 0x4)
//     int32 BrightLightLifeTime;                        // 0x0018 (size: 0x4)
//     int32 TerminationTime;                            // 0x001C (size: 0x4)
//     int32 BrightLightAddMaxNum;                       // 0x0020 (size: 0x4)
//     TMap<int32, FDifficultyConfig> DifficultyConfigs; // 0x0028 (size: 0x50)

// }; // Size: 0x78

// struct FBrightLightEvolveGameData
// {
//     int32 RegionID;                     // 0x0000 (size: 0x4)
//     int32 EvolveCount;                  // 0x0004 (size: 0x4)
//     TArray<int32> CurTurnGenerateCells; // 0x0008 (size: 0x10)
//     TArray<int32> CurTurnRemoveCells;   // 0x0018 (size: 0x10)

// }; // Size: 0x28

// struct FBrightLightPointInfo
// {
//     TArray<int32> GeneratablePoints; // 0x0000 (size: 0x10)
//     TArray<int32> GeneratedPoints;   // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FBuffConditionCustomCheckSpec
// {
//     TSubclassOf<class UBuffConditionCustomCheck> CustomConditionCheckClass; // 0x0000 (size: 0x8)
//     FGasCustomEffectContext CustomEffectContext;                            // 0x0008 (size: 0x60)

// }; // Size: 0x68

// struct FBuffDisplayCue
// {
//     FGameplayTagContainer CueTags; // 0x0000 (size: 0x20)

// }; // Size: 0x20

// struct FBuffDisplayInfo
// {
//     FSoftObjectPath Icon;     // 0x0000 (size: 0x20)
//     FName Name;               // 0x0020 (size: 0x8)
//     FName Desc;               // 0x0028 (size: 0x8)
//     int32 AnimType;           // 0x0030 (size: 0x4)
//     FSoftObjectPath AnimPath; // 0x0038 (size: 0x20)
//     bool bShowBuff;           // 0x0058 (size: 0x1)

// }; // Size: 0x60

// struct FBuffEffectDesc
// {
//     TArray<FBaseAttributeValueParam> BuffEffectAttribute; // 0x0000 (size: 0x10)
//     FGameplayTagContainer ReqSourceConditionTags;         // 0x0010 (size: 0x20)
//     FGameplayTagContainer ReqTargetConditionTags;         // 0x0030 (size: 0x20)
//     FBuffConditionCustomCheckSpec CustomEffectSpec;       // 0x0050 (size: 0x68)

// }; // Size: 0xB8

// struct FBuffEntity
// {
//     int32 EntityFakeBuffID; // 0x0000 (size: 0x4)
//     int32 EntityBuffID;     // 0x0004 (size: 0x4)
//     int32 EntityLevel;      // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FBuffInfoParam
// {
//     int32 BuffID;                              // 0x0000 (size: 0x4)
//     TEnumAsByte<EM_LevelType> LevelType;       // 0x0004 (size: 0x1)
//     int32 BuffStack;                           // 0x0008 (size: 0x4)
//     uint8 bRemove;                             // 0x000C (size: 0x1)
//     TEnumAsByte<EMSkillTargetType> TargetType; // 0x0010 (size: 0x1)

// }; // Size: 0x14

// struct FBuffModifiesByLevel
// {
//     TArray<FGameplayModifierInfo> Modifiers; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FBuffProcessAttribute : public FTraitModiyAttributeBase
// {
//     int32 OldStackCount; // 0x0020 (size: 0x4)
//     int32 CurStackCount; // 0x0024 (size: 0x4)

// }; // Size: 0x28

// struct FBuffTranslate : public FTraitModiyAttributeBase
// {
// }; // Size: 0x30

// struct FBuildArray
// {
//     TArray<int32> BDIDs; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FBuildData
// {
//     int32 BuildID;     // 0x0000 (size: 0x4)
//     float MasterValue; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FCapacityAddValue
// {
//     int32 MainWuXingCapacity;  // 0x0000 (size: 0x4)
//     int32 OtherWuxingCapacity; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FCatapultParam : public FTraitModiyAttributeBase
// {
//     int32 CatapultCost;                     // 0x0020 (size: 0x4)
//     TArray<class AActor *> ProcessedActors; // 0x0028 (size: 0x10)

// }; // Size: 0x38

// struct FCellDataByDaoYunTypeChange
// {
//     int32 CellID;     // 0x0000 (size: 0x4)
//     int32 ChangeTurn; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FChaosRiftData
// {
//     int32 EntranceDialogID;                          // 0x0000 (size: 0x4)
//     int32 BattleID;                                  // 0x0004 (size: 0x4)
//     int32 BattleDialogID;                            // 0x0008 (size: 0x4)
//     int32 StoreID;                                   // 0x000C (size: 0x4)
//     TArray<FChaosRiftOption> BattleDialogOptionList; // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FChaosRiftOption
// {
//     FString OptionText;  // 0x0000 (size: 0x10)
//     int32 RiftGoldValue; // 0x0010 (size: 0x4)
//     int32 MonsterLevel;  // 0x0014 (size: 0x4)
//     int32 MaxStage;      // 0x0018 (size: 0x4)
//     int32 MaxPhase;      // 0x001C (size: 0x4)

// }; // Size: 0x20

// struct FCharactorInfo
// {
//     FName FirstName;        // 0x0000 (size: 0x8)
//     FName LastName;         // 0x0008 (size: 0x8)
//     TArray<int32> NameIDs;  // 0x0010 (size: 0x10)
//     uint8 Gender;           // 0x0020 (size: 0x1)
//     int32 BodyIndex;        // 0x0024 (size: 0x4)
//     int32 Face;             // 0x0028 (size: 0x4)
//     int32 Hair;             // 0x002C (size: 0x4)
//     int32 HairBehind;       // 0x0030 (size: 0x4)
//     FLinearColor HairColor; // 0x0034 (size: 0x10)
//     int32 Makeup;           // 0x0044 (size: 0x4)
//     int32 EyeBrown;         // 0x0048 (size: 0x4)
//     int32 Eye;              // 0x004C (size: 0x4)
//     int32 Nose;             // 0x0050 (size: 0x4)
//     int32 Mouth;            // 0x0054 (size: 0x4)
//     int32 EyeMakeup;        // 0x0058 (size: 0x4)
//     int32 Bread;            // 0x005C (size: 0x4)
//     int32 BreadColor;       // 0x0060 (size: 0x4)
//     int32 ClothColor;       // 0x0064 (size: 0x4)
//     int32 PresetAppearance; // 0x0068 (size: 0x4)
//     int32 MaxLife;          // 0x006C (size: 0x4)
//     int32 CurLife;          // 0x0070 (size: 0x4)
//     int32 CurDay;           // 0x0074 (size: 0x4)
//     int32 Luck;             // 0x0078 (size: 0x4)
//     FVector EffectScale;    // 0x0080 (size: 0x18)

// }; // Size: 0x98

// struct FCharactorMainBodyData : public FTableRowBase
// {
//     int32 CharactorInfoID;                                         // 0x0008 (size: 0x4)
//     int32 Gender;                                                  // 0x000C (size: 0x4)
//     FSoftObjectPath MeshPath;                                      // 0x0010 (size: 0x20)
//     FSoftClassPath AnimationBlueprintPath;                         // 0x0030 (size: 0x20)
//     FSoftClassPath AnimationBlueprintPathInBattle;                 // 0x0050 (size: 0x20)
//     FVector MeshOirginScale;                                       // 0x0070 (size: 0x18)
//     TMap<class FName, class FSoftObjectPath> OverrideMaterialPath; // 0x0088 (size: 0x50)
//     FSoftObjectPath RoarMetaSound;                                 // 0x00D8 (size: 0x20)

// }; // Size: 0xF8

// struct FChildRegionConfig : public FTableRowBase
// {
//     int32 ChildRegionID;                    // 0x0008 (size: 0x4)
//     FName ChildRegionName;                  // 0x000C (size: 0x8)
//     FName Desc;                             // 0x0014 (size: 0x8)
//     int32 ParentRegionID;                   // 0x001C (size: 0x4)
//     int32 IsCore;                           // 0x0020 (size: 0x4)
//     FRegionBattleConfig RegionBattleConfig; // 0x0028 (size: 0x50)
//     int32 EnterStage;                       // 0x0078 (size: 0x4)
//     int32 NoEnterDialog;                    // 0x007C (size: 0x4)
//     int32 FirstEnterDialog;                 // 0x0080 (size: 0x4)
//     int32 EnterDialog;                      // 0x0084 (size: 0x4)

// }; // Size: 0x88

// struct FCityBetStoneConfig : public FTableRowBase
// {
//     int32 StoneItemID;      // 0x0008 (size: 0x4)
//     int32 StoneDropID;      // 0x000C (size: 0x4)
//     int32 RefreshStoneTime; // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FCityBuildDataConfig : public FTableRowBase
// {
//     TArray<FCityBuildStageArray> GongFaInitialize; // 0x0008 (size: 0x10)
//     TArray<FCityBuildStageArray> XinJueInitialize; // 0x0018 (size: 0x10)
//     TArray<FCityBuildStageArray> SkillInitialize;  // 0x0028 (size: 0x10)

// }; // Size: 0x38

// struct FCityBuildStageArray
// {
//     TArray<int32> Element; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FCityFixedData : public FTableRowBase
// {
//     FName CityName;                                 // 0x0008 (size: 0x8)
//     int32 CityStoreID;                              // 0x0010 (size: 0x4)
//     int32 SpecialBuildID;                           // 0x0014 (size: 0x4)
//     TMap<int32, FStagePopulation> CityPopulation;   // 0x0018 (size: 0x50)
//     int32 CitySpecialNum;                           // 0x0068 (size: 0x4)
//     FDelegateQuestFixedData DelegateQuestFixedData; // 0x006C (size: 0xC)
//     FName AuctionConfigName;                        // 0x0078 (size: 0x8)
//     TArray<int32> CityExternSpecialItem;            // 0x0080 (size: 0x10)
//     TArray<FInstancedStruct> ExternConfigData;      // 0x0090 (size: 0x10)

// }; // Size: 0xA0

// struct FCollectionPoiConfig : public FTableRowBase
// {
//     int32 CollectionConfigID;    // 0x0008 (size: 0x4)
//     FName FixName;               // 0x000C (size: 0x8)
//     ERarityType RarityType;      // 0x0014 (size: 0x1)
//     EProductType ProductType;    // 0x0015 (size: 0x1)
//     int32 WuXing;                // 0x0018 (size: 0x4)
//     int32 DropItemID;            // 0x001C (size: 0x4)
//     FSoftClassPath PoiModelPath; // 0x0020 (size: 0x20)

// }; // Size: 0x48

// struct FCollectionPoiEvolveGameData
// {
//     int32 WuXingIndex;                              // 0x0000 (size: 0x4)
//     int32 LC_LastGeneratedTurn;                     // 0x0004 (size: 0x4)
//     int32 TC_LastGeneratedTurn;                     // 0x0008 (size: 0x4)
//     bool LastGeneratedLQTideState;                  // 0x000C (size: 0x1)
//     TMap<int32, bool> LC_GenerateCellMap;           // 0x0010 (size: 0x50)
//     TArray<int32> TC_GenerateCells;                 // 0x0060 (size: 0x10)
//     TArray<int32> RemoveCollectionPoiCollectionIDs; // 0x0070 (size: 0x10)
//     bool LingCaiToTianCaiChangeState;               // 0x0080 (size: 0x1)
//     bool TianCaiToLingCaiChangeState;               // 0x0081 (size: 0x1)
//     ETideType LastTurnTideType;                     // 0x0082 (size: 0x1)

// }; // Size: 0x88

// struct FCollectionPoint
// {
//     TArray<int32> Out_GeneratablePoints;           // 0x0000 (size: 0x10)
//     TArray<int32> Core_GeneratablePoints;          // 0x0010 (size: 0x10)
//     TArray<class UCollectionPoi *> LC_Collections; // 0x0020 (size: 0x10)
//     TArray<class UCollectionPoi *> TC_Collections; // 0x0030 (size: 0x10)
//     EProductType ProductType;                      // 0x0040 (size: 0x1)

// }; // Size: 0x48

// struct FCommonEcsSaveEntityIndex : public FGameDataBase
// {
//     FEnttIndex EnttEntity; // 0x0008 (size: 0x8)

// }; // Size: 0x18

// struct FCommonUIActionBindingHandle
// {
// }; // Size: 0x4

// struct FCounterAttackEvolveMain : public FGameDataBase
// {
// }; // Size: 0x38

// struct FCounterAttackQuestConfigData
// {
//     int32 MaxInstances;                                           // 0x0000 (size: 0x4)
//     int32 MinStage;                                               // 0x0004 (size: 0x4)
//     int32 MinPhase;                                               // 0x0008 (size: 0x4)
//     int32 Priority;                                               // 0x000C (size: 0x4)
//     FInvadeAwardParam AwardParam;                                 // 0x0010 (size: 0x28)
//     float NpcSuccess_DamageCoef;                                  // 0x0038 (size: 0x4)
//     float NpcFail_DamageCoef;                                     // 0x003C (size: 0x4)
//     float Invade_DamageCoef;                                      // 0x0040 (size: 0x4)
//     TSubclassOf<class UCounterAttackQuestHandleBase> HandleClass; // 0x0048 (size: 0x8)
//     int32 QuestID;                                                // 0x0050 (size: 0x4)

// }; // Size: 0x58

// struct FCounterAttackQuestData : public FGameDataBase
// {
//     FCommonEcsSaveEntityIndex TakenEntity;    // 0x0008 (size: 0x18)
//     FCommonEcsSaveEntityIndex TargetEntity;   // 0x0020 (size: 0x18)
//     FCommonEcsSaveEntityIndex OwnerPoiEntity; // 0x0038 (size: 0x18)
//     FEnttIndex RealQuestEntity;               // 0x0050 (size: 0x8)
//     bool bPlayerTake;                         // 0x0068 (size: 0x1)

// }; // Size: 0x70

// struct FCounterAttackQuestUIInfo
// {
//     FEnttIndex CounterQuestEntity;                 // 0x0000 (size: 0x8)
//     int32 TakenNpcID;                              // 0x0008 (size: 0x4)
//     bool bPlayerTaken;                             // 0x000C (size: 0x1)
//     FEnttIndex TargetEntity;                       // 0x0010 (size: 0x8)
//     int32 QuestType;                               // 0x0018 (size: 0x4)
//     FCounterAttackQuestConfigData QuestConfigData; // 0x0020 (size: 0x58)

// }; // Size: 0x78

// struct FCounterAttackTargetIdentity : public FGameDataBase
// {
//     int32 CounterAttackTargetType; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FCreatePlayerAttributeConfig : public FTableRowBase
// {
//     int32 ID;                                                     // 0x0008 (size: 0x4)
//     EDescriptionType DescriptionType;                             // 0x000C (size: 0x1)
//     FName CreateAttributeName;                                    // 0x0010 (size: 0x8)
//     FName Desc;                                                   // 0x0018 (size: 0x8)
//     TArray<FBigWorldBaseAttributeParam> ChangeBaseAttributeArray; // 0x0020 (size: 0x10)
//     TArray<FGiveItemInfo> RandomGiveItemArray;                    // 0x0030 (size: 0x10)
//     TMap<int32, int32> FixGiveItemMap;                            // 0x0040 (size: 0x50)
//     TArray<int32> BigWorldBuffIDArray;                            // 0x0090 (size: 0x10)
//     FName SpecialTag;                                             // 0x00A0 (size: 0x8)
//     int32 SpecialValue;                                           // 0x00A8 (size: 0x4)
//     int32 NeedPoint;                                              // 0x00AC (size: 0x4)

// }; // Size: 0xB0

// struct FCurWorldFlagGameFlag : public FGameDataBase
// {
// }; // Size: 0x8

// struct FCustomApplicationData : public FTraitModiyAttributeBase
// {
// }; // Size: 0x28

// struct FCustomTagValueContent
// {
//     TArray<FCustomTagValueInfobase> ValueArray; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FCustomTagValueInfobase
// {
//     float Value;                              // 0x0000 (size: 0x4)
//     TWeakObjectPtr<class AActor> RelateActor; // 0x0004 (size: 0x8)

// }; // Size: 0xC

// struct FDaiGongInfo
// {
//     int32 CellID;              // 0x0000 (size: 0x4)
//     class UItemBase *ItemBase; // 0x0008 (size: 0x8)
//     int32 StartTurn;           // 0x0010 (size: 0x4)
//     int32 RemainDay;           // 0x0014 (size: 0x4)
//     int32 NeedDay;             // 0x0018 (size: 0x4)
//     bool GetStatus;            // 0x001C (size: 0x1)
//     EDaiGongType DaiGongType;  // 0x001D (size: 0x1)

// }; // Size: 0x20

// struct FDamageExecutionCalcParam : public FTraitModiyAttributeBase
// {
//     float Damage;                          // 0x0020 (size: 0x4)
//     float DamageTemp;                      // 0x0024 (size: 0x4)
//     float BasicDamage;                     // 0x0028 (size: 0x4)
//     float DamageJin;                       // 0x002C (size: 0x4)
//     float DamageShui;                      // 0x0030 (size: 0x4)
//     float DamageMu;                        // 0x0034 (size: 0x4)
//     float DamageHuo;                       // 0x0038 (size: 0x4)
//     float DamageTu;                        // 0x003C (size: 0x4)
//     float DamageJinMul;                    // 0x0040 (size: 0x4)
//     float DamageShuiMul;                   // 0x0044 (size: 0x4)
//     float DamageMuMul;                     // 0x0048 (size: 0x4)
//     float DamageHuoMul;                    // 0x004C (size: 0x4)
//     float DamageTuMul;                     // 0x0050 (size: 0x4)
//     float DamageJinDec;                    // 0x0054 (size: 0x4)
//     float DamageShuiDec;                   // 0x0058 (size: 0x4)
//     float DamageMuDec;                     // 0x005C (size: 0x4)
//     float DamageHuoDec;                    // 0x0060 (size: 0x4)
//     float DamageTuDec;                     // 0x0064 (size: 0x4)
//     float CritChance;                      // 0x0068 (size: 0x4)
//     float CritChanceAdd;                   // 0x006C (size: 0x4)
//     float CritChanceMul;                   // 0x0070 (size: 0x4)
//     float CritDamageRate;                  // 0x0074 (size: 0x4)
//     float CritDamageRateAdd;               // 0x0078 (size: 0x4)
//     float CritDamageRateMul;               // 0x007C (size: 0x4)
//     float DamageTagAdd;                    // 0x0080 (size: 0x4)
//     float DamageTagMul;                    // 0x0084 (size: 0x4)
//     float DamageTagDec;                    // 0x0088 (size: 0x4)
//     float DamageFinalMul;                  // 0x008C (size: 0x4)
//     float DamageFinalDec;                  // 0x0090 (size: 0x4)
//     float DefensePowerBase;                // 0x0094 (size: 0x4)
//     float DefensePowerAdd;                 // 0x0098 (size: 0x4)
//     float DefensePowerMul;                 // 0x009C (size: 0x4)
//     float AttackPowerBase;                 // 0x00A0 (size: 0x4)
//     float AttackPowerAdd;                  // 0x00A4 (size: 0x4)
//     float AttackPowerMul;                  // 0x00A8 (size: 0x4)
//     float DamageToHeal;                    // 0x00AC (size: 0x4)
//     float SuckBlood;                       // 0x00B0 (size: 0x4)
//     float DamagePVP_Decrease;              // 0x00B4 (size: 0x4)
//     float MagicShieldRatio;                // 0x00B8 (size: 0x4)
//     float HealthManaRatio;                 // 0x00BC (size: 0x4)
//     float CurAbilityCoast;                 // 0x00C0 (size: 0x4)
//     float CurCaptapultIndex;               // 0x00C4 (size: 0x4)
//     float DamageFinalAdd;                  // 0x00C8 (size: 0x4)
//     float CurCatapultCount;                // 0x00CC (size: 0x4)
//     float GainStorgeMaxPercent;            // 0x00D0 (size: 0x4)
//     float GainStorgeMaxPercentDec;         // 0x00D4 (size: 0x4)
//     float MinimumDamage;                   // 0x00D8 (size: 0x4)
//     float MaximumDamage;                   // 0x00DC (size: 0x4)
//     float ProgramInternalCustomFlagValueA; // 0x00E0 (size: 0x4)
//     float ProgramInternalCustomFlagValueB; // 0x00E4 (size: 0x4)
//     float ProgramInternalCustomFlagValueC; // 0x00E8 (size: 0x4)

// }; // Size: 0x140

// struct FDanJiConfig : public FTableRowBase
// {
//     int32 DanJiID;              // 0x0008 (size: 0x4)
//     EWuXingType WuXingType;     // 0x000C (size: 0x1)
//     TArray<int32> YeReqToDanJi; // 0x0010 (size: 0x10)
//     TArray<int32> QiGen;        // 0x0020 (size: 0x10)
//     float DanReqFix;            // 0x0030 (size: 0x4)
//     int32 MinDanLevel;          // 0x0034 (size: 0x4)
//     int32 MaxDanLevel;          // 0x0038 (size: 0x4)
//     FName DanJiName;            // 0x003C (size: 0x8)
//     FName DanJiDes;             // 0x0044 (size: 0x8)
//     FSoftObjectPath DanJiIcon;  // 0x0050 (size: 0x20)

// }; // Size: 0x70

// struct FDanLuItemConfig : public FTableRowBase
// {
//     int32 ItemTemplateID;  // 0x0008 (size: 0x4)
//     EDanLuSubtype Subtype; // 0x000C (size: 0x1)
//     int32 Durability;      // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FDanQingConfig : public FTableRowBase
// {
//     int32 DanQingID;              // 0x0008 (size: 0x4)
//     EWuXingType WuXingType;       // 0x000C (size: 0x1)
//     TArray<int32> YeReqToDanQing; // 0x0010 (size: 0x10)
//     int32 Concentration;          // 0x0020 (size: 0x4)
//     FName DanQingName;            // 0x0024 (size: 0x8)
//     FName DanQingDes;             // 0x002C (size: 0x8)
//     FSoftObjectPath DanQingIcon;  // 0x0038 (size: 0x20)

// }; // Size: 0x58

// struct FDanYaoConfig : public FTableRowBase
// {
//     int32 RewardDanItemID;           // 0x0008 (size: 0x4)
//     TArray<int32> YaoYinIDs;         // 0x0010 (size: 0x10)
//     TArray<int32> NeedMaterialGroup; // 0x0020 (size: 0x10)
//     int32 NeedMaterialValue;         // 0x0030 (size: 0x4)
//     float DaiGongCoefficient;        // 0x0034 (size: 0x4)
//     int32 MinProductNum;             // 0x0038 (size: 0x4)
//     int32 MaxProductNum;             // 0x003C (size: 0x4)

// }; // Size: 0x40

// struct FDanYaoFormulaItemConfig : public FTableRowBase
// {
//     int32 ItemTemplateID;     // 0x0008 (size: 0x4)
//     FFormulaInfo FormulaInfo; // 0x0010 (size: 0x60)

// }; // Size: 0x70

// struct FDanYaoTypeInfo
// {
//     TArray<int32> StageArray; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FDanYeConfig : public FTableRowBase
// {
//     int32 DanYeID;                  // 0x0008 (size: 0x4)
//     EWuXingType WuXingType;         // 0x000C (size: 0x1)
//     TArray<int32> QiReqToDanYe;     // 0x0010 (size: 0x10)
//     int32 Level;                    // 0x0020 (size: 0x4)
//     int32 MaxNumber;                // 0x0024 (size: 0x4)
//     int32 EffectType;               // 0x0028 (size: 0x4)
//     FDynamicTraitSpec BattleEffect; // 0x0030 (size: 0x100)
//     FSoftObjectPath BEIcon;         // 0x0130 (size: 0x20)
//     FName DanYeDes;                 // 0x0150 (size: 0x8)
//     bool IsUseJinDan;               // 0x0158 (size: 0x1)
//     int32 AddYuanYingValue;         // 0x015C (size: 0x4)

// }; // Size: 0x160

// struct FDaoYunConfig : public FTableRowBase
// {
//     EDaoYunType DaoYunType;                     // 0x0008 (size: 0x1)
//     FString DaoYunName;                         // 0x0010 (size: 0x10)
//     FString Desc;                               // 0x0020 (size: 0x10)
//     FSoftObjectPath IconPath;                   // 0x0030 (size: 0x20)
//     TArray<FString> EffectDesc;                 // 0x0050 (size: 0x10)
//     TArray<FSoftObjectPath> EffectIcon;         // 0x0060 (size: 0x10)
//     FSkillTraitArray EffectBattleTrait;         // 0x0070 (size: 0x10)
//     TArray<FTraitValueData> TraitValueDataList; // 0x0080 (size: 0x10)
//     TArray<int32> EffectConsume;                // 0x0090 (size: 0x10)

// }; // Size: 0xA0

// struct FDaoYunInfo
// {
//     int32 DaoYunValue;                           // 0x0000 (size: 0x4)
//     TMap<int32, int32> DaoYunAllocateToTraitMap; // 0x0008 (size: 0x50)

// }; // Size: 0x58

// struct FDeathDataInfo : public FGameDataBase
// {
//     EDeathReasonType DeathReason; // 0x0008 (size: 0x1)
//     int32 DeathTurn;              // 0x000C (size: 0x4)

// }; // Size: 0x10

// struct FDefaultCharacterInfo : public FRPGAttributeBase
// {
//     int32 DefaultCharacterID;                 // 0x0A58 (size: 0x4)
//     TArray<int32> ExistWorldIDs;              // 0x0A60 (size: 0x10)
//     FPresetNpcInitConfig PresetNpcInitConfig; // 0x0A70 (size: 0x30)

// }; // Size: 0xAA0

// struct FDelegateQuestCreate : public FTableRowBase
// {
//     FName DelegateName;                       // 0x0008 (size: 0x8)
//     TArray<int32> FameStand;                  // 0x0010 (size: 0x10)
//     EMRelationshipType ConditionRelationship; // 0x0020 (size: 0x1)
//     int32 QuestID;                            // 0x0024 (size: 0x4)
//     int32 POILimit;                           // 0x0028 (size: 0x4)
//     int32 AwardMoney;                         // 0x002C (size: 0x4)
//     int32 AwardFame;                          // 0x0030 (size: 0x4)
//     int32 AwardGAB;                           // 0x0034 (size: 0x4)
//     int32 AwardItem;                          // 0x0038 (size: 0x4)
//     FString QuestDesc;                        // 0x0040 (size: 0x10)
//     FString QuestTargetDesc;                  // 0x0050 (size: 0x10)
//     int32 ActiveMaxNum;                       // 0x0060 (size: 0x4)
//     TArray<int32> PlayerStage;                // 0x0068 (size: 0x10)
//     TArray<int32> NPCStage;                   // 0x0078 (size: 0x10)
//     int32 NpcStereoID;                        // 0x0088 (size: 0x4)

// }; // Size: 0x90

// struct FDelegateQuestFixedData
// {
//     int32 MinUpdateInterval; // 0x0000 (size: 0x4)
//     float ExpectRatio;       // 0x0004 (size: 0x4)
//     int32 MaxDelegateNum;    // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FDestinyAttribute
// {
//     int32 GainToltalDestinyPoint;           // 0x0000 (size: 0x4)
//     int32 CurRemainDestinyPoint;            // 0x0004 (size: 0x4)
//     TArray<FTigramAttribute> TrigramPoints; // 0x0008 (size: 0x10)

// }; // Size: 0x18

// struct FDialogueConfig : public FTableRowBase
// {
//     int32 ID;                         // 0x0008 (size: 0x4)
//     int32 SpeakerID;                  // 0x000C (size: 0x4)
//     int32 ListenerID;                 // 0x0010 (size: 0x4)
//     bool bUseDynamicID;               // 0x0014 (size: 0x1)
//     FString DialogueText;             // 0x0018 (size: 0x10)
//     FSoftObjectPath IllustrationPath; // 0x0028 (size: 0x20)
//     FName SoundName;                  // 0x0048 (size: 0x8)
//     int32 SpeakerEmote;               // 0x0050 (size: 0x4)
//     int32 ListenerEmote;              // 0x0054 (size: 0x4)
//     TArray<FDialogueOption> Options;  // 0x0058 (size: 0x10)

// }; // Size: 0x68

// struct FDialogueOption
// {
//     FName OptionName;     // 0x0000 (size: 0x8)
//     int32 NextDialogueID; // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FDifficultyConfig
// {
//     int32 Weight;       // 0x0000 (size: 0x4)
//     int32 LevelAdd;     // 0x0004 (size: 0x4)
//     FVector ModelScale; // 0x0008 (size: 0x18)

// }; // Size: 0x20

// struct FDishonorConfig
// {
//     int32 GiveUpMoodDecrease; // 0x0000 (size: 0x4)
//     int32 EscapeMoodDecrease; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FDissolveEffectTask : public FTaskBase
// {
// }; // Size: 0x20

// struct FDropBasicConfig : public FTableRowBase
// {
//     int32 DropID;               // 0x0008 (size: 0x4)
//     EDropType DropType;         // 0x000C (size: 0x1)
//     int32 TypeValue;            // 0x0010 (size: 0x4)
//     FDropItemInfo DropItemInfo; // 0x0018 (size: 0x38)

// }; // Size: 0x50

// struct FDropItemInfo
// {
//     int32 ItemId;                // 0x0000 (size: 0x4)
//     int32 ItemRare;              // 0x0004 (size: 0x4)
//     int32 ItemStage;             // 0x0008 (size: 0x4)
//     EWuXingType WuxingLimit;     // 0x000C (size: 0x1)
//     int32 StageLimitMin;         // 0x0010 (size: 0x4)
//     int32 StageLimitMax;         // 0x0014 (size: 0x4)
//     int32 CountMin;              // 0x0018 (size: 0x4)
//     int32 CountMax;              // 0x001C (size: 0x4)
//     int32 Weight;                // 0x0020 (size: 0x4)
//     bool IsMust;                 // 0x0024 (size: 0x1)
//     bool IsIsolate;              // 0x0025 (size: 0x1)
//     bool bWuXingCondition;       // 0x0026 (size: 0x1)
//     TArray<FName> EquipGenFixID; // 0x0028 (size: 0x10)

// }; // Size: 0x38

// struct FDropPackConfig : public FTableRowBase
// {
//     int32 PackID;               // 0x0008 (size: 0x4)
//     FDropItemInfo DropItemInfo; // 0x0010 (size: 0x38)
//     int32 CountLimit;           // 0x0048 (size: 0x4)

// }; // Size: 0x50

// struct FDynamicActorIndexInfo : public FGameDataBase
// {
// }; // Size: 0x10

// struct FDynamicAttributeModify
// {
//     FGameplayAttribute DstAttribute;              // 0x0000 (size: 0x38)
//     TEnumAsByte<EGameplayModOp::Type> ModifierOp; // 0x0038 (size: 0x1)
//     FDynamicAttributeValue Value;                 // 0x0040 (size: 0x68)
//     FGameplayTag ToAddTag;                        // 0x00A8 (size: 0x8)
//     FGameplayTagContainer SourceReqTags;          // 0x00B0 (size: 0x20)
//     FGameplayTagContainer TargetReqTags;          // 0x00D0 (size: 0x20)

// }; // Size: 0xF0

// struct FDynamicAttributeValue
// {
//     float BaseValue;                               // 0x0000 (size: 0x4)
//     TEnumAsByte<EMSkillTargetType> AttributeOwner; // 0x0004 (size: 0x1)
//     TEnumAsByte<EGameplayModOp::Type> ModifierOp;  // 0x0005 (size: 0x1)
//     FGameplayAttribute Attribute;                  // 0x0008 (size: 0x38)
//     FGameplayTagContainer AttributeSourceReqTags;  // 0x0040 (size: 0x20)
//     bool bPureGet;                                 // 0x0060 (size: 0x1)

// }; // Size: 0x68

// struct FDynamicTraitSpec
// {
//     FName TemplateTraitID;                      // 0x0000 (size: 0x8)
//     int32 BaseProbabilityOverride;              // 0x0008 (size: 0x4)
//     int32 AddCoefficient;                       // 0x000C (size: 0x4)
//     int32 AddCoefficientEx;                     // 0x0010 (size: 0x4)
//     FGameplayTagContainer ReqGATagAdd;          // 0x0018 (size: 0x20)
//     FGameplayTagContainer ReqGETagAdd;          // 0x0038 (size: 0x20)
//     FGameplayTagContainer ReqSourceTagAdd;      // 0x0058 (size: 0x20)
//     FGameplayTagContainer ReqTargetTagAdd;      // 0x0078 (size: 0x20)
//     bool bOverride_Transmit;                    // 0x0098 (size: 0x1)
//     bool bTransitToSummon;                      // 0x0099 (size: 0x1)
//     FGameplayTagContainer TransmitTagReqAdd;    // 0x00A0 (size: 0x20)
//     FGameplayTagContainer TransmitTagIgnoreAdd; // 0x00C0 (size: 0x20)
//     FString DisplayDesc;                        // 0x00E0 (size: 0x10)
//     TArray<FSkillTraitDesc> SkillTraitArray;    // 0x00F0 (size: 0x10)

// }; // Size: 0x100

// struct FDynamicValueGamePlayEffect
// {
//     TEnumAsByte<EMSkillTargetType> SourceCastType;            // 0x0000 (size: 0x1)
//     TEnumAsByte<EMSkillTargetType> TargetType;                // 0x0001 (size: 0x1)
//     TEnumAsByte<EM_LevelType> LevelType;                      // 0x0002 (size: 0x1)
//     EGameplayEffectDurationType DurationPolicy;               // 0x0003 (size: 0x1)
//     int32 BuffTemplateID;                                     // 0x0004 (size: 0x4)
//     uint8 bSaveToAbilityInstance;                             // 0x0008 (size: 0x1)
//     uint8 bOveride_BuffDynamicStack;                          // 0x0008 (size: 0x1)
//     uint8 bOveride_BuffDynamicDurationTime;                   // 0x0008 (size: 0x1)
//     FDynamicAttributeValue BuffDynamicStack;                  // 0x0010 (size: 0x68)
//     FDynamicAttributeValue BuffDynamicDurationTime;           // 0x0078 (size: 0x68)
//     TArray<FDynamicAttributeModify> DynamicAttributeModifies; // 0x00E0 (size: 0x10)

// }; // Size: 0xF0

// struct FDynamicallyLoadedRes : public FTableRowBase
// {
//     FSoftObjectPath ResPath; // 0x0008 (size: 0x20)

// }; // Size: 0x28

// struct FECSGameConfigDataBase : public FGameDataBase
// {
// }; // Size: 0x8

// struct FEmoteAnimationConfig : public FTableRowBase
// {
//     int32 EmoteID;               // 0x0008 (size: 0x4)
//     FString EmoteName;           // 0x0010 (size: 0x10)
//     FSoftObjectPath EmoteEffect; // 0x0020 (size: 0x20)
//     int32 EmoteEffectOffX;       // 0x0040 (size: 0x4)
//     int32 EmoteEffectOffY;       // 0x0044 (size: 0x4)

// }; // Size: 0x48

// struct FEntityAllBattlesGameData : public FGameDataBase
// {
//     TArray<FCommonEcsSaveEntityIndex> BattleEntities; // 0x0008 (size: 0x10)

// }; // Size: 0x18

// struct FEntityStructBase
// {
// }; // Size: 0x8

// struct FEnttIndex
// {
// }; // Size: 0x8

// struct FEquipAffixPoolConfig
// {
//     int32 PoolID;      // 0x0000 (size: 0x4)
//     int32 PoolWeight;  // 0x0004 (size: 0x4)
//     int32 PoolMaxTier; // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FEquipGenFixConfig : public FTableRowBase
// {
//     int32 InnateAtFix;       // 0x0008 (size: 0x4)
//     int32 InnateAtFixTier;   // 0x000C (size: 0x4)
//     TArray<int32> AtFix;     // 0x0010 (size: 0x10)
//     TArray<int32> AtFixTier; // 0x0020 (size: 0x10)

// }; // Size: 0x30

// struct FEquipTraitInfo
// {
//     TArray<int32> AffixIDArray;                                            // 0x0000 (size: 0x10)
//     TArray<int32> TierArray;                                               // 0x0010 (size: 0x10)
//     TArray<int32> RandomSeed;                                              // 0x0020 (size: 0x10)
//     TArray<EEquipAffixValueGenerateType> EquipAffixValueGenerateTypeArray; // 0x0030 (size: 0x10)
//     FSkillTraitArray SkillTraitArray;                                      // 0x0040 (size: 0x10)

// }; // Size: 0x50

// struct FEquipmentConfig : public FTableRowBase
// {
//     int32 ItemTemplateID;              // 0x0008 (size: 0x4)
//     EItemEuipSubType ItemEquipSubType; // 0x000C (size: 0x1)
//     EForgeSecondType ForgeType;        // 0x000D (size: 0x1)

// }; // Size: 0x10

// struct FEvolveZongMenJobReplenishConfig
// {
//     TMap<class EZongMenJobType, class FZongMenJobReplenishConfig> JobReplenishMap; // 0x0000 (size: 0x50)

// }; // Size: 0x50

// struct FExternAttribute_CarriedAffix : public FGameDataBase
// {
// }; // Size: 0x58

// struct FFNGameTime
// {
//     int32 TurnCount;  // 0x0000 (size: 0x4)
//     int32 StepRemain; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FFieldBattleFixedData : public FTableRowBase
// {
//     int32 BattleDifficulty;  // 0x0008 (size: 0x4)
//     int32 Level;             // 0x000C (size: 0x4)
//     FName MonsterMainInfo;   // 0x0010 (size: 0x8)
//     FName MonsterSecondInfo; // 0x0018 (size: 0x8)

// }; // Size: 0x20

// struct FFightAttribute
// {
//     int32 Stage;                                     // 0x0000 (size: 0x4)
//     int32 Phase;                                     // 0x0004 (size: 0x4)
//     float LQ_Total;                                  // 0x0008 (size: 0x4)
//     float LQ_MaxTotal;                               // 0x000C (size: 0x4)
//     float LQ_MaxTotalChange;                         // 0x0010 (size: 0x4)
//     FTraumaData TraumaData;                          // 0x0018 (size: 0x30)
//     int32 Perception;                                // 0x0048 (size: 0x4)
//     TArray<FDaoYunInfo> DaoYunInfoList;              // 0x0050 (size: 0x10)
//     int32 Mental_Lechou;                             // 0x0060 (size: 0x4)
//     int32 Metal_Xibei;                               // 0x0064 (size: 0x4)
//     int32 Mental_Nujing;                             // 0x0068 (size: 0x4)
//     int32 Mental_ZuYuan;                             // 0x006C (size: 0x4)
//     TArray<int32> CapcityWuxing;                     // 0x0070 (size: 0x10)
//     EWuXingType MaxCapacityType;                     // 0x0080 (size: 0x1)
//     TArray<int32> LearnedSkillBook;                  // 0x0088 (size: 0x10)
//     TMap<int32, FGongFaEntity> LearnedPassive;       // 0x0098 (size: 0x50)
//     TMap<int32, FXinJueState> LearnedXinjue;         // 0x00E8 (size: 0x50)
//     TArray<int32> LearnedYaoYi;                      // 0x0138 (size: 0x10)
//     TMap<int32, FSkillGroupEntity> AllSKillTypeInfo; // 0x0148 (size: 0x50)
//     int32 Mobility;                                  // 0x0198 (size: 0x4)
//     float Inspiration;                               // 0x019C (size: 0x4)
//     int32 InspirationLevel;                          // 0x01A0 (size: 0x4)

// }; // Size: 0x1A8

// struct FFixedOperateDynamicPriority
// {
//     TArray<FBaseOperateData> Operates; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FFloatAttributeValue
// {
//     float ValueBase;    // 0x0008 (size: 0x4)
//     float ValueMulti;   // 0x000C (size: 0x4)
//     float ValuePostAdd; // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FForgeCostConfig : public FTableRowBase
// {
//     int32 StageIndex;                    // 0x0008 (size: 0x4)
//     TMap<int32, FRarityInfo> RarityInfo; // 0x0010 (size: 0x50)
//     float DaiGongCoefficient;            // 0x0060 (size: 0x4)

// }; // Size: 0x68

// struct FForgeTemplateConfig : public FTableRowBase
// {
//     EItemEuipSubType ItemEquipSubType;    // 0x0008 (size: 0x1)
//     EForgeSecondType ForgeType;           // 0x0009 (size: 0x1)
//     int32 AttributeTraitID;               // 0x000C (size: 0x4)
//     int32 AttributeTraitLevel;            // 0x0010 (size: 0x4)
//     FSoftObjectPath TypeIcon;             // 0x0018 (size: 0x20)
//     FName EquipmentName;                  // 0x0038 (size: 0x8)
//     FName EquipmentDesc;                  // 0x0040 (size: 0x8)
//     bool BeForge;                         // 0x0048 (size: 0x1)
//     TMap<int32, float> FixedAffixPropMap; // 0x0050 (size: 0x50)
//     int32 BasePoolID;                     // 0x00A0 (size: 0x4)
//     int32 FixedBasePoolTier;              // 0x00A4 (size: 0x4)
//     int32 FixedBasePoolWeight;            // 0x00A8 (size: 0x4)
//     int32 ExtraBasePoolWeight;            // 0x00AC (size: 0x4)
//     TMap<int32, int32> DropExtraPoolMap;  // 0x00B0 (size: 0x50)

// }; // Size: 0x100

// struct FFormulaInfo
// {
//     int32 YaoYinID;                // 0x0000 (size: 0x4)
//     int32 DanYaoID;                // 0x0004 (size: 0x4)
//     TMap<int32, int32> FormulaMap; // 0x0008 (size: 0x50)
//     bool IsLike;                   // 0x0058 (size: 0x1)

// }; // Size: 0x60

// struct FFuLuConfig : public FTableRowBase
// {
//     int32 FuLuID;                 // 0x0008 (size: 0x4)
//     int32 RewardItemID;           // 0x000C (size: 0x4)
//     int32 RewadNum;               // 0x0010 (size: 0x4)
//     TArray<int32> NeedItem;       // 0x0018 (size: 0x10)
//     TArray<int32> NeedItemNumber; // 0x0028 (size: 0x10)
//     int32 FuLuCostTime;           // 0x0038 (size: 0x4)

// }; // Size: 0x40

// struct FFuWenInfo : public FTableRowBase
// {
//     int32 FuWenID;                            // 0x0008 (size: 0x4)
//     FName FuWenType;                          // 0x000C (size: 0x8)
//     FSoftClassPath FuWenGameAbilityClassPath; // 0x0018 (size: 0x20)
//     int32 FuWenGameAbilityClassLevel;         // 0x0038 (size: 0x4)
//     FName FuWenNumericalValue;                // 0x003C (size: 0x8)
//     FName FuWenParameterValue;                // 0x0044 (size: 0x8)

// }; // Size: 0x50

// struct FFuZhiInfo : public FTableRowBase
// {
//     int32 FuZhiID;                                                       // 0x0008 (size: 0x4)
//     FGameplayTag CDTag;                                                  // 0x000C (size: 0x8)
//     float CDTime;                                                        // 0x0014 (size: 0x4)
//     TSubclassOf<class UFuWenSkillGameplayAbility> FuZhiGameAbilityClass; // 0x0018 (size: 0x8)
//     FSoftClassPath FuluUseClass;                                         // 0x0020 (size: 0x20)
//     bool bUseInPracticeCell;                                             // 0x0040 (size: 0x1)

// }; // Size: 0x48

// struct FGEBuffBaseInfo : public FTableRowBase
// {
//     int32 BuffID;                                                          // 0x0008 (size: 0x4)
//     int32 BuffType;                                                        // 0x000C (size: 0x4)
//     TArray<float> BaseDamage;                                              // 0x0010 (size: 0x10)
//     FBuffConditionCustomCheckSpec CustomEffectSpec;                        // 0x0020 (size: 0x68)
//     TArray<int32> DurationTime;                                            // 0x0088 (size: 0x10)
//     FScalableFloat Period;                                                 // 0x0098 (size: 0x28)
//     bool bExecutePeriodicEffectOnApplication;                              // 0x00C0 (size: 0x1)
//     EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x00C1 (size: 0x1)
//     EGameplayEffectDurationType DurationPolicy;                            // 0x00C2 (size: 0x1)
//     TArray<FBuffModifiesByLevel> ModifiesByLevel;                          // 0x00C8 (size: 0x10)
//     TArray<FConditionalGameplayEffect> ConditionalGameplayEffects;         // 0x00D8 (size: 0x10)
//     EGameplayEffectStackingType StackingType;                              // 0x00E8 (size: 0x1)
//     int32 StackLimitCount;                                                 // 0x00EC (size: 0x4)
//     EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy;      // 0x00F0 (size: 0x1)
//     EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy;            // 0x00F1 (size: 0x1)
//     EGameplayEffectStackingExpirationPolicy StackExpirationPolicy;         // 0x00F2 (size: 0x1)
//     TArray<int32> OverflowEffects;                                         // 0x00F8 (size: 0x10)
//     bool bDenyOverflowApplication;                                         // 0x0108 (size: 0x1)
//     bool bClearStackOnOverflow;                                            // 0x0109 (size: 0x1)
//     int32 EvolveRequireStackCount;                                         // 0x010C (size: 0x4)
//     int32 EvolveCoefficient;                                               // 0x0110 (size: 0x4)
//     TArray<int32> EvolveEffects;                                           // 0x0118 (size: 0x10)
//     TArray<FSkillTraitArray> BuffTraits;                                   // 0x0128 (size: 0x10)
//     bool bHandleStateTrait;                                                // 0x0138 (size: 0x1)
//     FGameplayTagContainer GrantedTags;                                     // 0x0140 (size: 0x20)
//     FGameplayTagContainer BuffTags;                                        // 0x0160 (size: 0x20)
//     FGameplayTagContainer GrantedImmunityReqTags;                          // 0x0180 (size: 0x20)
//     FGameplayTagContainer OffGoingtag;                                     // 0x01A0 (size: 0x20)
//     FGameplayTagContainer BuffReqTag;                                      // 0x01C0 (size: 0x20)
//     FGameplayTagContainer RemoveReqTags;                                   // 0x01E0 (size: 0x20)
//     TArray<FGameplayAbilitySpecDef> GrantedAbilities;                      // 0x0200 (size: 0x10)
//     TArray<FBuffDisplayCue> BuffDisplayCues;                               // 0x0210 (size: 0x10)
//     FBuffDisplayInfo BuffDisplayInfo;                                      // 0x0220 (size: 0x60)
//     TArray<class UFNGameEffectBuffBase *> BuffGEInstances;                 // 0x0280 (size: 0x10)

// }; // Size: 0x290

// struct FGameAbilityAIConfigInfo : public FTableRowBase
// {
//     FBattleAI_AbilityConfigInfo GameAbilityAIConfigInfo; // 0x0008 (size: 0x38)

// }; // Size: 0x40

// struct FGameDataBase
// {
// }; // Size: 0x8

// struct FGameInputActionDesc
// {
//     class UInputAction *InputAction; // 0x0000 (size: 0x8)
//     bool OpenForUserSetting;         // 0x0008 (size: 0x1)
//     FName CategoryGroup;             // 0x000C (size: 0x8)
//     FString DisplayName;             // 0x0018 (size: 0x10)
//     FString CategoryDisplayGroup;    // 0x0028 (size: 0x10)

// }; // Size: 0x38

// struct FGameInstanceData
// {
//     class UFNGameInstance *GameInstance; // 0x0000 (size: 0x8)

// }; // Size: 0x8

// struct FGameNameTable : public FTableRowBase
// {
//     FString FamilyName; // 0x0008 (size: 0x10)
//     FString MaleName;   // 0x0018 (size: 0x10)
//     FString FemaleName; // 0x0028 (size: 0x10)
//     FString NormalName; // 0x0038 (size: 0x10)

// }; // Size: 0x48

// struct FGamePerformanceStatGroup
// {
//     FGameplayTagQuery VisibilityQuery;                  // 0x0000 (size: 0x48)
//     TSet<EGameDisplayablePerformanceStat> AllowedStats; // 0x0048 (size: 0x50)

// }; // Size: 0x98

// struct FGameQualityDeviceProfileVariant
// {
//     FText DisplayName;           // 0x0000 (size: 0x18)
//     FString DeviceProfileSuffix; // 0x0018 (size: 0x10)
//     int32 MinRefreshRate;        // 0x0028 (size: 0x4)

// }; // Size: 0x30

// struct FGameSubmixEffectChainMap
// {
//     TSoftObjectPtr<USoundSubmix> Submix;                                // 0x0000 (size: 0x30)
//     TArray<TSoftObjectPtr<USoundEffectSubmixPreset>> SubmixEffectChain; // 0x0030 (size: 0x10)

// }; // Size: 0x40

// struct FGameTabDescriptor
// {
//     FName TabId;                                         // 0x0000 (size: 0x8)
//     FText TabText;                                       // 0x0008 (size: 0x18)
//     FSlateBrush IconBrush;                               // 0x0020 (size: 0xD0)
//     bool bHidden;                                        // 0x00F0 (size: 0x1)
//     TSubclassOf<class UCommonButtonBase> TabButtonType;  // 0x00F8 (size: 0x8)
//     TSubclassOf<class UCommonUserWidget> TabContentType; // 0x0100 (size: 0x8)
//     class UWidget *CreatedTabContentWidget;              // 0x0108 (size: 0x8)

// }; // Size: 0x110

// struct FGameplayAbilitySpecInfo
// {
//     class UAnimMontage *SkillAnimMontage;       // 0x0018 (size: 0x8)
//     class UAnimMontage *SkillAnimChargeMontage; // 0x0020 (size: 0x8)
//     float OriginCastTime;                       // 0x0028 (size: 0x4)

// }; // Size: 0x30

// struct FGamerType
// {
//     TArray<int32> GamerArr; // 0x0000 (size: 0x10)
//     int32 Winner;           // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FGasCustomCalcSpec
// {
//     TSubclassOf<class UCustomEffect_CalcProbabilityBase> GasCustomCalcClass; // 0x0000 (size: 0x8)
//     FGasCustomEffectContext CustomEffectContext;                             // 0x0008 (size: 0x60)

// }; // Size: 0x68

// struct FGasCustomEffectContext
// {
//     TArray<int32> IntParamers;                     // 0x0000 (size: 0x10)
//     TArray<int32> AttributeParamers;               // 0x0010 (size: 0x10)
//     TArray<float> floatParamers;                   // 0x0020 (size: 0x10)
//     float AddCoefficient;                          // 0x0030 (size: 0x4)
//     float ExCoefficient;                           // 0x0034 (size: 0x4)
//     FGameplayTagContainer OutGameplayTagContainer; // 0x0038 (size: 0x20)
//     float AddCoefficientScale;                     // 0x0058 (size: 0x4)
//     float ExCoefficientScale;                      // 0x005C (size: 0x4)

// }; // Size: 0x60

// struct FGasCustomEffectSpec
// {
//     TSubclassOf<class UGasCustomEffectbase> GasCustomEffectClass; // 0x0000 (size: 0x8)
//     FGasCustomEffectContext CustomEffectContext;                  // 0x0008 (size: 0x60)

// }; // Size: 0x68

// struct FGasCustomExecuteSpec
// {
//     TSubclassOf<class UCustomEffect_ExcuteBase> GasCustomExeClass; // 0x0000 (size: 0x8)
//     FGasCustomEffectContext CustomEffectContext;                   // 0x0008 (size: 0x60)

// }; // Size: 0x68

// struct FGenerateInvadeValueConfig
// {
//     int32 HexVal;                                 // 0x0000 (size: 0x4)
//     int32 GAtherLQVal;                            // 0x0004 (size: 0x4)
//     TMap<TSubclassOf<UPoibase>, int32> POIValues; // 0x0008 (size: 0x50)

// }; // Size: 0x58

// struct FGiveGiftConfig
// {
//     float ValueToAccept; // 0x0000 (size: 0x4)
//     float F_Coefficient; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FGiveItemInfo : public FTableRowBase
// {
//     int32 GiveItemID;   // 0x0008 (size: 0x4)
//     int32 GiveItemNum;  // 0x000C (size: 0x4)
//     int32 RandomWidget; // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FGongFaConfig : public FTableRowBase
// {
//     int32 GongFaID;                                 // 0x0008 (size: 0x4)
//     FName GongFaName;                               // 0x000C (size: 0x8)
//     int32 System;                                   // 0x0014 (size: 0x4)
//     int32 World;                                    // 0x0018 (size: 0x4)
//     int32 GongFaReqStage;                           // 0x001C (size: 0x4)
//     TArray<int32> GongFaReqCapcity;                 // 0x0020 (size: 0x10)
//     int32 GongFaReqTime;                            // 0x0030 (size: 0x4)
//     EWuXingType WuXingType;                         // 0x0034 (size: 0x1)
//     int32 GongFaRarity;                             // 0x0038 (size: 0x4)
//     TArray<EDaoYunType> Rules;                      // 0x0040 (size: 0x10)
//     int32 GongFaEffectType;                         // 0x0050 (size: 0x4)
//     TArray<float> LQReservedPer;                    // 0x0058 (size: 0x10)
//     TArray<float> LQReserved;                       // 0x0068 (size: 0x10)
//     FSoftObjectPath GongFaIconPath;                 // 0x0078 (size: 0x20)
//     TArray<FSkillTraitArray> ExternConditionTraits; // 0x0098 (size: 0x10)
//     TArray<float> LevelUpExp;                       // 0x00A8 (size: 0x10)

// }; // Size: 0xB8

// struct FGongFaEntity
// {
//     int32 GongFaLevel;  // 0x0000 (size: 0x4)
//     float CurGongFaExp; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FGongFaExInfo
// {
// }; // Size: 0x1

// struct FGongFaFettersConfig : public FTableRowBase
// {
//     int32 GongFaFettersID;                  // 0x0008 (size: 0x4)
//     int32 Type;                             // 0x000C (size: 0x4)
//     int32 Value;                            // 0x0010 (size: 0x4)
//     int32 GongFaFettersReqNum;              // 0x0014 (size: 0x4)
//     FSkillTraitArray ExternConditionTraits; // 0x0018 (size: 0x10)
//     FName GongFaFettersName;                // 0x0028 (size: 0x8)
//     FSlateColor GongFaFettersColor;         // 0x0030 (size: 0x14)
//     FName GongFaFettersDesc;                // 0x0044 (size: 0x8)
//     FSoftObjectPath FattersIconPath;        // 0x0050 (size: 0x20)

// }; // Size: 0x70

// struct FGridCellInfo
// {
//     int32 CellFlag;                                         // 0x0000 (size: 0x4)
//     FVector CenterWorldPosition;                            // 0x0008 (size: 0x18)
//     class AHexGridCellActor *GridActor;                     // 0x0020 (size: 0x8)
//     int32 LandscapeAreaID;                                  // 0x0028 (size: 0x4)
//     EMLandscapeAreaType LandscapeAreaType;                  // 0x002C (size: 0x1)
//     TSubclassOf<class UAreaLandTypeDescBase> LandTypeClass; // 0x0030 (size: 0x8)
//     float CurrentLQ;                                        // 0x0038 (size: 0x4)
//     float MaxLQ;                                            // 0x003C (size: 0x4)
//     float OverFlowLQ;                                       // 0x0040 (size: 0x4)
//     uint8 LQTypeID;                                         // 0x0044 (size: 0x1)
//     int32 StateAreaID;                                      // 0x0048 (size: 0x4)
//     int32 ChildRegionID;                                    // 0x004C (size: 0x4)
//     FIntPoint HexCoordinate;                                // 0x0050 (size: 0x8)
//     int32 CellID;                                           // 0x0058 (size: 0x4)
//     bool HasExplore;                                        // 0x005C (size: 0x1)
//     EDaoYunType DaoYunType;                                 // 0x005D (size: 0x1)
//     int32 Height;                                           // 0x0060 (size: 0x4)
//     uint8 isAbleWalk;                                       // 0x0064 (size: 0x1)
//     uint8 isAbleFly;                                        // 0x0064 (size: 0x1)
//     uint8 IsInvaded;                                        // 0x0068 (size: 0x1)
//     uint8 IsInCameraInsight;                                // 0x0068 (size: 0x1)
//     uint8 bDisablePractice;                                 // 0x0068 (size: 0x1)
//     uint8 bShowLQEffect;                                    // 0x0068 (size: 0x1)
//     uint8 bUnGenDynamicPOI;                                 // 0x0068 (size: 0x1)
//     EM_GRIDINSIGHT_TYPE IsInPlayerInsight;                  // 0x0069 (size: 0x1)
//     FEnttIndex EntiyIndex;                                  // 0x0070 (size: 0x8)

// }; // Size: 0x78

// struct FGrowTroopUnAttachableGrid
// {
// }; // Size: 0x10

// struct FGuidanceWndConfigData : public FTableRowBase
// {
//     FName WndWidgetName;                                    // 0x0008 (size: 0x8)
//     TArray<FSingleGuidanceConfig> ListOfGuidanceWidgetName; // 0x0010 (size: 0x10)
//     bool bNeedPauseGame;                                    // 0x0020 (size: 0x1)
//     int32 SaveID;                                           // 0x0024 (size: 0x4)

// }; // Size: 0x28

// struct FGuideConfig : public FTableRowBase
// {
//     int32 ID;                      // 0x0008 (size: 0x4)
//     TArray<FGuideStep> GuideSteps; // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FGuideStep
// {
//     EGuideType GuideType;                          // 0x0000 (size: 0x1)
//     FImageGuide ImageGuide;                        // 0x0008 (size: 0x28)
//     TArray<FWidgetGuideEffect> WidgetGuideEffects; // 0x0030 (size: 0x10)
//     FHUDGuide HUDGuide;                            // 0x0040 (size: 0x28)

// }; // Size: 0x68

// struct FGymFloorConfig : public FTableRowBase
// {
//     int32 BaseFee;            // 0x0008 (size: 0x4)
//     int32 LQConcentration;    // 0x000C (size: 0x4)
//     EZongMenJobType JobLimit; // 0x0010 (size: 0x1)
//     FName GymFloorName;       // 0x0014 (size: 0x8)

// }; // Size: 0x20

// struct FGymRoomConfig : public FTableRowBase
// {
//     int32 GymID;                             // 0x0008 (size: 0x4)
//     TArray<FGymFloorConfig> GymFloorConfigs; // 0x0010 (size: 0x10)
//     TArray<int32> JobMaxLQ;                  // 0x0020 (size: 0x10)
//     TArray<float> WuXingEnvironment;         // 0x0030 (size: 0x10)

// }; // Size: 0x40

// struct FHQAndDivZongMenGeneralConfig
// {
//     TArray<EZongMenJobType> JobLevelList; // 0x0000 (size: 0x10)
//     EZongMenJobType HighestJob;           // 0x0010 (size: 0x1)
//     EZongMenJobType LowestJob;            // 0x0011 (size: 0x1)
//     int32 QuestPeriodTurn;                // 0x0014 (size: 0x4)
//     int32 MaxQuestNum;                    // 0x0018 (size: 0x4)

// }; // Size: 0x20

// struct FHQAndDivZongMenInfo
// {
//     class UZhongMenBase *HQZongMen;                // 0x0000 (size: 0x8)
//     TArray<class UZhongMenBase *> DivZongMenArray; // 0x0008 (size: 0x10)

// }; // Size: 0x18

// struct FHUDGuide
// {
//     FSoftClassPath HUDGuideClassPath;             // 0x0000 (size: 0x20)
//     EGuideStepCompleteType GuideStepCompleteType; // 0x0020 (size: 0x1)
//     int32 State;                                  // 0x0024 (size: 0x4)

// }; // Size: 0x28

// struct FHealNpcConfig
// {
//     FHealNpcValue BigHeal;    // 0x0000 (size: 0x8)
//     FHealNpcValue NormalHeal; // 0x0008 (size: 0x8)
//     FHealNpcValue FailedHeal; // 0x0010 (size: 0x8)
//     int32 HealTime;           // 0x0018 (size: 0x4)

// }; // Size: 0x1C

// struct FHealNpcValue
// {
//     int32 HealValue; // 0x0000 (size: 0x4)
//     int32 AddFavor;  // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FHexAreaInfo
// {
//     TArray<int32> GridAreaIndex; // 0x0000 (size: 0x10)
//     TArray<int32> AreaEdge;      // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FHexFixedGenParamers
// {
//     int32 HexCountX;                  // 0x0000 (size: 0x4)
//     int32 HexCountY;                  // 0x0004 (size: 0x4)
//     int32 CellSize;                   // 0x0008 (size: 0x4)
//     FVector WorldCenterPos;           // 0x0010 (size: 0x18)
//     bool bAdaptiveLeftBottonPoint;    // 0x0028 (size: 0x1)
//     int32 OffsetCoordinateType;       // 0x002C (size: 0x4)
//     float XPadding;                   // 0x0030 (size: 0x4)
//     float YPadding;                   // 0x0034 (size: 0x4)
//     TArray<float> DesiredLQValue;     // 0x0038 (size: 0x10)
//     TArray<float> SigmaLQ;            // 0x0048 (size: 0x10)
//     TArray<int32> HeightDistribution; // 0x0058 (size: 0x10)
//     int32 BaseHeight;                 // 0x0068 (size: 0x4)
//     FIntPoint DefaultBornCoordinate;  // 0x006C (size: 0x8)
//     bool bUseScenePlane;              // 0x0074 (size: 0x1)
//     int32 MaxMoveHeight;              // 0x0078 (size: 0x4)
//     int32 MinMoveHeight;              // 0x007C (size: 0x4)

// }; // Size: 0x80

// struct FHexGridAttributeOverride : public FGameDataBase
// {
//     uint8 bDisablePractice; // 0x0008 (size: 0x1)
//     uint8 bShowLQEffect;    // 0x0008 (size: 0x1)
//     uint8 bUnGenDynamicPOI; // 0x0008 (size: 0x1)

// }; // Size: 0x10

// struct FHexGridEventData : public FTableRowBase
// {
//     int32 ID;                                // 0x0008 (size: 0x4)
//     FString Name;                            // 0x0010 (size: 0x10)
//     TArray<int32> TriggerStageList;          // 0x0020 (size: 0x10)
//     EHexGridTriggerType TriggerType;         // 0x0030 (size: 0x1)
//     EPositionType PositionType;              // 0x0031 (size: 0x1)
//     TArray<int32> ChildRegionIDList;         // 0x0038 (size: 0x10)
//     TSubclassOf<class UPoibase> POIClass;    // 0x0048 (size: 0x8)
//     TArray<int32> NoBigWorldEventRegionList; // 0x0050 (size: 0x10)
//     int32 FirstPhaseID;                      // 0x0060 (size: 0x4)
//     int32 Weight;                            // 0x0064 (size: 0x4)
//     int32 CD;                                // 0x0068 (size: 0x4)
//     bool bReqCapacity;                       // 0x006C (size: 0x1)
//     EWuXingType CapacityType;                // 0x006D (size: 0x1)
//     bool bReqDaoYun;                         // 0x006E (size: 0x1)
//     EDaoYunType DaoYunType;                  // 0x006F (size: 0x1)
//     int32 DaoYunMinValue;                    // 0x0070 (size: 0x4)
//     int32 DaoYunMaxValue;                    // 0x0074 (size: 0x4)

// }; // Size: 0x78

// struct FHexGridEventPhaseData : public FTableRowBase
// {
//     int32 ID;                                   // 0x0008 (size: 0x4)
//     int32 Time;                                 // 0x000C (size: 0x4)
//     int32 DialogueID;                           // 0x0010 (size: 0x4)
//     TArray<FPhaseOptionData> PhaseOptions;      // 0x0018 (size: 0x10)
//     int32 BattleID;                             // 0x0028 (size: 0x4)
//     int32 BattleVictoryPhaseID;                 // 0x002C (size: 0x4)
//     int32 BattleFailurePhaseID;                 // 0x0030 (size: 0x4)
//     int32 BigWorldBuffID;                       // 0x0034 (size: 0x4)
//     int32 RewardDropID;                         // 0x0038 (size: 0x4)
//     FBigWorldAttributeName RewardAttributeName; // 0x003C (size: 0x8)
//     float RewardAttributeValue;                 // 0x0044 (size: 0x4)

// }; // Size: 0x48

// struct FHexGridExternLQEvolveFlag : public FGameDataBase
// {
// }; // Size: 0x10

// struct FHexGridFixedData : public FTableRowBase
// {
//     FIntPoint GridCoord;                                   // 0x0008 (size: 0x8)
//     FVector WorldCenterPos;                                // 0x0010 (size: 0x18)
//     TSubclassOf<class UAreaLandTypeDescBase> LandMeshType; // 0x0028 (size: 0x8)
//     EMLandscapeAreaType LandscapeAreaType;                 // 0x0030 (size: 0x1)
//     FTransform LandMeshTransForm;                          // 0x0040 (size: 0x60)
//     TSubclassOf<class UStateAreaDesc> StateAreaInfo;       // 0x00A0 (size: 0x8)
//     FName POIClassFixedConfigGroup;                        // 0x00A8 (size: 0x8)
//     TSubclassOf<class UPoibase> POIClass;                  // 0x00B0 (size: 0x8)
//     TArray<FInstancedStruct> ExternPoiInitData;            // 0x00B8 (size: 0x10)
//     FName POIClassFixConfigKeyName;                        // 0x00C8 (size: 0x8)
//     FTransform PosMeshTransForm;                           // 0x00D0 (size: 0x60)
//     uint8 LQTypeID;                                        // 0x0130 (size: 0x1)
//     FIntPoint AttachPoiInfo;                               // 0x0134 (size: 0x8)
//     int32 Height;                                          // 0x013C (size: 0x4)
//     int32 ChildRegionID;                                   // 0x0140 (size: 0x4)
//     TArray<FIntPoint> Bridge;                              // 0x0148 (size: 0x10)
//     uint8 bAttachNeighborPOI;                              // 0x0158 (size: 0x1)
//     uint8 isAbleWalk;                                      // 0x0158 (size: 0x1)
//     uint8 isAbleFly;                                       // 0x0158 (size: 0x1)
//     uint8 isBrightLightPoint;                              // 0x0158 (size: 0x1)
//     EDaoYunType DaoYunType;                                // 0x015C (size: 0x1)

// }; // Size: 0x160

// struct FHexLODGameData : public FGameDataBase
// {
// }; // Size: 0x18

// struct FHexPoiGameData : public FGameDataBase
// {
//     TWeakObjectPtr<class UPoibase> PoibaseObject; // 0x0008 (size: 0x8)

// }; // Size: 0x20

// struct FHitEffectTask : public FTaskBase
// {
// }; // Size: 0x20

// struct FHospitalHealConfigByStage
// {
//     int32 HealStage;    // 0x0000 (size: 0x4)
//     int32 HosHealPrice; // 0x0004 (size: 0x4)
//     int32 TraumaHeal;   // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FHotelConfig : public FTableRowBase
// {
//     int32 FreePryingTime;          // 0x0008 (size: 0x4)
//     int32 FreePryingCD;            // 0x000C (size: 0x4)
//     int32 FreePryingCountMin;      // 0x0010 (size: 0x4)
//     int32 FreePryingCountMax;      // 0x0014 (size: 0x4)
//     int32 SpendPryingMoney;        // 0x0018 (size: 0x4)
//     int32 SpendPryingTime;         // 0x001C (size: 0x4)
//     int32 SpendPryingCountMin;     // 0x0020 (size: 0x4)
//     int32 SpendPryingCountMax;     // 0x0024 (size: 0x4)
//     int32 RefundMoney;             // 0x0028 (size: 0x4)
//     int32 DrinkMoney;              // 0x002C (size: 0x4)
//     int32 DrinkTime;               // 0x0030 (size: 0x4)
//     int32 DrinkItemUseID;          // 0x0034 (size: 0x4)
//     TMap<FName, int32> NpcIDList;  // 0x0038 (size: 0x50)
//     TArray<int32> NormalDialogue;  // 0x0088 (size: 0x10)
//     TArray<int32> ChatDialogue;    // 0x0098 (size: 0x10)
//     int32 DrinkAloneFrontDialogue; // 0x00A8 (size: 0x4)
//     int32 ExploreFrontDialogue;    // 0x00AC (size: 0x4)
//     int32 ChatFrontDialogue;       // 0x00B0 (size: 0x4)
//     int32 MoodAdd;                 // 0x00B4 (size: 0x4)

// }; // Size: 0xB8

// struct FImageGuide
// {
//     FSoftObjectPath ImagePath; // 0x0000 (size: 0x20)
//     int32 State;               // 0x0020 (size: 0x4)

// }; // Size: 0x28

// struct FInfomationLevel
// {
//     TArray<int32> InfomationLevel; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FInitialLingFaArray
// {
//     int32 Priority; // 0x0000 (size: 0x4)
//     int32 MinNum;   // 0x0004 (size: 0x4)
//     int32 MaxNum;   // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FInsightBattlePOIGameData
// {
//     int32 LastTurn;            // 0x0000 (size: 0x4)
//     int32 NextGenTurn;         // 0x0004 (size: 0x4)
//     int32 CurTurnGenerateCell; // 0x000C (size: 0x4)

// }; // Size: 0x10

// struct FInsightFlag : public FGameDataBase
// {
//     int32 DistanceToPlayer; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FInteractDialogConfig : public FTableRowBase
// {
//     int32 DialogID;                   // 0x0008 (size: 0x4)
//     int32 StereoTypeLimit;            // 0x000C (size: 0x4)
//     EMRelationshipType RelationLimit; // 0x0010 (size: 0x1)
//     int32 StageDiffLimit;             // 0x0014 (size: 0x4)
//     FName DialogText;                 // 0x0018 (size: 0x8)

// }; // Size: 0x20

// struct FInteractTimes
// {
//     TMap<int32, int32> InteractTimes; // 0x0000 (size: 0x50)

// }; // Size: 0x50

// struct FInvadeAwardParam : public FGameDataBase
// {
//     int32 InvadeDropID;             // 0x0008 (size: 0x4)
//     int32 BasicDropCount;           // 0x000C (size: 0x4)
//     float DropSuccess_Coef;         // 0x0010 (size: 0x4)
//     float DropFailed_Coef;          // 0x0014 (size: 0x4)
//     float ProgressBasicValue;       // 0x0018 (size: 0x4)
//     int32 StdTurnCount;             // 0x001C (size: 0x4)
//     float GainProgressSuccess_Coef; // 0x0020 (size: 0x4)
//     float GainProgressFailed_Coef;  // 0x0024 (size: 0x4)

// }; // Size: 0x28

// struct FInvadeBattleTypeGameData : public FGameDataBase
// {
//     EM_INVADE_BATTLETYPE BattleType; // 0x0008 (size: 0x1)
//     FEnttIndex OwnerEntity;          // 0x0010 (size: 0x8)

// }; // Size: 0x18

// struct FInvadeConquerPoi
// {
// }; // Size: 0x8

// struct FInvadeCoreData : public FGameDataBase
// {
//     int32 CoreLevel;            // 0x0008 (size: 0x4)
//     EInvadeCoreStage CoreStage; // 0x000C (size: 0x1)

// }; // Size: 0x10

// struct FInvadeCoreDataFixedConfig : public FTableRowBase
// {
//     int32 BigWorldShowActorIndex;                         // 0x0008 (size: 0x4)
//     FInvadeCoreData InvadeCoreData;                       // 0x0010 (size: 0x10)
//     FInvadeSourceData InvadeSourceData;                   // 0x0020 (size: 0x38)
//     FInvadeTroopData TroopData;                           // 0x0058 (size: 0x18)
//     FBattleTriggerGameData PoiBattleConfig;               // 0x0070 (size: 0x30)
//     FBattleTriggerGameData PoiInvadeCellBattleConfig;     // 0x00A0 (size: 0x30)
//     FBattleTriggerGameData PoiInvadeCellTurnBattleConfig; // 0x00D0 (size: 0x30)

// }; // Size: 0x100

// struct FInvadeCtrlData : public FGameDataBase
// {
//     int32 TroopBurst;                               // 0x0008 (size: 0x4)
//     int32 TroopAddRate;                             // 0x000C (size: 0x4)
//     float TroopCalcFix;                             // 0x0010 (size: 0x4)
//     int32 PlantTroopNum;                            // 0x0014 (size: 0x4)
//     int32 PlantTroopStepTurn;                       // 0x0018 (size: 0x4)
//     int32 MaxInvadePOINumber;                       // 0x001C (size: 0x4)
//     int32 PerGrowTroopStrength;                     // 0x0020 (size: 0x4)
//     FName DefaultInvadeCoreName;                    // 0x0024 (size: 0x8)
//     TArray<int32> TroopStandardNumPlusValueByLevel; // 0x0030 (size: 0x10)
//     TArray<int32> MonsterLevelPlusValueByLevel;     // 0x0040 (size: 0x10)

// }; // Size: 0x50

// struct FInvadeDoorData : public FGameDataBase
// {
// }; // Size: 0x8

// struct FInvadeDoorDataFixedConfig : public FTableRowBase
// {
//     int32 BigWorldShowActorIndex;                         // 0x0008 (size: 0x4)
//     FInvadeDoorData InvadeDoorData;                       // 0x0010 (size: 0x8)
//     FInvadeSourceData InvadeSourceData;                   // 0x0018 (size: 0x38)
//     FInvadeTroopData TroopData;                           // 0x0050 (size: 0x18)
//     FBattleTriggerGameData PoiBattleConfig;               // 0x0068 (size: 0x30)
//     FBattleTriggerGameData PoiInvadeCellBattleConfig;     // 0x0098 (size: 0x30)
//     FBattleTriggerGameData PoiInvadeCellTurnBattleConfig; // 0x00C8 (size: 0x30)

// }; // Size: 0xF8

// struct FInvadeEntityGameData : public FGameDataBase
// {
//     FEnttIndex OwnerEnttIndex;        // 0x0008 (size: 0x8)
//     FEnttIndex OwnerMainInvadeEntity; // 0x0010 (size: 0x8)
//     int32 HasAddInvadeVal;            // 0x0018 (size: 0x4)

// }; // Size: 0x20

// struct FInvadeGrowTargetCalcObstacle : public FGameDataBase
// {
// }; // Size: 0x10

// struct FInvadeIndex : public FGameDataBase
// {
//     FCommonEcsSaveEntityIndex OwnerInvade; // 0x0008 (size: 0x18)
//     int32 CreateTurn;                      // 0x0020 (size: 0x4)

// }; // Size: 0x30

// struct FInvadePoiConfigData : public FECSGameConfigDataBase
// {
//     FBattleTriggerGameData BattleTriggerGameData; // 0x0008 (size: 0x30)
//     TArray<int32> ActiveQuestIDForPlayer;         // 0x0038 (size: 0x10)
//     TArray<int32> CommonActiveQuestID;            // 0x0048 (size: 0x10)
//     FInvadeAwardParam InvadeAwardParam;           // 0x0058 (size: 0x28)
//     float StalemateCoefficient;                   // 0x0080 (size: 0x4)
//     float StalemateBasicTurnCount;                // 0x0084 (size: 0x4)
//     float NpcSuccess_DamageCoef;                  // 0x0088 (size: 0x4)
//     float NpcFail_DamageCoef;                     // 0x008C (size: 0x4)
//     float Invade_DamageCoef;                      // 0x0090 (size: 0x4)
//     FName KeyNameToFallCoreConfig;                // 0x0094 (size: 0x8)
//     int32 ActionTroopSTDValue;                    // 0x009C (size: 0x4)
//     int32 ActionTroopSTDLevel;                    // 0x00A0 (size: 0x4)
//     uint8 bGameOverWhenFall;                      // 0x00A4 (size: 0x1)
//     int32 InvadingActorID;                        // 0x00A8 (size: 0x4)
//     int32 FallActorID;                            // 0x00AC (size: 0x4)

// }; // Size: 0xB0

// struct FInvadePoiStateData : public FGameDataBase
// {
//     TEnumAsByte<EPOIInvadeState> InvadeState;   // 0x0008 (size: 0x1)
//     int32 BudgeStartTurn;                       // 0x000C (size: 0x4)
//     int32 BudgeTotalTurn;                       // 0x0010 (size: 0x4)
//     FCommonEcsSaveEntityIndex MainInvadeEntity; // 0x0018 (size: 0x18)

// }; // Size: 0x30

// struct FInvadeSourceData : public FGameDataBase
// {
//     int32 AffectRange;                               // 0x0008 (size: 0x4)
//     int32 CurGrowRange;                              // 0x000C (size: 0x4)
//     TArray<FCommonEcsSaveEntityIndex> InvadeGrids;   // 0x0010 (size: 0x10)
//     TArray<FCommonEcsSaveEntityIndex> InvadingGrids; // 0x0020 (size: 0x10)
//     int32 AttackTargetRange;                         // 0x0030 (size: 0x4)

// }; // Size: 0x38

// struct FInvadeStateData : public FGameDataBase
// {
//     int32 TotalInvadeValue;                             // 0x0008 (size: 0x4)
//     int32 InvadeState;                                  // 0x000C (size: 0x4)
//     int32 LastInvadeState;                              // 0x0010 (size: 0x4)
//     int32 Invade_GatherLQ;                              // 0x0014 (size: 0x4)
//     int32 StartTurn;                                    // 0x0020 (size: 0x4)
//     int32 InvadeWorldAttackerID;                        // 0x0024 (size: 0x4)
//     int32 DefenderWorldID;                              // 0x0028 (size: 0x4)
//     TArray<FCommonEcsSaveEntityIndex> AttackPOIIndexes; // 0x0030 (size: 0x10)
//     TArray<FCommonEcsSaveEntityIndex> InvadedPOI;       // 0x0040 (size: 0x10)
//     int32 DoorNum;                                      // 0x0054 (size: 0x4)

// }; // Size: 0x60

// struct FInvadeStressConfigInfoData
// {
//     int32 MaxInvadeValue;                     // 0x0000 (size: 0x4)
//     TArray<int32> ToAddBigWorldBuffsToPlayer; // 0x0008 (size: 0x10)
//     TArray<float> StressBackNpcRatio;         // 0x0018 (size: 0x10)
//     FString StressDesc;                       // 0x0028 (size: 0x10)

// }; // Size: 0x38

// struct FInvadeTroopData : public FGameDataBase
// {
//     int32 StandardNum;   // 0x0008 (size: 0x4)
//     int32 InvadeLQValue; // 0x000C (size: 0x4)
//     int32 CurTroopCount; // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FInvadeTroopFixConfigData : public FTableRowBase
// {
//     int32 BigWorldShowActorIndex;                 // 0x0008 (size: 0x4)
//     FName ShowName;                               // 0x000C (size: 0x8)
//     int32 StandarArmy;                            // 0x0014 (size: 0x4)
//     FBattleTriggerGameData TroopBattleTrigger;    // 0x0018 (size: 0x30)
//     int32 TroopCountValueFix;                     // 0x0048 (size: 0x4)
//     int32 MoveSpeed;                              // 0x004C (size: 0x4)
//     TArray<FInstancedStruct> ExternECSConfigData; // 0x0050 (size: 0x10)

// }; // Size: 0x60

// struct FInvadeTroop_Action : public FGameDataBase
// {
//     FCommonEcsSaveEntityIndex TargetEntity; // 0x0008 (size: 0x18)

// }; // Size: 0x20

// struct FInvadeTroop_Assistance : public FGameDataBase
// {
//     FCommonEcsSaveEntityIndex TargetEntity; // 0x0008 (size: 0x18)

// }; // Size: 0x20

// struct FInvadeTroop_Grow : public FGameDataBase
// {
//     FCommonEcsSaveEntityIndex TargetEntity; // 0x0008 (size: 0x18)

// }; // Size: 0x28

// struct FInvadeTroop_Transport : public FGameDataBase
// {
//     FCommonEcsSaveEntityIndex TargetEntity; // 0x0008 (size: 0x18)

// }; // Size: 0x20

// struct FInvadedEffectRuntimeData
// {
//     TArray<FBigWorldEffectSpec> BigWorldBuffs; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FInvadingGridCellData : public FGameDataBase
// {
//     int32 StartTurnCount;      // 0x0008 (size: 0x4)
//     int32 NeedTurns;           // 0x000C (size: 0x4)
//     FEnttIndex OwnerEnttIndex; // 0x0010 (size: 0x8)

// }; // Size: 0x18

// struct FInvestigateConfig
// {
//     float Sense_Coefficient;  // 0x0000 (size: 0x4)
//     int32 FameStandBaseValue; // 0x0004 (size: 0x4)
//     int32 MoodDecrease;       // 0x0008 (size: 0x4)
//     int32 FaveDecrease;       // 0x000C (size: 0x4)
//     int32 SuccessMinRange;    // 0x0010 (size: 0x4)
//     int32 SuccessMaxRange;    // 0x0014 (size: 0x4)
//     int32 FindMinRange;       // 0x0018 (size: 0x4)
//     int32 FindMaxRange;       // 0x001C (size: 0x4)

// }; // Size: 0x20

// struct FInviteToBeTogetherConfig
// {
//     int32 AtmosphereToFave; // 0x0000 (size: 0x4)

// }; // Size: 0x4

// struct FItemArray
// {
//     TArray<int32> ItemArray; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FItemBagInfo
// {
//     class UItemBase *ItemObj; // 0x0000 (size: 0x8)
//     int32 BagPosition;        // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FItemBaseInfo
// {
//     EItemBaseType ItemBaseType; // 0x0000 (size: 0x1)
//     FName ItemName;             // 0x0004 (size: 0x8)
//     FName ItemDesc;             // 0x000C (size: 0x8)
//     int32 StackMax;             // 0x0014 (size: 0x4)
//     int32 ItemValue;            // 0x0018 (size: 0x4)
//     FSoftObjectPath ItemIcon;   // 0x0020 (size: 0x20)
//     int32 Rarity;               // 0x0040 (size: 0x4)
//     int32 ReqStage;             // 0x0044 (size: 0x4)
//     int32 ReqCapcity;           // 0x0048 (size: 0x4)
//     int32 ItemExp;              // 0x004C (size: 0x4)
//     bool bDiscard;              // 0x0050 (size: 0x1)
//     bool bUse;                  // 0x0051 (size: 0x1)
//     bool bTrade;                // 0x0052 (size: 0x1)
//     FString UnableUseDesc;      // 0x0058 (size: 0x10)

// }; // Size: 0x68

// struct FItemBattleConsumeConfig : public FTableRowBase
// {
//     int32 ItemTemplateID;                     // 0x0008 (size: 0x4)
//     EItemConsumeType ConsumeType;             // 0x000C (size: 0x1)
//     ESubConsumeType SubConsumeType;           // 0x000D (size: 0x1)
//     EGameplayEffectDurationType Policy;       // 0x000E (size: 0x1)
//     float Duration;                           // 0x0010 (size: 0x4)
//     TArray<FBaseAttributeValueParam> Effects; // 0x0018 (size: 0x10)
//     FGameplayTag CDTag;                       // 0x0028 (size: 0x8)
//     float CDTime;                             // 0x0030 (size: 0x4)
//     int32 BuffID;                             // 0x0034 (size: 0x4)
//     FSoftClassPath GameAbilityClassPath;      // 0x0038 (size: 0x20)
//     int32 UseNumLimit;                        // 0x0058 (size: 0x4)
//     TArray<FName> DisabledUIList;             // 0x0060 (size: 0x10)

// }; // Size: 0x70

// struct FItemByQualityInfo
// {
//     TMap<EM_ZONGMEN_BOOK_LEVEL, int32> Count; // 0x0000 (size: 0x50)

// }; // Size: 0x50

// struct FItemConfig : public FTableRowBase
// {
//     int32 ItemTemplateID;       // 0x0008 (size: 0x4)
//     FItemBaseInfo ItemBaseInfo; // 0x0010 (size: 0x68)
//     FItemInfoEx ItemInfoEx;     // 0x0078 (size: 0x98)

// }; // Size: 0x110

// struct FItemCreatorContextBase
// {
//     int32 Stage;     // 0x0000 (size: 0x4)
//     int32 Rarity;    // 0x0004 (size: 0x4)
//     int32 Count;     // 0x0008 (size: 0x4)
//     int32 CreatorID; // 0x000C (size: 0x4)

// }; // Size: 0x10

// struct FItemInfoEx
// {
//     TSoftObjectPtr<UStaticMesh> VisualizationStaticMesh; // 0x0000 (size: 0x30)
//     TSoftObjectPtr<USkeletalMesh> VisualizationSkeMesh;  // 0x0030 (size: 0x30)
//     FSoftClassPath GameAbilityClassPath;                 // 0x0060 (size: 0x20)
//     TArray<FBaseAttributeValueParam> FixedAttributes;    // 0x0080 (size: 0x10)
//     TSubclassOf<class UItemCreatorBase> ItemCreator;     // 0x0090 (size: 0x8)

// }; // Size: 0x98

// struct FItemMaterialConfig : public FTableRowBase
// {
//     int32 ItemTemplateID;                       // 0x0008 (size: 0x4)
//     FString MaterialDesc;                       // 0x0010 (size: 0x10)
//     EWuXingType WuXingType;                     // 0x0020 (size: 0x1)
//     int32 ForgeMaterialValue;                   // 0x0024 (size: 0x4)
//     int32 LianDanMaterialValue;                 // 0x0028 (size: 0x4)
//     TArray<int32> LianDanValue;                 // 0x0030 (size: 0x10)
//     int32 CostTime;                             // 0x0040 (size: 0x4)
//     int32 Experience;                           // 0x0044 (size: 0x4)
//     FEquipAffixPoolConfig FixedPoolConfig;      // 0x0048 (size: 0xC)
//     FEquipAffixPoolConfig ExtraPoolConfig;      // 0x0054 (size: 0xC)
//     FEquipAffixPoolConfig SuperExtraPoolConfig; // 0x0060 (size: 0xC)

// }; // Size: 0x70

// struct FItemPoolBase : public FTableRowBase
// {
//     int32 ItemTemplatedID;                      // 0x0008 (size: 0x4)
//     FItemCreatorContextBase ItemCreatorContext; // 0x000C (size: 0x10)
//     int32 WeightAbs;                            // 0x001C (size: 0x4)

// }; // Size: 0x20

// struct FItemPoolBaseSpec
// {
//     FName SinglePoolItemName; // 0x0000 (size: 0x8)
//     float WeightCoefficient;  // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FItemPoolEntity : public FTableRowBase
// {
//     TArray<FItemPoolBaseSpec> PoolItemGather; // 0x0008 (size: 0x10)
//     TArray<FItemPoolBase> CustomItemPoolBase; // 0x0018 (size: 0x10)

// }; // Size: 0x28

// struct FItemPoolGroup
// {
//     TArray<FItemPoolEntity> ItemPoolEntities; // 0x0000 (size: 0x10)
//     TArray<int32> FixedItems;                 // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FJiYiConfig : public FTableRowBase
// {
//     int32 JiYiLevel;       // 0x0008 (size: 0x4)
//     FName LianQiJiYiName;  // 0x000C (size: 0x8)
//     FName LianDanJiYiName; // 0x0014 (size: 0x8)
//     int32 ReqExp;          // 0x001C (size: 0x4)
//     int32 LianQiAward;     // 0x0020 (size: 0x4)
//     int32 LianDanAward;    // 0x0024 (size: 0x4)
//     int32 POILearnTime;    // 0x0028 (size: 0x4)
//     int32 POILearnExp;     // 0x002C (size: 0x4)

// }; // Size: 0x30

// struct FJiYiEvolveDataConfig : public FTableRowBase
// {
//     int32 JiYiLevel;                          // 0x0008 (size: 0x4)
//     EJiYiType JiYiType;                       // 0x000C (size: 0x1)
//     TArray<int32> ReqValueByStage;            // 0x0010 (size: 0x10)
//     TArray<int32> ProductionDropIndexByStage; // 0x0020 (size: 0x10)
//     int32 ExpPerTurn;                         // 0x0030 (size: 0x4)

// }; // Size: 0x38

// struct FJieDanPhaseInfo
// {
//     int32 DanYePoolNumber;          // 0x0000 (size: 0x4)
//     float MainWuXingDanYePro;       // 0x0004 (size: 0x4)
//     int32 DanYeMaxLevel;            // 0x0008 (size: 0x4)
//     int32 DanYeMinLevel;            // 0x000C (size: 0x4)
//     int32 MaxLockNum;               // 0x0010 (size: 0x4)
//     int32 LQConsume;                // 0x0014 (size: 0x4)
//     TArray<int32> GuaranteeDanYe;   // 0x0018 (size: 0x10)
//     int32 ReqValueProp;             // 0x0028 (size: 0x4)
//     float ReserveQiAndDanYePercent; // 0x002C (size: 0x4)

// }; // Size: 0x30

// struct FJieYingNingQiConfig
// {
//     TArray<int32> QiSpeeds; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FJinDanAndYuanYingConfig : public FTableRowBase
// {
//     int32 JinDanID;                                        // 0x0008 (size: 0x4)
//     EWuXingType WuXingType;                                // 0x000C (size: 0x1)
//     int32 MinDanLevel;                                     // 0x0010 (size: 0x4)
//     int32 MaxDanLevel;                                     // 0x0014 (size: 0x4)
//     TArray<FDynamicTraitSpec> BattleEffects;               // 0x0018 (size: 0x10)
//     FName JinDanName;                                      // 0x0028 (size: 0x8)
//     TMap<int32, FJieYingNingQiConfig> JieYingNingQiConfig; // 0x0030 (size: 0x50)
//     bool IsJinDan;                                         // 0x0080 (size: 0x1)

// }; // Size: 0x88

// struct FJingLuoPointConfig : public FTableRowBase
// {
//     int32 JingLuoID;                                              // 0x0008 (size: 0x4)
//     FName JingLuoName;                                            // 0x000C (size: 0x8)
//     TArray<FBaseAttributeValueParam> JingLuoAttributeArray;       // 0x0018 (size: 0x10)
//     TArray<FBigWorldBaseAttributeParam> ChangeBaseAttributeArray; // 0x0028 (size: 0x10)
//     FSkillTraitArray JingLuoTraitArray;                           // 0x0038 (size: 0x10)
//     int32 LQConsume;                                              // 0x0048 (size: 0x4)
//     TArray<int32> PrePointList;                                   // 0x0050 (size: 0x10)
//     TArray<int32> RearPointList;                                  // 0x0060 (size: 0x10)
//     bool PrePointOperator;                                        // 0x0070 (size: 0x1)
//     int32 PhaseRequire;                                           // 0x0074 (size: 0x4)
//     EPointType PointType;                                         // 0x0078 (size: 0x1)
//     int32 EndJingLuoID;                                           // 0x007C (size: 0x4)
//     bool IsBigPoint;                                              // 0x0080 (size: 0x1)
//     FName Desc;                                                   // 0x0084 (size: 0x8)
//     FSoftObjectPath JingLuoIcon;                                  // 0x0090 (size: 0x20)

// }; // Size: 0xB0

// struct FJobPopulation
// {
//     int32 MinStage; // 0x0000 (size: 0x4)
//     int32 MinPhase; // 0x0004 (size: 0x4)
//     int32 MaxStage; // 0x0008 (size: 0x4)
//     int32 MaxPhase; // 0x000C (size: 0x4)
//     int32 MinNum;   // 0x0010 (size: 0x4)
//     int32 MaxNum;   // 0x0014 (size: 0x4)

// }; // Size: 0x18

// struct FKeyActionNames
// {
//     TArray<FName> BlackListKeyActionNames; // 0x0000 (size: 0x10)
//     TArray<FName> WhiteListKeyActionNames; // 0x0010 (size: 0x10)
//     bool bDefaultMode;                     // 0x0020 (size: 0x1)
//     bool bGlobalMode;                      // 0x0021 (size: 0x1)

// }; // Size: 0x28

// struct FKeyResponseStrategy
// {
//     FKeyActionNames CommonWndResponseInfo;                        // 0x0000 (size: 0x28)
//     TMap<class FName, class FKeyActionNames> SpecWndResponseInfo; // 0x0028 (size: 0x50)

// }; // Size: 0x78

// struct FKnowledgeConfig : public FTableRowBase
// {
//     int32 InformationID;                    // 0x0008 (size: 0x4)
//     FString InformationName;                // 0x0010 (size: 0x10)
//     FString InformationDesc;                // 0x0020 (size: 0x10)
//     int32 InformationAge;                   // 0x0030 (size: 0x4)
//     TArray<FName> POIs;                     // 0x0038 (size: 0x10)
//     EInformationRarity InformationRarity;   // 0x0048 (size: 0x1)
//     EInformationSubType InformationSubType; // 0x0049 (size: 0x1)
//     FSoftClassPath KnowledgeClass;          // 0x0050 (size: 0x20)
//     bool bImportant;                        // 0x0070 (size: 0x1)
//     bool bIntelligence;                     // 0x0071 (size: 0x1)
//     bool bHandbook;                         // 0x0072 (size: 0x1)
//     FSoftObjectPath KnowledgeIcon;          // 0x0078 (size: 0x20)

// }; // Size: 0x98

// struct FKnowledgeRawData : public FRuntimeSerializeRawData
// {
// }; // Size: 0x20

// struct FLQBackStepConfig
// {
//     int32 StepLQValue;     // 0x0000 (size: 0x4)
//     float BackCoefficient; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FLQTideConfig : public FTableRowBase
// {
//     int32 BigWorldID;        // 0x0008 (size: 0x4)
//     int32 StartTime;         // 0x000C (size: 0x4)
//     int32 BeginStage;        // 0x0010 (size: 0x4)
//     int32 MecStage;          // 0x0014 (size: 0x4)
//     int32 OpenStage;         // 0x0018 (size: 0x4)
//     int32 CloseStage;        // 0x001C (size: 0x4)
//     int32 FallStage;         // 0x0020 (size: 0x4)
//     int32 StepTime;          // 0x0024 (size: 0x4)
//     int32 AddCellGridCellLQ; // 0x0028 (size: 0x4)

// }; // Size: 0x30

// struct FLandScapeHexCellIndexGameData : public FGameDataBase
// {
//     int32 WorldIndex;                       // 0x0008 (size: 0x4)
//     int32 CellIndex;                        // 0x000C (size: 0x4)
//     int32 LastLqEvolveTurnTime;             // 0x0010 (size: 0x4)
//     TArray<FEnttIndex> OnLandscapeEntities; // 0x0018 (size: 0x10)

// }; // Size: 0x28

// struct FLandscapeAreaInfo
// {
//     int32 LandscapeAreaID;             // 0x0000 (size: 0x4)
//     FName LandscapeAreaName;           // 0x0004 (size: 0x8)
//     FSoftObjectPath LandscapeAreaIcon; // 0x0010 (size: 0x20)
//     FSoftObjectPath PracticeNiagara;   // 0x0030 (size: 0x20)

// }; // Size: 0x50

// struct FLevelCreateContext : public FTableRowBase
// {
//     EDaoYunType DaoYunType;                // 0x0008 (size: 0x1)
//     EMLandscapeAreaType LandscapeAreaType; // 0x0009 (size: 0x1)
//     FSoftObjectPath LevelPath;             // 0x0010 (size: 0x20)

// }; // Size: 0x30

// struct FLifeRecordSaveFormat
// {
//     TMap<FName, int64> PropertyNameToArIndex; // 0x0000 (size: 0x50)

// }; // Size: 0x50

// struct FLoadedMappableConfigPair
// {
//     class UPlayerMappableInputConfig *Config; // 0x0000 (size: 0x8)
//     ECommonInputType Type;                    // 0x0008 (size: 0x1)
//     bool bIsActive;                           // 0x0009 (size: 0x1)

// }; // Size: 0x10

// struct FMainDialogueConfig
// {
//     TArray<int32> DefaultMainDialogue;                     // 0x0000 (size: 0x10)
//     TArray<int32> PendingTasksDialogue;                    // 0x0010 (size: 0x10)
//     TArray<int32> TakingTasksDialogue;                     // 0x0020 (size: 0x10)
//     TMap<int32, FTransactionDialogue> TransactionDialogue; // 0x0030 (size: 0x50)
//     TArray<int32> TransactionByAttitude;                   // 0x0080 (size: 0x10)
//     int32 TransactionByFavorability;                       // 0x0090 (size: 0x4)

// }; // Size: 0x98

// struct FMappableConfigPair
// {
//     TSoftObjectPtr<UPlayerMappableInputConfig> Config; // 0x0000 (size: 0x30)
//     ECommonInputType Type;                             // 0x0030 (size: 0x1)
//     FGameplayTagContainer DependentPlatformTraits;     // 0x0038 (size: 0x20)
//     FGameplayTagContainer ExcludedPlatformTraits;      // 0x0058 (size: 0x20)
//     bool bShouldActivateAutomatically;                 // 0x0078 (size: 0x1)

// }; // Size: 0x80

// struct FMessageTypeB
// {
//     int32 MessageID;       // 0x0000 (size: 0x4)
//     FName MessageText;     // 0x0004 (size: 0x8)
//     bool UnRead;           // 0x000C (size: 0x1)
//     FName MessageIconPath; // 0x0010 (size: 0x8)

// }; // Size: 0x18

// struct FMonsterAIBehaviorTreeConfig : public FTableRowBase
// {
//     TMap<class FGameplayTag, class FSoftObjectPath> AIBehaviorTrees; // 0x0008 (size: 0x50)
//     float EnterRange;                                                // 0x0058 (size: 0x4)
//     float LeftRange;                                                 // 0x005C (size: 0x4)
//     float MinRange;                                                  // 0x0060 (size: 0x4)
//     float SummonAcceptanceRadius_Attack;                             // 0x0064 (size: 0x4)
//     float SummonAcceptanceRadius_Defense;                            // 0x0068 (size: 0x4)
//     FSoftObjectPath StandIdleMontagePath;                            // 0x0070 (size: 0x20)
//     TArray<FSoftObjectPath> CasualIdleMontagePaths;                  // 0x0090 (size: 0x10)
//     float IdleMoveRange;                                             // 0x00A0 (size: 0x4)
//     TArray<FName> AIStageConfigs;                                    // 0x00A8 (size: 0x10)

// }; // Size: 0xB8

// struct FMonsterAffixData : public FTableRowBase
// {
//     FName AffixName;                         // 0x0008 (size: 0x8)
//     FString PrefixText;                      // 0x0010 (size: 0x10)
//     FSkillTraitArray SkillTraitArray;        // 0x0020 (size: 0x10)
//     TArray<FSoftClassPath> PassiveSkillList; // 0x0030 (size: 0x10)
//     TArray<int32> ExtraDropList;             // 0x0040 (size: 0x10)
//     FVector ModelScale;                      // 0x0050 (size: 0x18)

// }; // Size: 0x68

// struct FMonsterGroup : public FTableRowBase
// {
//     int32 ID;                             // 0x0008 (size: 0x4)
//     TArray<FReqMonsterInfo> MonsterInfos; // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FMonsterInfo : public FTableRowBase
// {
//     int32 MonsterID;                 // 0x0008 (size: 0x4)
//     FName MonsterName;               // 0x000C (size: 0x8)
//     FSoftObjectPath MonsterLookface; // 0x0018 (size: 0x20)
//     EM_MonsterType MonsterType;      // 0x0038 (size: 0x1)
//     FSoftClassPath Actor;            // 0x0040 (size: 0x20)
//     FVector EffectScale;             // 0x0060 (size: 0x18)

// }; // Size: 0x78

// struct FMonsterLevelInfo : public FTableRowBase
// {
//     int32 MonsterID;                      // 0x0008 (size: 0x4)
//     int32 MonsterLevel;                   // 0x000C (size: 0x4)
//     TArray<int32> ItemDropID;             // 0x0010 (size: 0x10)
//     int32 Exp;                            // 0x0020 (size: 0x4)
//     int32 Lq;                             // 0x0024 (size: 0x4)
//     FBattleAttribute BattleAttributeData; // 0x0028 (size: 0xB8)
//     FSkillTraitArray CarrayTraits;        // 0x00E0 (size: 0x10)

// }; // Size: 0xF0

// struct FMonsterRandomAffixData
// {
//     TMap<int32, int32> AffixCountWeightMap; // 0x0000 (size: 0x50)
//     TArray<FName> AffixPool;                // 0x0050 (size: 0x10)

// }; // Size: 0x60

// struct FMountConfig : public FTableRowBase
// {
//     int32 MountID;                       // 0x0008 (size: 0x4)
//     int32 AddZ;                          // 0x000C (size: 0x4)
//     int32 MaxHight;                      // 0x0010 (size: 0x4)
//     int32 AddInsightSize;                // 0x0014 (size: 0x4)
//     FSoftObjectPath LaunchedMontagePath; // 0x0018 (size: 0x20)
//     FSoftObjectPath DisMountMontagePath; // 0x0038 (size: 0x20)
//     FSoftObjectPath RideerSke;           // 0x0058 (size: 0x20)
//     FSoftObjectPath RideNiagara;         // 0x0078 (size: 0x20)
//     class UCurveFloat *Curver;           // 0x0098 (size: 0x8)
//     FName SocketName;                    // 0x00A0 (size: 0x8)
//     FVector MountSize;                   // 0x00A8 (size: 0x18)
//     FRotator MountRotator;               // 0x00C0 (size: 0x18)
//     FVector MountPos;                    // 0x00D8 (size: 0x18)
//     FVector RideNiagaraPos;              // 0x00F0 (size: 0x18)
//     FRotator RideNiagaraRotator;         // 0x0108 (size: 0x18)
//     FVector RideNiagaraSize;             // 0x0120 (size: 0x18)
//     int32 BigWorldID;                    // 0x0138 (size: 0x4)

// }; // Size: 0x140

// struct FNPCArray
// {
//     TArray<int32> Npces; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FNickNameInfo
// {
//     FString PlayerNickName; // 0x0000 (size: 0x10)
//     FString NpcNickName;    // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FNormalChatConfig
// {
//     int32 GoodEnd_Mood;       // 0x0000 (size: 0x4)
//     int32 BadEnd_Mood;        // 0x0004 (size: 0x4)
//     int32 GoodEnd_BaseFave;   // 0x0008 (size: 0x4)
//     int32 BadEnd_BaseFave;    // 0x000C (size: 0x4)
//     int32 ConsumeTime;        // 0x0010 (size: 0x4)
//     int32 ConsumeTimeByEvent; // 0x0014 (size: 0x4)

// }; // Size: 0x18

// struct FNotifyMsg_BigWorldAttributeChangeInfo
// {
//     int32 BigWorldAttributeID; // 0x0000 (size: 0x4)
//     float ChangeValue;         // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FNotifyMsg_ItemChangeInfo
// {
//     int32 ItemId;      // 0x0000 (size: 0x4)
//     int32 ChangeValue; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FNpcAgeConfig
// {
//     int32 LifeMin;  // 0x0000 (size: 0x4)
//     int32 LifeMax;  // 0x0004 (size: 0x4)
//     int32 AgeMiu;   // 0x0008 (size: 0x4)
//     int32 AgeSigma; // 0x000C (size: 0x4)

// }; // Size: 0x10

// struct FNpcBattleConfig
// {
//     int32 BattleTime; // 0x0000 (size: 0x4)
//     bool bShowTime;   // 0x0004 (size: 0x1)

// }; // Size: 0x8

// struct FNpcBuildPropensity : public FTableRowBase
// {
//     int32 BuildID;                            // 0x0008 (size: 0x4)
//     FName BuildName;                          // 0x000C (size: 0x8)
//     TArray<FPriority> GongFaPriority;         // 0x0018 (size: 0x10)
//     TArray<FPriority> SkillPriority;          // 0x0028 (size: 0x10)
//     TArray<FPriority> EquipmentTraitPriority; // 0x0038 (size: 0x10)

// }; // Size: 0x98

// struct FNpcEvent
// {
//     int32 NpcIndex;   // 0x0000 (size: 0x4)
//     int32 EventID;    // 0x0004 (size: 0x4)
//     bool bCompleted;  // 0x0008 (size: 0x1)
//     int32 EventCount; // 0x000C (size: 0x4)
//     bool bHideInfo;   // 0x0010 (size: 0x1)

// }; // Size: 0x14

// struct FNpcEventCD
// {
//     TMap<int32, int32> EventCDMap; // 0x0000 (size: 0x50)

// }; // Size: 0x50

// struct FNpcEventData : public FTableRowBase
// {
//     int32 ID;                                   // 0x0008 (size: 0x4)
//     TArray<EMRelationshipType> ReqRelationship; // 0x0010 (size: 0x10)
//     bool bMoveTriggerAble;                      // 0x0020 (size: 0x1)
//     EEventShowType ShowType;                    // 0x0021 (size: 0x1)
//     int32 CD;                                   // 0x0024 (size: 0x4)
//     int32 Weight;                               // 0x0028 (size: 0x4)
//     FSoftClassPath EventConditionClassPath;     // 0x0030 (size: 0x20)
//     FSoftObjectPath Icon;                       // 0x0050 (size: 0x20)
//     FString EventName;                          // 0x0070 (size: 0x10)
//     FString Desc;                               // 0x0080 (size: 0x10)
//     int32 InteractType;                         // 0x0090 (size: 0x4)

// }; // Size: 0x98

// struct FNpcEventGeneralData
// {
//     int32 EventRange;           // 0x0000 (size: 0x4)
//     float NoREventNumPerPerson; // 0x0004 (size: 0x4)
//     float GoodFix;              // 0x0008 (size: 0x4)
//     float BadFix;               // 0x000C (size: 0x4)
//     float NoREventRDRange;      // 0x0010 (size: 0x4)
//     float AttrFix;              // 0x0014 (size: 0x4)

// }; // Size: 0x18

// struct FNpcEvolveBaseGameData : public FGameDataBase
// {
//     int32 RealIndex;                     // 0x0008 (size: 0x4)
//     int32 LastEvolveTurn;                // 0x000C (size: 0x4)
//     int32 DistanceToPlayer;              // 0x0010 (size: 0x4)
//     TArray<int32> DropIDs;               // 0x0018 (size: 0x10)
//     TArray<int32> GainItemIDs;           // 0x0028 (size: 0x10)
//     TArray<int32> ZmLingFaIDs;           // 0x0038 (size: 0x10)
//     int32 StageProgressAddValue;         // 0x0048 (size: 0x4)
//     int32 LastProcessProgressValue;      // 0x004C (size: 0x4)
//     bool bNeedUpdateBuild;               // 0x0050 (size: 0x1)
//     int32 RandomSeed;                    // 0x0054 (size: 0x4)
//     TArray<int32> ToRelationShipListIDs; // 0x0058 (size: 0x10)
//     int32 HunMatKeep;                    // 0x0068 (size: 0x4)
//     int32 ThoMatKeep;                    // 0x006C (size: 0x4)
//     TArray<int32> KeepItemIDs;           // 0x0070 (size: 0x10)
//     int32 SmithEvolveProgress;           // 0x0080 (size: 0x4)
//     int32 AlchemyEvolveProgress;         // 0x0084 (size: 0x4)

// }; // Size: 0xB0

// struct FNpcExploreDrop : public FTableRowBase
// {
//     int32 Stage;          // 0x0008 (size: 0x4)
//     int32 EquipDropID;    // 0x000C (size: 0x4)
//     int32 MaterialDropID; // 0x0010 (size: 0x4)
//     int32 AdvGold;        // 0x0014 (size: 0x4)

// }; // Size: 0x18

// struct FNpcGrowFix : public FTableRowBase
// {
//     int32 Difficulty; // 0x0008 (size: 0x4)
//     float AdvFix;     // 0x000C (size: 0x4)
//     float PraFix;     // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FNpcInitLingFa
// {
//     TArray<FInitialLingFaArray> InitialSkill;  // 0x0000 (size: 0x10)
//     TArray<FInitialLingFaArray> InitialGongFa; // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FNpcSkillTrait : public FTableRowBase
// {
//     int32 SkillGroupID;       // 0x0008 (size: 0x4)
//     FName SkillName;          // 0x000C (size: 0x8)
//     int32 BuildID;            // 0x0014 (size: 0x4)
//     TArray<int32> SkillTrait; // 0x0018 (size: 0x10)

// }; // Size: 0x28

// struct FNpcStageAttributes : public FTableRowBase
// {
//     int32 Stage;                           // 0x0008 (size: 0x4)
//     int32 Phase;                           // 0x000C (size: 0x4)
//     int32 MaxLife;                         // 0x0010 (size: 0x4)
//     int32 GuaranteedLQ;                    // 0x0014 (size: 0x4)
//     int32 SkillBaseLevel;                  // 0x0018 (size: 0x4)
//     int32 GongFaBaseLevel;                 // 0x001C (size: 0x4)
//     int32 GuaranteedAtt;                   // 0x0020 (size: 0x4)
//     int32 GuaranteedDef;                   // 0x0024 (size: 0x4)
//     int32 GuaranteedHp;                    // 0x0028 (size: 0x4)
//     int32 GuaranteedMp;                    // 0x002C (size: 0x4)
//     int32 GuaranteedDamageJinMul;          // 0x0030 (size: 0x4)
//     int32 GuaranteedDamageMuMul;           // 0x0034 (size: 0x4)
//     int32 GuaranteedDamageShuiMul;         // 0x0038 (size: 0x4)
//     int32 GuaranteedDamageHuoMul;          // 0x003C (size: 0x4)
//     int32 GuaranteedDamageTuMul;           // 0x0040 (size: 0x4)
//     int32 GuaranteedDamageJinDec;          // 0x0044 (size: 0x4)
//     int32 GuaranteedDamageMuDec;           // 0x0048 (size: 0x4)
//     int32 GuaranteedDamageShuiDec;         // 0x004C (size: 0x4)
//     int32 GuaranteedDamageHuoDec;          // 0x0050 (size: 0x4)
//     int32 GuaranteedWDamageTuDec;          // 0x0054 (size: 0x4)
//     int32 GuaranteeManaRecoverRatio;       // 0x0058 (size: 0x4)
//     int32 GuaranteeManaRecoverPerSecond;   // 0x005C (size: 0x4)
//     int32 GuaranteeHealthRecoverRatio;     // 0x0060 (size: 0x4)
//     int32 GuaranteeHealthRecoverPerSecond; // 0x0064 (size: 0x4)
//     int32 GuaranteeCharm;                  // 0x0068 (size: 0x4)
//     int32 GuaranteeLuck;                   // 0x006C (size: 0x4)
//     int32 GuaranteeSense;                  // 0x0070 (size: 0x4)
//     int32 GuaranteePerception;             // 0x0074 (size: 0x4)
//     TArray<int32> GuaranteeCapacity;       // 0x0078 (size: 0x10)
//     int32 ExtraAtt;                        // 0x0088 (size: 0x4)
//     int32 ExtraDef;                        // 0x008C (size: 0x4)
//     int32 ExtraHp;                         // 0x0090 (size: 0x4)
//     int32 ExtraMp;                         // 0x0094 (size: 0x4)
//     int32 ExtraDamageJinMul;               // 0x0098 (size: 0x4)
//     int32 ExtraDamageMuMul;                // 0x009C (size: 0x4)
//     int32 ExtraWDamageShuiMul;             // 0x00A0 (size: 0x4)
//     int32 ExtraDamageHuoMul;               // 0x00A4 (size: 0x4)
//     int32 ExtraDamageTuMul;                // 0x00A8 (size: 0x4)
//     int32 ExtraDamageJinDec;               // 0x00AC (size: 0x4)
//     int32 ExtraDamageMuDec;                // 0x00B0 (size: 0x4)
//     int32 ExtraDamageShuiDec;              // 0x00B4 (size: 0x4)
//     int32 ExtraDamageHuoDec;               // 0x00B8 (size: 0x4)
//     int32 ExtraDamageTuDec;                // 0x00BC (size: 0x4)
//     int32 ExtraManaRecoverRatio;           // 0x00C0 (size: 0x4)
//     int32 ExtraManaRecoverPerSecond;       // 0x00C4 (size: 0x4)
//     int32 ExtraHealthRecoverRatio;         // 0x00C8 (size: 0x4)
//     int32 ExtraHealthRecoverPerSecond;     // 0x00CC (size: 0x4)
//     int32 ExtraCharm;                      // 0x00D0 (size: 0x4)
//     int32 ExtraLuck;                       // 0x00D4 (size: 0x4)
//     int32 ExtraSense;                      // 0x00D8 (size: 0x4)
//     TArray<int32> ExtraCapcity;            // 0x00E0 (size: 0x10)
//     int32 ExtraPercerption;                // 0x00F0 (size: 0x4)
//     int32 LQReserveMax;                    // 0x00F4 (size: 0x4)
//     int32 InvadeDefendCalcTroopValue;      // 0x00F8 (size: 0x4)

// }; // Size: 0x100

// struct FNpcStereoTypeConfig : public FTableRowBase
// {
//     int32 StereoID;                                                    // 0x0008 (size: 0x4)
//     int32 StereoType;                                                  // 0x000C (size: 0x4)
//     int32 StereoGroupType;                                             // 0x0010 (size: 0x4)
//     FName StereoName;                                                  // 0x0014 (size: 0x8)
//     FName StereoDesc;                                                  // 0x001C (size: 0x8)
//     int32 InitProp;                                                    // 0x0024 (size: 0x4)
//     FSoftObjectPath StereoBG;                                          // 0x0028 (size: 0x20)
//     TArray<FBigWorldTraitAttributeParam> BigWorldTraitAttributeParams; // 0x0048 (size: 0x10)

// }; // Size: 0x58

// struct FNpcStereos
// {
//     TArray<int32> NpcStereos; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FOnDaoConfig
// {
//     TArray<int32> StageBaseGW; // 0x0000 (size: 0x10)
//     float StageFix_Low;        // 0x0010 (size: 0x4)
//     float StageFix_Same;       // 0x0014 (size: 0x4)
//     float StageFix_High;       // 0x0018 (size: 0x4)
//     int32 Interaction_Time;    // 0x001C (size: 0x4)
//     int32 Event_Time;          // 0x0020 (size: 0x4)

// }; // Size: 0x28

// struct FOutPutStructInfo
// {
//     FSingleNpc AttributeBase;                                     // 0x0000 (size: 0xA78)
//     FNpcEvolveBaseGameData NpcEvolveBaseGameData;                 // 0x0A78 (size: 0xB0)
//     FAITransaction_WaitTurnTime WaitTurnTime;                     // 0x0B28 (size: 0x10)
//     FAIMoveInfoData MoveInfoData;                                 // 0x0B38 (size: 0x18)
//     FAITransaction_WaitAttachPosition WaitAttachPosition;         // 0x0B50 (size: 0x18)
//     FAITransaction_WaitTraceTarget WaitTraceTarget;               // 0x0B68 (size: 0x10)
//     FAITransaction_Practice Practice;                             // 0x0B78 (size: 0x10)
//     FAITransactionSocial_FavorAbilityProcess FavorAbilityProcess; // 0x0B88 (size: 0x10)
//     FAITransactionSocial_Exchange Exchange;                       // 0x0B98 (size: 0x10)
//     FAITransactionSocial_Battle Battle;                           // 0x0BA8 (size: 0x10)
//     FAITransactionZongmen_JobLevelUp JobLevelUp;                  // 0x0BB8 (size: 0x8)
//     FAITransactionLingFa_LearnBook LearnBook;                     // 0x0BC0 (size: 0x10)
//     FAITransactionHeal_Hospital HealHospital;                     // 0x0BD0 (size: 0x8)
//     FAITransactionHeal_Retreat HealRetreat;                       // 0x0BD8 (size: 0x8)
//     FAITransactionExplore_Main ExploreMain;                       // 0x0BE0 (size: 0x20)
//     FAITransactionExplore_Sell ExploreSell;                       // 0x0C00 (size: 0x8)
//     FAITransactionSpec_Event SpecEvent;                           // 0x0C08 (size: 0x8)
//     FAIEvolveBasicTransaction_WrapInfo OperateDynamicPriority;    // 0x0C10 (size: 0x10)
//     FAITransactionInstanceData InstanceData;                      // 0x0C20 (size: 0x40)
//     FAITransactionEquipment_Main TransactionEquipment_Main;       // 0x0C60 (size: 0x20)
//     FAITransactionLingFa_UpdateLingFaAction UpdateLingFaAction;   // 0x0C80 (size: 0x10)
//     FAITransactionReputation_Update Reputation_Update;            // 0x0C90 (size: 0x8)
//     FSeclusionStateData SeclusionStateData;                       // 0x0C98 (size: 0x18)
//     FAITransaction_JiYiEvolveMain Transaction_JiYiEvolveMain;     // 0x0CB0 (size: 0x10)

// }; // Size: 0xCC0

// struct FPVPDamageFixedByStage : public FTableRowBase
// {
//     float DecFixValue; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FPerceptionSearchTargetData : public FGameDataBase
// {
// }; // Size: 0x18

// struct FPersonalityIntToItemArray
// {
//     TArray<int32> PersonalityToItemArray; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FPhaseOptionData
// {
//     int32 PhaseID;                          // 0x0000 (size: 0x4)
//     int32 PhaseOption;                      // 0x0004 (size: 0x4)
//     FBigWorldAttributeName AttributeDemand; // 0x0008 (size: 0x8)
//     int32 AttributeDemandValue;             // 0x0010 (size: 0x4)

// }; // Size: 0x14

// struct FPlayerAttributeIPropetyInfo
// {
//     int32 ConfigID;                    // 0x0000 (size: 0x4)
//     FName ProperyName;                 // 0x0004 (size: 0x8)
//     bool bFixedArrayAttribute;         // 0x000C (size: 0x1)
//     class UScriptStruct *ScriptStruct; // 0x0010 (size: 0x8)

// }; // Size: 0x20

// struct FPlayerBag
// {
//     TArray<FBagBase> BagList; // 0x0000 (size: 0x10)
//     int32 BagOwnerUserId;     // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FPlayerBattleInfo
// {
//     bool bRestore;   // 0x0000 (size: 0x1)
//     float Health;    // 0x0004 (size: 0x4)
//     float Mana;      // 0x0008 (size: 0x4)
//     float LQReserve; // 0x000C (size: 0x4)

// }; // Size: 0x10

// struct FPlayerDisplayAttributeConfig : public FTableRowBase
// {
//     int32 SpecialAttributeID;            // 0x0008 (size: 0x4)
//     FName DisplayName;                   // 0x000C (size: 0x8)
//     FName DisplayDesc;                   // 0x0014 (size: 0x8)
//     FSoftObjectPath Icon;                // 0x0020 (size: 0x20)
//     FGameplayAttribute PropertyPathName; // 0x0040 (size: 0x38)
//     int32 AbilityTraitIndex;             // 0x0078 (size: 0x4)
//     FGameplayTagContainer RelatedTag;    // 0x0080 (size: 0x20)
//     EInfoDataCatagory DataCatagory;      // 0x00A0 (size: 0x1)
//     EInfoDataType DataType;              // 0x00A1 (size: 0x1)
//     TArray<FName> TraitTemplateID;       // 0x00A8 (size: 0x10)

// }; // Size: 0xB8

// struct FPlayerJiYiData
// {
//     TMap<EJiYiType, int32> CurJiYiLevel; // 0x0000 (size: 0x50)
//     TMap<EJiYiType, int32> CurJiYiExp;   // 0x0050 (size: 0x50)
//     TArray<int32> LearnedJiYiBook;       // 0x00A0 (size: 0x10)
//     TMap<FName, float> JiYiEffectValue;  // 0x00B0 (size: 0x50)

// }; // Size: 0x100

// struct FPoiConfigBase
// {
//     int32 MaxCount; // 0x0000 (size: 0x4)
//     int32 MinCount; // 0x0004 (size: 0x4)
//     int32 MinRange; // 0x0008 (size: 0x4)
//     int32 MaxRange; // 0x000C (size: 0x4)
//     bool bCircle;   // 0x0010 (size: 0x1)

// }; // Size: 0x14

// struct FPoiFunctionButtonInfo
// {
//     EPoiFunctionEnum ButtonType; // 0x0000 (size: 0x1)
//     FVector2D Position;          // 0x0008 (size: 0x10)
//     FVector2D Size;              // 0x0018 (size: 0x10)
//     FString OverrideName;        // 0x0028 (size: 0x10)

// }; // Size: 0x38

// struct FPoiGameData_Guideboard : public FGameDataBase
// {
//     FIntPoint TargetPosition;                    // 0x0008 (size: 0x8)
//     FIntPoint TargetInsightSize;                 // 0x0010 (size: 0x8)
//     TArray<FBoardTargetPoint> BoardTargetPoints; // 0x0018 (size: 0x10)

// }; // Size: 0x28

// struct FPoiGameData_Insight : public FGameDataBase
// {
//     int32 AddInsightSize; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FPoiGetterFilter
// {
//     TArray<class TSubclassOf<UPoibase>> IncludePosClass; // 0x0000 (size: 0x10)
//     TArray<class TSubclassOf<UPoibase>> ExcludePosClass; // 0x0010 (size: 0x10)
//     TArray<int32> ValidWorldIndex;                       // 0x0020 (size: 0x10)
//     TArray<int32> HexGridIDs;                            // 0x0030 (size: 0x10)
//     TArray<int32> BelongIDs;                             // 0x0040 (size: 0x10)
//     TArray<FName> FixedPoiKeyName;                       // 0x0050 (size: 0x10)

// }; // Size: 0x60

// struct FPoiIntervalConfig
// {
//     FString PoiNameA;       // 0x0000 (size: 0x10)
//     FString PoiNameB;       // 0x0010 (size: 0x10)
//     int32 IntervalDistance; // 0x0020 (size: 0x4)

// }; // Size: 0x28

// struct FPoiPositionInfo
// {
//     TArray<int32> PoiArray; // 0x0000 (size: 0x10)

// }; // Size: 0x18

// struct FPoiUIInfo : public FTableRowBase
// {
//     FName EnterTitle;                          // 0x0008 (size: 0x8)
//     TArray<FSoftObjectPath> EnterImage;        // 0x0010 (size: 0x10)
//     FSoftObjectPath POIBackground;             // 0x0020 (size: 0x20)
//     TArray<FPoiFunctionButtonInfo> ButtonInfo; // 0x0040 (size: 0x10)

// }; // Size: 0x50

// struct FPointTriatConfig : public FTableRowBase
// {
//     int32 PointTriatID;                                 // 0x0008 (size: 0x4)
//     FName PointTriatName;                               // 0x000C (size: 0x8)
//     TArray<FBaseAttributeValueParam> AddAttributeArray; // 0x0018 (size: 0x10)
//     FSkillTraitArray AddTraitArray;                     // 0x0028 (size: 0x10)
//     TMap<int32, int32> AbleRandomPoint;                 // 0x0038 (size: 0x50)
//     FName PointTriatDesc;                               // 0x0088 (size: 0x8)

// }; // Size: 0x90

// struct FPreFixedPoiConfigs
// {
//     TMap<class FName, class FPreFixedPoiGroupInfo> InvadeDataFixedConfigs; // 0x0000 (size: 0x50)

// }; // Size: 0x50

// struct FPreFixedPoiGroupInfo
// {
//     TArray<FPreFixedPoiInfo> PreFixedPoiInfos; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FPreFixedPoiInfo
// {
//     TSubclassOf<class UPoibase> POIClass; // 0x0000 (size: 0x8)
//     TArray<FIntPoint> Cells;              // 0x0008 (size: 0x10)
//     FName FixDataRowName;                 // 0x0018 (size: 0x8)

// }; // Size: 0x30

// struct FPreTurnLQFix
// {
//     int32 Range; // 0x0000 (size: 0x4)
//     int32 Count; // 0x0004 (size: 0x4)
//     int32 Value; // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FPresetNpcInitConfig
// {
//     FName ZongmenFixedName;                                        // 0x0000 (size: 0x8)
//     EZongMenJobType ZongmenJobLevel;                               // 0x0008 (size: 0x1)
//     FName CityFixedName;                                           // 0x000C (size: 0x8)
//     TArray<FPresetNpcInitRelationship> PresetNpcInitRelationships; // 0x0018 (size: 0x10)
//     bool bSystemNpc;                                               // 0x0028 (size: 0x1)

// }; // Size: 0x30

// struct FPresetNpcInitRelationship
// {
//     int32 PresetID;                           // 0x0000 (size: 0x4)
//     TArray<EMRelationshipType> Relationships; // 0x0008 (size: 0x10)

// }; // Size: 0x18

// struct FPriority
// {
//     int32 Priority;            // 0x0000 (size: 0x4)
//     TArray<int32> ContentList; // 0x0008 (size: 0x10)

// }; // Size: 0x18

// struct FProcessFlushData
// {
//     int32 iIndex;                          // 0x0000 (size: 0x4)
//     int32 nData;                           // 0x0004 (size: 0x4)
//     TWeakObjectPtr<class UObject> pObject; // 0x0008 (size: 0x8)
//     TArray<int32> arrayInt32Data;          // 0x0010 (size: 0x10)
//     TArray<FString> arrayStrData;          // 0x0020 (size: 0x10)

// }; // Size: 0x30

// struct FProjectileNiagaraParam
// {
//     FSoftObjectPath NiagarSystemPath; // 0x0000 (size: 0x20)
//     float PlayTimeBase;               // 0x0020 (size: 0x4)

// }; // Size: 0x30

// struct FPronounPrefixConfig : public FTableRowBase
// {
//     FName PronounPrefix;                          // 0x0008 (size: 0x8)
//     EPronounType PronounType;                     // 0x0010 (size: 0x1)
//     int32 PresetNpcID;                            // 0x0014 (size: 0x4)
//     FBigWorldAttributeName BigWorldAttributeName; // 0x0018 (size: 0x8)
//     int32 Condition;                              // 0x0020 (size: 0x4)
//     int32 NeedAttributeValue;                     // 0x0024 (size: 0x4)
//     int32 ImpressID;                              // 0x0028 (size: 0x4)

// }; // Size: 0x30

// struct FQuestAction_Control : public FGameDataBase
// {
//     uint8 bShowTriggerEffect; // 0x0008 (size: 0x1)
//     uint8 bRestrictMoving;    // 0x0008 (size: 0x1)

// }; // Size: 0x10

// struct FQuestAction_EnterBattle : public FGameDataBase
// {
//     int32 BattleID; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FQuestAction_HUDGuide : public FGameDataBase
// {
//     FSoftClassPath HUDGuideClassPath;             // 0x0008 (size: 0x20)
//     EGuideStepCompleteType GuideStepCompleteType; // 0x0028 (size: 0x1)
//     uint8 ActionState;                            // 0x0029 (size: 0x1)

// }; // Size: 0x30

// struct FQuestAction_PlayDialogue : public FGameDataBase
// {
//     int32 DialogID;   // 0x0008 (size: 0x4)
//     int32 SpeakerID;  // 0x000C (size: 0x4)
//     int32 ListenerID; // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FQuestAction_WidgetGuideEffect : public FGameDataBase
// {
//     FName UIName;               // 0x0008 (size: 0x8)
//     FName WidgetName;           // 0x0010 (size: 0x8)
//     FName WidgetParentName;     // 0x0018 (size: 0x8)
//     FSoftObjectPath EffectPath; // 0x0020 (size: 0x20)
//     uint8 ActionState;          // 0x0040 (size: 0x1)

// }; // Size: 0x48

// struct FQuestBaseInfoGameData : public FGameDataBase
// {
//     class UQuestEntityBase *QuestEntiyBaseObject; // 0x0008 (size: 0x8)
//     FFNGameTime QuestActiveTime;                  // 0x0020 (size: 0x8)
//     FFNGameTime QuestStartTime;                   // 0x0028 (size: 0x8)
//     FFNGameTime QuestEndTime;                     // 0x0030 (size: 0x8)
//     EQuestState QuestState;                       // 0x0038 (size: 0x1)
//     int32 QuestID;                                // 0x003C (size: 0x4)
//     TArray<uint8> ArchiveData;                    // 0x0040 (size: 0x10)

// }; // Size: 0x50

// struct FQuestCtrl_CommitNPC : public FGameDataBase
// {
//     int32 Commit_NPCID;     // 0x0008 (size: 0x4)
//     int32 MinDistanceToNPC; // 0x000C (size: 0x4)
//     int32 MaxDistanceToNPC; // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FQuestCtrl_InteractNPC : public FGameDataBase
// {
//     int32 InteractNpcID; // 0x0008 (size: 0x4)

// }; // Size: 0x10

// struct FQuestCtrl_TakenFromNPC : public FGameDataBase
// {
//     int32 Taken_NPCID;      // 0x0008 (size: 0x4)
//     int32 MinDistanceToNPC; // 0x000C (size: 0x4)
//     int32 MaxDistanceToNPC; // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FQuestCtrl_TakenFromPOI : public FGameDataBase
// {
//     FName POIFixedName; // 0x0008 (size: 0x8)

// }; // Size: 0x10

// struct FQuestData_HexTracePoint : public FGameDataBase
// {
//     FIntPoint QuestHexTrace;    // 0x0008 (size: 0x8)
//     FEnttIndex QuestTargetEntt; // 0x0010 (size: 0x8)

// }; // Size: 0x18

// struct FQuestDetailSaveResInfo
// {
//     uint8 NodeRes;   // 0x0000 (size: 0x1)
//     int32 NodeIndex; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FQuestEntityTabRow : public FTableRowBase
// {
//     int32 QuestPrefabID;               // 0x0008 (size: 0x4)
//     FSoftClassPath QuestBlueprintPath; // 0x0010 (size: 0x20)
//     EQuestDomainType QuestType;        // 0x0030 (size: 0x1)
//     bool bQuestTrace;                  // 0x0031 (size: 0x1)
//     int32 MaxQuestTakeTime;            // 0x0034 (size: 0x4)
//     int32 MaxQuestInstanceSameTime;    // 0x0038 (size: 0x4)
//     int32 BelongWorldIndex;            // 0x003C (size: 0x4)
//     FString DefaultQuestTitile;        // 0x0040 (size: 0x10)
//     FString DefaultQuestSimpleDesc;    // 0x0050 (size: 0x10)
//     FString DefaultQuestFullDesc;      // 0x0060 (size: 0x10)
//     int32 ExistTime;                   // 0x0070 (size: 0x4)
//     int32 LimitTime;                   // 0x0074 (size: 0x4)
//     bool bAllowGiveUp;                 // 0x0078 (size: 0x1)

// }; // Size: 0x80

// struct FQuestFailureData
// {
//     EQuestFailureType QuestFailureType; // 0x0000 (size: 0x1)
//     int32 QuestItemID;                  // 0x0004 (size: 0x4)
//     int32 RelativeNpcID;                // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FQuestHistoryGameData
// {
//     TArray<int32> QuestHistoryIDs; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FQuestStateFlag_ActionPending
// {
// }; // Size: 0x1

// struct FQuestStateFlag_Back
// {
// }; // Size: 0x1

// struct FQuestStateFlag_Failed : public FGameDataBase
// {
// }; // Size: 0x8

// struct FQuestStateFlag_Ongoing
// {
// }; // Size: 0x1

// struct FQuestStateFlag_OngoingCheckTicking
// {
// }; // Size: 0x1

// struct FQuestStateFlag_Pending
// {
// }; // Size: 0x1

// struct FQuestStateFlag_ReadyToCommit
// {
// }; // Size: 0x1

// struct FQuestStateFlag_ReadyToTake
// {
// }; // Size: 0x1

// struct FQuestStateFlag_Sucessed
// {
// }; // Size: 0x1

// struct FQuestTypeFlag_Branch
// {
// }; // Size: 0x1

// struct FQuestTypeFlag_Delegate
// {
// }; // Size: 0x1

// struct FQuestTypeFlag_Event
// {
// }; // Size: 0x1

// struct FQuestTypeFlag_Main
// {
// }; // Size: 0x1

// struct FQuestTypeFlag_TianDao
// {
// }; // Size: 0x1

// struct FQuestTypeFlag_Zongmen
// {
// }; // Size: 0x1

// struct FRPGAttribueDesc : public FGameplayAttribute
// {
// }; // Size: 0x38

// struct FRPGAttributeBase : public FTableRowBase
// {
//     int32 RPGIndexID;                               // 0x0008 (size: 0x4)
//     int32 BigWorldInsightSize;                      // 0x000C (size: 0x4)
//     FIntPoint CoordinatePositon;                    // 0x0010 (size: 0x8)
//     FCharactorInfo CharactorInfomation;             // 0x0018 (size: 0x98)
//     FFightAttribute FightAttribute;                 // 0x00B0 (size: 0x1A8)
//     FBattleAttribute BattleAttribute;               // 0x0258 (size: 0xB8)
//     FZhongmenJobAttribute ZhongmenJobAttribute;     // 0x0310 (size: 0x14)
//     int32 CityID;                                   // 0x0324 (size: 0x4)
//     TArray<FZhongmenJobAttribute> OldOrganizations; // 0x0328 (size: 0x10)
//     TMap<int32, int32> StageBreakTime;              // 0x0338 (size: 0x50)
//     FSocialAttribute SocialAttribute;               // 0x0388 (size: 0x3A0)
//     FPlayerBag PlayerBag;                           // 0x0728 (size: 0x18)
//     TArray<int32> EquipedPassive;                   // 0x0740 (size: 0x10)
//     TArray<int32> HidePassive;                      // 0x0750 (size: 0x10)
//     TArray<int32> TempleEquipedPassive;             // 0x0760 (size: 0x10)
//     TMap<int32, int32> EquipedSkill;                // 0x0770 (size: 0x50)
//     TMap<int32, int32> XinjueInRunState;            // 0x07C0 (size: 0x50)
//     int32 SLoopNum;                                 // 0x0810 (size: 0x4)
//     int32 BLoopNum;                                 // 0x0814 (size: 0x4)
//     int64 LingShi;                                  // 0x0818 (size: 0x8)
//     int64 SkyGold;                                  // 0x0820 (size: 0x8)
//     int64 ZongMenFamePoint;                         // 0x0828 (size: 0x8)
//     int64 AvailableZongMenJobSalary;                // 0x0830 (size: 0x8)
//     FPlayerJiYiData JiYiInfo;                       // 0x0838 (size: 0x100)
//     TArray<int32> LearnedFuLu;                      // 0x0938 (size: 0x10)
//     FPlayerBag PlayerFuLuBag;                       // 0x0948 (size: 0x18)
//     int32 NPCStoreID;                               // 0x0960 (size: 0x4)
//     FPlayerBag StoreBag;                            // 0x0968 (size: 0x18)
//     FCommonEcsSaveEntityIndex EntiyIndex;           // 0x0980 (size: 0x18)
//     int32 CurrentBD;                                // 0x0998 (size: 0x4)
//     bool CurrentBDComplete;                         // 0x099C (size: 0x1)
//     TArray<FBuildData> BDList;                      // 0x09A0 (size: 0x10)
//     FRelationshipVertex RelationshipVertex;         // 0x09B0 (size: 0x8)
//     TMap<int32, int32> LingFaExpList;               // 0x09B8 (size: 0x50)
//     TArray<int32> DieAfterQuest;                    // 0x0A08 (size: 0x10)
//     TArray<int32> PersonLifeRecords;                // 0x0A18 (size: 0x10)
//     TArray<int32> KnownItems;                       // 0x0A28 (size: 0x10)
//     TArray<int32> KnownLingfa;                      // 0x0A38 (size: 0x10)
//     TArray<int32> KnownEnemy;                       // 0x0A48 (size: 0x10)

// }; // Size: 0xA58

// struct FRPGHistroyGameData : public FGameDataBase
// {
// }; // Size: 0x18

// struct FRarityInfo
// {
//     int32 MaterialValue;              // 0x0000 (size: 0x4)
//     int32 TimeBase;                   // 0x0004 (size: 0x4)
//     int32 TimeReroll;                 // 0x0008 (size: 0x4)
//     int32 BaseExperience;             // 0x000C (size: 0x4)
//     float RarityCoefficient;          // 0x0010 (size: 0x4)
//     TMap<int32, int32> ExtraAffixNum; // 0x0018 (size: 0x50)
//     TArray<int32> ExtraAffixReqValue; // 0x0068 (size: 0x10)
//     int32 ExtraMaxTier;               // 0x0078 (size: 0x4)
//     int32 FixAttMasterValue;          // 0x007C (size: 0x4)
//     int32 PurifyCost;                 // 0x0080 (size: 0x4)

// }; // Size: 0x88

// struct FReadEventConfig : public FTableRowBase
// {
//     int32 ReadEventID;                                     // 0x0008 (size: 0x4)
//     FName EventName;                                       // 0x000C (size: 0x8)
//     FName EventDesc;                                       // 0x0014 (size: 0x8)
//     int32 Weight;                                          // 0x001C (size: 0x4)
//     TArray<FBigWorldTraitAttributeParam> EventEffectArray; // 0x0020 (size: 0x10)

// }; // Size: 0x30

// struct FReducePropertyConfig
// {
//     FScalableFloat ValueReduce;                   // 0x0000 (size: 0x28)
//     TEnumAsByte<EGameplayModOp::Type> ModifierOp; // 0x0028 (size: 0x1)

// }; // Size: 0x30

// struct FRegionBattleConfig
// {
//     float Trigger;                 // 0x0000 (size: 0x4)
//     int32 RequiredStage;           // 0x0004 (size: 0x4)
//     int32 RequiredItem;            // 0x0008 (size: 0x4)
//     int32 DialogueID;              // 0x000C (size: 0x4)
//     FSoftObjectPath BattleMontage; // 0x0010 (size: 0x20)
//     FSoftObjectPath BattleCamera;  // 0x0030 (size: 0x20)

// }; // Size: 0x50

// struct FRegionConfig : public FTableRowBase
// {
//     int32 RegionID;         // 0x0008 (size: 0x4)
//     FName RegionName;       // 0x000C (size: 0x8)
//     FName Desc;             // 0x0014 (size: 0x8)
//     int32 RegionLevel;      // 0x001C (size: 0x4)
//     ERegionType RegionType; // 0x0020 (size: 0x1)
//     int32 YaoNestNum;       // 0x0024 (size: 0x4)
//     int32 AbandomNum;       // 0x0028 (size: 0x4)
//     int32 DaoJingNum;       // 0x002C (size: 0x4)

// }; // Size: 0x30

// struct FRelationArray
// {
//     TArray<EMRelationshipType> Relationships; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FRelationShipEvolveInfo
// {
//     TArray<FRelationShipEvolveInfoAction> RelationShipEvolveActions; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FRelationShipEvolveInfoAction
// {
//     int32 Weight;                                       // 0x0000 (size: 0x4)
//     int32 MinFavorAbilityValue;                         // 0x0004 (size: 0x4)
//     int32 MaxFavorAbilityValue;                         // 0x0008 (size: 0x4)
//     TArray<EMRelationshipType> RequireAnyRelationShips; // 0x0010 (size: 0x10)
//     TArray<EMRelationshipType> RequireAllRelationShips; // 0x0038 (size: 0x10)
//     TArray<EMRelationshipType> ExcludeAllRelationShip;  // 0x0060 (size: 0x10)
//     TArray<EMRelationshipType> ExcludeAnyRelationShip;  // 0x0088 (size: 0x10)
//     bool bNeedOppositeSex;                              // 0x00B0 (size: 0x1)
//     TArray<EMRelationshipType> ToRemoveRelationShips;   // 0x00B8 (size: 0x10)
//     bool bBreakWhenAccess;                              // 0x00E0 (size: 0x1)
//     TArray<EMRelationshipType> OutNextRelation;         // 0x00E8 (size: 0x10)

// }; // Size: 0x110

// struct FRelationShipsDescribe
// {
// }; // Size: 0x18

// struct FRelationship
// {
//     EMRelationshipType RelationshipType;                                     // 0x0000 (size: 0x1)
//     FName RelationshipName;                                                  // 0x0004 (size: 0x8)
//     int32 FavorityThreshold;                                                 // 0x000C (size: 0x4)
//     TMap<TEnumAsByte<EInfomationType>, int32> InformationLevelMap;           // 0x0010 (size: 0x50)
//     EMRelationshipType RelativeRelationshipType;                             // 0x0060 (size: 0x1)
//     int32 Priority;                                                          // 0x0064 (size: 0x4)
//     TMap<class EMRelationshipType, class EMRelationshipType> AssociationMap; // 0x0068 (size: 0x50)
//     FSlateColor RelationshipColor;                                           // 0x00B8 (size: 0x14)
//     int32 EventBaseProb;                                                     // 0x00CC (size: 0x4)
//     int32 EventProbPerFav;                                                   // 0x00D0 (size: 0x4)
//     float PursueByFavor;                                                     // 0x00D4 (size: 0x4)
//     float LoveByFavor;                                                       // 0x00D8 (size: 0x4)
//     float DeathFavor;                                                        // 0x00DC (size: 0x4)
//     float DeathMood;                                                         // 0x00E0 (size: 0x4)
//     bool bOneInstanceAsOutEdge;                                              // 0x00E4 (size: 0x1)
//     bool bOneInstanceAsInEdge;                                               // 0x00E5 (size: 0x1)

// }; // Size: 0xE8

// struct FRelationshipEdge
// {
//     int32 IndexInEdges;                   // 0x0000 (size: 0x4)
//     int32 StartIndex;                     // 0x0004 (size: 0x4)
//     int32 EndIndex;                       // 0x0008 (size: 0x4)
//     int32 InIndex;                        // 0x000C (size: 0x4)
//     int32 OutIndex;                       // 0x0010 (size: 0x4)
//     FRelationShipsDescribe Relationships; // 0x0018 (size: 0x18)

// }; // Size: 0x30

// struct FRelationshipVertex
// {
//     int32 FirstInIndex;  // 0x0000 (size: 0x4)
//     int32 FirstOutIndex; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FReplaceMaterialEffectTask : public FTaskBase
// {
//     TArray<class UMaterialInterface *> ToReplaceMaterialEffects; // 0x0010 (size: 0x10)
//     FName TaskModelName;                                         // 0x0020 (size: 0x8)
//     bool bNeedCustomDepthRender;                                 // 0x0034 (size: 0x1)

// }; // Size: 0x40

// struct FReputationConfig : public FTableRowBase
// {
//     int32 ReputationMinValue;       // 0x0008 (size: 0x4)
//     int32 ReputationMaxValue;       // 0x000C (size: 0x4)
//     FName ReputationDec;            // 0x0010 (size: 0x8)
//     FLinearColor TextColor;         // 0x0018 (size: 0x10)
//     EReputationType ReputationType; // 0x0028 (size: 0x1)

// }; // Size: 0x30

// struct FReputationEvolveConfigData
// {
//     int32 ArtLevelMultiCoefficient;        // 0x0000 (size: 0x4)
//     int32 ArtLevelPowCoefficient;          // 0x0004 (size: 0x4)
//     int32 StagePowCoefficient;             // 0x0008 (size: 0x4)
//     int32 ZongmenBaseFameValue;            // 0x000C (size: 0x4)
//     int32 ZongmenJobLevelMultiCoefficient; // 0x0010 (size: 0x4)
//     int32 CityBaseFameValue;               // 0x0014 (size: 0x4)

// }; // Size: 0x18

// struct FReqMonsterInfo
// {
//     int32 TemplateID;   // 0x0000 (size: 0x4)
//     int32 Level;        // 0x0004 (size: 0x4)
//     int32 Count;        // 0x0008 (size: 0x4)
//     bool bStaticNumber; // 0x000C (size: 0x1)
//     float MulFix;       // 0x0010 (size: 0x4)

// }; // Size: 0x14

// struct FRuntimeSerializeRawData
// {
//     TArray<uint8> RawData;    // 0x0008 (size: 0x10)
//     uint16 RuntimeClassIndex; // 0x0018 (size: 0x2)

// }; // Size: 0x20

// struct FSKillAbilityAttributeParam
// {
//     int32 TraitAbilityIndex;    // 0x0000 (size: 0x4)
//     FFloatAttributeValue Value; // 0x0008 (size: 0x18)

// }; // Size: 0x20

// struct FSKillAbilityAttributeSet
// {
//     TArray<FFloatAttributeValue> TraitAbilitiesValues; // 0x0000 (size: 0x10)
//     TArray<FFloatAttributeValue> SkillSpecParam;       // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FSeclusionStateData : public FGameDataBase
// {
//     ESeclusionType SeclusionType; // 0x0008 (size: 0x1)
//     int32 StartTurn;              // 0x000C (size: 0x4)
//     int32 TotalTurn;              // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FSecondWikiConfig
// {
//     FString SecondWikiName; // 0x0000 (size: 0x10)
//     FString ThirdWikiName;  // 0x0010 (size: 0x10)
//     FString WikiContent;    // 0x0020 (size: 0x10)

// }; // Size: 0x30

// struct FShieldGERecord
// {
// }; // Size: 0x10

// struct FShowLoveConfig
// {
//     float Charm_Coefficient;     // 0x0000 (size: 0x4)
//     int32 StageDiff_Coefficient; // 0x0004 (size: 0x4)
//     int32 JobDiff_Coefficient;   // 0x0008 (size: 0x4)
//     float Fave_Coefficient;      // 0x000C (size: 0x4)
//     int32 IsLike_Coefficient;    // 0x0010 (size: 0x4)

// }; // Size: 0x14

// struct FShuangxiuConfig
// {
//     float F_Coefficient;    // 0x0000 (size: 0x4)
//     int32 Mood_Coefficient; // 0x0004 (size: 0x4)
//     int32 Interaction_Time; // 0x0008 (size: 0x4)
//     int32 Event_Time;       // 0x000C (size: 0x4)

// }; // Size: 0x10

// struct FSingleArenaCompetition
// {
//     TArray<int32> GamerList;                    // 0x0000 (size: 0x10)
//     TArray<int32> GamerRankList;                // 0x0010 (size: 0x10)
//     TArray<FGamerType> RaceSchedule;            // 0x0020 (size: 0x10)
//     FName PlaceName;                            // 0x0030 (size: 0x8)
//     int32 StartTurn;                            // 0x0038 (size: 0x4)
//     int32 NextTurn;                             // 0x003C (size: 0x4)
//     int32 NextGameTurn;                         // 0x0040 (size: 0x4)
//     EArenaCompetitionType ArenaCompetitionType; // 0x0044 (size: 0x1)

// }; // Size: 0x48

// struct FSingleEnergyStorageItem : public FTraitModiyAttributeBase
// {
//     float ExternalGainSpeed; // 0x0020 (size: 0x4)
//     float EnergyValue;       // 0x007C (size: 0x4)

// }; // Size: 0x80

// struct FSingleGuidanceConfig
// {
//     FSoftClassPath TemplateWidget;        // 0x0000 (size: 0x20)
//     TArray<FSoftObjectPath> TexImageList; // 0x0020 (size: 0x10)

// }; // Size: 0x30

// struct FSingleItemAttribute
// {
//     FBaseAttributeValueParam BaseAttributeDescs; // 0x0000 (size: 0x90)
//     FDynamicTraitSpec DynamicTraitDescs;         // 0x0090 (size: 0x100)
//     int32 RowWeight;                             // 0x0190 (size: 0x4)
//     float ValueBandCoefficient;                  // 0x0194 (size: 0x4)

// }; // Size: 0x198

// struct FSingleMeshMaterials
// {
//     TArray<class UMaterialInterface *> SlotMaterials; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FSingleNpc : public FRPGAttributeBase
// {
//     bool bPreFixData;    // 0x0A58 (size: 0x1)
//     bool bSystemNpc;     // 0x0A59 (size: 0x1)
//     TArray<int32> IDs;   // 0x0A60 (size: 0x10)
//     int32 LatestIndexID; // 0x0A70 (size: 0x4)

// }; // Size: 0xA78

// struct FSingleSkillTrait : public FTableRowBase
// {
//     int32 SkillGroupLimit;                    // 0x0008 (size: 0x4)
//     TArray<int32> SkillLimit;                 // 0x0010 (size: 0x10)
//     int32 PointID;                            // 0x0020 (size: 0x4)
//     TArray<FDynamicTraitSpec> SkillTraitDesc; // 0x0028 (size: 0x10)
//     FSoftObjectPath SkillTraitIcon;           // 0x0038 (size: 0x20)
//     EWuXingType WuXingType;                   // 0x0058 (size: 0x1)
//     FName TraitPointName;                     // 0x005C (size: 0x8)
//     FName TraitPointDesc;                     // 0x0064 (size: 0x8)
//     int32 MaxLevel;                           // 0x006C (size: 0x4)
//     int32 PointConsume;                       // 0x0070 (size: 0x4)
//     TArray<int32> PreReqPoint;                // 0x0078 (size: 0x10)

// }; // Size: 0x88

// struct FSingleXinJue : public FTableRowBase
// {
//     int32 ID;                           // 0x0008 (size: 0x4)
//     FName XinjueName;                   // 0x000C (size: 0x8)
//     FSoftObjectPath XinjueIconPath;     // 0x0018 (size: 0x20)
//     int32 SystemID;                     // 0x0038 (size: 0x4)
//     int32 WorldID;                      // 0x003C (size: 0x4)
//     FName WorldDesc;                    // 0x0040 (size: 0x8)
//     uint8 Quality;                      // 0x0048 (size: 0x1)
//     TArray<EDaoYunType> Rules;          // 0x0050 (size: 0x10)
//     uint8 Layer;                        // 0x0060 (size: 0x1)
//     EWuXingType WuxingMain;             // 0x0061 (size: 0x1)
//     int32 DefalutBigWorldTrait;         // 0x0064 (size: 0x4)
//     TArray<int32> ExternBigWorldTraits; // 0x0068 (size: 0x10)
//     int32 Inspiration;                  // 0x0078 (size: 0x4)

// }; // Size: 0x80

// struct FSkillBaseInfo : public FTableRowBase
// {
//     FName SkillName;                                // 0x0008 (size: 0x8)
//     int32 SkillBelongSystem;                        // 0x0010 (size: 0x4)
//     int32 SkillGroupID;                             // 0x0014 (size: 0x4)
//     int32 EvolutionID;                              // 0x0018 (size: 0x4)
//     FName SkillEvolutionName;                       // 0x001C (size: 0x8)
//     FName SkillDesc;                                // 0x0024 (size: 0x8)
//     FGameplayTagContainer TypeTag;                  // 0x0030 (size: 0x20)
//     FGameplayTagContainer SkillTag;                 // 0x0050 (size: 0x20)
//     TArray<EWuXingType> WuXingType;                 // 0x0070 (size: 0x10)
//     TArray<EDaoYunType> Rules;                      // 0x0080 (size: 0x10)
//     TArray<float> BasicDamage;                      // 0x0090 (size: 0x10)
//     TArray<float> BasicDamageRatio;                 // 0x00A0 (size: 0x10)
//     TArray<float> LQConsume;                        // 0x00B0 (size: 0x10)
//     TArray<float> CooldDown;                        // 0x00C0 (size: 0x10)
//     TArray<float> BasicAtkSpeed;                    // 0x00D0 (size: 0x10)
//     float SkillCastRange;                           // 0x00E0 (size: 0x4)
//     FSoftObjectPath SkillIconPath;                  // 0x00F8 (size: 0x20)
//     uint8 bPassive;                                 // 0x0118 (size: 0x1)
//     TArray<FSkillTraitArray> ExternConditionTraits; // 0x0120 (size: 0x10)
//     TArray<FSoftClassPath> StageGameAbilitiesPath;  // 0x0130 (size: 0x10)
//     TArray<int32> PassiveGameplayEffect;            // 0x0140 (size: 0x10)
//     TSubclassOf<class UCameraShakeBase> ShakeClass; // 0x0150 (size: 0x8)
//     float ShakeScale;                               // 0x0158 (size: 0x4)
//     TArray<FSkillSpecParam> SkillSpecParamByLevel;  // 0x0160 (size: 0x10)

// }; // Size: 0x170

// struct FSkillDataInfo
// {
//     FSoftObjectPath MontagePath;       // 0x0000 (size: 0x20)
//     float OriginCastTime;              // 0x0020 (size: 0x4)
//     FSoftObjectPath ChargeMontagePath; // 0x0028 (size: 0x20)

// }; // Size: 0x48

// struct FSkillGroupConfigInfo : public FTableRowBase
// {
//     int32 SkillGroupID;                    // 0x0008 (size: 0x4)
//     FName SkillGroupName;                  // 0x000C (size: 0x8)
//     FName SkillGroupDesc;                  // 0x0014 (size: 0x8)
//     FSoftClassPath BasicSkillClassPath;    // 0x0020 (size: 0x20)
//     FSoftObjectPath SkillGroupIconPath;    // 0x0040 (size: 0x20)
//     int32 SkillSystem;                     // 0x0060 (size: 0x4)
//     int32 BelongWolrdIndex;                // 0x0064 (size: 0x4)
//     EWuXingType WuXingType;                // 0x0068 (size: 0x1)
//     int32 Quality;                         // 0x006C (size: 0x4)
//     TArray<int32> LevelUp_ReqExp;          // 0x0070 (size: 0x10)
//     TArray<int32> BaseProbabilityOverride; // 0x0080 (size: 0x10)
//     TArray<int32> AddCoefficient;          // 0x0090 (size: 0x10)
//     TArray<int32> AddCoefficientEx;        // 0x00A0 (size: 0x10)
//     FGameplayTag GroupTag;                 // 0x00B0 (size: 0x8)

// }; // Size: 0xB8

// struct FSkillGroupEntity
// {
//     int32 SkillGroupTypeID;                           // 0x0000 (size: 0x4)
//     int32 SkillLevel;                                 // 0x0004 (size: 0x4)
//     int32 CurSkillExp;                                // 0x0008 (size: 0x4)
//     int32 CurSkillTemplateID;                         // 0x000C (size: 0x4)
//     TArray<FSkillGroupTraitPointInfo> TraitPointInfo; // 0x0010 (size: 0x10)
//     int32 SkillTraitPoint;                            // 0x0020 (size: 0x4)
//     TArray<int32> LearnedEvolution;                   // 0x0028 (size: 0x10)

// }; // Size: 0x38

// struct FSkillGroupTraitPointInfo
// {
//     int32 TraitPointID; // 0x0000 (size: 0x4)
//     int32 Level;        // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FSkillInfoConfig : public FTableRowBase
// {
//     FSkillTabKey SkillKey;    // 0x0008 (size: 0x28)
//     FSkillDataInfo SkillData; // 0x0030 (size: 0x48)

// }; // Size: 0x78

// struct FSkillNameConfig : public FTableRowBase
// {
//     int32 SkillID;   // 0x0008 (size: 0x4)
//     FName SkillName; // 0x000C (size: 0x8)

// }; // Size: 0x18

// struct FSkillSpecParam
// {
//     TArray<FSkillSpecParamInfo> SkillSpecParames; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FSkillSpecParamInfo
// {
//     FName SkillSpecName;                     // 0x0000 (size: 0x8)
//     int32 SpecAttributrIndex;                // 0x0008 (size: 0x4)
//     FFloatAttributeValue SpecAttributeValue; // 0x0010 (size: 0x18)

// }; // Size: 0x28

// struct FSkillTabKey
// {
//     FName SkillName;             // 0x0000 (size: 0x8)
//     FSoftObjectPath SkeMeshPath; // 0x0008 (size: 0x20)

// }; // Size: 0x28

// struct FSkillTraitArray
// {
//     TArray<FDynamicTraitSpec> DynamicSkillTraitArray; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FSkillTraitByGroup
// {
//     TArray<FSingleSkillTrait> SkillGroupTraits; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FSkillTraitDesc
// {
//     float BaseProbability;                                          // 0x0000 (size: 0x4)
//     TEnumAsByte<EMSkillTargetType> TraitEffectTargetType;           // 0x0004 (size: 0x1)
//     int32 ConditionDurantionType;                                   // 0x0008 (size: 0x4)
//     TArray<FBuffInfoParam> ToApplyBuffs;                            // 0x0010 (size: 0x10)
//     TArray<FBaseAttributeValueParam> ExternAttributeModify;         // 0x0020 (size: 0x10)
//     TArray<FSKillAbilityAttributeParam> TraitAttributeModify;       // 0x0030 (size: 0x10)
//     TArray<FSkillSpecParamInfo> AbilitySpecParamModify;             // 0x0040 (size: 0x10)
//     TArray<FDynamicValueGamePlayEffect> TraitDynamicGameplayEffect; // 0x0050 (size: 0x10)
//     FGameplayTagContainer ReqSourceConditionTags;                   // 0x0060 (size: 0x20)
//     FGameplayTagContainer ReqTargetConditionTags;                   // 0x0080 (size: 0x20)
//     FGameplayTagContainer ReqAbilityTag;                            // 0x00A0 (size: 0x20)
//     FGameplayTagContainer ReqGETag;                                 // 0x00C0 (size: 0x20)
//     float TagProbability;                                           // 0x00E0 (size: 0x4)
//     TArray<FGasCustomExecuteSpec> PreCalcExes;                      // 0x00E8 (size: 0x10)
//     TArray<FGasCustomCalcSpec> CalcSpeces;                          // 0x00F8 (size: 0x10)
//     TArray<FGasCustomExecuteSpec> ExecutrSpeces;                    // 0x0108 (size: 0x10)
//     TArray<FSoftClassPath> TraitContainAbilities;                   // 0x0118 (size: 0x10)
//     uint8 TraitIntenalPriority;                                     // 0x0128 (size: 0x1)
//     uint8 TraitExecutePriority;                                     // 0x0129 (size: 0x1)
//     uint8 bOwnerFilter;                                             // 0x012C (size: 0x1)
//     uint8 bNoTraverse;                                              // 0x012C (size: 0x1)
//     uint8 bNoAutoApply;                                             // 0x012C (size: 0x1)
//     uint8 bTransmitToSummon;                                        // 0x012C (size: 0x1)
//     FGameplayTagRequirements TransmitToSummonTagReq;                // 0x0130 (size: 0x40)

// }; // Size: 0x180

// struct FSkyfallRiftConfig : public FTableRowBase
// {
//     int32 ID;                                   // 0x0008 (size: 0x4)
//     int32 GroupID;                              // 0x000C (size: 0x4)
//     int32 BattleID;                             // 0x0010 (size: 0x4)
//     FSoftClassPath PoiModelPath;                // 0x0018 (size: 0x20)
//     FSoftObjectPath DestoryNS;                  // 0x0040 (size: 0x20)
//     FInt32Range TurnCountBefore;                // 0x0060 (size: 0x10)
//     int32 TurnCountAfter;                       // 0x0070 (size: 0x4)
//     TMap<int32, FPreTurnLQFix> PreTurnLQFixMap; // 0x0078 (size: 0x50)
//     TMap<EDaoYunType, int32> LQFixDaoMap;       // 0x00C8 (size: 0x50)

// }; // Size: 0x118

// struct FSkyfallRiftGenerateData
// {
//     int32 StartTime;    // 0x0000 (size: 0x4)
//     int32 StepTime;     // 0x0004 (size: 0x4)
//     int32 SpecialRange; // 0x0008 (size: 0x4)
//     int32 POIDistance;  // 0x000C (size: 0x4)
//     int32 PreTurn;      // 0x0010 (size: 0x4)

// }; // Size: 0x14

// struct FSocialAttribute
// {
//     int32 Charm;                                // 0x0000 (size: 0x4)
//     TArray<int32> Titles;                       // 0x0008 (size: 0x10)
//     TMap<int32, int32> Rlts_Familys;            // 0x0018 (size: 0x50)
//     TArray<int32> Rlts_Romantics;               // 0x0068 (size: 0x10)
//     TArray<int32> Rlts_Friends;                 // 0x0078 (size: 0x10)
//     int32 Mood;                                 // 0x0088 (size: 0x4)
//     int32 Morality;                             // 0x008C (size: 0x4)
//     int32 PersonalitySoc;                       // 0x0090 (size: 0x4)
//     int32 PersonalityFor;                       // 0x0094 (size: 0x4)
//     int32 PersonalityAmb;                       // 0x0098 (size: 0x4)
//     int32 PersonalityInt;                       // 0x009C (size: 0x4)
//     int32 PersonalityDil;                       // 0x00A0 (size: 0x4)
//     int32 PersonalityDZ;                        // 0x00A4 (size: 0x4)
//     int32 PersonalityLD;                        // 0x00A8 (size: 0x4)
//     TArray<int32> Stereo;                       // 0x00B0 (size: 0x10)
//     int32 Sense;                                // 0x00C4 (size: 0x4)
//     int32 GoodAndBad;                           // 0x00C8 (size: 0x4)
//     int32 TakeMaster;                           // 0x00CC (size: 0x4)
//     TMap<int32, float> NpcFavorabilityMap;      // 0x00D0 (size: 0x50)
//     TMap<int32, int32> NpcFamiliarityMap;       // 0x0120 (size: 0x50)
//     TMap<int32, FZongMenFame> ZongMenFameValue; // 0x0170 (size: 0x50)
//     TMap<int32, int32> RegionReputationList;    // 0x01C0 (size: 0x50)
//     TMap<int32, int32> WorldReputationList;     // 0x0210 (size: 0x50)
//     TMap<int32, int32> FameRDValue;             // 0x0260 (size: 0x50)
//     TMap<int32, int32> FameStand;               // 0x02B0 (size: 0x50)
//     TMap<int32, float> PursueValue;             // 0x0300 (size: 0x50)
//     TMap<int32, float> LoveValue;               // 0x0350 (size: 0x50)

// }; // Size: 0x3A0

// struct FSpawnAIConfig : public FTableRowBase
// {
//     int32 SpawnerID;                  // 0x0008 (size: 0x4)
//     FName SpawnerTag;                 // 0x000C (size: 0x8)
//     EMSpawnerType SpawnerType;        // 0x0014 (size: 0x1)
//     EMFirstWaveType FirstWaveType;    // 0x0015 (size: 0x1)
//     int32 FirstWaveParam;             // 0x0018 (size: 0x4)
//     TArray<int32> PreSpawnerIDs;      // 0x0020 (size: 0x10)
//     EWaveTriggerType WaveTriggerType; // 0x0030 (size: 0x1)
//     int32 SpawnInterval;              // 0x0034 (size: 0x4)
//     TArray<FWaveInfo> WaveList;       // 0x0038 (size: 0x10)
//     TArray<int32> EnemyNpcIDs;        // 0x0048 (size: 0x10)
//     TArray<int32> FriendNpcIDs;       // 0x0058 (size: 0x10)
//     FName CustomDefinedName;          // 0x0068 (size: 0x8)
//     bool bNeedDrop;                   // 0x0070 (size: 0x1)

// }; // Size: 0x78

// struct FSpecSkillInfoConfig : public FTableRowBase
// {
//     FSoftObjectPath SkeMeshPath; // 0x0008 (size: 0x20)
//     FSkillDataInfo SkillData;    // 0x0028 (size: 0x48)

// }; // Size: 0x70

// struct FSpecialPointTriatInfo
// {
//     TArray<int32> PointTriatIDArray; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FSpecialProductItemConfig : public FTableRowBase
// {
//     int32 ItemTemplateID;                             // 0x0008 (size: 0x4)
//     TArray<ESpecialProductSubtype> Subtype;           // 0x0010 (size: 0x10)
//     TSubclassOf<class UItemUseFunction> ItemUseClass; // 0x0020 (size: 0x8)

// }; // Size: 0x28

// struct FSpiritualityBattleConfig
// {
//     int32 WinMood;             // 0x0000 (size: 0x4)
//     int32 FailMood;            // 0x0004 (size: 0x4)
//     float SkillExpCoefficient; // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FSpiritualityLearnConfig
// {
//     float H_Coefficient; // 0x0000 (size: 0x4)
//     float F_Coefficient; // 0x0004 (size: 0x4)
//     int32 Refuse_Mood;   // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FStageBaseConfig : public FTableRowBase
// {
//     int32 Stage;                                                  // 0x0008 (size: 0x4)
//     int32 Phase;                                                  // 0x000C (size: 0x4)
//     FName StageName;                                              // 0x0010 (size: 0x8)
//     FName StageDesc;                                              // 0x0018 (size: 0x8)
//     int32 NeedLQ;                                                 // 0x0020 (size: 0x4)
//     int32 NeedProficient;                                         // 0x0024 (size: 0x4)
//     TSubclassOf<class UStageBreakCheckHandle> CheckScript;        // 0x0028 (size: 0x8)
//     int32 DisaterType;                                            // 0x0030 (size: 0x4)
//     TArray<int32> AwardItemTemplateIDs;                           // 0x0038 (size: 0x10)
//     TArray<FBigWorldBaseAttributeParam> ChangeBaseAttributeArray; // 0x0048 (size: 0x10)
//     TArray<FBaseAttributeValueParam> FixedAttribute;              // 0x0058 (size: 0x10)
//     FName ToNextStageDesc;                                        // 0x0068 (size: 0x8)
//     int32 BreakLifeConsumePerAction;                              // 0x0070 (size: 0x4)
//     float LQDesValue;                                             // 0x0074 (size: 0x4)
//     TArray<int32> UseableComsumeItem;                             // 0x0078 (size: 0x10)
//     int32 CharacterLevel;                                         // 0x0088 (size: 0x4)

// }; // Size: 0x90

// struct FStagePopulation
// {
//     int32 Min; // 0x0000 (size: 0x4)
//     int32 Max; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FStateAreaAttribute
// {
//     int32 StateLevel;             // 0x0000 (size: 0x4)
//     TArray<int32> StateAreaCells; // 0x0008 (size: 0x10)
//     FWuxingInfo WuxingInfo;       // 0x0018 (size: 0x50)
//     FIntPoint CenterHexCoordinat; // 0x0068 (size: 0x8)
//     TArray<int32> NeighborState;  // 0x0070 (size: 0x10)
//     int32 StateAreaID;            // 0x0080 (size: 0x4)
//     FName StateAreaName;          // 0x0084 (size: 0x8)

// }; // Size: 0x90

// struct FStateAreaConfigAttri
// {
//     int32 MinSeprateArea;                              // 0x0000 (size: 0x4)
//     int32 MaxSeprateArea;                              // 0x0004 (size: 0x4)
//     int32 MinStateArea;                                // 0x0008 (size: 0x4)
//     int32 MaxStateArea;                                // 0x000C (size: 0x4)
//     int32 HexCountWidth;                               // 0x0010 (size: 0x4)
//     int32 HexCountHeight;                              // 0x0014 (size: 0x4)
//     int32 CellSize;                                    // 0x0018 (size: 0x4)
//     int32 VoroniCount;                                 // 0x001C (size: 0x4)
//     FIntPoint BornCoordinate;                          // 0x0020 (size: 0x8)
//     TArray<float> DesiredLQValue;                      // 0x0028 (size: 0x10)
//     class UFixedLevelHexDataConfig *FixedLevelHexData; // 0x0048 (size: 0x8)
//     float LQEffectMinValue;                            // 0x0050 (size: 0x4)

// }; // Size: 0x58

// struct FStealConfig
// {
//     int32 GiveUpMoodDecrease;   // 0x0000 (size: 0x4)
//     int32 ItemBackMoodDecrease; // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FStealRecordInfo
// {
//     bool SucceedSteal; // 0x0000 (size: 0x1)
//     int32 ItemId;      // 0x0004 (size: 0x4)
//     bool isEscape;     // 0x0008 (size: 0x1)
//     bool BackTo;       // 0x0009 (size: 0x1)

// }; // Size: 0xC

// struct FStoreConfig : public FTableRowBase
// {
//     int32 StoreID;         // 0x0008 (size: 0x4)
//     int32 SaleType;        // 0x000C (size: 0x4)
//     int32 RefreshTimeStep; // 0x0010 (size: 0x4)
//     FName StoreName;       // 0x0014 (size: 0x8)

// }; // Size: 0x20

// struct FStoreItemConfig : public FTableRowBase
// {
//     int32 StoreID;      // 0x0008 (size: 0x4)
//     int32 ItemId;       // 0x000C (size: 0x4)
//     FName EquipFixID;   // 0x0010 (size: 0x8)
//     int32 ItemNum;      // 0x0018 (size: 0x4)
//     int32 GenGroup;     // 0x001C (size: 0x4)
//     int32 Weight;       // 0x0020 (size: 0x4)
//     int32 ZmFamePrice;  // 0x0024 (size: 0x4)
//     int32 SkyGoldPrice; // 0x0028 (size: 0x4)

// }; // Size: 0x30

// struct FStructTest
// {
// }; // Size: 0x1

// struct FSuffixAttributeTemplate : public FTableRowBase
// {
//     FName TraitDisplayName;                              // 0x0008 (size: 0x8)
//     FSkillTraitDesc TraitDesc;                           // 0x0010 (size: 0x180)
//     FString DisplayContextTemplate;                      // 0x0190 (size: 0x10)
//     TArray<FTraitOverridParamInfo> MainOverridParamInfo; // 0x01A0 (size: 0x10)
//     TArray<FTraitOverridParamInfo> ExOverridParamInfo;   // 0x01B0 (size: 0x10)
//     EMTraitEffectType EffectType;                        // 0x01C0 (size: 0x1)
//     uint8 bAddReqGATag;                                  // 0x01C4 (size: 0x1)
//     uint8 bAddReqGETag;                                  // 0x01C4 (size: 0x1)
//     uint8 bAddReqSourceTag;                              // 0x01C4 (size: 0x1)
//     uint8 bAddReqTargetTag;                              // 0x01C4 (size: 0x1)
//     FGameplayTag TraitGroup;                             // 0x01C8 (size: 0x8)
//     FSkillTraitArray UnionTraitArray;                    // 0x01D0 (size: 0x10)
//     class UDataTable *TableInfo;                         // 0x01E0 (size: 0x8)

// }; // Size: 0x1F0

// struct FSuiDanGroupConfig : public FTableRowBase
// {
//     int32 SuiDanGroupID;              // 0x0008 (size: 0x4)
//     EWuXingType WuXingType;           // 0x000C (size: 0x1)
//     TMap<int32, int32> ReqDanYeGroup; // 0x0010 (size: 0x50)
//     FDynamicTraitSpec BattleEffect;   // 0x0060 (size: 0x100)
//     int32 GroupGetBuffID;             // 0x0160 (size: 0x4)
//     int32 MatchPhase;                 // 0x0164 (size: 0x4)

// }; // Size: 0x168

// struct FSummonInfo
// {
//     TArray<class AActor *> SummonActorArray; // 0x0000 (size: 0x10)

// }; // Size: 0x18

// struct FSwitchStageConfig
// {
// }; // Size: 0x10

// struct FTalentConfig : public FTableRowBase
// {
//     TArray<int32> JiYiBookList;                // 0x0008 (size: 0x10)
//     int32 TalentGroup;                         // 0x0018 (size: 0x4)
//     float InitValue;                           // 0x001C (size: 0x4)
//     float LevelAffectValue;                    // 0x0020 (size: 0x4)
//     float JiYiBookAffectValue;                 // 0x0024 (size: 0x4)
//     EJiYiValueShowType JiYiValueShowType;      // 0x0028 (size: 0x1)
//     FBigWorldTraitAttributeParam TalentEffect; // 0x0030 (size: 0x20)
//     FName TypeName;                            // 0x0050 (size: 0x8)
//     FName TalentDesc;                          // 0x0058 (size: 0x8)
//     FSoftObjectPath TalentIcon;                // 0x0060 (size: 0x20)
//     FSoftObjectPath NotActiveTalentIcon;       // 0x0080 (size: 0x20)

// }; // Size: 0xA0

// struct FTalentLevelInfo
// {
//     float AddEffectValue; // 0x0000 (size: 0x4)
//     int32 UnLockLevel;    // 0x0004 (size: 0x4)

// }; // Size: 0x8

// struct FTaskBase
// {
//     float TaskTimeOutTime; // 0x000C (size: 0x4)

// }; // Size: 0x10

// struct FTextID
// {
// }; // Size: 0x4

// struct FTextPhase
// {
//     float FinalSize;     // 0x0000 (size: 0x4)
//     float FloatTime;     // 0x0004 (size: 0x4)
//     int32 FloatDistance; // 0x0008 (size: 0x4)

// }; // Size: 0xC

// struct FTidePoint
// {
//     TArray<FIntPoint> TidePointArray; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FTigramAttribute
// {
//     TArray<int32> SingleTrigramLevel; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FTrainLevelData
// {
//     TArray<int32> ExpectStageList; // 0x0000 (size: 0x10)
//     TArray<int32> BaseDaoList;     // 0x0010 (size: 0x10)
//     TArray<int32> AwardDaoList;    // 0x0020 (size: 0x10)
//     TArray<int32> DirectDaoList;   // 0x0030 (size: 0x10)

// }; // Size: 0x40

// struct FTrainPlayData : public FTableRowBase
// {
//     int32 ExpectStage;                // 0x0008 (size: 0x4)
//     TArray<int32> DifficultyPropList; // 0x0010 (size: 0x10)
//     TArray<int32> DifficultyCalList;  // 0x0020 (size: 0x10)
//     int32 ColumnCount;                // 0x0030 (size: 0x4)
//     int32 FirstColLength;             // 0x0034 (size: 0x4)
//     int32 LastColLength;              // 0x0038 (size: 0x4)
//     int32 PickMoodMinNum;             // 0x003C (size: 0x4)
//     int32 PickMoodMaxNum;             // 0x0040 (size: 0x4)
//     int32 PickMoodMinRange;           // 0x0044 (size: 0x4)
//     int32 PickMoodStarCol;            // 0x0048 (size: 0x4)
//     int32 PickMoodValue;              // 0x004C (size: 0x4)
//     int32 PickSightNum;               // 0x0050 (size: 0x4)
//     int32 PickSightStartCol;          // 0x0054 (size: 0x4)
//     int32 PickSightEndCol;            // 0x0058 (size: 0x4)
//     int32 PickSightMinRange;          // 0x005C (size: 0x4)
//     float BaseMoveMood;               // 0x0060 (size: 0x4)
//     float MoveMoodAdd;                // 0x0064 (size: 0x4)
//     float SuccessMood;                // 0x0068 (size: 0x4)
//     int32 TimeConsume;                // 0x006C (size: 0x4)
//     int32 ReqMood;                    // 0x0070 (size: 0x4)

// }; // Size: 0x78

// struct FTraitModiyAttributeBase
// {
//     float ProgramInternalCacheA; // 0x0010 (size: 0x4)
//     float ProgramInternalCacheB; // 0x0014 (size: 0x4)
//     float ProgramInternalCacheC; // 0x0018 (size: 0x4)

// }; // Size: 0x20

// struct FTraitOverridParamInfo
// {
//     EMTraitChildType ParamerType; // 0x0000 (size: 0x1)
//     TArray<int32> nIndex;         // 0x0008 (size: 0x10)

// }; // Size: 0x18

// struct FTraitValueData
// {
//     TArray<int32> EffectValueStep; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FTransactionDialogue
// {
//     TArray<int32> TransactionDialogueList; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FTraumaData
// {
//     float Trauma;                          // 0x0000 (size: 0x4)
//     ETraumaState TraumaState;              // 0x0004 (size: 0x1)
//     float TraumaDec;                       // 0x0008 (size: 0x4)
//     float TraumaSelfHeal;                  // 0x000C (size: 0x4)
//     float TraumaHelpHealRate;              // 0x0010 (size: 0x4)
//     TArray<int32> BrokenTraumaTraitIDList; // 0x0018 (size: 0x10)
//     int32 CurStateStartTurn;               // 0x0028 (size: 0x4)

// }; // Size: 0x30

// struct FTraumaTraitData : public FTableRowBase
// {
//     int32 TraitID;                    // 0x0008 (size: 0x4)
//     TArray<int32> BigWorldBuffIDList; // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FTrigramConifg : public FTableRowBase
// {
//     TEnumAsByte<EMDestinyTrigram> Trigram;           // 0x0008 (size: 0x1)
//     TEnumAsByte<EMTrigramHierachy> Hierachy;         // 0x0009 (size: 0x1)
//     int32 Level;                                     // 0x000C (size: 0x4)
//     int32 ReqState;                                  // 0x0010 (size: 0x4)
//     int32 ReqDestinyPoint;                           // 0x0014 (size: 0x4)
//     TArray<FBaseAttributeValueParam> FixedAttribute; // 0x0018 (size: 0x10)

// }; // Size: 0x28

// struct FUnionPoi : public FTableRowBase
// {
//     TArray<FName> UnionPoi; // 0x0008 (size: 0x10)

// }; // Size: 0x18

// struct FValueSectionConfig
// {
//     TArray<int32> MinValue; // 0x0000 (size: 0x10)
//     TArray<int32> MaxValue; // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FWaveInfo
// {
//     TArray<int32> MonsterGroupID; // 0x0000 (size: 0x10)
//     int32 GroupCount;             // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FWidgetGuideEffect
// {
//     EGuideStepCompleteType GuideStepCompleteType; // 0x0000 (size: 0x1)
//     FName UIName;                                 // 0x0004 (size: 0x8)
//     FName WidgetName;                             // 0x000C (size: 0x8)
//     FKey ClickType;                               // 0x0018 (size: 0x18)
//     FName WidgetParentName;                       // 0x0030 (size: 0x8)
//     FSoftObjectPath EffectPath;                   // 0x0038 (size: 0x20)
//     TMap<FString, float> MaterialVaribles;        // 0x0058 (size: 0x50)
//     FSoftClassPath SpecialWnd;                    // 0x00A8 (size: 0x20)
//     int32 EffectState;                            // 0x00C8 (size: 0x4)
//     class USpecialWnd *SpecialWndObj;             // 0x00D0 (size: 0x8)

// }; // Size: 0xD8

// struct FWikiConfig : public FTableRowBase
// {
//     int32 WikiID;                                // 0x0008 (size: 0x4)
//     FString WikiName;                            // 0x0010 (size: 0x10)
//     TArray<FSecondWikiConfig> SecondWikiConfigs; // 0x0020 (size: 0x10)

// }; // Size: 0x30

// struct FWorldCameraMoveParam
// {
//     bool bEnableCamMove;                // 0x0000 (size: 0x1)
//     class UCurveFloat *AccelerateCurve; // 0x0068 (size: 0x8)

// }; // Size: 0xB8

// struct FWorldLevelInfoConfig
// {
//     int32 Stage;                              // 0x0000 (size: 0x4)
//     FSoftObjectPath BigWorldMapPath;          // 0x0008 (size: 0x20)
//     class UStateAreaConfig *WorldAreaSetting; // 0x0028 (size: 0x8)
//     class UNpcGenConfig *NpcGenConfig;        // 0x0030 (size: 0x8)
//     int32 RandomSeed;                         // 0x0038 (size: 0x4)
//     FName KeyNamePlayerAttribute;             // 0x003C (size: 0x8)
//     TArray<int32> WorldDefaultQuestConfig;    // 0x0048 (size: 0x10)

// }; // Size: 0x58

// struct FWrapSaveInfo
// {
//     TArray<class USpudSaveGameInfo *> SpudSaveGameInfos; // 0x0000 (size: 0x10)
//     class USpudSaveGameInfo *LastSaveGameInfo;           // 0x0010 (size: 0x8)

// }; // Size: 0x18

// struct FWuXingCapacity
// {
//     FString WuXingCapacityDesc; // 0x0000 (size: 0x10)
//     FString WuXingVideoPath;    // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FWuxingInfo
// {
//     TArray<int32> JinCells;  // 0x0000 (size: 0x10)
//     TArray<int32> MuCells;   // 0x0010 (size: 0x10)
//     TArray<int32> ShuiCells; // 0x0020 (size: 0x10)
//     TArray<int32> HuoCells;  // 0x0030 (size: 0x10)
//     TArray<int32> TuCells;   // 0x0040 (size: 0x10)

// }; // Size: 0x50

// struct FXinJueState
// {
//     int32 XinjueIndex;            // 0x0000 (size: 0x4)
//     int32 DefaultTrait;           // 0x0004 (size: 0x4)
//     TArray<int32> Traits;         // 0x0008 (size: 0x10)
//     TMap<int32, int32> PreTraits; // 0x0018 (size: 0x50)

// }; // Size: 0x68

// struct FXinJueTraitBookConfig : public FTableRowBase
// {
//     int32 ItemTemplateID; // 0x0008 (size: 0x4)
//     int32 ReqRarity;      // 0x000C (size: 0x4)
//     TArray<int32> Traits; // 0x0010 (size: 0x10)
//     int32 Inspiration;    // 0x0020 (size: 0x4)

// }; // Size: 0x28

// struct FYaoLiInfo
// {
//     TArray<FFormulaInfo> FormulaInfoArray; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FZhongmenJobAttribute
// {
//     int32 ZhongmenID;                 // 0x0000 (size: 0x4)
//     EZongMenJobType ZhongmenJobLevel; // 0x0004 (size: 0x1)
//     int32 ZhongmenAuxiliary;          // 0x0008 (size: 0x4)
//     int32 JoinTime;                   // 0x000C (size: 0x4)
//     int32 QuitTime;                   // 0x0010 (size: 0x4)

// }; // Size: 0x14

// struct FZmJobInfo
// {
//     TArray<int32> NPCArray; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FZmJobLevelUpGainsInfos
// {
//     TMap<class EItemBaseType, class FItemByQualityInfo> ItemTypeCount; // 0x0000 (size: 0x50)

// }; // Size: 0x50

// struct FZmJobReqInfoInAIEvolve
// {
//     int32 MinStage;     // 0x0000 (size: 0x4)
//     int32 MinTurnCount; // 0x0004 (size: 0x4)
//     int32 MaxTurnCount; // 0x0008 (size: 0x4)
//     bool bMoveToHQ;     // 0x000C (size: 0x1)

// }; // Size: 0x10

// struct FZmPopulationDistri
// {
//     TMap<class EZongMenJobType, class FJobPopulation> JobNums; // 0x0000 (size: 0x50)

// }; // Size: 0x50

// struct FZmPopulationGenCoinfg
// {
//     FZmPopulationDistri DivPopulation; // 0x0000 (size: 0x50)
//     FZmPopulationDistri HQPopulation;  // 0x0050 (size: 0x50)

// }; // Size: 0xA0

// struct FZongMenExchangeBookInfo
// {
//     TArray<int32> ExchangeBookIDs; // 0x0000 (size: 0x10)

// }; // Size: 0x10

// struct FZongMenFame
// {
//     TArray<int32> ZongMenFameList;    // 0x0000 (size: 0x10)
//     int32 ZongMenFameHistoryMaxValue; // 0x0010 (size: 0x4)

// }; // Size: 0x18

// struct FZongMenFameConfig
// {
//     int32 FameAward_ReqValue;              // 0x0000 (size: 0x4)
//     int32 FameAward_DropID;                // 0x0004 (size: 0x4)
//     FName Fame_Award_Req_Text;             // 0x0008 (size: 0x8)
//     FSlateColor Fame_Award_Req_Text_Color; // 0x0010 (size: 0x14)

// }; // Size: 0x24

// struct FZongMenJobLevelConfig
// {
//     int32 Fame_RtlFix;            // 0x0000 (size: 0x4)
//     int32 PromotionReqReputation; // 0x0004 (size: 0x4)
//     int32 PromotionReqStage;      // 0x0008 (size: 0x4)
//     float Gym_JobDiscount;        // 0x000C (size: 0x4)
//     int32 JobSalary;              // 0x0010 (size: 0x4)
//     int32 BasicSkillNum;          // 0x0014 (size: 0x4)
//     int32 RareSkillNum;           // 0x0018 (size: 0x4)
//     int32 SecretSkillNum;         // 0x001C (size: 0x4)
//     int32 BasicGFNum;             // 0x0020 (size: 0x4)
//     int32 RareGFNum;              // 0x0024 (size: 0x4)
//     int32 SecretGFNum;            // 0x0028 (size: 0x4)

// }; // Size: 0x2C

// struct FZongMenJobReplenishConfig
// {
//     int32 MaxNum;                            // 0x0000 (size: 0x4)
//     bool bSameLevelReplenishPriority;        // 0x0004 (size: 0x1)
//     TArray<EZongMenJobType> CanInSelectJobs; // 0x0008 (size: 0x10)

// }; // Size: 0x18

// struct FZongMenSelectData
// {
//     EZongMenJobType ToSelectJobType; // 0x0000 (size: 0x1)
//     int32 SelectNum;                 // 0x0004 (size: 0x4)
//     bool bDeputyJob;                 // 0x0008 (size: 0x1)
//     bool bFromDeputyJob;             // 0x0009 (size: 0x1)
//     TArray<int32> ReplenishedIndex;  // 0x0010 (size: 0x10)

// }; // Size: 0x20

// struct FZongmenFixedData : public FTableRowBase
// {
//     FName ZongmenName;                              // 0x0008 (size: 0x8)
//     FItemPoolGroup LingfaBasic;                     // 0x0010 (size: 0x20)
//     FItemPoolGroup LingfaRare;                      // 0x0030 (size: 0x20)
//     FItemPoolGroup LingfaSecret;                    // 0x0050 (size: 0x20)
//     TArray<int32> ExchangeXinJueItemIDArray;        // 0x0070 (size: 0x10)
//     TArray<int32> ExchangeLingFaItemIDArray;        // 0x0080 (size: 0x10)
//     TArray<int32> ExchangeShenTongItemIDArray;      // 0x0090 (size: 0x10)
//     TArray<int32> Art;                              // 0x00A0 (size: 0x10)
//     bool IsWuxingRandom;                            // 0x00B0 (size: 0x1)
//     int32 GroupIndex;                               // 0x00B4 (size: 0x4)
//     TArray<int32> ZongmenBuildID;                   // 0x00B8 (size: 0x10)
//     int32 ZongmenEquip;                             // 0x00C8 (size: 0x4)
//     int32 ZongmenBestEquip;                         // 0x00CC (size: 0x4)
//     int32 Npc_Job3_Award;                           // 0x00D0 (size: 0x4)
//     int32 Npc_Job2_Award;                           // 0x00D4 (size: 0x4)
//     int32 ZmStoreID;                                // 0x00D8 (size: 0x4)
//     int32 EnterReqReputation;                       // 0x00DC (size: 0x4)
//     int32 EnterReqWorldFame;                        // 0x00E0 (size: 0x4)
//     TArray<int32> EnterReqCapcity;                  // 0x00E8 (size: 0x10)
//     int32 RiftID;                                   // 0x00F8 (size: 0x4)
//     int32 GymRoomID;                                // 0x00FC (size: 0x4)
//     FDelegateQuestFixedData DelegateQuestFixedData; // 0x0100 (size: 0xC)
//     TArray<FZongMenFameConfig> ZongMenFameConfigs;  // 0x0110 (size: 0x10)
//     TArray<int32> GenerableZongMenQuestGroupIDs;    // 0x0120 (size: 0x10)
//     TArray<FInstancedStruct> ExternConfigData;      // 0x0130 (size: 0x10)

// }; // Size: 0x140

// struct FZongmenQuest : public FTableRowBase
// {
//     int32 QuestID;             // 0x0008 (size: 0x4)
//     int32 Type;                // 0x000C (size: 0x4)
//     int32 ReqItemID;           // 0x0010 (size: 0x4)
//     int32 ReqValue;            // 0x0014 (size: 0x4)
//     int32 AwardFame;           // 0x0018 (size: 0x4)
//     int32 AwardGold;           // 0x001C (size: 0x4)
//     int32 AwardItem;           // 0x0020 (size: 0x4)
//     int32 AwardItemNum;        // 0x0024 (size: 0x4)
//     int32 PeriodTimes;         // 0x0028 (size: 0x4)
//     int32 MinStageLimit;       // 0x002C (size: 0x4)
//     int32 MaxStageLimit;       // 0x0030 (size: 0x4)
//     int32 HQLimit;             // 0x0034 (size: 0x4)
//     FString TitleText;         // 0x0038 (size: 0x10)
//     int32 ZongMenQuestGroupID; // 0x0048 (size: 0x4)

// }; // Size: 0x50

// class AAbilityBaseActor : public APawn
// {
//     class UBattleAbilitySystemCpt *AbilitySystemComponent; // 0x0338 (size: 0x8)
//     class UBattleAttributeBase *BattleAttributeSet;        // 0x0340 (size: 0x8)
//     class UBattleRPGAttributeCpt *BattleRPGAttributeCpt;   // 0x0348 (size: 0x8)
//     class UBattleBufferProcessCpt *BattleBufferProcessCpt; // 0x0350 (size: 0x8)

//     void UnRegAttributeChange(const FGameplayAttribute &Attribute, FName RegKeyName);
//     void RegisterAttributeChange(const FGameplayAttribute &Attribute, FName RegKeyName);
//     void PostActorDuplicateByGame(class AFNGameActor *SouceActor);
//     void HandleAbsRegisterAbilityAttributeChange(FString Attribute, float OldValue, float NewValue);
// }; // Size: 0x3B0

// class ABattleAICharacter : public ABattleCharacter
// {
// }; // Size: 0x6D0

// class ABattleCharacter : public ACharacter
// {
//     class UBattleAbilitySystemCpt *AbilitySystemCpt;       // 0x0648 (size: 0x8)
//     class UBattleRPGAttributeCpt *BattleRPGAttributeCpt;   // 0x0650 (size: 0x8)
//     class UBattleLQExchangeCpt *LQExchangeCpt;             // 0x0660 (size: 0x8)
//     class UBattleBufferProcessCpt *BattleBufferProcessCpt; // 0x0668 (size: 0x8)

//     void UnRegAttributeChange(const FGameplayAttribute &Attribute, FName RegKeyName);
//     void Script_OnCharacterDeath();
//     void Script_OnBuffUpdate(int32 Handle, int32 BuffID, int32 CurStackCount, int32 OldStackCount, float ShowTime);
//     void RegisterAttributeChange(const FGameplayAttribute &Attribute, FName RegKeyName);
//     void HandleAbsRegisterAbilityAttributeChange(FString Attribute, float OldValue, float NewValue);
//     class AActor *GetSelectedTarget();
//     bool GetMouseFloorPosition(FVector &VecPos);
//     class UGuideHUDCpt *GetGuideHUDCpt();
//     bool GetAbilityTargetPos(FVector &VecPos);
//     void EndDamageDetection();
//     void BeginDamageDetection(FGameplayTag EventTag, float DamageDelayTime, int32 DamageDelayCount);
// }; // Size: 0x6D0

// class ABattleGameModeBase : public AFNGameXGameModeBase
// {
//     FName CurPlayerStartTag; // 0x0378 (size: 0x8)

// }; // Size: 0x380

// class ABattleGameStateBase : public AGameStateBase
// {
// }; // Size: 0x2E0

// class ABattleMonster : public ABattleAICharacter
// {
// }; // Size: 0x6D0

// class ABattlePlayer : public ABattleCharacter
// {
// }; // Size: 0x6D0

// class ABattlePlayerController : public AFNGamePlayerController
// {
//     FEnttIndex BattleActorEntity;                 // 0x0A68 (size: 0x8)
//     float ReleaseTime;                            // 0x0A74 (size: 0x4)
//     class UPathFollowingComponent *PathFollowCpt; // 0x0A78 (size: 0x8)

//     void UpdateUIContext();
//     void Script_OnItemCDUpate();
//     void Script_OnBuffUpdate(int32 BuffID, int32 nType);
//     void OnAbilityEvent(class UGameplayAbility *ActivatedAbility);
//     void OnAbilityEndEvent(const FAbilityEndedData &AbilityEndedData);
// }; // Size: 0xA80

// class ABattlePlayerState : public APlayerState
// {
// }; // Size: 0x3A8

// class ABigWorldActorBase : public AFNGameActor
// {
//     FEnttIndex ActorEntity; // 0x02C0 (size: 0x8)

//     void ScriptOnUpdate();
//     void ScriptOnShow();
//     void ScriptOnInit();
//     void ScriptOnHide();
// }; // Size: 0x2C8

// class ADropDownItemActor : public AFNGameActor
// {
//     class UItemBase *ItemObj;          // 0x02B0 (size: 0x8)
//     class UBoxComponent *BoxCollision; // 0x02B8 (size: 0x8)

//     void SetItemObject(class UItemBase *Item);
//     void OnSetItemObject(class UItemBase *Item);
//     class UItemBase *GetItemObject();
// }; // Size: 0x2C0

// class AEnemyController : public AFNAIControllerBase
// {
// }; // Size: 0x3E8

// class AEscapeActor : public ATriggerBox
// {
//     bool bUse; // 0x0298 (size: 0x1)

//     void Script_EnterOrLeaveEscapeArea(bool Flag);
// }; // Size: 0x2A0

// class AFNAIControllerBase : public AAIController
// {
//     bool bBlockMovement;                        // 0x03B8 (size: 0x1)
//     bool bNeedCrowdAvoid;                       // 0x03B9 (size: 0x1)
//     FEnttIndex BattleActorEntity;               // 0x03C0 (size: 0x8)
//     bool bUseBattleAISystem;                    // 0x03C8 (size: 0x1)
//     class UAIPerceptionComponent *AIPerception; // 0x03D0 (size: 0x8)
//     TArray<FInstancedStruct> ExternCptData;     // 0x03D8 (size: 0x10)

//     void UpdatedPerception(class AActor *Actor, FAIStimulus AIStimulus);
//     void OnDamage(float DeltaValue, const class USkillGameplayAbility *DamageAbility, const class UGameplayEffect *GameEffect, const class AActor *InstigatorCharacter, const class AActor *DamageCauser, bool bCrit);
//     class AActor *GetCurrentTarget();
//     TEnumAsByte<EPathFollowingRequestResult::Type> CrowMoveToActor(class AActor *Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<class UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
// }; // Size: 0x3E8

// class AFNGameActor : public AActor
// {
//     float DeactivateAndDelayDestroy; // 0x02A0 (size: 0x4)

//     void PostActorDuplicateByGame(class AFNGameActor *SouceActor);
//     void OnDeactiveActor();
//     void DeactivateActorWithDelayDestroyTime(float DelayTime);
//     void DeactivateActor();
// }; // Size: 0x2B0

// class AFNGamePlayerController : public ACommonPlayerController
// {
//     FFNGamePlayerControllerMouseLeftBtnPressed MouseLeftBtnPressed; // 0x0850 (size: 0x10)
//     void MouseLeftBtnPressed();
//     FFNGamePlayerControllerMouseRightBtnPressed MouseRightBtnPressed; // 0x0860 (size: 0x10)
//     void MouseRightBtnPressed();
//     TEnumAsByte<ECollisionChannel> CommonTraceChannel; // 0x0870 (size: 0x1)
//     FHitResult LineTraceHitRes;                        // 0x0878 (size: 0xE8)
//     FHitResult LandFloorTraceHitRes;                   // 0x0960 (size: 0xE8)
//     bool bBlockMovement;                               // 0x0A48 (size: 0x1)
//     class AActor *SelectTargetActor;                   // 0x0A50 (size: 0x8)

//     void SetMovingStateByLButton(bool bEnable);
// }; // Size: 0xA68

// class AFNGameSplineActor : public AFNGameActor
// {
//     class USplineComponent *PathSpline; // 0x02B0 (size: 0x8)

// }; // Size: 0x2B8

// class AFNGameWorldSetting : public AWorldSettings
// {
//     int32 WorldLevelIndex;        // 0x04B8 (size: 0x4)
//     FName KeyNamePlayerAttribute; // 0x04BC (size: 0x8)

// }; // Size: 0x4C8

// class AFNGameXGameModeBase : public AGameMode
// {
// }; // Size: 0x378

// class AFNPlayerCameraManager : public APlayerCameraManager
// {
// }; // Size: 0x3460

// class AGenActor : public AActor
// {
//     class UHierarchicalInstancedStaticMeshComponent *Ismc; // 0x0290 (size: 0x8)

// }; // Size: 0x298

// class AHexGridCellActor : public ABigWorldActorBase
// {

//     void OnStartShowActor();
//     void OnFadeoutActor();
// }; // Size: 0x2C8

// class AHexGridDecalsActor : public AFNGameActor
// {
//     int32 DecalsCounts; // 0x02B0 (size: 0x4)

// }; // Size: 0x2B8

// class AHexGridEditorActor : public AActor
// {
//     class UHexGridEditorCompent *HexGridComp; // 0x0290 (size: 0x8)

// }; // Size: 0x298

// class AHexGridLandscapeActor : public AFNGameActor
// {
//     class UProceduralHexGridCpt *ProceduralHexGridCpt;                          // 0x02B0 (size: 0x8)
//     class UStaticMeshComponent *PlaneCpt;                                       // 0x02B8 (size: 0x8)
//     TArray<class UInstancedStaticMeshComponent *> InstancedStaticMeshComponent; // 0x02C0 (size: 0x10)
//     class ANavMeshBoundsVolume *NavBound;                                       // 0x02D0 (size: 0x8)
//     class AHexGridNavigationData *NavData;                                      // 0x02D8 (size: 0x8)

// }; // Size: 0x2E0

// class AHexGridNavigationData : public ANavigationData
// {
// }; // Size: 0x4C8

// class AHexLQActor : public ABigWorldActorBase
// {
//     int32 MinShowEffectValue;                                     // 0x02C8 (size: 0x4)
//     class ULandscapeAreaConfig *LandscapeAreaConfig;              // 0x02D0 (size: 0x8)
//     class ULQNiagaraConfig *LQNiagaraConfig;                      // 0x02D8 (size: 0x8)
//     class UNiagaraComponent *NiagaraComponent;                    // 0x02E0 (size: 0x8)
//     class UHexGridSceneUICpt *ShowNpcCountUICpt;                  // 0x02E8 (size: 0x8)
//     TSubclassOf<class UHexGridSceneUICpt> ShowNpcCountUICptClass; // 0x02F0 (size: 0x8)

// }; // Size: 0x2F8

// class AInteractionActor : public ABattleCharacter
// {
//     bool bInteractEnd; // 0x06D8 (size: 0x1)

//     void SetInteractEnd();
// }; // Size: 0x6E0

// class AMainMenuBaseGameMode : public AFNGameXGameModeBase
// {
// }; // Size: 0x388

// class AMainMenuBasePlayerController : public AFNGamePlayerController
// {
// }; // Size: 0xA68

// class AOperateDataTable : public AActor
// {

//     void Script_ActiveAction();
// }; // Size: 0x290

// class APortalActor : public ATriggerBox
// {
//     class UChildActorComponent *ChildActorComponent; // 0x0298 (size: 0x8)
//     class UBoxComponent *PortalTipBox;               // 0x02A0 (size: 0x8)
//     class UWidgetComponent *PortalTipUI;             // 0x02A8 (size: 0x8)
//     TArray<EBattleRoomType> TypeList;                // 0x02B0 (size: 0x10)
//     int32 BattleID;                                  // 0x02C0 (size: 0x4)
//     float TimeForTransmit;                           // 0x02C4 (size: 0x4)
//     class UNiagaraComponent *ProgressBarNiagara;     // 0x02C8 (size: 0x8)
//     class UNiagaraComponent *PortalNiagara;          // 0x02D0 (size: 0x8)

//     void Transmit();
//     void ShowPortal();
//     void SetTypeList(TArray<EBattleRoomType> &List);
//     void SetPortalTip(FString Tip);
//     void SetBattleID();
//     void OnPortalNiagaraEnd(class UNiagaraComponent *NiagaraComponent);
//     void OnLeaveTransmitBox(class UPrimitiveComponent *OverlappedComponent, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex);
//     void OnLeaveRoomTipBox(class UPrimitiveComponent *OverlappedComponent, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex);
//     void OnEnterTransmitBox(class UPrimitiveComponent *OverlappedComponent, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);
//     void OnEnterRoomTipBox(class UPrimitiveComponent *OverlappedComponent, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);
//     bool CheckPortalEnable();
// }; // Size: 0x2E0

// class AProjectileBaseActor : public AAbilityBaseActor
// {
//     class UProjectileMovementComponent *ProjectileMovement; // 0x03B0 (size: 0x8)

//     class UProjectileMovementComponent *GetProjectileMovementComponent();
// }; // Size: 0x3B8

// class ASKillSummonActorBase : public AAbilityBaseActor
// {
// }; // Size: 0x3B0

// class ASpawnAIBaseActor : public AActor
// {
//     FName SpawnPointTypeName;                      // 0x0290 (size: 0x8)
//     bool bAutoStart;                               // 0x0298 (size: 0x1)
//     int32 MaxRandomCount;                          // 0x029C (size: 0x4)
//     FSpawnAIConfig SpawnAIConfig;                  // 0x02A0 (size: 0x78)
//     class UBoxComponent *BoxCollision;             // 0x0318 (size: 0x8)
//     class UBoxComponent *GenerateArea;             // 0x0320 (size: 0x8)
//     TArray<class AActor *> AllWaveMonsters;        // 0x0348 (size: 0x10)
//     TArray<class AActor *> CurWaveMonsters;        // 0x0358 (size: 0x10)
//     TArray<class ASpawnAIBaseActor *> AllSpawners; // 0x0368 (size: 0x10)
//     bool bRandomMonsterAffix;                      // 0x0378 (size: 0x1)

//     void Start();
//     void SetSpawnAIConfig(const FSpawnAIConfig &Config);
//     void SetRandomMonsterAffix(bool Flag);
//     void SetMonsterLevel(int32 Level);
//     void ReStartSpawner();
//     bool IsSpawnStart();
//     bool IsSpawnEnd();
//     bool IsEnd();
//     int32 GetDeadMonsterCount();
//     bool AllMonstersDead();
//     bool AllCurWaveMonstersDead();
//     void AddMonsterCountMul(float AddValue);
// }; // Size: 0x380

// class AStageBreakGameState : public ABattleGameStateBase
// {
// }; // Size: 0x2E0

// class ASummonBase : public AAbilityBaseActor
// {
// }; // Size: 0x3B0

// class ATurnBaseCharactor : public ABattleCharacter
// {
//     class UHexGridSubsystem *HexGridSubsystem;         // 0x06D8 (size: 0x8)
//     class UFNTurnBaseSubsystem *TurnBaseSubsystem;     // 0x06E0 (size: 0x8)
//     class UPlayerAttribute *PlayerAttribute;           // 0x06E8 (size: 0x8)
//     class USceneComponent *CursorScenePosition;        // 0x06F8 (size: 0x8)
//     class UCheckPathSceneComponent *CheckPathSceneCpt; // 0x0700 (size: 0x8)
//     class UCameraComponent *TopDownCameraComponent;    // 0x0708 (size: 0x8)
//     class USpringArmComponent *CameraBoom;             // 0x0710 (size: 0x8)
//     class URoadSplineComponent *RoadSplineComponent;   // 0x0718 (size: 0x8)
//     class UCurveFloat *CameraMoveCurve;                // 0x0748 (size: 0x8)
//     FVector CamWorldOffset;                            // 0x0770 (size: 0x18)
//     class UTurnBasePathFollowCpt *PFollowComp;         // 0x0790 (size: 0x8)
//     FWorldCameraMoveParam WorldCameraMoveParam;        // 0x0798 (size: 0xB8)

//     void StopMoveToLocation();
//     void SetIsFlying(bool bFly);
//     bool SetHexPositionDirect(FIntPoint TargetPos);
//     void SetCamMoveIndex(int32 Index);
//     void SetCameraBoomLengthDelta(float Delta);
//     void ResetCameraPos();
//     void RemoveGameplayEffectByBigworldBuff(int32 UserID, int32 BigWorldBuffID);
//     void OnSetCameraLag();
//     void OnPlayerStageChange(FName BigWorldAttributeName, int32 UserID, float OldValue, float DeltaValue);
//     int32 MoveToGridByFulu(FVector DestPos);
//     void MoveToGrid(FVector DestPos);
//     bool GetIsFlying();
//     int32 GetConsumeStep();
//     TArray<FVector> CheckMoveByPos(FVector DestPos);
//     TArray<FIntPoint> CheckMoveByHexCoordinate(FIntPoint HexPoint);
//     TArray<int32> CheckMoveByHexCellIndex(int32 CellIndex);
//     void CancelCamMoveIndex(int32 Index);
//     void ApplyGameplayEffectByBigworldBuff(int32 UserID, int32 BigWorldBuffID, bool IsChildBuff);
// }; // Size: 0x860

// class ATurnBaseGameMode : public AFNGameXGameModeBase
// {
//     TSubclassOf<class APawn> DefaultTurnBasePawn; // 0x0378 (size: 0x8)

//     UClass *GetDefaultTurnPawn(class AController *InController);
// }; // Size: 0x380

// class ATurnBaseGameState : public AGameState
// {
// }; // Size: 0x300

// class ATurnBasePlayerController : public AFNGamePlayerController
// {
//     class UMaterialParameterCollection *MaterialParameterCollection; // 0x0A68 (size: 0x8)
//     class UPathFollowingComponent *PathFollowingComponent;           // 0x0A70 (size: 0x8)

//     void OnPlayerMove(const FIntPoint &LastPos, const FIntPoint &CurPos);
//     bool MoveToTargetCell(const FIntPoint &TargetCoord, bool bCheckNormalCondition);
// }; // Size: 0xA78

// class IActionEntityBaseInterface : public IInterface
// {

//     void UnRegisterActionEntity(class UGameInstance *InGameInstance);
//     void RegisterActionEntity(class UGameInstance *InGameInstance);
// }; // Size: 0x28

// class IBattleAbilitySystemInterface : public IInterface
// {
// }; // Size: 0x28

// class IBigWorldLODObjectInterface : public IInterface
// {
// }; // Size: 0x28

// class IFNActorInteractionInterface : public IInterface
// {

//     void InteractionOprate(class APawn *Pawn, FName ActionCommand);
//     bool GetMoveToEndDestionation(FVector &LocationVec);
//     float GetInteractionDistance();
//     EActorInteractionType GetActorInteractionInfo();
// }; // Size: 0x28

// class IGameTabButtonInterface : public IInterface
// {

//     void SetTabLabelInfo(const FGameTabDescriptor &TabDescriptor);
// }; // Size: 0x28

// class IInvadedObjectInterface : public IInterface
// {
// }; // Size: 0x28

// class ISoundControllerInterface : public IInterface
// {

//     class UAudioComponent *GetSkillAudioComponent();
//     class UAudioComponent *GetRoarAudioComponent();
//     class UAudioComponent *GetAnimationAudioComponent();
// }; // Size: 0x28

// class UAIEvolveBase : public UObject
// {
// }; // Size: 0x28

// class UAIEvolve_City : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAIEvolve_Equipment : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAIEvolve_Event : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAIEvolve_ExploreAction : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAIEvolve_Heal : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAIEvolve_InvadeTransaction : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAIEvolve_JiYi : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAIEvolve_LingFa : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAIEvolve_Practice : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAIEvolve_Reputation : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAIEvolve_Seclusion : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAIEvolve_Social : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAIEvolve_ZongMen : public UAIEvolveBase
// {
// }; // Size: 0x28

// class UAISense_SimpleSight : public UAISense_Sight
// {
// }; // Size: 0x170

// class UAbilityAttackUtility : public UObject
// {
// }; // Size: 0x28

// class UAbilityBuffDamageExecution : public UAbilityDamageExecutionBase
// {
// }; // Size: 0x188

// class UAbilityCaptureCpt : public UFNGameCpt
// {
//     FSKillAbilityAttributeSet BaseSKillAbilityAttributeSetRuntime; // 0x00A8 (size: 0x20)
//     TWeakObjectPtr<class USkillGameplayAbility> MainSkillAbility;  // 0x00C8 (size: 0x8)
//     TWeakObjectPtr<class AActor> MainBodyActor;                    // 0x00D0 (size: 0x8)
//     FGameplayAbilitySpecHandle GameplayAbilitySpecHandle;          // 0x00D8 (size: 0x4)
//     float AbilityCoast;                                            // 0x00DC (size: 0x4)
//     FVector CastDirection;                                         // 0x00E0 (size: 0x18)
//     FVector CastPosition;                                          // 0x00F8 (size: 0x18)

//     void SetAbilityTraitAttributeValueByType(TEnumAsByte<EMTraitAttributeType> TraitAttributeType, float Value, TEnumAsByte<EMTaritAttributeOprateType> AttributeOprateType);
//     void SetAbilityTraitAttributeValue(TEnumAsByte<EMTraitAttributeType> TraitAttributeType, const FFloatAttributeValue &NewAttributeValue);
//     float GetAbilityTraitAttributeValueByTypeConst(TEnumAsByte<EMTraitAttributeType> TaritAttributeType);
//     FFloatAttributeValue GetAbilityTraitAttributeByType(TEnumAsByte<EMTraitAttributeType> TaritAttributeType);
//     void AddSpecTagValue(const FGameplayTag &GameplayTag, const FGameplayTag &ValueGameplayTag, float Value);
// }; // Size: 0x278

// class UAbilityDamageExecution : public UAbilityDamageExecutionBase
// {
// }; // Size: 0x180

// class UAbilityDamageExecutionBase : public UGameplayEffectExecutionCalculation
// {
//     FDamageExecutionCalcParam DamageExecutionCalcParamEx; // 0x0040 (size: 0x140)

// }; // Size: 0x180

// class UAbilityDamageExecution_Manually : public UAbilityDamageExecutionBase
// {
//     FGameplayAttribute PropertyPathName; // 0x0180 (size: 0x38)

// }; // Size: 0x1B8

// class UAbilityPerSecondExecution : public UGameplayEffectExecutionCalculation
// {
//     FGameplayTagContainer ExpTag; // 0x0040 (size: 0x20)

// }; // Size: 0x60

// class UAbilityTask_DashToActor : public UAbilityTask
// {
//     FAbilityTask_DashToActorOnTargetLocationReached OnTargetLocationReached; // 0x0080 (size: 0x10)
//     void DashCompleteDelegate();
//     class AController *OwnerController;               // 0x0090 (size: 0x8)
//     class UDashPathFollowCpt *PathFollowingComponent; // 0x0098 (size: 0x8)
//     float Speed;                                      // 0x00A0 (size: 0x4)
//     FAIMoveRequest MoveRequest;                       // 0x00A8 (size: 0x48)

//     class UAbilityTask_DashToActor *DashToActor(class UGameplayAbility *OwningAbility, const class AActor *SourceActor, class AActor *GoalActor, float Speed);
// }; // Size: 0xF0

// class UAbilityTask_DashToLocation : public UAbilityTask
// {
//     FAbilityTask_DashToLocationOnTargetLocationReached OnTargetLocationReached; // 0x0080 (size: 0x10)
//     void DashCompleteDelegate();
//     FVector StartLocation;  // 0x0090 (size: 0x18)
//     FVector TargetLocation; // 0x00A8 (size: 0x18)
//     float Speed;            // 0x00C0 (size: 0x4)

//     class UAbilityTask_DashToLocation *DashToLocation(class UGameplayAbility *OwningAbility, FName TaskInstanceName, FVector Location, float Speed, bool bNavFindPath);
// }; // Size: 0xD0

// class UAbilityTask_PlayMontageAndWaitForEvent : public UAbilityTask
// {
//     FAbilityTask_PlayMontageAndWaitForEventOnCompleted OnCompleted; // 0x0080 (size: 0x10)
//     void PlayMontageAndWaitForEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
//     FAbilityTask_PlayMontageAndWaitForEventOnBlendOut OnBlendOut; // 0x0090 (size: 0x10)
//     void PlayMontageAndWaitForEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
//     FAbilityTask_PlayMontageAndWaitForEventOnInterrupted OnInterrupted; // 0x00A0 (size: 0x10)
//     void PlayMontageAndWaitForEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
//     FAbilityTask_PlayMontageAndWaitForEventOnCancelled OnCancelled; // 0x00B0 (size: 0x10)
//     void PlayMontageAndWaitForEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
//     FAbilityTask_PlayMontageAndWaitForEventEventReceived EventReceived; // 0x00C0 (size: 0x10)
//     void PlayMontageAndWaitForEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
//     class UAnimMontage *MontageToPlay;    // 0x00D0 (size: 0x8)
//     FGameplayTagContainer EventTags;      // 0x00D8 (size: 0x20)
//     float Rate;                           // 0x00F8 (size: 0x4)
//     FName StartSection;                   // 0x00FC (size: 0x8)
//     float AnimRootMotionTranslationScale; // 0x0104 (size: 0x4)
//     bool bStopWhenAbilityEnds;            // 0x0108 (size: 0x1)

//     class UAbilityTask_PlayMontageAndWaitForEvent *PlayMontageAndWaitForEvent(class UGameplayAbility *OwningAbility, FName TaskInstanceName, class UAnimMontage *MontageToPlay, FGameplayTagContainer EventTags, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
// }; // Size: 0x140

// class UActorPlaceCpt : public UFNGameCpt
// {
//     class UCurveFloat *ScaleCurve;         // 0x00A8 (size: 0x8)
//     class UCurveFloat *ScaleCurveNoChange; // 0x00B0 (size: 0x8)
//     uint8 bFitLandNormal;                  // 0x00B8 (size: 0x1)

//     bool UpdatePositionWithLocation(FVector DstLocation, bool bSweep, FHitResult &OutSweepHitResult, ETeleportType Teleport);
//     void UpdatePositionAndScale(float Scale);
//     void UpdatePosition();
//     void SetBoundDataDirty();
//     bool FindSuitablePositionOnFloor(class UObject *WorldObject, const FVector &Location, FName ObjectType, float HalfHeight, float Radius, FVector &LandPostion);
// }; // Size: 0x100

// class UAppearanceAdditionConfig : public UDataAsset
// {
//     TMap<float, float> AgingRateToAlpha; // 0x0030 (size: 0x50)

// }; // Size: 0x90

// class UAreaLandTypeDescBase : public UObject
// {
//     EMLandscapeAreaType LandscapeAreaType; // 0x0028 (size: 0x1)
//     class UStaticMesh *LandMesh;           // 0x0030 (size: 0x8)
//     FVector MeshScale;                     // 0x0038 (size: 0x18)
//     FVector MeshOffset;                    // 0x0050 (size: 0x18)
//     FVector MeshRotation;                  // 0x0068 (size: 0x18)
//     FName LandTypeName;                    // 0x0080 (size: 0x8)

// }; // Size: 0x88

// class UArenaCompetitionInteraction : public UInteractionBase
// {
//     TArray<FSingleArenaCompetition> ArenaCompetitionArr; // 0x0048 (size: 0x10)
//     class UDataTable *ArenaCompetitionTable;             // 0x0058 (size: 0x8)

//     void SetSpecialPlayerPos(FName PlaceName, TMap<int32, int32> PlayerGamePos);
//     void SetRaceScheduleWiner(FName PlaceName, FGamerType GamerType);
//     void RemoveGameList(FName PlaceName);
//     void RemoveArena(FName PlaceName);
//     void ReFreshRaceSchedule(FName PlaceName);
//     TArray<int32> GetArenaGamerByRank(FName PlaceName, int32 Rank);
//     FArenaCompetitionConfig GetArenaCompetitionConfigRef(FName PlaceName);
//     FSingleArenaCompetition GetArenaCompetitionByName(FName PlaceName);
//     void AddTurn(FName PlaceName);
//     void AddGameTurn(FName PlaceName);
//     void AddArenaCompetition(TArray<int32> NpcList, FName PlaceName, EArenaCompetitionType ArenaCompetitionType, int32 StartTurn);
// }; // Size: 0x60

// class UAuctionConfig : public UDataAsset
// {
//     TMap<class FName, class FAuctionConfigData> AuctionConfigMap; // 0x0030 (size: 0x50)
//     TArray<FAuctionBubbleTextData> BidTextList;                   // 0x0080 (size: 0x10)
//     TArray<FAuctionBubbleTextData> StrategyTextList;              // 0x0090 (size: 0x10)
//     TArray<FAuctionBubbleTextData> NpcAffectedTextList;           // 0x00A0 (size: 0x10)
//     TArray<FAuctionBubbleTextData> NotifyTextList;                // 0x00B0 (size: 0x10)

//     FString GetRandomStrategyText(const class UObject *WorldContextObject, int32 Type);
//     FString GetRandomNpcAffectedText(const class UObject *WorldContextObject, int32 Type);
//     FString GetRandomBidText(const class UObject *WorldContextObject, int32 Type);
//     FString GetNotifyText(const class UObject *WorldContextObject, int32 Type);
// }; // Size: 0xC0

// class UBDRecord : public ULifeRecordEntityBase
// {
//     int32 BuildID; // 0x0030 (size: 0x4)

//     void AddRecordByBD(class UObject *WorldObject, int32 UesrID, int32 BDID);
// }; // Size: 0x38

// class UBaseButton : public UContentWidget
// {
//     class USlateWidgetStyleAsset *Style;               // 0x0168 (size: 0x8)
//     FButtonStyle WidgetStyle;                          // 0x0170 (size: 0x3F0)
//     FLinearColor ColorAndOpacity;                      // 0x0560 (size: 0x10)
//     FLinearColor BackgroundColor;                      // 0x0570 (size: 0x10)
//     TEnumAsByte<EButtonClickMethod::Type> ClickMethod; // 0x0580 (size: 0x1)
//     TEnumAsByte<EButtonTouchMethod::Type> TouchMethod; // 0x0581 (size: 0x1)
//     TEnumAsByte<EButtonPressMethod::Type> PressMethod; // 0x0582 (size: 0x1)
//     bool IsFocusable;                                  // 0x0583 (size: 0x1)
//     bool bIgnoreGameInputBan;                          // 0x0584 (size: 0x1)
//     FBaseButtonOnClicked OnClicked;                    // 0x0588 (size: 0x10)
//     void OnBaseButtonClickedEvent();
//     FBaseButtonOnPressed OnPressed; // 0x0598 (size: 0x10)
//     void OnBaseButtonPressedEvent();
//     FBaseButtonOnReleased OnReleased; // 0x05A8 (size: 0x10)
//     void OnBaseButtonReleasedEvent();
//     FBaseButtonOnHovered OnHovered; // 0x05B8 (size: 0x10)
//     void OnBaseButtonHoverEvent();
//     FBaseButtonOnUnhovered OnUnhovered; // 0x05C8 (size: 0x10)
//     void OnBaseButtonHoverEvent();

//     void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
//     void SetStyleByTexture(EButtonState EButtonState, FString pathTexture, FVector2D Size);
//     void SetStyle(const FButtonStyle &InStyle);
//     void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
//     void SetColorAndOpacity(FLinearColor InColorAndOpacity);
//     void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
//     void SetBackgroundColor(FLinearColor InBackgroundColor);
//     bool IsPressed();
//     void ExcuteOnClickEvent();
// }; // Size: 0x5F0

// class UBaseDamageGamePlayEffect : public UGameplayEffect
// {
//     uint8 bPreExeTraitHandle;  // 0x0860 (size: 0x1)
//     uint8 bPostExeTraitHandle; // 0x0860 (size: 0x1)
//     uint8 bCritExeTraitHandle; // 0x0860 (size: 0x1)
//     uint8 bCalcAtkAndDef;      // 0x0860 (size: 0x1)
//     uint8 bFixDamageValue;     // 0x0860 (size: 0x1)
//     uint8 bDamageCrit;         // 0x0860 (size: 0x1)
//     int32 FixDamageValue;      // 0x0864 (size: 0x4)

// }; // Size: 0x868

// class UBaseWnd : public UUserWidget
// {
//     float m_fTickInterval;                    // 0x0278 (size: 0x4)
//     FSoftClassPath TipResPath;                // 0x0280 (size: 0x20)
//     bool CanFlushAsChild;                     // 0x02F0 (size: 0x1)
//     bool InToolTip;                           // 0x02F1 (size: 0x1)
//     bool EscCanClose;                         // 0x02F2 (size: 0x1)
//     bool bCanDrag;                            // 0x02F3 (size: 0x1)
//     FName DragResponseAreaName;               // 0x02F4 (size: 0x8)
//     bool bSavePosition;                       // 0x02FC (size: 0x1)
//     bool bDragSelf;                           // 0x02FD (size: 0x1)
//     bool NeedAddToScreen;                     // 0x0310 (size: 0x1)
//     bool CaptureMouseWheelEvent;              // 0x0311 (size: 0x1)
//     int32 WidgetPriority;                     // 0x0314 (size: 0x4)
//     bool bTopMost;                            // 0x0318 (size: 0x1)
//     bool bKeepTopLayer;                       // 0x0319 (size: 0x1)
//     bool BanCameraMove;                       // 0x031A (size: 0x1)
//     FKeyResponseStrategy KeyResponseStrategy; // 0x0348 (size: 0x78)
//     class UBaseWnd *m_pWndParent;             // 0x03D8 (size: 0x8)
//     FName OpenWndSoundName;                   // 0x0404 (size: 0x8)
//     FName CloseWndSoundName;                  // 0x040C (size: 0x8)
//     bool bStopGameBGM;                        // 0x0414 (size: 0x1)

//     void UnregisterBinding(const FName &ActionName);
//     void SetDragVisualName(FName Name);
//     void SetDragItem(class UObject *Item);
//     void RegisterCommonUIActionBinding(const FName &ActionName, ETriggerEvent EventType, FRegisterCommonUIActionBindingCallback Callback);
//     void OnWigetRightMouseButtonUp(const FGeometry &InGeometry, const FPointerEvent &InMouseEvent);
//     void OnWigetRightMouseButtonDown(const FGeometry &InGeometry, const FPointerEvent &InMouseEvent);
//     void OnWigetLeftMouseButtonUp(const FGeometry &InGeometry, const FPointerEvent &InMouseEvent);
//     void OnWigetLeftMouseButtonDown(const FGeometry &InGeometry, const FPointerEvent &InMouseEvent);
//     void OnTick(float fDeltaTime);
//     void OnStartResetZOrder();
//     void OnShow();
//     void OnRebuildWidget();
//     bool OnProcessMsg(int32 nType, const FProcessFlushData &stData);
//     bool OnNotifyParentMessage(int32 nType, const FProcessFlushData &stData);
//     void OnInit();
//     void OnHide(int32 Reason);
//     void OnDropItem(class UDragDropOperation *OutOperation);
//     void OnClose();
//     void OnCameraReset();
//     void OnCameraMove();
//     bool NotifyParentMessage(int32 nType, const FProcessFlushData &stData);
//     void MySetVisibility(ESlateVisibility InVisibility);
//     void MainWndListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FMainWndListenForInputActionCallback Callback);
//     FName GetWndName();
//     class UWidget *GetWidget(FName Name, bool bAssetIfNoFind);
//     class UBaseWnd *GetParentWnd();
//     class UBaseWnd *GetMainWnd();
//     void FlushByTArray(TArray<int32> &iArray);
//     void FlushByObject(class UObject *Object);
//     void Flush(int32 nType);
//     class UBaseWnd *CreateChildWnd(FName idDat, class UPanelWidget *pPanelWidget, FString WndName);
//     class UWidget *CreateChildWidget(class UPanelWidget *pPanelWidget, UClass *pClassType, FName Name);
//     void Close();
// }; // Size: 0x420

// class UBattleAIConditionCheckBase : public UObject
// {
// }; // Size: 0x28

// class UBattleAIConditionCheck_MonitorSelfHealthPercent : public UBattleAIConditionCheckBase
// {
// }; // Size: 0x28

// class UBattleAICpt : public UFNGameCpt
// {
//     class UBehaviorTree *BehaviorTree;                                        // 0x00A8 (size: 0x8)
//     FName SelfHealthPercent;                                                  // 0x00B0 (size: 0x8)
//     FName BlackBoardName_TargetActor;                                         // 0x00B8 (size: 0x8)
//     TArray<FGameplayAttribute> ToUpdateAttribute;                             // 0x00C0 (size: 0x10)
//     TWeakObjectPtr<class AActor> CurTarget;                                   // 0x0100 (size: 0x8)
//     class UFNGameRandomSystem *RandomSystem;                                  // 0x01E0 (size: 0x8)
//     TWeakObjectPtr<class ACharacter> Character;                               // 0x01E8 (size: 0x8)
//     class AFNAIControllerBase *AIController;                                  // 0x01F0 (size: 0x8)
//     int32 AICastSkillCount;                                                   // 0x024C (size: 0x4)
//     TWeakObjectPtr<class UBattleSkillSummonActorCpt> SummonActorCpt;          // 0x0254 (size: 0x8)
//     TMap<class FName, class FGameplayAbilitySpecHandle> AbilitySpecHandleMap; // 0x0260 (size: 0x50)
//     TWeakObjectPtr<class UBattleAbilitySystemCpt> BattleASC;                  // 0x02B0 (size: 0x8)
//     EAIState CurAIState;                                                      // 0x02B8 (size: 0x1)

//     void UpdatedPerception(class AActor *Actor, FAIStimulus AIStimulus);
//     void SummonForceMove(const FVector &Location);
//     void ScriptUpdatePerception(class AActor *Actor);
//     void ScriptOnPossess();
//     void OnMontageEnd(class UAnimMontage *AnimMontage, bool bInterupted);
//     void OnDamage(float DeltaValue, const class USkillGameplayAbility *DamageAbility, const class UGameplayEffect *GeGameplayEffect, const class AActor *InstigatorCharacter, const class AActor *DamageCauser, bool bCrit);
//     void OnAIMoveEnd(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
//     void InteruptAIBehavior();
//     bool Internal_ConditionCheck(const FAISpecActConfig &Config, float CheckValue);
//     void InitSetBlackboardValue();
//     FName GetSkillName(const FSoftClassPath &SoftClassPath);
//     void EndChangeStageAbility();
//     bool AISpecActExecute(const FAISpecActConfig &Config);
//     bool AISpecActCondtionCheck(const FAISpecActConfig &Config);
//     bool AIMoveToLocation(const FVector &Location, float AcceptanceRadius);
//     bool AIMoveToActor(const class AActor *Actor, float AcceptanceRadius);
//     void AIGiveAbility(const FSoftClassPath &SkillObjectPath, class UBattleAbilitySystemCpt *BattleAbilitySystemCpt, class UBattleRPGAttributeCpt *BattleRPGAttributeCpt);
//     void AIClearAllAbilities(class UBattleAbilitySystemCpt *BattleAbilitySystemCpt);
//     void AIChangeStage(float HealthPercent);
//     bool AICastSkill(const FSoftClassPath &SkillObjectPath, bool bCount);
// }; // Size: 0x2C8

// class UBattleAIExternConditionCheckSystem : public UObject
// {
// }; // Size: 0x28

// class UBattleAISystem : public UObject
// {
// }; // Size: 0x28

// class UBattleAbilityAnimNotify : public UAnimNotify
// {
// }; // Size: 0x38

// class UBattleAbilityAnimNotifyState : public UAnimNotifyState
// {
// }; // Size: 0x30

// class UBattleAbilityBaseCpt : public UFNGameCpt
// {
// }; // Size: 0xB0

// class UBattleAbilitySystemCpt : public UAbilitySystemComponent
// {
//     FBattleAbilitySystemCptDamageHitDelegate DamageHitDelegate; // 0x1418 (size: 0x10)
//     void OnDamageHit(float DeltaValue, const class USkillGameplayAbility *DamageAbility, const class UGameplayEffect *GameEffect, const class AActor *InstigatorCharacter, const class AActor *DamageCauser, bool bCrit);
//     FBattleAbilitySystemCptImmunityBlockDelegate ImmunityBlockDelegate; // 0x1428 (size: 0x10)
//     void OnImmunity(const class UGameplayEffect *BlockedGE);
//     TMap<class UClass *, class FGameplayAbilitySpecInfo> AbilityHandleBySkillClass; // 0x1438 (size: 0x50)
//     FName CurActiveSKillName;                                                       // 0x14D8 (size: 0x8)
//     class UBattleInternalAttribute *BattleInternalAttribute;                        // 0x14E8 (size: 0x8)
//     class UBattleAttributeBase *BattleAttributeBase;                                // 0x14F0 (size: 0x8)
//     TMap<class FGameplayTag, class FCustomTagValueContent> AbilityCustomTagValue;   // 0x14F8 (size: 0x50)
//     class AActor *HaloActor;                                                        // 0x15A8 (size: 0x8)

//     void UnRegisterTickEvent(class UBattleGameplayAbility *SkillGameplayAbility);
//     void SetCustomTagValue(const FGameplayTag &GameplayTag, const class AActor *RelateActor, float Value);
//     void ResetSkillCDToSpecTime(const FGameplayTagContainer &SkillCDTag, float NewTime);
//     void RegisterTickEvent(class UBattleGameplayAbility *SkillGameplayAbility, float TickInternal);
//     bool IsAlive();
//     bool IsAbilitySystemEnable();
//     bool IsAbilityExistByName(FName AbilityName);
//     bool IsAbilityExist(TSubclassOf<class UGameplayAbility> AbilityClass);
//     void ImmExecuteBuffDamageByTag(const FGameplayTagContainer &GameplayTagContainer);
//     int32 GetTagCountEx(const FGameplayTag &Tag);
//     int32 GetMaxTagCount(const FGameplayTag &Tag);
//     bool GetCustomTagValue(const FGameplayTag &GameplayTag, const class AActor *RelateActor, float &ValueOut);
//     bool GetCooldownRemainingForTag(const FGameplayTagContainer &CooldownTags, float &TimeRemaining, float &CooldownDuration);
//     bool GetCooldownRemainingForDontRefreshTag(const FGameplayTagContainer &CooldownTags, float &TimeRemaining, float &CooldownDuration);
//     class UCommonUtilityAbility *GetCommonUtilityAbility();
//     class UCommonCastGameAbility *GetCommonCastAbility();
//     void GetActiveAbilitiesWithTags(const FGameplayTagContainer &AbilityTags, TArray<class USkillGameplayAbility *> &ActiveAbilities);
//     int32 GetAbilityLevelByTag(FGameplayTag AbilityTag);
//     int32 GetAbilityLevelBySKillClass(TSubclassOf<class USkillGameplayAbility> AbilityClass);
//     float GetAbilityCoolDownTimeByTag(FGameplayTag AbilityTag);
//     bool GetAbilityCDAndCostAndRateByName(const FName &SkillName, int32 SkillGroupID, float &CoolDown, float &Cost, float &Rate);
//     void EndCurAbility(bool bForce);
//     bool CheckAbilityCostByAbilityName(const FName &AbilityName);
//     bool CheckAbilityCDByAbilityName(const FName &AbilityName);
//     void BP_GetAllActiveGameplayEffectSpecs(TArray<FGameplayEffectSpec> &OutSpecCopies);
//     void ActiveSKillIDWithMultiCount(FName SkillKeyID, float SpeedCof, int32 SkillStage);
//     bool ActiveSKillID(FName SkillKeyID, int32 SkillStage, bool bAddtoCache);
//     bool ActivateAbilitiesWithTags(const FGameplayTagContainer &AbilityTags, int32 StageIndex);
// }; // Size: 0x15B8

// class UBattleAbilityUtility : public UDeveloperSettings
// {
//     TSubclassOf<class UGameplayEffect> ForceToDeathGE;      // 0x0038 (size: 0x8)
//     FGameplayTag AbilitCancelCommitCheck;                   // 0x0040 (size: 0x8)
//     FGameplayTag AbilityNoCheckTag;                         // 0x0048 (size: 0x8)
//     FGameplayTag CatapultDamageFixTag;                      // 0x0050 (size: 0x8)
//     FGameplayTag CatapultCountTag;                          // 0x0058 (size: 0x8)
//     FGameplayTag AbilityCoastTag;                           // 0x0060 (size: 0x8)
//     FGameplayTagContainer AbilitySupportMoveCast;           // 0x0068 (size: 0x20)
//     FGameplayTagContainer NotCatapultFlag;                  // 0x0088 (size: 0x20)
//     FGameplayTag ChannelingSkillTag;                        // 0x00A8 (size: 0x8)
//     FGameplayTag CalcEnergyDamageTag;                       // 0x00B0 (size: 0x8)
//     FGameplayTag NoCosumeEnergyTag;                         // 0x00B8 (size: 0x8)
//     FGameplayTag NoEnergytagDamageTag;                      // 0x00C0 (size: 0x8)
//     FGameplayTag EnergyDamageTag;                           // 0x00C8 (size: 0x8)
//     FGameplayTag EnergyDamagePostExcuteTag;                 // 0x00D0 (size: 0x8)
//     FGameplayTag EnergyDamageDeathTag;                      // 0x00D8 (size: 0x8)
//     FGameplayTag UnusualProbTransTag;                       // 0x00E0 (size: 0x8)
//     FGameplayTag ChargeSkillTag;                            // 0x00E8 (size: 0x8)
//     FGameplayTag ImmediatelySkillTag;                       // 0x00F0 (size: 0x8)
//     FGameplayTag TraitFuntionGroupTag;                      // 0x00F8 (size: 0x8)
//     FGameplayTag TraitCombindGroupTag;                      // 0x0100 (size: 0x8)
//     FGameplayTag FindTargetAbilityTag;                      // 0x0108 (size: 0x8)
//     FGameplayTag IgnoreSummonMaxCountTag;                   // 0x0110 (size: 0x8)
//     FGameplayTag SuckBloodToShieldTag;                      // 0x0118 (size: 0x8)
//     FGameplayTag AutoRecoverToShieldTag;                    // 0x0120 (size: 0x8)
//     FGameplayTag SummonShareDamageFlag;                     // 0x0128 (size: 0x8)
//     FGameplayTag SummonBusyTag;                             // 0x0130 (size: 0x8)
//     FGameplayTag ForceToDeathTag;                           // 0x0138 (size: 0x8)
//     FGameplayTag NotLethalTag;                              // 0x0140 (size: 0x8)
//     FGameplayTag AINotTargetableTag;                        // 0x0148 (size: 0x8)
//     FGameplayTag AINotTargetableTemporaryTag;               // 0x0150 (size: 0x8)
//     FGameplayTag GameplayTagLingJing;                       // 0x0158 (size: 0x8)
//     FGameplayTag UnusualTag;                                // 0x0160 (size: 0x8)
//     FGameplayTag TraitFunctionBuffOverFlowCheck;            // 0x0168 (size: 0x8)
//     FGameplayTag AutoContinueCastTag;                       // 0x0170 (size: 0x8)
//     FGameplayTag UseSyncCastEventTag;                       // 0x0178 (size: 0x8)
//     FGameplayTag SkillTagAttack;                            // 0x0180 (size: 0x8)
//     FGameplayTag SkillTagNormal;                            // 0x0188 (size: 0x8)
//     FGameplayTag SkillTagTravel;                            // 0x0190 (size: 0x8)
//     FGameplayTag SuckBloodToMainBodyTag;                    // 0x0198 (size: 0x8)
//     FGameplayTag BuffCritBooleanFunctionTag;                // 0x01A0 (size: 0x8)
//     FGameplayTag BuffTranslateFuntionTag;                   // 0x01A8 (size: 0x8)
//     FGameplayTag SkillCommonCastTag;                        // 0x01B0 (size: 0x8)
//     FGameplayTag SkillKeyTag;                               // 0x01B8 (size: 0x8)
//     FGameplayTag CDRToATKSpeedTag;                          // 0x01C0 (size: 0x8)
//     FGameplayTag AbilitySystemDisableStateTag;              // 0x01C8 (size: 0x8)
//     FGameplayTag IgnorAbilitySystemDisableStateTag;         // 0x01D0 (size: 0x8)
//     FGameplayTag AbilityGamePlayEffectDisableStateTag;      // 0x01D8 (size: 0x8)
//     FGameplayTag IgnorAbilityGamePlayEffectDisableStateTag; // 0x01E0 (size: 0x8)
//     FGameplayTag DeathDelayTag;                             // 0x01E8 (size: 0x8)
//     FGameplayTag SummonTag;                                 // 0x01F0 (size: 0x8)
//     FGameplayTag NotGameplayEffectTips;                     // 0x01F8 (size: 0x8)
//     FGameplayTag MonsterType_Normal;                        // 0x0200 (size: 0x8)
//     FGameplayTag MonsterType_JingYing1;                     // 0x0208 (size: 0x8)
//     FGameplayTag MonsterType_JingYing2;                     // 0x0210 (size: 0x8)
//     FGameplayTag MonsterType_JingYing3;                     // 0x0218 (size: 0x8)
//     FGameplayTag MonsterType_Boss;                          // 0x0220 (size: 0x8)
//     FGameplayTag MonsterType_Npc;                           // 0x0228 (size: 0x8)
//     FGameplayTag DeathStateTag;                             // 0x0230 (size: 0x8)

//     FGameplayTagContainer RequstAbilityTagContainer(FName TagName);
//     FGameplayTag RequstAbilityTag(FName TagName);
//     bool IsTraitFuntionTag(const FGameplayTag &GameplayTag);
//     bool IsTraitCombindTag(const FGameplayTag &GameplayTag);
//     bool IsSupportMoveCast(FGameplayTagContainer &Tags);
//     FGameplayTag GetUnusualProbTransTag();
//     FGameplayTag GetTraitFunctionBuffOverFlowCheckTag();
//     FGameplayTag GetSyncEventTag();
//     FGameplayTag GetSummonShareDamageFlag();
//     FGameplayTag GetSummonBusyTag();
//     FGameplayTag GetSuckBooldToMainBodyTag();
//     FGameplayTag GetSuckBloodToShieldTag();
//     FGameplayTag GetSkillTagTravel();
//     FGameplayTag GetSkillTagNormal();
//     FGameplayTag GetSkillTagAtk();
//     FGameplayTag GetSkillCommonCastTag();
//     FGameplayTag GetNotLethalTag();
//     FGameplayTagContainer GetNotCatapultTag();
//     FGameplayTag GetNoEnergytagDamageTag();
//     FGameplayTag GetNoCosumeEnergyTag();
//     FGameplayTag GetImmediatelyTag();
//     FGameplayTag GetIgnoreSummonMaxCountTag();
//     FName GetGametagName(const FGameplayTag &TagName);
//     FGameplayTag GetGameplayTagLingJing();
//     FString GetGameplayAttributePathName(const FGameplayAttribute &GameplayAttribute);
//     FGameplayTag GetForceDeathTag();
//     FGameplayTag GetFindTargetAbilityTag();
//     FGameplayTag GetEnergyDamageTag();
//     FGameplayTag GetEnergyDamagePostExcuteTag();
//     FGameplayTag GetEnergyDamageDeathTag();
//     FGameplayTag GetChargeTag();
//     FGameplayTag GetChannelingTag();
//     FGameplayTag GetCDRToATKSpeedTag();
//     FGameplayTag GetCatapultDamageFixTag();
//     FGameplayTag GetCatapultCountTag();
//     FGameplayTag GetCalcEnergyDamageTag();
//     FGameplayTag GetBuffTranslateFuntionTag();
//     FGameplayTag GetBuffCritBooleanFunctionTag();
//     FGameplayTag GetAutoRecoverToShieldTag();
//     FGameplayTag GetAutoContinueCastTag();
//     bool GetAttributeDataByPropertyPath(FName PropertyPathName, FGameplayAttribute &GameplayAttributeOut);
//     FGameplayTag GetAINotTargetableTemporaryTag();
//     FGameplayTag GetAINotTargetableTag();
//     FGameplayTag GetAbilityNoCheckTags();
//     FGameplayTag GetAbilitCoastTag();
//     FGameplayTag GetAbilitCancelCommitCheck();
//     void ChildActorResetSpecTarget(const class AActor *ChildActor, const FGameplayTag &EffectGameplayTag);
//     int32 ChildActorApplyExternalEffectContainerSpec(const class AActor *ChildActor, const FGameplayTag &EffectGameplayTag);
//     void ChildActorAddTargetToSpec(const class AActor *ChildActor, const FGameplayTag &EffectGameplayTag, const TArray<FHitResult> &HitResults, const TArray<class AActor *> &TargetActors);
// }; // Size: 0x238

// class UBattleAttributeBase : public UAttributeSet
// {
//     FGameplayAttributeData Health;                            // 0x0030 (size: 0x10)
//     FGameplayAttributeData MaxHealth;                         // 0x0040 (size: 0x10)
//     FGameplayAttributeData MaxHealthBase;                     // 0x0050 (size: 0x10)
//     FGameplayAttributeData MaxHealthAdd;                      // 0x0060 (size: 0x10)
//     FGameplayAttributeData MaxHealthMul;                      // 0x0070 (size: 0x10)
//     FGameplayAttributeData MinimumHealthRatio;                // 0x0080 (size: 0x10)
//     FGameplayAttributeData Mana;                              // 0x0090 (size: 0x10)
//     FGameplayAttributeData MaxMana;                           // 0x00A0 (size: 0x10)
//     FGameplayAttributeData MaxManaBase;                       // 0x00B0 (size: 0x10)
//     FGameplayAttributeData MaxManaAdd;                        // 0x00C0 (size: 0x10)
//     FGameplayAttributeData MaxManaMul;                        // 0x00D0 (size: 0x10)
//     FGameplayAttributeData AttackSpeedAdd;                    // 0x00E0 (size: 0x10)
//     FGameplayAttributeData AttackSpeedMul;                    // 0x00F0 (size: 0x10)
//     FGameplayAttributeData AttackGlobalSpeedAdd;              // 0x0100 (size: 0x10)
//     FGameplayAttributeData AttackGlobalSpeedMul;              // 0x0110 (size: 0x10)
//     FGameplayAttributeData AttackPower;                       // 0x0120 (size: 0x10)
//     FGameplayAttributeData AttackPowerBase;                   // 0x0130 (size: 0x10)
//     FGameplayAttributeData AttackPowerAdd;                    // 0x0140 (size: 0x10)
//     FGameplayAttributeData AttackPowerMul;                    // 0x0150 (size: 0x10)
//     FGameplayAttributeData DefensePower;                      // 0x0160 (size: 0x10)
//     FGameplayAttributeData DefensePowerBase;                  // 0x0170 (size: 0x10)
//     FGameplayAttributeData DefensePowerAdd;                   // 0x0180 (size: 0x10)
//     FGameplayAttributeData DefensePowerMul;                   // 0x0190 (size: 0x10)
//     FGameplayAttributeData FinalCritChance;                   // 0x01A0 (size: 0x10)
//     FGameplayAttributeData CritChance;                        // 0x01B0 (size: 0x10)
//     FGameplayAttributeData CritChanceAdd;                     // 0x01C0 (size: 0x10)
//     FGameplayAttributeData CritChanceMul;                     // 0x01D0 (size: 0x10)
//     FGameplayAttributeData FinalCritDamageRate;               // 0x01E0 (size: 0x10)
//     FGameplayAttributeData CritDamageRate;                    // 0x01F0 (size: 0x10)
//     FGameplayAttributeData CritDamageRateAdd;                 // 0x0200 (size: 0x10)
//     FGameplayAttributeData CritDamageRateMul;                 // 0x0210 (size: 0x10)
//     FGameplayAttributeData CritDamage;                        // 0x0220 (size: 0x10)
//     FGameplayAttributeData MoveSpeed;                         // 0x0230 (size: 0x10)
//     FGameplayAttributeData MoveSpeedAdd;                      // 0x0240 (size: 0x10)
//     FGameplayAttributeData MoveSpeedMul;                      // 0x0250 (size: 0x10)
//     FGameplayAttributeData FinalMoveSpeed;                    // 0x0260 (size: 0x10)
//     FGameplayAttributeData Damage;                            // 0x0270 (size: 0x10)
//     FGameplayAttributeData MinimumDamage;                     // 0x0280 (size: 0x10)
//     FGameplayAttributeData MaximumDamage;                     // 0x0290 (size: 0x10)
//     FGameplayAttributeData BasicDamage;                       // 0x02A0 (size: 0x10)
//     FGameplayAttributeData DamageJinMul;                      // 0x02B0 (size: 0x10)
//     FGameplayAttributeData DamageShuiMul;                     // 0x02C0 (size: 0x10)
//     FGameplayAttributeData DamageMuMul;                       // 0x02D0 (size: 0x10)
//     FGameplayAttributeData DamageHuoMul;                      // 0x02E0 (size: 0x10)
//     FGameplayAttributeData DamageTuMul;                       // 0x02F0 (size: 0x10)
//     FGameplayAttributeData DamageJinDec;                      // 0x0300 (size: 0x10)
//     FGameplayAttributeData DamageShuiDec;                     // 0x0310 (size: 0x10)
//     FGameplayAttributeData DamageMuDec;                       // 0x0320 (size: 0x10)
//     FGameplayAttributeData DamageHuoDec;                      // 0x0330 (size: 0x10)
//     FGameplayAttributeData DamageTuDec;                       // 0x0340 (size: 0x10)
//     FGameplayAttributeData DamageTagAdd;                      // 0x0350 (size: 0x10)
//     FGameplayAttributeData DamageTagMul;                      // 0x0360 (size: 0x10)
//     FGameplayAttributeData DamageTagDec;                      // 0x0370 (size: 0x10)
//     FGameplayAttributeData DamageFinalMul;                    // 0x0380 (size: 0x10)
//     FGameplayAttributeData DamageFinalDec;                    // 0x0390 (size: 0x10)
//     FGameplayAttributeData DamageToHeal;                      // 0x03A0 (size: 0x10)
//     FGameplayAttributeData HealthRecoverPerSecond;            // 0x03B0 (size: 0x10)
//     FGameplayAttributeData HealthRecoverPerSecondAdd;         // 0x03C0 (size: 0x10)
//     FGameplayAttributeData HealthRecoverPerSecondMul;         // 0x03D0 (size: 0x10)
//     FGameplayAttributeData HealthRecoverRatio;                // 0x03E0 (size: 0x10)
//     FGameplayAttributeData ManaRecoverPerSecond;              // 0x03F0 (size: 0x10)
//     FGameplayAttributeData ManaRecoverPerSecondAdd;           // 0x0400 (size: 0x10)
//     FGameplayAttributeData ManaRecoverPerSecondMul;           // 0x0410 (size: 0x10)
//     FGameplayAttributeData ManaRecoverRatio;                  // 0x0420 (size: 0x10)
//     FGameplayAttributeData HealthRecoverToManaRecover;        // 0x0430 (size: 0x10)
//     FGameplayAttributeData HealthRecRatioToManaRecRatio;      // 0x0440 (size: 0x10)
//     FGameplayAttributeData Shield;                            // 0x0450 (size: 0x10)
//     FGameplayAttributeData RealShield;                        // 0x0460 (size: 0x10)
//     FGameplayAttributeData SuckBlood;                         // 0x0470 (size: 0x10)
//     FGameplayAttributeData DamagePVP_Decrease;                // 0x0480 (size: 0x10)
//     FGameplayAttributeData MagicShieldRatio;                  // 0x0490 (size: 0x10)
//     FGameplayAttributeData HealthManaRatio;                   // 0x04A0 (size: 0x10)
//     FGameplayAttributeData SpecEffectProbability;             // 0x04B0 (size: 0x10)
//     FGameplayAttributeData SpecEffectProbabilityMul;          // 0x04C0 (size: 0x10)
//     FGameplayAttributeData SpecEffectProbabilityDec;          // 0x04D0 (size: 0x10)
//     FGameplayAttributeData SpecEffectProbabilityDecMul;       // 0x04E0 (size: 0x10)
//     FGameplayAttributeData ChargeTime;                        // 0x04F0 (size: 0x10)
//     FGameplayAttributeData Cooldown_Mul;                      // 0x0500 (size: 0x10)
//     FGameplayAttributeData AnimPlayRate;                      // 0x0510 (size: 0x10)
//     FGameplayAttributeData MaxSummonCountByTag;               // 0x0520 (size: 0x10)
//     FGameplayAttributeData DamageFinalAdd;                    // 0x0530 (size: 0x10)
//     FGameplayAttributeData DynamicEvolveRequireStackCountFix; // 0x0540 (size: 0x10)
//     FGameplayAttributeData DynamicBuffExternCoff;             // 0x0550 (size: 0x10)
//     FGameplayAttributeData DynamicBuffStackLimit;             // 0x0560 (size: 0x10)
//     FGameplayAttributeData DynamicBuffPeroidCoff;             // 0x0570 (size: 0x10)
//     FGameplayAttributeData DynamicBuffDurationCoff;           // 0x0580 (size: 0x10)
//     FGameplayAttributeData CurCatapultCount;                  // 0x0590 (size: 0x10)
//     FGameplayAttributeData LingQiReserve;                     // 0x05A0 (size: 0x10)
//     FGameplayAttributeData ProgramInternalCustomFlagValueA;   // 0x05B0 (size: 0x10)
//     FGameplayAttributeData ProgramInternalCustomFlagValueB;   // 0x05C0 (size: 0x10)
//     FGameplayAttributeData ProgramInternalCustomFlagValueC;   // 0x05D0 (size: 0x10)

// }; // Size: 0x5E8

// class UBattleBattleProjectileCptCpt : public UFNGameCpt
// {
//     uint8 bProjectileMove;                                                // 0x00A8 (size: 0x1)
//     uint8 bCollisonToSelf;                                                // 0x00A8 (size: 0x1)
//     uint8 bDamageAlways;                                                  // 0x00A8 (size: 0x1)
//     uint8 bShareHitActor;                                                 // 0x00A8 (size: 0x1)
//     uint8 bIngoreSameTarget;                                              // 0x00A8 (size: 0x1)
//     float DeferDestroyTime;                                               // 0x00AC (size: 0x4)
//     TEnumAsByte<EM_Projectile_PostionType> PositionType;                  // 0x00B0 (size: 0x1)
//     TArray<int32> SplitAngleInteral;                                      // 0x00B8 (size: 0x10)
//     TArray<FProjectileNiagaraParam> MainEffectContainers;                 // 0x00C8 (size: 0x10)
//     TArray<FProjectileNiagaraParam> CohesionEffectContainers;             // 0x00D8 (size: 0x10)
//     TArray<FProjectileNiagaraParam> AttachEffectContainers;               // 0x00E8 (size: 0x10)
//     TArray<FProjectileNiagaraParam> HitEffectContainers;                  // 0x00F8 (size: 0x10)
//     class UAbilityCaptureCpt *AbilityCaptureCpt;                          // 0x0108 (size: 0x8)
//     class UCustomCurveMovementCpt *MovementCpt;                           // 0x0110 (size: 0x8)
//     class UPrimitiveComponent *CollisionCpt;                              // 0x0118 (size: 0x8)
//     FBattleBattleProjectileCptCptOnScriptDamageEvent OnScriptDamageEvent; // 0x0128 (size: 0x10)
//     void BattleProjectileDamageEvent(class AActor *TargetActor, const FGameplayTag &GameplayTag);
//     bool bCatapultingFlag;                       // 0x0140 (size: 0x1)
//     int32 SplitCount;                            // 0x0144 (size: 0x4)
//     TArray<class AActor *> HittedActors;         // 0x0158 (size: 0x10)
//     FGameplayTag ProjectileDamageTag;            // 0x0168 (size: 0x8)
//     FGameplayTag ProjectileAlliesEffectTag;      // 0x0170 (size: 0x8)
//     FGameplayTag CatapultActionFunction;         // 0x0178 (size: 0x8)
//     FGameplayTag HitByCatapultActionFunctionTag; // 0x0180 (size: 0x8)

//     void SetCollisionCpt(class UPrimitiveComponent *CollisionCpt, bool bUpdateOverlap);
//     void ResetHittedActor();
//     void ProjectileDamageEventByTag(class AActor *TargetActor, const FGameplayTag &GameplayTag);
//     void OnProjectileBlocked(const FHitResult &HitResult);
//     void OnCollision(class UPrimitiveComponent *OverlappedComp, class AActor *Other, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);
//     void OnBackToOwner();
//     void LifeTimeOver();
//     void EndProjectileAction(bool bForce, bool bNeedDamageEvent);
//     void CatapultActionAttach();
//     void ActiveProjectileAction();
// }; // Size: 0x290

// class UBattleBufferProcessCpt : public UFNGameCpt
// {
//     FBattleBufferProcessCptBattleBuffStageDelegate BattleBuffStageDelegate; // 0x00F8 (size: 0x10)
//     void BattleBuffStageDelegate(FActiveGameplayEffectHandle BuffHandle, const FBuffEntity &BuffEntityInfo, int32 CurStack, int32 OldStackCount, float LastestTime, float OriginTime);

// }; // Size: 0x120

// class UBattleCharacterRotationCpt : public UBattleAbilityBaseCpt
// {
//     float RotateSpeed;                           // 0x00C8 (size: 0x4)
//     class UMultiCtrlSwitch *MultiCtrl_FlowMouse; // 0x00D0 (size: 0x8)

//     void SetTargetRotator(FRotator Rotator);
//     void SetRotateSpeed(float RotatorSpeed);
//     int32 SetFlowMouseEnable();
//     void SetFlowMouseDisable(int32 Handle);
// }; // Size: 0xE0

// class UBattleCustomEffectHandleCpt : public UFNGameCpt
// {
//     TMap<class FActiveGameplayEffectHandle, class FBattleCustomEffecthandle> SelfGEHandleMaps;   // 0x00F0 (size: 0x50)
//     TMap<class FActiveGameplayEffectHandle, class FBattleCustomEffecthandle> TargetGEHandleMaps; // 0x0140 (size: 0x50)

// }; // Size: 0x190

// class UBattleDamageTextManager : public UFNSingleAttribute
// {
// }; // Size: 0x88

// class UBattleDeathCpt : public UFNGameCpt
// {
//     bool bNeedDoDollEffect;                        // 0x00A8 (size: 0x1)
//     bool bNeedDrop;                                // 0x00A9 (size: 0x1)
//     float ImpulseCoefficient;                      // 0x00AC (size: 0x4)
//     FGameplayTagContainer CancelAbilitiesWhenDead; // 0x00B0 (size: 0x20)
//     float PhysicsWeight;                           // 0x00D0 (size: 0x4)
//     float DelayTime;                               // 0x00D4 (size: 0x4)

// }; // Size: 0xF8

// class UBattleEnergyStorageAttribute : public UAttributeSet
// {
//     FGameplayAttributeData EnergyStorageNum;                 // 0x0030 (size: 0x10)
//     FGameplayAttributeData TempEnergyStorageNum;             // 0x0040 (size: 0x10)
//     FGameplayAttributeData EnergyStorageMaxBase;             // 0x0050 (size: 0x10)
//     FGameplayAttributeData EnergyStorageMaxAdd;              // 0x0060 (size: 0x10)
//     FGameplayAttributeData EnergyStorageMaxMul;              // 0x0070 (size: 0x10)
//     FGameplayAttributeData EnergyStorageMaxFinal;            // 0x0080 (size: 0x10)
//     FGameplayAttributeData EnergyStorageGainSpeedBase;       // 0x0090 (size: 0x10)
//     FGameplayAttributeData EnergyStorageGainSpeedMul;        // 0x00A0 (size: 0x10)
//     FGameplayAttributeData EnergyStorageGainSpeedFinal;      // 0x00B0 (size: 0x10)
//     FGameplayAttributeData EnergyStorageRetainMul;           // 0x00C0 (size: 0x10)
//     FGameplayAttributeData EnergyStorageRetainBase;          // 0x00D0 (size: 0x10)
//     FGameplayAttributeData EnergyStorageRetainFinal;         // 0x00E0 (size: 0x10)
//     FGameplayAttributeData EnergyStorageToDamageRatio;       // 0x00F0 (size: 0x10)
//     FGameplayAttributeData GainStorgeMaxPercent;             // 0x0100 (size: 0x10)
//     FGameplayAttributeData GainStorgeMaxPercentDec;          // 0x0110 (size: 0x10)
//     FGameplayAttributeData EnergyStorageConsumeNum;          // 0x0120 (size: 0x10)
//     FGameplayAttributeData EnergyCost;                       // 0x0130 (size: 0x10)
//     TArray<FSingleEnergyStorageItem> EnergyStorageContainer; // 0x0140 (size: 0x10)

// }; // Size: 0x158

// class UBattleEnergyStorageCpt : public UBattleAbilityBaseCpt
// {
//     class UBattleEnergyStorageAttribute *BattleEnergyStorageAttribute;  // 0x00B0 (size: 0x8)
//     FBattleEnergyStorageCptOnEnergyStorageChange OnEnergyStorageChange; // 0x00B8 (size: 0x10)
//     void OnEnergyStorageChange(int32 ValueType);
//     FGameplayTag StorageTraitGroupTag; // 0x00D0 (size: 0x8)

//     float GetCurrentSingleStorageValue();
//     void FillEnergy(class USkillGameplayAbility *SkillGameplayAbility, float Percent);
// }; // Size: 0x1B0

// class UBattleFengLingCpt : public UFNGameCpt
// {
//     int32 AttackCount; // 0x00A8 (size: 0x4)

// }; // Size: 0xB0

// class UBattleGameplayAbility : public UGameplayAbility
// {
//     bool bNoCommit;                 // 0x03C0 (size: 0x1)
//     bool bVaildTargetPos;           // 0x03C1 (size: 0x1)
//     FVector VecAbilityTargetPos;    // 0x03C8 (size: 0x18)
//     FRotator TargetRotation;        // 0x03E0 (size: 0x18)
//     FVector TargetDirection;        // 0x03F8 (size: 0x18)
//     bool bSetActorRotation;         // 0x0410 (size: 0x1)
//     bool bUseFloorPosition;         // 0x0411 (size: 0x1)
//     bool bUseStageAsAbilityLevel;   // 0x0412 (size: 0x1)
//     float CastTime;                 // 0x0414 (size: 0x4)
//     class AActor *CurAbilityTarget; // 0x0418 (size: 0x8)
//     bool bCancelWhenDead;           // 0x0420 (size: 0x1)

//     void ScriptOnTickEvent(float DeltaTime);
//     void ScriptOnForceMove();
//     void K2_UpdateMouseInfo(bool bFloorPosition, bool bSetActorRotation);
//     class UAnimMontage *GetMontageToPlay(FName SKillKeyName);
//     class AFNGameActor *CallFNGameActor(TSubclassOf<class AFNGameActor> InClass, const FVector &vPos, const FRotator &rRot, FCallFNGameActorInitDelegate InitDelegate);
//     class AAbilityBaseActor *CallAblityActor(TSubclassOf<class AAbilityBaseActor> InClass, const FVector &vPos, const FRotator &rRot, FCallAblityActorInitDelegate InitDelegate);
//     class ABattleCharacter *CallAbilityCharactor(TSubclassOf<class ABattleCharacter> InClass, const FVector &vPos, const FRotator &rRot, FCallAbilityCharactorInitDelegate InitDelegate);
// }; // Size: 0x428

// class UBattleGhostCpt : public UFNGameCpt
// {
//     TWeakObjectPtr<class AActor> MainBodyActor; // 0x00A8 (size: 0x8)
//     FGameplayTag GhostCanUseTag;                // 0x00B0 (size: 0x8)
//     FGameplayTag CheckSkillConditionGroupTag;   // 0x00B8 (size: 0x8)
//     class USkillManger *SkillManger;            // 0x0180 (size: 0x8)

//     void ScriptOnGhostDeath(const class AActor *Actor);
// }; // Size: 0x190

// class UBattleInternalAttribute : public UAttributeSet
// {
//     FGameplayAttributeData CurAbilityCoast;   // 0x0030 (size: 0x10)
//     FGameplayAttributeData CurCaptapultIndex; // 0x0040 (size: 0x10)

// }; // Size: 0x50

// class UBattleLQExchangeCpt : public UFNGameCpt
// {
// }; // Size: 0xB0

// class UBattleLingJingCpt : public UFNGameCpt
// {
//     FGameplayTag HitEventSkillTrigerTag;         // 0x00A8 (size: 0x8)
//     FGameplayTag ConGealSkillTrigerTag;          // 0x00B0 (size: 0x8)
//     class ULingJingAttribute *LingJingAttribute; // 0x00B8 (size: 0x8)

// }; // Size: 0xC0

// class UBattleManger : public UFNSingleAttribute
// {
//     FBattleMangerOnBattleEnd OnBattleEnd; // 0x0038 (size: 0x10)
//     void OnBattleEnd(class UBattleSettlementsBase *BattleSettlementsBase);
//     TMap<int32, FSpawnAIConfig> SpawnerConfigTable;                 // 0x0048 (size: 0x50)
//     TArray<FName> CompleteBattleRoomList;                           // 0x0098 (size: 0x10)
//     class UBattleSettlementsBase *CurrentSettleInfo;                // 0x00A8 (size: 0x8)
//     class UDataTable *LevelCreateConfig;                            // 0x00B0 (size: 0x8)
//     bool bInBattle;                                                 // 0x00B8 (size: 0x1)
//     class UDataTable *BattleSettlementDataTable;                    // 0x00C0 (size: 0x8)
//     TMap<int32, FBattleSettlementConfig> BattleSettlementConfigMap; // 0x00C8 (size: 0x50)
//     class UBattleRoomDataConfig *BattleRoomDataConfig;              // 0x0118 (size: 0x8)

//     bool IsBattling();
//     class UBattleSettlementsBase *GetCurrentSettlement();
//     FBattleRoomData GetBattleRoomData(FName RoomName);
//     void EnterBattleLevel(class UBattleSettlementsBase *SettleInfo);
//     bool EnterBattleBySourceEntity(FEnttIndex SourceEntity);
//     void EnterBattleByIDAndLevel(int32 BattleID, int32 MonsterLevel);
//     void EnterBattleByID(int32 BattleID);
//     class UBattleSettlementsBase *CreateBattleByID(int32 BattleID);
//     FActiveGameplayEffectHandle BlockHealthByCharacterID(int32 CharacterID, float BlockValue);
//     void BackToBigWorld();
// }; // Size: 0x120

// class UBattleMonsterAttribute : public UFNGameCpt
// {
// }; // Size: 0xA8

// class UBattleMovementCpt : public UCharacterMovementComponent
// {

//     void ResolvePenetrationImme();
// }; // Size: 0xF00

// class UBattleOrderBase : public UObject
// {
// }; // Size: 0x28

// class UBattlePOIAdditionalConfig : public UDataAsset
// {
//     int32 SightGenerateMinStepTurn; // 0x0030 (size: 0x4)
//     int32 SightGenerateMaxStepTurn; // 0x0034 (size: 0x4)
//     int32 RegionGenerateStepTurn;   // 0x0038 (size: 0x4)

// }; // Size: 0x40

// class UBattleRPGAttributeCpt : public UFNGameCpt
// {
//     class UBattleAttributeBase *BattleAttributeSet;                     // 0x00A8 (size: 0x8)
//     TArray<FDynamicTraitSpec> DaoYunTraitList;                          // 0x0370 (size: 0x10)
//     TArray<class TSubclassOf<USkillGameplayAbility>> GameplayAbilities; // 0x0380 (size: 0x10)
//     TArray<class TSubclassOf<UGameplayEffect>> PassiveGameplayEffects;  // 0x0390 (size: 0x10)
//     TEnumAsByte<EM_CharacterType> BattleCharacterType;                  // 0x03A0 (size: 0x1)
//     int32 CampID;                                                       // 0x03A4 (size: 0x4)
//     int32 CharacterTemplateID;                                          // 0x03A8 (size: 0x4)
//     int32 MonsterLevel;                                                 // 0x03AC (size: 0x4)
//     FName ShowName;                                                     // 0x03B0 (size: 0x8)
//     bool bRandomMonsterAffix;                                           // 0x0408 (size: 0x1)
//     TArray<FName> RandomAffixList;                                      // 0x0410 (size: 0x10)
//     FString PrefixText;                                                 // 0x0420 (size: 0x10)

//     void UpdateBaseAttribute();
//     void SetScaleByAffix();
//     void SetRandomMonsterAffix(bool Flag);
//     void SetCharacterID(int32 CharacterID);
//     void SetCampID(int32 InCampID);
//     void ResetRPGAttributeFromDatabase(int32 RPGAttributeIndex);
//     void RemoveGameplayEffectByBigworldBuff(int32 UserID, int32 BigWorldBuffID);
//     void RandomMonsterAffix();
//     void InitMonsterBattleAttribute(const FMonsterLevelInfo &MonsterLevelInfo);
//     void InitBattleAttribute(FRPGAttributeBase &PlayerAttribute);
//     FString GetPrefixText();
//     float GetLQManaExchangeRatio();
//     float GetLQHealthExchangeRatio();
//     class AActor *GetLastDamage(FName &AbilityName);
//     TArray<int32> GetItemDropList();
//     TEnumAsByte<EM_CharacterType> GetCharacterType();
//     int32 GetCharacterLevel();
//     int32 GetCharacterID();
//     int32 GetCampID();
//     void DeleteSkillToCpt(int32 SkillID);
//     void DeleteSkillByGA(const FSoftClassPath &GAClassPath);
//     void ApplyGamePlayEffectByGongFa(int32 GongFaID, int32 nUserID);
//     void ApplyGamePlayEffectByEquip(FGuid LastEquipID, FGuid CurEquipID, int32 nUserID);
//     void ApplyGameplayEffectByBigworldBuff(int32 UserID, int32 BigWorldBuffID, bool IsChildBuff);
//     void ApplyDaoYunTrait(int32 UserID);
//     void AddStartupGameplayAbilities(int32 Level);
//     void AddSkillToCpt(int32 SkillID);
//     void AddSkillByGA(const FSoftClassPath &GAClassPath);
// }; // Size: 0x448

// class UBattleRoomDataConfig : public UDataAsset
// {
//     TMap<class FName, class FBattleRoomData> BattleRoomDataMap; // 0x0030 (size: 0x50)

// }; // Size: 0x80

// class UBattleSettlementsBase : public UObject
// {
//     bool bNeedLQCollect;                                // 0x0028 (size: 0x1)
//     bool bFixedLevelConfig;                             // 0x0029 (size: 0x1)
//     FBattleSettlementConfig BattleSettlementConfig;     // 0x0030 (size: 0x220)
//     TArray<int32> EnemyNpcIDs;                          // 0x0258 (size: 0x10)
//     TArray<int32> FriendNpcIDs;                         // 0x0268 (size: 0x10)
//     FLevelCreateContext LevelCreateContext;             // 0x0278 (size: 0x30)
//     float CurTotalManaCost;                             // 0x02A8 (size: 0x4)
//     int32 BattleCellID;                                 // 0x02AC (size: 0x4)
//     int32 OverrideMonsterLevel;                         // 0x02B0 (size: 0x4)
//     EBattleResult BattleResult;                         // 0x02B4 (size: 0x1)
//     bool bResetAttribute;                               // 0x02B5 (size: 0x1)
//     FEnttIndex BattleSourceEntity;                      // 0x02B8 (size: 0x8)
//     FBattleRoomPlayData RoomPlayData;                   // 0x02D0 (size: 0xC)
//     FPlayerBattleInfo PlayerBattleInfo;                 // 0x02DC (size: 0x10)
//     TSet<FName> EnableActorTagList;                     // 0x0348 (size: 0x50)
//     float BattleBeginTime;                              // 0x039C (size: 0x4)
//     TArray<int32> DeadIDs;                              // 0x03A0 (size: 0x10)
//     TMap<ABattleCharacter *, float> TargetHpPercentMap; // 0x03B0 (size: 0x50)
//     class ALevelSequenceActor *BattleEndSequenceActor;  // 0x0450 (size: 0x8)

//     void StartBattle();
//     void ScriptNotify();
//     void ScriptBeginBattle();
//     void ScriptActorSpawn(const class ASpawnAIBaseActor *SpawnPointActor, const class ABattleCharacter *MonsterActor);
//     void SavePlayerBattleInfo();
//     void RestorePlayerBattleInfo();
//     void ResetCharacterAttribute(TArray<int32> &CharacterIDs);
//     void OnSequencePlayEnd();
//     void OnInteractEnd(int32 ID);
//     void OnBattleEnd();
//     bool NeedSetBeginTime();
//     void MonsterSpawned(const class ASpawnAIBaseActor *SpawnPointActor, const class ABattleCharacter *MonsterActor);
//     void GetTotalWaveProcess(int32 &CurWaveCount, int32 &MaxWaveCount);
//     FBattleAttributeBackUp GetStartBattleAttribute(int32 UserID);
//     class ABattleCharacter *GetSpawnedActorsByCharacterID(int32 CharacterID);
//     void ForceEndBattle(EBattleResult Result);
//     void DistributeNpcsToSpawners(const TArray<int32> &NpcIDs, const TArray<TWeakObjectPtr<ASpawnAIBaseActor>> &Spawners, bool bEnemyNpc);
//     void BattleQuit();
//     void BattleEscape();
//     void BackupCharacterAttribute(TArray<int32> &CharacterIDs);
// }; // Size: 0x458

// class UBattleShieldAttribute : public UAttributeSet
// {
//     FGameplayAttributeData SheildShareDamagePer; // 0x0030 (size: 0x10)

// }; // Size: 0x40

// class UBattleShieldHandleCpt : public UFNGameCpt
// {
//     class UBattleShieldAttribute *BattleShieldAttribute; // 0x00A8 (size: 0x8)

// }; // Size: 0xC0

// class UBattleSkillSummonActorCpt : public UFNGameCpt
// {
//     FGameplayTag SummonCountTag;                                         // 0x00A8 (size: 0x8)
//     FGameplayTagContainer SummonTypeTagToMainBody;                       // 0x00B0 (size: 0x20)
//     FGameplayTagContainer ExternGamePlayTag;                             // 0x00D0 (size: 0x20)
//     TWeakObjectPtr<class AActor> MainBodyActor;                          // 0x00F0 (size: 0x8)
//     ESummonBattleState SummonBattleState;                                // 0x0100 (size: 0x1)
//     bool bReset;                                                         // 0x010C (size: 0x1)
//     FBattleSkillSummonActorCptOnSummonLifetimeOver OnSummonLifetimeOver; // 0x010D (size: 0x1)
//     void OnSummonLifeTimeOver(bool bDeathAction);

//     void UpdateLifeTime(float AbsTime, float PercentTime);
//     void SummonLifeTimeOver(bool bDeathAction);
//     void ResetLifeTime();
//     void OnSummonLifeTimeOver__DelegateSignature(bool bDeathAction);
// }; // Size: 0x120

// class UBattleSkillSummonMasterMangerCpt : public UFNGameCpt
// {
//     TMap<class FGameplayTag, class FSummonInfo> TagSummonMaster; // 0x00A8 (size: 0x50)

// }; // Size: 0xF8

// class UBattleSummonFindTarget : public UFNGameCpt
// {
//     TWeakObjectPtr<class AActor> MainBodyActor;               // 0x00A8 (size: 0x8)
//     TSubclassOf<class UBattleTargetType> TargetTypeClass;     // 0x00B0 (size: 0x8)
//     float FindInterval;                                       // 0x00B8 (size: 0x4)
//     uint8 bUseOwnerPosition;                                  // 0x00BC (size: 0x1)
//     FBattleSummonFindTargetChoseActorOption ChoseActorOption; // 0x00C0 (size: 0x10)
//     bool ChoseActorOption(const class AActor *CurActor);
//     FGameplayTagContainer ExternFindTargetTags; // 0x00D0 (size: 0x20)
//     float FindTargetRange;                      // 0x00F0 (size: 0x4)

//     void SetMainBody(class AActor *InActor);
//     void RequestFindTargetImmeEx(TArray<FHitResult> &OutHitResults, TArray<class AActor *> &OutActors);
//     class AActor *RequestFindTargetImme();
// }; // Size: 0x1F8

// class UBattleTargetType : public UObject
// {
//     uint8 bEnemy;                          // 0x0028 (size: 0x1)
//     uint8 bEnemySummon;                    // 0x0028 (size: 0x1)
//     uint8 bAllies;                         // 0x0028 (size: 0x1)
//     uint8 bAlliesSummon;                   // 0x0028 (size: 0x1)
//     uint8 bCritter;                        // 0x0028 (size: 0x1)
//     uint8 bCritterSummon;                  // 0x0028 (size: 0x1)
//     uint8 bTargetingSelf;                  // 0x0028 (size: 0x1)
//     uint8 bSelfSummon;                     // 0x0028 (size: 0x1)
//     uint8 bLingJing;                       // 0x0029 (size: 0x1)
//     uint8 bNeedAlive;                      // 0x0029 (size: 0x1)
//     uint8 bIncludeTargetActor;             // 0x0029 (size: 0x1)
//     FGameplayTagContainer TargetTagReq;    // 0x0030 (size: 0x20)
//     FGameplayTagContainer TargetTagIgnore; // 0x0050 (size: 0x20)

//     bool Script_CheckTarget(const class AActor *ToCheckActor, class UBattleAbilitySystemCpt *ToCheckAbilitySystem, const class AActor *TargetingActor);
//     bool MakeSureRes(const class AActor *TargetingCharacter, TArray<FHitResult> &OutHitResults, TArray<class AActor *> &OutActors);
//     void GetTargets(const FSKillAbilityAttributeSet &SkillAbilityCastTraitInfo, const class AActor *TargetingCharacter, const class AActor *TargetingActor, const FGameplayEventData &EventData, TArray<FHitResult> &OutHitResults, TArray<class AActor *> &OutActors);
//     TArray<class AActor *> CheckActorsIsRightTarget(TSubclassOf<class UBattleTargetType> CheckClass, const TArray<class AActor *> &ToCheckTarget, const class AActor *TargetingCharacter);
//     bool CheckActorIsRightTargetInternal(const class AActor *ToCheckActor, const class AActor *TargetingCharacter);
//     bool CheckActorIsRightTarget(TSubclassOf<class UBattleTargetType> CheckClass, const class AActor *ToCheckTarget, const class AActor *TargetingCharacter);
// }; // Size: 0x70

// class UBattleTargetType_BoxTrace : public UBattleTargetType
// {
// }; // Size: 0x70

// class UBattleTargetType_BoxTraceSingle : public UBattleTargetType
// {
// }; // Size: 0x70

// class UBattleTargetType_CatapultSphereTrace : public UBattleTargetType
// {
// }; // Size: 0x70

// class UBattleTargetType_ConeTrace : public UBattleTargetType
// {
// }; // Size: 0x70

// class UBattleTargetType_ProjectileUseEventDataSphereTrace : public UBattleTargetType
// {
// }; // Size: 0x70

// class UBattleTargetType_SphereExceptBoxTrace : public UBattleTargetType
// {
// }; // Size: 0x70

// class UBattleTargetType_SphereTrace : public UBattleTargetType
// {
// }; // Size: 0x70

// class UBattleTargetType_SphereTraceByMousePosition : public UBattleTargetType
// {
// }; // Size: 0x70

// class UBattleTargetType_TargetPositionSphereTrace : public UBattleTargetType
// {
// }; // Size: 0x70

// class UBattleTargetType_UseEventData : public UBattleTargetType
// {
// }; // Size: 0x70

// class UBattleTargetType_UseOwner : public UBattleTargetType
// {
// }; // Size: 0x70

// class UBattleTaritCpt : public UFNGameCpt
// {
//     TArray<FDynamicTraitSpec> ArrayExternDynamicTraits; // 0x0120 (size: 0x10)
//     FSkillTraitDesc TempTraitDesc;                      // 0x0150 (size: 0x180)
//     class USkillManger *SkillManger;                    // 0x02D0 (size: 0x8)
//     TArray<FSkillTraitDesc> LocalTraitDesc;             // 0x0378 (size: 0x10)
//     FGameplayTagContainer AvailableUnusualTags;         // 0x0388 (size: 0x20)

// }; // Size: 0x500

// class UBigWorldAttributeApplyFunction : public UObject
// {
// }; // Size: 0x28

// class UBigWorldBuffManger : public UGameInstanceSubsystem
// {
//     FBigWorldBuffMangerUpdateBigWolrdBuffDelegate UpdateBigWolrdBuffDelegate; // 0x0038 (size: 0x10)
//     void UpdateBigWolrdBuff();
//     FBigWorldBuffMangerAddBigWorldBuffDelegate AddBigWorldBuffDelegate; // 0x0048 (size: 0x10)
//     void AddBigWorldBuff(int32 UserID, int32 BuffID, bool IsChildBuff);
//     TMap<int32, FBigWorldEffectContainer> GlobalWorldBuffs; // 0x0070 (size: 0x50)
//     class UDataTable *BigWorldEffectTable;                  // 0x0110 (size: 0x8)
//     class UDataTable *BigWorldAttributeTable;               // 0x0118 (size: 0x8)

//     void SetBigWorldTraitValueWithoutBuff(const TArray<FBigWorldTraitAttributeParam> &AttributeParams, int32 UserID);
//     void RemoveBigWorldEffectByBigWorldBuffIDAndCauserEnity(int32 UserID, int32 BigWorldBuffID, const FEnttIndex &CauserEntity);
//     void RemoveBigWorldEffectByBigWorldBuffID(int32 UserID, int32 BigWorldBuffID);
//     void OnPlayerEndMove(const FIntPoint &LastPos, const FIntPoint &CurPos);
//     void OnNextTurn(int32 TurnCount);
//     void OnBigWorldSwitch(const class USingleWorldData *BigWorldData);
//     float GetBigWorldTraitValue(int32 UserID, FName TypeName, float DefalutValue);
//     FFloatAttributeValue GetAttributeValueFromWorldBuff(const FBigWorldAttributeName &BigWorldAttributeName, int32 UserID);
//     void CompleteDelegateQuestAward(class UObject *WorldObject);
//     bool CheckUserHaveBuffByID(int32 UserID, int32 BuffID);
//     void BattleEnd(class UBattleSettlementsBase *BattleSettlementsBase);
//     bool AddBigWorldEffectByID(int32 UserID, int32 BigBuffID, const FEnttIndex &CauserEntity);
// }; // Size: 0x120

// class UBigWorldGeneralConfig : public UDataAsset
// {
//     float PortalMoneyCoef;                                                             // 0x0030 (size: 0x4)
//     float PortalTimeCoef;                                                              // 0x0034 (size: 0x4)
//     TArray<float> BattleExpBase;                                                       // 0x0038 (size: 0x10)
//     TArray<int32> SkillPointByLevel;                                                   // 0x0048 (size: 0x10)
//     TArray<int32> GodQuestByDaoValue;                                                  // 0x0058 (size: 0x10)
//     int32 HexGridEventProbabilityBase;                                                 // 0x0068 (size: 0x4)
//     int32 HexGridEventProbabilityAdd;                                                  // 0x006C (size: 0x4)
//     int32 HexGridEventTurnAddLow;                                                      // 0x0070 (size: 0x4)
//     int32 HexGridEventTurnAddHigh;                                                     // 0x0074 (size: 0x4)
//     int32 KillFameStand;                                                               // 0x0078 (size: 0x4)
//     int32 KillKnowledgeID;                                                             // 0x007C (size: 0x4)
//     int32 DeathKnowledgeID;                                                            // 0x0080 (size: 0x4)
//     TArray<int32> PrefixAttackValue;                                                   // 0x0088 (size: 0x10)
//     TArray<int32> PrefixDefendValue;                                                   // 0x0098 (size: 0x10)
//     int32 DestroyBrightFieldBattleDistance;                                            // 0x00A8 (size: 0x4)
//     int32 DefaultMaxMoodValue;                                                         // 0x00AC (size: 0x4)
//     int32 DefaultMinBalanceValue;                                                      // 0x00B0 (size: 0x4)
//     int32 DefaultMaxBalanceValue;                                                      // 0x00B4 (size: 0x4)
//     int32 AutoIncMoodValue;                                                            // 0x00B8 (size: 0x4)
//     int32 AutoDecMoodValue;                                                            // 0x00BC (size: 0x4)
//     int32 ReadLingFaMoodCoefficient;                                                   // 0x00C0 (size: 0x4)
//     int32 ReadLingFaMaxCostDay;                                                        // 0x00C4 (size: 0x4)
//     TMap<int32, int32> ReadBookDaoYunAdd;                                              // 0x00C8 (size: 0x50)
//     int32 QiGeDialogueID;                                                              // 0x0118 (size: 0x4)
//     int32 DanGeDialogueID;                                                             // 0x011C (size: 0x4)
//     int32 DynamicPOIOutSenseTurnCount;                                                 // 0x0120 (size: 0x4)
//     float TraumaRate;                                                                  // 0x0124 (size: 0x4)
//     int32 MsgTypeBSaveTurn;                                                            // 0x0128 (size: 0x4)
//     int32 MessageTimeInterval;                                                         // 0x012C (size: 0x4)
//     TMap<class UScriptStruct *, class FAITransactionConfigData> TransactionConfigInfo; // 0x0130 (size: 0x50)
//     int32 HouShanTime;                                                                 // 0x0180 (size: 0x4)
//     int32 HouShanUseValue;                                                             // 0x0184 (size: 0x4)
//     int32 HouShanMoodValue;                                                            // 0x0188 (size: 0x4)
//     float LQSaveLimitValue;                                                            // 0x018C (size: 0x4)
//     int32 ZongMenNeiBiIntervalTurn;                                                    // 0x0190 (size: 0x4)
//     int32 HuangChengBiWuIntervalTurn;                                                  // 0x0194 (size: 0x4)

// }; // Size: 0x198

// class UBigWorldManger : public UFNSingleAttribute
// {
//     float CameraTargetArmLength;                   // 0x0040 (size: 0x4)
//     class USingleWorldData *CurentWorldData;       // 0x0048 (size: 0x8)
//     class UPlayerAttribute *PlayerAttribute;       // 0x0050 (size: 0x8)
//     TMap<int32, FWorldLevelInfoConfig> WordInfos;  // 0x0058 (size: 0x50)
//     TArray<class USingleWorldData *> AllWorldData; // 0x00A8 (size: 0x10)
//     int32 CurrentWorldIndex;                       // 0x00B8 (size: 0x4)
//     int32 WorldRandomSeed;                         // 0x00C8 (size: 0x4)

//     void OpenLevelByLevel(int32 LevelIndex);
//     void OpenCurrentWorldLevel();
//     bool InitPlayerAttributeByFixConfig(FName FixConfigKey);
//     int32 GetWorldNum();
//     class USingleWorldData *GetWorldDataByUserID(int32 UserID);
//     class UPlayerAttribute *GetPlayerAttribute();
//     class USingleWorldData *GetCurWorldData();
//     TArray<class USingleWorldData *> GetAllWorldData();
// }; // Size: 0xD0

// class UBigWorldMapConfig : public UDataAsset
// {
//     TMap<int32, FSoftObjectPath> Stage2BigWorldMap;           // 0x0030 (size: 0x50)
//     TMap<int32, FWorldLevelInfoConfig> Stage2BigWorldMapInfo; // 0x0080 (size: 0x50)

// }; // Size: 0xD0

// class UBigWorldMiniMapMechanic : public UFNSingleAttribute
// {

//     void StopDrawViewMiniMap(class UFNGameInstance *FNGameInstance, const FEnttIndex &MapViewEntity);
//     FEnttIndex StartDrawPlayerViewMiniMap(class UFNGameInstance *FNGameInstance, class UMiniMapViewWidget *Widget);
//     void SetMinimapIconTempTrace(class UFNGameInstance *FNGameInstance, const FEnttIndex &Entity, bool bTrace);
//     void PlayerSearchOperate(class UFNGameInstance *FNGameInstance, float Scale, int32 ValidTurns);
//     void MarkForceShowByTeleportMode(class UFNGameInstance *FNGameInstance, bool ForceShow);
//     void MarkForceHideAreaName(class UFNGameInstance *FNGameInstance, bool ForceHide);
// }; // Size: 0x38

// class UBigWorldMoveAnimNotify : public UAnimNotify_PlayNiagaraEffect
// {

//     void SetBigWorldMoveFootNiagara(class USkeletalMeshComponent *MeshComp);
// }; // Size: 0xD0

// class UBigworldDynamicAttributeProcessBase : public UObject
// {

//     TArray<FBigWorldTraitAttributeParam> GetBigWorldTraitAttributeParams(class UGameInstance *GameInstance, const FEnttIndex &CauserEntity, int32 UserID);
//     TArray<FBigWorldBaseAttributeParam> GetBigWorldBaseAttributeParams(class UGameInstance *GameInstance, const FEnttIndex &CauserEntity, int32 UserID);
// }; // Size: 0x28

// class UBrightLight : public UFieldBattle
// {
// }; // Size: 0x1B0

// class UBrightLightEvolveMechanic : public UFNSingleAttribute
// {
//     class UDataTable *BrightLightCreateConfigTable; // 0x0038 (size: 0x8)

// }; // Size: 0x50

// class UBuffConditionCustomCheck : public UGasCustomEffectbase
// {
// }; // Size: 0x68

// class UCameraShakeNotify : public UAnimNotify
// {
//     TSubclassOf<class UCameraShakeBase> CameraShakeClass; // 0x0038 (size: 0x8)

// }; // Size: 0x40

// class UChaosRiftConfig : public UDataAsset
// {
//     FChaosRiftData ChaosRiftData; // 0x0030 (size: 0x20)

// }; // Size: 0x50

// class UCheckPathSceneComponent : public USceneComponent
// {
//     class UHexGridSubsystem *HexGridSubsystem; // 0x02A8 (size: 0x8)
//     class UMountManager *MountManager;         // 0x02B0 (size: 0x8)

// }; // Size: 0x2C0

// class UChildRegionColorConfig : public UDataAsset
// {
//     TMap<int32, FColor> ChildRegionColorMap;                     // 0x0030 (size: 0x50)
//     TMap<class TSubclassOf<UPoibase>, class FColor> POIColorMap; // 0x0080 (size: 0x50)
//     FColor BrightLightColor;                                     // 0x00D0 (size: 0x4)

// }; // Size: 0xD8

// class UCityBase : public UPoibase
// {
//     TArray<int32> CitySpecial;                              // 0x0178 (size: 0x10)
//     TArray<int32> NpcCemetery;                              // 0x0188 (size: 0x10)
//     int32 CurStoreRefreshTime;                              // 0x0198 (size: 0x4)
//     FPlayerBag CityStore;                                   // 0x01A0 (size: 0x18)
//     FPlayerBag BackBag;                                     // 0x01B8 (size: 0x18)
//     int32 LastUpdateDelegateQuestTurnCount;                 // 0x01D0 (size: 0x4)
//     TMap<int32, int32> LockBetStone;                        // 0x01E0 (size: 0x50)
//     int32 FreePryingTime;                                   // 0x0230 (size: 0x4)
//     int32 NextTurnCountForReplenishNPC;                     // 0x0234 (size: 0x4)
//     int32 CityID;                                           // 0x0238 (size: 0x4)
//     ECityScale CityLevel;                                   // 0x023C (size: 0x1)
//     int32 LastAuctionTurn;                                  // 0x0240 (size: 0x4)
//     TArray<FAuctionItemInfo> NormalValueAuctionItemList;    // 0x0248 (size: 0x10)
//     TArray<FAuctionItemInfo> HighValueAuctionItemList;      // 0x0258 (size: 0x10)
//     TArray<FAuctionItemInfo> PlayerAuctionItemList;         // 0x0268 (size: 0x10)
//     TArray<int32> AuctionNpcList;                           // 0x0278 (size: 0x10)
//     bool bPlayerParticipateInAuction;                       // 0x0288 (size: 0x1)
//     TArray<FAuctionSettlement> PlayerAuctionSettlementList; // 0x0290 (size: 0x10)

//     void Script_AuctionNotify(int32 AuctionTurn);
//     void OnNextTurn(int32 TurnCount);
//     bool IsPlayerAuctionItem(class UItemBase *ItemBase);
//     int32 GetReferencePrice(class UItemBase *ItemBase);
//     int32 GetFloorPrice(class UItemBase *ItemBase);
//     ECityScale GetCityLevel();
//     int32 GetAuctionOpenTurn();
//     int32 GetAttitudeLevel(float ItemRelativeValue);
//     void GenerateAuctionItems();
//     void ClearAuctionItems();
//     void AddPryingTime(int32 Time);
//     void AddPlayerAuctionItem(class UItemBase *ItemBase);
//     void AddLockStone(int32 StoneID, int32 LockTime);
// }; // Size: 0x2A0

// class UCityGenConfig : public UPoiGenConifg
// {
// }; // Size: 0x160

// class UCityHospitalConfig : public UDataAsset
// {
//     TArray<FHospitalHealConfigByStage> CityHospitalConfigs; // 0x0030 (size: 0x10)
//     FSoftObjectPath HealSequence;                           // 0x0040 (size: 0x20)

// }; // Size: 0x60

// class UCityManger : public UFNBigWorldSubSystem
// {
//     TArray<class UCityBase *> AllCitys;   // 0x0038 (size: 0x10)
//     TArray<class UCityBase *> BigCitys;   // 0x0048 (size: 0x10)
//     TArray<class UCityBase *> SmallCitys; // 0x0058 (size: 0x10)
//     TArray<class UCityBase *> MidCitys;   // 0x0068 (size: 0x10)

//     void HealTraumaByHospital(int32 UserID, int32 HealDay);
//     class UHotelData *GetHotelData();
//     int32 GetHealTraumaByDay(int32 UserID);
//     class UCityBase *GetCityInfoByID(int32 CityID);
//     FSoftObjectPath GetCityHealSeq();
//     TArray<class UCityBase *> GetCitiesByCityFixedName(FName CityFixedName);
//     class UAuctionConfig *GetAuctionDAConfig();
// }; // Size: 0x78

// class UCollectionData : public UFNBigWorldSubSystem
// {
//     TMap<int32, FCollectionPoint> CollectionPointMap; // 0x0038 (size: 0x50)
//     TArray<class UCollectionPoi *> AllCollection;     // 0x0088 (size: 0x10)
//     int32 CollectionCount;                            // 0x0098 (size: 0x4)

//     void ScriptRelease();
//     void ScriptInit();
// }; // Size: 0xA0

// class UCollectionGenConfig : public UPoiGenConifg
// {
// }; // Size: 0x160

// class UCollectionLC : public UCollectionPoi
// {
// }; // Size: 0x190

// class UCollectionPoi : public UPoibase
// {
//     int32 CollectionID;       // 0x0170 (size: 0x4)
//     ERarityType RarityType;   // 0x0174 (size: 0x1)
//     int32 CollectionConfigID; // 0x0178 (size: 0x4)
//     int32 GeneratedTurn;      // 0x017C (size: 0x4)
//     bool AffectedByLQTide;    // 0x0180 (size: 0x1)

// }; // Size: 0x190

// class UCollectionPoiEvolveMechanic : public UFNSingleAttribute
// {
// }; // Size: 0x38

// class UCollectionPoiGeneralConfig : public UDataAsset
// {
//     int32 LC_MaxCount;        // 0x0030 (size: 0x4)
//     int32 LC_GenStepTurn;     // 0x0034 (size: 0x4)
//     int32 LC_GenFixByLQTide;  // 0x0038 (size: 0x4)
//     int32 LC_TurnAgeLimit;    // 0x003C (size: 0x4)
//     float LC_StandardDrop;    // 0x0040 (size: 0x4)
//     int32 LC_GenByLQTide;     // 0x0044 (size: 0x4)
//     int32 TC_MaxCount;        // 0x0048 (size: 0x4)
//     int32 TC_GenStepTurn;     // 0x004C (size: 0x4)
//     float MinExponential;     // 0x0050 (size: 0x4)
//     float MaxExponential;     // 0x0054 (size: 0x4)
//     int32 TC_CreateKnowledge; // 0x0058 (size: 0x4)
//     int32 TC_RemoveKnowledge; // 0x005C (size: 0x4)
//     int32 CollectCostDay;     // 0x0060 (size: 0x4)

// }; // Size: 0x68

// class UCollectionPoiManager : public UFNSingleAttribute
// {
//     class UCollectionPoiGeneralConfig *CollectionPoiGeneralConfig; // 0x0038 (size: 0x8)

//     void UserCollect(int32 UserID, int32 CollectionID, int32 CollectNum);
//     void RemoveCollectionPoi(int32 CollectionID);
//     class UCollectionPoiGeneralConfig *GetCollectionPoiGeneralConfig();
//     class UCollectionPoi *GetCollectionPoiByID(int32 CollectionID);
//     class UCollectionPoi *GenerateTC_CollectionPoi(int32 CellID, int32 WuXingIndex);
//     class UCollectionPoi *GenerateLC_CollectionPoi(int32 CellID, int32 WuXingIndex, bool AffectedByLQTide);
//     class UCollectionPoi *CollectionPoiGenerateHandle(int32 CellID, ERarityType RarityType, int32 WuXingIndex, int32 CollectionConfigID);
//     void ChangeTianCaiToLingCaiByLQTide(int32 WuXingIndex);
//     void ChangeLingCaiToTianCaiByLQTide(int32 WuXingIndex);
//     int32 CalCollectionNum(int32 UserID, int32 CollectionID);
// }; // Size: 0x90

// class UCollectionTC : public UCollectionPoi
// {
// }; // Size: 0x190

// class UCommonCastGameAbility : public UBattleGameplayAbility
// {
//     FGameplayTag CommonUseSkillTag;                           // 0x0434 (size: 0x8)
//     FGameplayTag CommonSubUseSkillTag;                        // 0x043C (size: 0x8)
//     FGameplayTag SendEventUseSkillTag;                        // 0x0444 (size: 0x8)
//     FGameplayTag AbilitySubEvent;                             // 0x044C (size: 0x8)
//     FGameplayTag MontageEvenTag;                              // 0x0454 (size: 0x8)
//     FGameplayTag SkillPostCastEndTag;                         // 0x045C (size: 0x8)
//     FGameplayTag SkillPreCastStartTag;                        // 0x0464 (size: 0x8)
//     FGameplayTag EndAbilityTag;                               // 0x046C (size: 0x8)
//     float MaxAtkSpeed;                                        // 0x0474 (size: 0x4)
//     float MinAtkSpeed;                                        // 0x0478 (size: 0x4)
//     FGameplayTag MontageSectionStartTag;                      // 0x047C (size: 0x8)
//     class UAbilityTask_PlayMontageAndWaitForEvent *TaskEvent; // 0x0488 (size: 0x8)

//     void RemoveSkillStateTag();
//     void EventRecv(FGameplayTag EventTag, FGameplayEventData EventData);
//     void EndCommonCastAbility(FGameplayTag EventTag, FGameplayEventData EventData);
//     void AddSkillStateTag();
// }; // Size: 0x4B0

// class UCommonMsgNotify : public UGameMsgNotifyBase
// {
//     FString CommonNotifyText; // 0x0070 (size: 0x10)

//     void PushCommonMsgNotify(class UGameInstance *InGameInstance, FString CommonMsg);
// }; // Size: 0x80

// class UCommonUtilityAbility : public UBattleGameplayAbility
// {
// }; // Size: 0x428

// class UConsumeItem : public UItemBase
// {

//     float GetCDTime();
//     FGameplayTag GetCDTag();
//     void ConsumeItem(int32 UserID, int32 Count);
// }; // Size: 0x48

// class UConsumeItemCreator : public UItemCreatorBase
// {
// }; // Size: 0x30

// class UCoolDownReduce : public UCustomEffectOutDataBase
// {
// }; // Size: 0x38

// class UCostReduce : public UCustomEffectOutDataBase
// {
// }; // Size: 0x30

// class UCounterAttackQuestHandleBase : public UObject
// {
// }; // Size: 0x28

// class UCounterAttackQuestHandle_ActionTroop : public UCounterAttackQuestHandleBase
// {
// }; // Size: 0x28

// class UCounterAttackQuestHandle_AssistanceTroop : public UCounterAttackQuestHandleBase
// {
// }; // Size: 0x28

// class UCounterAttackQuestHandle_GrowTroop : public UCounterAttackQuestHandleBase
// {
// }; // Size: 0x28

// class UCounterAttackQuestHandle_InvadeCore : public UCounterAttackQuestHandleBase
// {
// }; // Size: 0x28

// class UCounterAttackQuestHandle_InvadeGrid : public UCounterAttackQuestHandleBase
// {
// }; // Size: 0x28

// class UCreatePlayerGeneralConfig : public UDataAsset
// {
//     TMap<class EWuXingType, class FWuXingCapacity> WuXingCapacity; // 0x0030 (size: 0x50)
//     TMap<class EDescriptionType, class FString> TypeDesc;          // 0x0080 (size: 0x50)
//     TMap<int32, FCapacityAddValue> MainCapacityValue;              // 0x00D0 (size: 0x50)

// }; // Size: 0x120

// class UCreatePlayerManger : public UFNSingleAttribute
// {
//     class UDataTable *CreatePlayerAttributeData;               // 0x0058 (size: 0x8)
//     class UCreatePlayerGeneralConfig *CreatePlayerGeneralData; // 0x0060 (size: 0x8)

// }; // Size: 0xB8

// class UCustomCDCacl : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomCostCacl : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomCurveMovementCpt : public UMovementComponent
// {
//     TWeakObjectPtr<class USplineComponent> MovementCurve;                 // 0x0108 (size: 0x8)
//     TWeakObjectPtr<class USplineComponent> IdeCurve;                      // 0x0110 (size: 0x8)
//     class UCurveFloat *MoveSpeedCurve;                                    // 0x0118 (size: 0x8)
//     class UCurveFloat *IdeSpeedCurve;                                     // 0x0120 (size: 0x8)
//     class USplineComponent *CustomCurve;                                  // 0x0128 (size: 0x8)
//     float IdleBaseSpeed;                                                  // 0x0130 (size: 0x4)
//     float IdleOriginPercent;                                              // 0x0134 (size: 0x4)
//     FVector PositionScale;                                                // 0x0138 (size: 0x18)
//     FVector WorldSpaceIdleOffset;                                         // 0x0150 (size: 0x18)
//     bool bLoopPath;                                                       // 0x0168 (size: 0x1)
//     bool bReversePathBackIdle;                                            // 0x0169 (size: 0x1)
//     FName IdleGroupName;                                                  // 0x016C (size: 0x8)
//     float IdlePostionLerpSpeed;                                           // 0x017C (size: 0x4)
//     int32 MovingAttachIndex;                                              // 0x0180 (size: 0x4)
//     FRotator MoveRotator;                                                 // 0x0188 (size: 0x18)
//     int32 RotatorRate;                                                    // 0x01A0 (size: 0x4)
//     bool bBackToIdle;                                                     // 0x01A4 (size: 0x1)
//     TEnumAsByte<EMoveType> DefaultMoveType;                               // 0x01A5 (size: 0x1)
//     float DefalutMoveSpeed;                                               // 0x01A8 (size: 0x4)
//     float DefaultMoveTime;                                                // 0x01AC (size: 0x4)
//     bool bIdlePathRotator;                                                // 0x01B0 (size: 0x1)
//     FCustomCurveMovementCptOnAttachTargetDelegate OnAttachTargetDelegate; // 0x01B8 (size: 0x10)
//     void OnAttachTarget();
//     FCustomCurveMovementCptOnBackIDleDelegate OnBackIDleDelegate; // 0x01C8 (size: 0x10)
//     void OnBackIDle();
//     FCustomCurveMovementCptOnScriptBlockDestroy OnScriptBlockDestroy; // 0x01D8 (size: 0x10)
//     void BattleProjectileBlockDestroy(const FHitResult &HitRes);
//     bool bUseTrackingMode;                                     // 0x01E8 (size: 0x1)
//     TArray<TEnumAsByte<ECollisionChannel>> BlockCollisionType; // 0x01F0 (size: 0x10)
//     int32 BlockByWorldStaticRange;                             // 0x0200 (size: 0x4)
//     int32 TestSafeRangePlaceToEnd;                             // 0x0204 (size: 0x4)
//     class AActor *MainBody;                                    // 0x0378 (size: 0x8)

//     void SetMainBody(const class AActor *InActor);
//     void SetFollowActorWhenIdle(const class AActor *FollowActor);
//     void RequestNewtMovementEx(const FVector &InEndPos);
//     void RequestNewtMovement(const FVector &InEndPos, TEnumAsByte<EMoveType> InEMoveType, float InSpeedBase, float InReqTime);
//     void RequestMoveToAcotorEx(const class AActor *DstActor);
//     void RequestMoveToAcotor(const class AActor *DstActor, TEnumAsByte<EMoveType> InEMoveType, float InSpeedBase, float InReqTime);
//     void LoopIdleMovement();
// }; // Size: 0x420

// class UCustomEffectOutDataBase : public UObject
// {
// }; // Size: 0x28

// class UCustomEffect_AddTagToSkill : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_ApplyGAEffectContainer : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_AttributeExchange : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_AttributeOprate : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_AttributeRange : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_AttributeToProbability : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_AttributeToUnusualEffecProb : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_AttributeTotSpecTageValue : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_AttributeTranstoTraitAttribute : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_BuffReplace : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_CDR : public UCustomEffect_ExcuteBase
// {
//     FGameplayTagContainer CDTagContainer; // 0x0068 (size: 0x20)

// }; // Size: 0x88

// class UCustomEffect_CDR_Longest : public UCustomEffect_ExcuteBase
// {
//     FGameplayTag LongestCDRTag;           // 0x0068 (size: 0x8)
//     FGameplayTagContainer CDTagContainer; // 0x0070 (size: 0x20)

// }; // Size: 0x90

// class UCustomEffect_CDR_Random : public UCustomEffect_ExcuteBase
// {
//     FGameplayTagContainer CDTagContainer; // 0x0068 (size: 0x20)

// }; // Size: 0x88

// class UCustomEffect_CalcProbabilityBase : public UGasCustomEffectbase
// {
// }; // Size: 0x68

// class UCustomEffect_CatapultAsHitFunctionBase : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_CatapultCountByActorToAttribute : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_CatapultRepeatCondition : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_CatapultRepeatConditionByTag : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_ChangeSummonExistTime : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_CheckAttributeValueCondition : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_CheckBuffState : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_CheckMainSkillTag : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_CheckTargetIsSameOrSummon : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_CheckTargetTypeCondition : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_ClearCD : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_DamageExcute : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_DamageExcutionEnergyRetain : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_DamageToEnergyStorage : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x268

// class UCustomEffect_DamageWithEnergy : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_Distance : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_EnergyFillRateToAttribute : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_EnergyValueChangeApplyBuff : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_EnergyValueChangeModiySpeed : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_EnergyValueChangeSendEvent : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_ExcuteBase : public UGasCustomEffectbase
// {
// }; // Size: 0x68

// class UCustomEffect_ExeBuffOperation : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_FillEnergyByPercentage : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_FullShieldRemove : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_GainEnergyAuto : public UCustomEffect_GainEnergyBase
// {
// }; // Size: 0x68

// class UCustomEffect_GainEnergyBase : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_GainEnergyQuick : public UCustomEffect_GainEnergyBase
// {
// }; // Size: 0x68

// class UCustomEffect_GainEnergyTotal : public UCustomEffect_GainEnergyBase
// {
// }; // Size: 0x68

// class UCustomEffect_ImmeCauseBuffDamage : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_IngnoreTag : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_OnMoveState : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_ParentSkillTraitAttributeGet : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_PeriodModifyAttribute : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_ProjectileActionExecuteBase : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_RegisterOnceExecute : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_RegisterTagCountChangeEvent : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_RemoveShieldToAttribute : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_SendEvent : public UCustomEffect_ExcuteBase
// {
//     FGameplayTag SendEventTag; // 0x0068 (size: 0x8)

// }; // Size: 0x78

// class UCustomEffect_SendEventByTagCount : public UCustomEffect_ExcuteBase
// {
//     FGameplayTag SendEventTag; // 0x0068 (size: 0x8)

// }; // Size: 0x78

// class UCustomEffect_ShareDamageToSummon : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x78

// class UCustomEffect_SingleDamagePercentCondition : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_SingleEnergyMax : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_SpecTagValueToAttribute : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_SpecificBuffCheck : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_SummonInherit : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_SummonInheritTraitGroup : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_SummonInheritTrans : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_SummonInheritUnusual : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0xE8

// class UCustomEffect_SummonReplaceHit : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_TagConditionCheck : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_TagCount : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_TagCountMulAttributeToAttribute : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_TagCountToAttribute : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_TagCountToUnusualEffecProb : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_TagTranstoTraitAttribute : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_TagValue : public UCustomEffect_CalcProbabilityBase
// {
// }; // Size: 0x68

// class UCustomEffect_TraitAttributeToUnusualProb : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_TraitAttributeTranstoAttribute : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_TrigerEnergyStorage : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_UnusualEffectTranslate : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomEffect_UnusualTagAddOrDelete : public UCustomEffect_ExcuteBase
// {
// }; // Size: 0x68

// class UCustomSaveGameManager : public UFNSingleAttribute
// {
//     TMap<class FGuid, class FWrapSaveInfo> AutoSaveListCache; // 0x0040 (size: 0x50)
//     class USpudSaveGameInfo *LastSaveGame;                    // 0x0090 (size: 0x8)
//     class UGlobalSaveObject *GlobalSaveObject;                // 0x00C0 (size: 0x8)
//     bool bResetHistoryGuidanceData;                           // 0x00C8 (size: 0x1)

//     void UpdateGlobalSaveDataToFile();
//     void SortSaveGameListBySaveTime(TArray<class USpudSaveGameInfo *> &SaveGameList);
//     void Script_PrepareCustomSaveData(class USpudSaveGameInfo *SpudSaveGameInfo, class USpudCustomSaveInfo *CustomSaveInfo, class UPlayerAttribute *PlayerAttribute, ESaveType InSaveTYpe);
//     void SaveGame(FString &Title);
//     void OverrideSaveGame(FString Title, FString SlotName);
//     TArray<class USpudSaveGameInfo *> GetSaveGameListByCharacterGUIDBySaveType(FGuid CharacterGUID, ESaveType SaveType);
//     TArray<class USpudSaveGameInfo *> GetSaveGameListByCharacterGUIDAndSaveType(FGuid CharacterGUID, ESaveType SaveType);
//     TArray<class USpudSaveGameInfo *> GetSaveGameListByCharacterGUID(FGuid CharacterGUID);
//     class USpudSaveGameInfo *GetSaveGameInfo(FString SlotName);
//     class USpudSaveGameInfo *GetLatestSaveGame();
//     class UGlobalSaveObject *GetGlobalSaveData();
//     bool GetDifficultyUnlock(int32 DifficultyLevel);
//     TArray<FGuid> GetCharacterGUIDList();
//     void DeleteSave(FString SlotName);
// }; // Size: 0xD0

// class UDanYaoFormulaItem : public UConsumeItem
// {
// }; // Size: 0x50

// class UDanYaoFormulaItemCreator : public UItemCreatorBase
// {
// }; // Size: 0x30

// class UDaoYunManager : public UFNSingleAttribute
// {
//     FDaoYunManagerDaoYunAllocateChange DaoYunAllocateChange; // 0x0038 (size: 0x10)
//     void DaoYunAllocateChange(int32 UserID);
//     TMap<class EDaoYunType, class FDaoYunConfig> DaoYunConfigMap; // 0x0048 (size: 0x50)

// }; // Size: 0x198

// class UDarkLight : public UFieldBattle
// {
// }; // Size: 0x1B0

// class UDashPathFollowCpt : public UCrowdFollowingComponent
// {

//     FAIRequestID DashToLocation(const FVector &DstLocation, const class AActor *Actor, float Speed, bool bNavFindPath);
// }; // Size: 0x328

// class UDestinyAttributeManger : public UFNSingleAttribute
// {
//     class UDataTable *TrigramConfig; // 0x0038 (size: 0x8)

// }; // Size: 0x90

// class UDialogueManager : public UFNSingleAttribute
// {
//     class UDataTable *DialogueTable; // 0x0038 (size: 0x8)

// }; // Size: 0x50

// class UDifficultyInitialConfig : public UDataAsset
// {
//     FName DifficultyName;                             // 0x0030 (size: 0x8)
//     FString DifficultyDesc;                           // 0x0038 (size: 0x10)
//     int32 InitialPoint;                               // 0x0048 (size: 0x4)
//     int32 InitialPerception;                          // 0x004C (size: 0x4)
//     int32 InitialCharm;                               // 0x0050 (size: 0x4)
//     int32 InitialLuck;                                // 0x0054 (size: 0x4)
//     int32 InitialSense;                               // 0x0058 (size: 0x4)
//     int32 InitialAge;                                 // 0x005C (size: 0x4)
//     float BreakAgeFix;                                // 0x0060 (size: 0x4)
//     float ConsumeMoodFix;                             // 0x0064 (size: 0x4)
//     TArray<FBaseAttributeArray> MonsterAttributeFixs; // 0x0068 (size: 0x10)

// }; // Size: 0x78

// class UDivZhongMen : public UZhongMenBase
// {
// }; // Size: 0x3E0

// class UDongfu : public UPoibase
// {
// }; // Size: 0x170

// class UECSDataSaveMechanic : public UFNSingleAttribute
// {

//     void HandlePreSaveGame(FString SlotName);
//     void HandlePreLoadGame(FString SlotName, class USpudState *State);
//     void HandlePostSaveGame(FString SlotName, bool bSuccess);
//     void HandlePostLoadGame(FString SlotName, bool bSuccess);
// }; // Size: 0x40

// class UECSScriptOprateUtility : public UObject
// {

//     void SetPoiGameDataTriggered(const FEnttIndex &EnttIndex, bool bTriggered);
//     void RemoveDataCpt(const FEnttIndex &EnttIndex, const class UScriptStruct *DataType);
//     bool IsEntityValid(const FEnttIndex &EnttIndex);
//     bool IsEntityEqual(const FEnttIndex &EnttIndex1, const FEnttIndex &EnttIndex2);
//     bool HasDataCpt(const FEnttIndex &EnttIndex, const class UScriptStruct *DataType);
//     bool GetDataCpt(const FEnttIndex &EnttIndex, const class UScriptStruct *DataType, FGenericStruct &GameData);
//     void AddDataCpt(const FEnttIndex &EnttIndex, const FGenericStruct &GameData);
// }; // Size: 0x28

// class UEnhanceInputKeyboradSetting : public UGameSettingKeyboardInput
// {
// }; // Size: 0x2C0

// class UEquipmentManager : public UFNSingleAttribute
// {
//     class UDataTable *EquipGenFixData; // 0x0198 (size: 0x8)

//     bool SimulationGenerateEquipmentAffix(class UItemEquipment *ItemEquipment, FSingleItemAttribute &SingleItemAttribute, int32 AffixID, int32 AffixLevel, int32 Seed, EEquipAffixValueGenerateType EquipAffixValueGenerateType);
//     bool SimulationGenerateAffix(FSingleItemAttribute &SingleItemAttribute, int32 AffixID, int32 AffixLevel, int32 Seed, EEquipAffixValueGenerateType EquipAffixValueGenerateType, float GrowthValue);
//     bool RemoveEquipTraitInfo(class UItemEquipment *ItemEquipment, EEquipTraitAscription EquipTraitAscription, int32 Index);
//     bool RandomSingleAttributeTraitPoolConfig(FAttributeTraitPoolConfig &AttributeTraitPoolConfig, class UItemEquipment *ItemEquipment, TArray<int32> PoolIDs, TArray<int32> MismatchAffixID, int32 AffixID);
//     int32 GetItemIDByStageAndSubType(int32 Stage, int32 Rarity, EItemEuipSubType Subtype, EForgeSecondType ForgeType);
//     int32 GetExternAffixMaxNum(class UItemEquipment *ItemEquipment);
//     TArray<int32> GetAffixsByPoolID(int32 PoolID);
//     void GenerateNonPresetEquipmentFixedAffix(class UItemEquipment *Item);
//     void GenerateNonPresetEquipmentExternAffix(class UItemEquipment *Item);
//     void GenerateEquipmentExternAffix(class UItemBase *Item, int32 MaterialID, int32 UserID, bool UseTianCaiPool, int32 Position);
//     void GenerateEquipmentBaseAffix(class UItemBase *Item, int32 UserID);
//     void GenerateEquipFixedAffix(class UItemBase *Item, int32 AffixID, int32 MaterialID, int32 UserID);
//     bool GenerateAttributeTrait(class UItemEquipment *ItemEquipment, FSingleItemAttribute &SingleItemAttribute, int32 AffixID, int32 AffixLevel, EEquipTraitAscription EquipTraitAscription, int32 Seed, EEquipAffixValueGenerateType EquipAffixValueGenerateType, int32 Position, bool SaveData);
//     int32 CalSingleMaterialNeedNumToXiLianLimit(class UItemEquipment *ItemEquipment, int32 XiLianNum, int32 MaterialID, int32 UserID);
//     int32 CalSingleMaterialNeedNumToRefineLimit(class UItemEquipment *ItemEquipment, int32 MaterialID, int32 UserID);
//     int32 CalSingleMaterialNeedNumToJingLianLimit(class UItemEquipment *ItemEquipment, int32 MaterialID, int32 UserID);
//     int32 CalSingleMaterialNeedNumToForgeLimit(int32 Threshold, int32 MaterialID, int32 UserID);
//     int32 CalRefineEquipmentMaterialValue(TMap<int32, int32> MaterialMap, int32 UserID);
//     int32 CalRefineEquipmentCostDay(TMap<int32, int32> MaterialMap, class UItemEquipment *ItemEquipment, int32 UserID);
//     int32 CalRefineEquipmentAddExp(TMap<int32, int32> MaterialMap, class UItemEquipment *ItemEquipment, int32 UserID);
//     int32 CalJingLianEquipmentCostDay(TMap<int32, int32> MaterialMap, class UItemEquipment *ItemEquipment, int32 UserID);
//     int32 CalJingLianEquipmentAddExp(TMap<int32, int32> MaterialMap, class UItemEquipment *ItemEquipment, int32 UserID);
//     int32 CalForgeEquipmentMaterialValue(TMap<int32, int32> MaterialMap, int32 UserID);
//     int32 CalForgeEquipmentCostDay(TMap<int32, int32> MaterialMap, int32 ForgeLevel, int32 UserID);
//     int32 CalForgeEquipmentAddExp(TMap<int32, int32> MaterialMap, int32 Stage, int32 Rarity, int32 UserID, bool IsFistForge);
//     int32 CalEquipmentNeedGenerateExternAffixNum(class UItemEquipment *ItemEquipment);
// }; // Size: 0x1A0

// class UEventConditionBase : public UObject
// {

//     bool CheckEventCondition(int32 NpcIndex);
//     int32 CalcEventWeight(int32 BaseWeight, int32 NpcIndex);
// }; // Size: 0x28

// class UEventProcessBase : public UObject
// {
//     bool bEventProcessEnd; // 0x0030 (size: 0x1)

// }; // Size: 0x38

// class UExploreHundunRift : public ULifeRecordEntityBase
// {

//     void AddRecordByExploreHundunRift(class UObject *WorldObject, int32 UesrID);
// }; // Size: 0x30

// class UExploreRiftRecord : public ULifeRecordEntityBase
// {
//     uint8 IsSuccessExplore; // 0x0030 (size: 0x1)
//     int32 CellID;           // 0x0034 (size: 0x4)

//     void AddRecordByExploreRift(class UObject *WorldObject, int32 UesrID, bool IsSuccess, int32 RiftCellID);
// }; // Size: 0x38

// class UFNBigWorldSubSystem : public UObject
// {
//     int32 WorldLevel;                              // 0x0028 (size: 0x4)
//     class USingleWorldData *ParentSingleWorldData; // 0x0030 (size: 0x8)

//     class UFNGameInstance *GetGameInstance();
// }; // Size: 0x38

// class UFNCameraModifier_CameraShake : public UCameraModifier_CameraShake
// {
// }; // Size: 0xB0

// class UFNCameraShake : public ULegacyCameraShake
// {
//     int32 MaxInstanceCount; // 0x0210 (size: 0x4)

// }; // Size: 0x220

// class UFNCustomApplicationBase : public UGameplayEffectCustomApplicationRequirement
// {
//     FGameplayTag SummonReplaceHitTraitFuncFlag; // 0x0028 (size: 0x8)

// }; // Size: 0xF0

// class UFNCustomSaveInfo : public USpudCustomSaveInfo
// {
// }; // Size: 0x88

// class UFNEventManager : public UInteractionBase
// {
//     TMap<int32, FNpcEventData> NpcEventDataMap;                   // 0x0050 (size: 0x50)
//     TMap<int32, FHexGridEventData> HexGridEventDataMap;           // 0x00A0 (size: 0x50)
//     TMap<int32, FHexGridEventPhaseData> HexGridEventPhaseDataMap; // 0x00F0 (size: 0x50)
//     class UNpcEventGeneralConfig *NpcEventGeneralConfig;          // 0x0140 (size: 0x8)
//     EEventTriggerType CurEventTriggerType;                        // 0x0148 (size: 0x1)
//     TArray<class UEventProcessBase *> EventProcessList;           // 0x0150 (size: 0x10)
//     class UNpcEventProcess *NpcEventProcess;                      // 0x0160 (size: 0x8)
//     class UHexGridEventProcess *HexGridEventProcess;              // 0x0168 (size: 0x8)

//     void StartProcessEvents(EEventTriggerType EventTriggerType);
//     void Script_StartProcessEvents();
//     void ProcessEvents();
//     void OnPlayerEndMove(const FIntPoint &LastPoint, const FIntPoint &CurPoint);
//     void OnPlayerBattleEnd(class UBattleSettlementsBase *BattleSettlement);
//     void OnNextTurn(int32 TurnCount);
//     class UNpcEventProcess *GetNpcEventProcess();
//     class UNpcEventGeneralConfig *GetNpcEventGeneralConfig();
//     class UHexGridEventProcess *GetHexGridEventProcess();
// }; // Size: 0x178

// class UFNGameAnimInstance : public UAnimInstance
// {

//     void Montage_SetBlendTimeMultiplier(const class UAnimMontage *Montage, float NewMultiplier);
//     float Montage_GetBlendTimeMultiplier(const class UAnimMontage *Montage);
// }; // Size: 0x350

// class UFNGameAttributeManger : public UFNSingleAttribute
// {
//     class UDataTable *AttributeConfigDatatab;                 // 0x0038 (size: 0x8)
//     class UPlayerAttributeItemIDConfig *RPGAttributeIDConfig; // 0x00A0 (size: 0x8)

//     FName GetRPGAttributeNameByID(int32 ID);
//     int32 GetBattleAttributeIndexByPropertyName(FName AttributeName);
//     int32 GetBattleAttributeIndexByProperty(FGameplayAttribute &GameplayAttribute);
//     bool GetAttributeDataByPropertyByID(int32 Index, FGameplayAttribute &GameplayAttributeOut);
// }; // Size: 0xA8

// class UFNGameAudioManager : public UFNSingleAttribute
// {
//     TMap<class FName, class FAudioData> AudioDataMap;  // 0x0038 (size: 0x50)
//     class UAudioComponent *GameBGMAudioCpt;            // 0x0088 (size: 0x8)
//     TArray<class UAudioComponent *> AudioCptCacheList; // 0x0090 (size: 0x10)
//     int32 CurBGMType;                                  // 0x00A0 (size: 0x4)

//     void StopGameBGM();
//     void SetGameBGM(int32 SoundType);
//     void ResumeGameBGM();
//     class UAudioComponent *PlaySound(const FName &SoundName);
// }; // Size: 0xA8

// class UFNGameBase : public UGameplayStatics
// {

//     int32 TransPresetNpcIDToRealID(const class UObject *WorldContextObject, int32 PresetNpcID);
//     int32 TransGameTimeToDays(FFNGameTime TimeA);
//     FString StringFormat(FString OriginString, const TArray<FString> &StringParams);
//     FString SoftObjectPathToString(const FSoftObjectPath &SoftObjectPath);
//     void ReturnToMainMenu(const class UObject *WorldContextObject);
//     bool ObjectIsValid(class UObject *pObject);
//     class AActor *MySpawnActor(const class UObject *WorldContextObject, UClass *InClass, const FVector &vPos, const FRotator &rRot, FMySpawnActorInitDelegate InitDelegate);
//     void Logout(FString LogTxt, uint8 LogTypeIndex);
//     class UObject *LoadObjectSync(const FSoftObjectPath &Path);
//     UClass *LoadClassSync(const FSoftClassPath &Path);
//     void KillBattleActor(const class AActor *Actor);
//     FVector K2_GetSafePositionByNav(class UObject *WorldObject, const FVector &OriginPos, float Radius);
//     bool IsPlayingSequence(const class UObject *WorldContextObject);
//     bool IsInsideTriangle(const FVector2D &A, const FVector2D &B, const FVector2D &C, const FVector2D &QueryPoint);
//     int32 InternalGameTime(FFNGameTime TimeA, FFNGameTime TimeB);
//     class UZongmenData *GetZongMenData(const class UObject *WorldContextObject);
//     class UZhongmenInteractionManger *GetZhongmenInteractionManger(const class UObject *WorldContextObject);
//     class UXinjueManager *GetXinjueManager(const class UObject *WorldContextObject);
//     class UBigWorldManger *GetWorldManager(const class UObject *WorldContextObject);
//     class UWndMgr *GetWndMgr(class UGameInstance *GameInstance);
//     class UUnlockFunctionManager *GetUnlockFunctionManager(const class UObject *WorldContextObject);
//     class UFNTurnBaseSubsystem *GetTurnBaseSubsystem(const class UObject *WorldContextObject);
//     class UTraumaManager *GetTraumaManager(const class UObject *WorldContextObject);
//     class UTrainManager *GetTrainManager(const class UObject *WorldContextObject);
//     class UStereoManager *GetStereoManager(const class UObject *WorldContextObject);
//     class UStageBreakThroughManger *GetStageBreakThroughManger(const class UObject *WorldContextObject);
//     class USpudSubsystem *GetSpudSubsystem(const class UObject *WorldContextObject);
//     class UFNMontageManger *GetSkillMontageMange(const class UObject *WorldContextObject);
//     class USkillManger *GetSkillManger(const class UObject *WorldContextObject);
//     class UBattleRPGAttributeCpt *GetRPGBattleAttributeCpt(const class AActor *Actor);
//     FRPGAttributeBase GetRPGAttributeBaseByID(const class UObject *WorldContextObject, int32 UserID);
//     class URiftManager *GetRiftManager(const class UObject *WorldContextObject);
//     class UReputationManager *GetReputationManager(const class UObject *WorldContextObject);
//     class URelationshipSystem *GetRelationshipSystem(const class UObject *WorldContextObject);
//     class URegionManager *GetRegionManager(const class UObject *WorldContextObject);
//     class UReadEventManager *GetReadEventManager(const class UObject *WorldContextObject);
//     class URandomNameSingleAttribute *GetRandomNameCpt(const class UObject *WorldContextObject);
//     class UPlayerInfomationManager *GetPlayerInfomationManager(const class UObject *WorldContextObject);
//     class UPlayerAttribute *GetPlayerAttribute(const class UObject *WorldContextObject);
//     class UNPCMockBattle *GetNPCMockBattleManager(const class UObject *WorldContextObject);
//     class UNpcBuildManager *GetNpcBuildManager(const class UObject *WorldContextObject);
//     class UMountManager *GetMountManager(const class UObject *WorldContextObject);
//     class UMonsterSingleAttribute *GetMonsterConfig(const class UObject *WorldContextObject);
//     class UHexGridLQTideManager *GetLQTideManager(const class UObject *WorldContextObject);
//     class ULQTideData *GetLQTideData(const class UObject *WorldContextObject);
//     class ULianDanManager *GetLianDanManager(const class UObject *WorldContextObject);
//     bool GetLandZPos(const class AActor *WorldContextObject, const FVector &OriginPos, FVector &ResPosition, FVector &Normal);
//     class UKnowledgeinteraction *GetKnowledgeinteraction(const class UObject *WorldContextObject);
//     class UJiYiManager *GetJiYiManager(const class UObject *WorldContextObject);
//     class UItemMangerSystem *GetItemMangerSystem(const class UObject *WorldContextObject);
//     class UInteractionSystem *GetInteractionSystem(const class UObject *WorldContextObject);
//     class UHexGridSubsystem *GetHexGridData(const class UObject *WorldContextObject);
//     class UGuideManager *GetGuideManager(const class UObject *WorldContextObject);
//     class UGongFaManger *GetGongFaManger(const class UObject *WorldContextObject);
//     class UFNGameRandomSystem *GetGlobalRandomSystem(const class UObject *WorldContextObject);
//     class UFuLuManager *GetFuLuManger(const class UObject *WorldContextObject);
//     class UFNGameProjectSettings *GetFNGameProjectSettings();
//     class UFNGameAttributeManger *GetFNGameAttributeManager(const class UObject *WorldContextObject);
//     class UFNEventManager *GetFNEventData(const class UObject *WorldContextObject);
//     class UFieldBattleManger *GetFieldBattleManager(const class UObject *WorldContextObject);
//     class UEquipmentManager *GetEquipmentManager(const class UObject *WorldContextObject);
//     int32 GetEnttIntIndex(const FEnttIndex &EnttIndex);
//     class UDialogueManager *GetDialogueManager(const class UObject *WorldContextObject);
//     class UDestinyAttributeManger *GetDestinyAttributeManger(const class UObject *WorldContextObject);
//     class UDaoYunManager *GetDaoYunManager(const class UObject *WorldContextObject);
//     class UCustomSaveGameManager *GetCustomSaveGameManager(const class UObject *WorldContextObject);
//     class AFNGamePlayerController *GetCurrentPlayerController(const class UObject *WorldContextObject);
//     class UCreatePlayerManger *GetCreatePlayerManager(const class UObject *WorldContextObject);
//     TArray<class AActor *> GetConeAreaActors(const class AActor *TargetActor, float Angle, float Radius, const TArray<class AActor *> &ActorsToIgnore, const TArray<TEnumAsByte<ECollisionChannel>> ObjectTypes, bool ShowDebugLine);
//     class UCollectionPoiManager *GetCollectionPoiManager(const class UObject *WorldContextObject);
//     class UCollectionData *GetCollectionData(const class UObject *WorldContextObject);
//     class UObject *GetClassCDO(const UClass *uclass);
//     class UCityManger *GetCityManager(const class UObject *WorldContextObject);
//     class UBigWorldBuffManger *GetBigWorldBuffManger(const class UObject *WorldContextObject);
//     class UBattleManger *GetBattleManger(class UGameInstance *GameInstance);
//     class UBattleDamageTextManager *GetBattleDamageTextManager(const class UObject *WorldContextObject);
//     TEnumAsByte<EM_BattleCampType> GetBattleCampType(const class AActor *CharacterA, const class AActor *CharacterB, bool bSummomCheck);
//     class UBattleAttributeBase *GetBattleAttribute(const class AActor *Actor);
//     class UBattleAbilitySystemCpt *GetBattleAbilitySystemCpt(const class AActor *Actor);
//     class UFNGameAudioManager *GetAudioManager(const class UObject *WorldContextObject);
//     bool GetActorLocationOnTheFloor(const class AActor *Actor, const FVector &TargetPostion, FVector &ResultPosition);
//     class UBattleTaritCpt *GetAbilityTraitCpt(const class AActor *Actor);
//     void GamePlayCameraShakeEffect(const class AActor *PlyerActor, TSubclassOf<class UCameraShakeBase> ShakeClass, float Scale);
//     int32 DisableAllGameInput(const class UObject *WorldContextObject);
//     void DeactivateActorWithDelayTime(class AActor *Actor, float OverridenDelayTime);
//     void DeactivateActor(class AActor *Actor);
//     void CreateMonster(const class UObject *WorldContextObject, int32 TemplateID, int32 Level);
//     float Conv_FloatAttributeValueToFloat(const FFloatAttributeValue &InValue);
//     bool CheckIsSelf(const class AActor *CharacterA, const class AActor *CharacterB);
//     bool CheckIsFriend(const class AActor *CharacterA, const class AActor *CharacterB);
//     bool CheckIsEmeny(const class AActor *CharacterA, const class AActor *CharacterB);
//     bool CheckBattleCharacterIsAlive(const class AActor *Actor);
//     void CancelDisableAllGameInput(const class UObject *WorldContextObject, int32 Handle);
//     bool AttachCptToActorByclass(TSubclassOf<class USceneComponent> ActorComponent, class AActor *Ower);
//     bool AttachCptToActor(class USceneComponent *ActorComponent, class AActor *Ower);
//     void AddBindingByTag(class ALevelSequenceActor *LevelSequenceActor, FName BindingTag, class UObject *Binding, bool bAllowBindingsFromAsset);
// }; // Size: 0x28

// class UFNGameCpt : public UActorComponent
// {

//     FVector GetActorLocation();
// }; // Size: 0xA8

// class UFNGameEffectAttributeModify : public UGameplayEffect
// {
// }; // Size: 0x860

// class UFNGameEffectBase : public UFNGameEffectAttributeModify
// {
// }; // Size: 0x860

// class UFNGameEffectBuffBase : public UGameplayEffect
// {
//     FBuffEntity EntityBuff;               // 0x0860 (size: 0xC)
//     TArray<int32> OverflowEffectIDs;      // 0x0870 (size: 0x10)
//     TArray<int32> EvolveEffectIDs;        // 0x0880 (size: 0x10)
//     int32 EvolveRequireStackCount;        // 0x0890 (size: 0x4)
//     int32 EvolveCoefficient;              // 0x0894 (size: 0x4)
//     int32 BuffType;                       // 0x0898 (size: 0x4)
//     uint8 bCustomClearStackOnOverflow;    // 0x089C (size: 0x1)
//     uint8 bCustomDenyOverflowApplication; // 0x089C (size: 0x1)
//     FBuffDisplayInfo BuffDisplayInfo;     // 0x08A0 (size: 0x60)

// }; // Size: 0x908

// class UFNGameEffectCD : public UGameplayEffect
// {

//     bool SetModify(const TArray<FBaseAttributeValueParam> &ValueParam, FGameplayTag CDTag, float Duration);
//     bool HasGameplayTag(FGameplayTag TagToCheck);
// }; // Size: 0x860

// class UFNGameInput : public UEnhancedPlayerInput
// {
// }; // Size: 0x740

// class UFNGameInstance : public UCommonGameInstance
// {
//     class UBigWorldManger *BigWorldManger;                           // 0x01D8 (size: 0x8)
//     class UFNLuaInstance *LuaInstance;                               // 0x01E0 (size: 0x8)
//     class UFNGamePMCommand *FNGamePMCommand;                         // 0x01E8 (size: 0x8)
//     FSoftObjectPath MainMenuLevel;                                   // 0x01F0 (size: 0x20)
//     class URuntimeSerializeVersionInfo *RuntimeSerializeVersionInfo; // 0x0210 (size: 0x8)

//     void QuickLoadGame();
//     void PostLoadGame(FString SlotName, bool bSuccess);
//     void PMCommand(FString strComm);
//     void OpenSubLevel(FName LevelPath);
//     class UPlayerAttribute *GetPlayerAttribute();
//     class UWorld *GetCurGameWorld();
//     bool CheckArchiveCanLoad(FString GameArchiveName);
//     void BackToMainMenuLevel(FString LoadGameArchive);
// }; // Size: 0x218

// class UFNGameNotifyMessageCenter : public UFNSingleAttribute
// {
//     FFNGameNotifyMessageCenterOnUpdateGameNotifyMsgTypeB OnUpdateGameNotifyMsgTypeB; // 0x0040 (size: 0x10)
//     void UpdateGameNotifyMsgTypeB();
//     TArray<class TSubclassOf<UGameMsgNotifyBase>> NotifyMsgClasses;                // 0x0060 (size: 0x10)
//     TMap<class FName, class TSubclassOf<UGameMsgNotifyBase>> MsgNotifyClassConfig; // 0x00A0 (size: 0x50)
//     TArray<class UGameMsgNotifyBase *> CurrentNotifyMsgObjects;                    // 0x00F0 (size: 0x10)
//     class UFNGameAttributeManger *WorldAttributeManger;                            // 0x0100 (size: 0x8)

//     TArray<FString> PopSavedMsgList_TypeC();
//     TArray<FString> PopSavedMsgList_TypeB(int32 TurnCount);
//     TArray<class UGameMsgNotifyBase *> PopNotifyObjectByCategory(int32 Count);
//     TArray<FString> PopMsgListByCategory(int32 Count, ENotifyMessageType NotifyMessageType);
//     void OnNextTurn(int32 TurnCount);
//     class UGameMsgNotifyBase *GetSerializedNotifyMsgEntityByIndex(class UObject *WorldObject, int32 Index);
//     class UGameMsgNotifyBase *GetDefaultNotifyMsgEntityBase(class UObject *WorldObject, FName ClassKeyName);
//     class UFNGameNotifyMessageCenter *Get(const class UObject *WorldContextObject);
//     void EndNotifyMsgChange(class UGameMsgNotifyBase *GameMsgNotifyBase);
//     void ClearMsgList();
//     void BeginNotifyMsgChange(class UGameMsgNotifyBase *NotifyMsgClass);
//     int32 AddNotifyMsg(class UObject *WorldObject, class UGameMsgNotifyBase *GameMsgNotifyBase);
// }; // Size: 0x108

// class UFNGameNotifyMessage_BigWorldBuff : public UGameMsgNotifyBase
// {
//     int32 BigWorldBuffID;      // 0x0070 (size: 0x4)
//     int32 CauseBigWorldBuffID; // 0x0074 (size: 0x4)

// }; // Size: 0x78

// class UFNGameNotifyMessage_CellRelevance : public UGameMsgNotifyBase
// {
//     int32 CellID; // 0x0070 (size: 0x4)

// }; // Size: 0x78

// class UFNGameNotifyMessage_CollectGetItems : public UFNGameNotifyMessage_GetItems
// {
//     int32 CollectConfigID; // 0x0090 (size: 0x4)

// }; // Size: 0x98

// class UFNGameNotifyMessage_GetItems : public UGameMsgNotifyBase
// {
//     TArray<int32> Items;    // 0x0070 (size: 0x10)
//     TArray<int32> ItemsNum; // 0x0080 (size: 0x10)

// }; // Size: 0x90

// class UFNGameNotifyMessage_Invade : public UGameMsgNotifyBase
// {
//     int32 CellID;   // 0x0070 (size: 0x4)
//     int32 PoiState; // 0x0074 (size: 0x4)

// }; // Size: 0x78

// class UFNGameNotifyMessage_Knowledge : public UGameMsgNotifyBase
// {
//     int32 IntelligenceNum; // 0x0070 (size: 0x4)
//     int32 HandbookNum;     // 0x0074 (size: 0x4)

// }; // Size: 0x78

// class UFNGameNotifyMessage_KnowledgeImportant : public UGameMsgNotifyBase
// {
//     int32 KnowledgeID; // 0x0070 (size: 0x4)

// }; // Size: 0x78

// class UFNGameNotifyMessage_KnowledgeRift : public UFNGameNotifyMessage_KnowledgeImportant
// {
//     int32 CellID; // 0x0078 (size: 0x4)

// }; // Size: 0x80

// class UFNGameNotifyMessage_LearnLingFa : public UGameMsgNotifyBase
// {
//     int32 LingFaID;    // 0x0070 (size: 0x4)
//     float CurProgress; // 0x0074 (size: 0x4)

// }; // Size: 0x78

// class UFNGameNotifyMessage_Life : public UGameMsgNotifyBase
// {
//     int32 LifeLeft; // 0x0070 (size: 0x4)

// }; // Size: 0x78

// class UFNGameNotifyMessage_QuestGetItems : public UFNGameNotifyMessage_GetItems
// {
//     int32 QuestID; // 0x0090 (size: 0x4)

// }; // Size: 0x98

// class UFNGameNotifyMessage_Relationship : public UGameMsgNotifyBase
// {
//     int32 NpcID;            // 0x0070 (size: 0x4)
//     int32 RelationshipType; // 0x0074 (size: 0x4)
//     bool bRemove;           // 0x0078 (size: 0x1)

// }; // Size: 0x80

// class UFNGameNotifyMessage_UseItem : public UGameMsgNotifyBase
// {
//     int32 ItemId; // 0x0070 (size: 0x4)

// }; // Size: 0x78

// class UFNGameNotifyMessage_UseItemGetItems : public UFNGameNotifyMessage_GetItems
// {
//     int32 ItemId; // 0x0090 (size: 0x4)

// }; // Size: 0x98

// class UFNGameNotifyMessage_XinJueTrait : public UGameMsgNotifyBase
// {
//     int32 XinJueTraitID; // 0x0070 (size: 0x4)

// }; // Size: 0x78

// class UFNGameNotifyMessage_ZongMen : public UGameMsgNotifyBase
// {
//     int32 ZongMenID; // 0x0070 (size: 0x4)

// }; // Size: 0x78

// class UFNGameNotifyMessage_ZongMenWithJob : public UFNGameNotifyMessage_ZongMen
// {
//     int32 ZongMenJobType; // 0x0078 (size: 0x4)

// }; // Size: 0x80

// class UFNGameNotifyMessage_ZongMenWithNpcID : public UFNGameNotifyMessage_ZongMenWithJob
// {
//     int32 NpcID; // 0x0080 (size: 0x4)

// }; // Size: 0x88

// class UFNGamePMCommand : public UFNSingleAttribute
// {

//     void ScriptProcessPMCommand(FName CommandComtext);
//     void ScriptInit();
//     void RegisterCommmand(FString TextCommand, FString TextTips);
// }; // Size: 0x50

// class UFNGameProjectSettings : public UDeveloperSettings
// {
//     int32 MaxStage;                                                                  // 0x0038 (size: 0x4)
//     TMap<EM_GAMEDIFFICULTY_LEVEL, int32> DifficultyUnlockStageConfig;                // 0x0040 (size: 0x50)
//     TMap<int32, int32> PhasePerStageConfig;                                          // 0x0090 (size: 0x50)
//     int32 DestinyTrigramLevelCount;                                                  // 0x00E0 (size: 0x4)
//     FSoftObjectPath StageRelatedConfig;                                              // 0x00E8 (size: 0x20)
//     FSoftObjectPath GongFaConfig;                                                    // 0x0108 (size: 0x20)
//     FSoftObjectPath GongFaFettersConfig;                                             // 0x0128 (size: 0x20)
//     FSoftObjectPath DestinyConfigPath;                                               // 0x0148 (size: 0x20)
//     FSoftObjectPath SkillBaseInfoConfigPath;                                         // 0x0168 (size: 0x20)
//     FSoftObjectPath StageToPvPDecConfigPath;                                         // 0x0188 (size: 0x20)
//     FSoftObjectPath SkillGroupConfigPath;                                            // 0x01A8 (size: 0x20)
//     FSoftObjectPath SkillNameConfigPath;                                             // 0x01C8 (size: 0x20)
//     FSoftObjectPath BuffInfoConfigPath;                                              // 0x01E8 (size: 0x20)
//     FSoftObjectPath ZongmenFixDataConfig;                                            // 0x0208 (size: 0x20)
//     FSoftObjectPath CityFixDataConfig;                                               // 0x0228 (size: 0x20)
//     FSoftObjectPath StoreDataTable;                                                  // 0x0248 (size: 0x20)
//     FSoftObjectPath StoreItemsDataTable;                                             // 0x0268 (size: 0x20)
//     FSoftObjectPath ItemPoolBaseConfig;                                              // 0x0288 (size: 0x20)
//     FSoftObjectPath ArenaCompetitionDataTable;                                       // 0x02A8 (size: 0x20)
//     FSoftObjectPath CityBuildDataConfig;                                             // 0x02C8 (size: 0x20)
//     FSoftObjectPath NameTablePath;                                                   // 0x02E8 (size: 0x20)
//     FSoftObjectPath InteractDialogConfigPath;                                        // 0x0308 (size: 0x20)
//     FSoftObjectPath XinJueConfigPath;                                                // 0x0328 (size: 0x20)
//     FSoftObjectPath XinJueAdditionConfigPath;                                        // 0x0348 (size: 0x20)
//     FSoftObjectPath PlayerInitConfigPath;                                            // 0x0368 (size: 0x20)
//     FSoftObjectPath ItemConfigPath;                                                  // 0x0388 (size: 0x20)
//     FSoftObjectPath ItemAdditionConfigPath;                                          // 0x03A8 (size: 0x20)
//     FSoftObjectPath EquipmentConfigPath;                                             // 0x03C8 (size: 0x20)
//     FSoftObjectPath ForgeCostConfigPath;                                             // 0x03E8 (size: 0x20)
//     FSoftObjectPath SkillTraitPoolTabPath;                                           // 0x0408 (size: 0x20)
//     FSoftObjectPath MaterialItemConfigPath;                                          // 0x0428 (size: 0x20)
//     FSoftObjectPath DropBasicConfigPath;                                             // 0x0448 (size: 0x20)
//     FSoftObjectPath DropPackConfigPath;                                              // 0x0468 (size: 0x20)
//     FSoftObjectPath ConsumeItemConfigPath;                                           // 0x0488 (size: 0x20)
//     FSoftObjectPath DanYaoFormulaItemConfigPath;                                     // 0x04A8 (size: 0x20)
//     FSoftObjectPath SpecialProductItemConfigPath;                                    // 0x04C8 (size: 0x20)
//     FSoftObjectPath XinJueTraitBookItemConfigPath;                                   // 0x04E8 (size: 0x20)
//     FSoftObjectPath StereoToItemConfigPath;                                          // 0x0508 (size: 0x20)
//     FSoftObjectPath DanLuItemConfigPath;                                             // 0x0528 (size: 0x20)
//     FSoftObjectPath SkillInfoConfigPath;                                             // 0x0548 (size: 0x20)
//     FSoftObjectPath BodyMeshConfigPath;                                              // 0x0568 (size: 0x20)
//     FSoftObjectPath BigWorldEffectConfigPath;                                        // 0x0588 (size: 0x20)
//     FSoftObjectPath BigWorldAttributeConfigPath;                                     // 0x05A8 (size: 0x20)
//     FSoftObjectPath RelationshipTypeConfigPath;                                      // 0x05C8 (size: 0x20)
//     FSoftObjectPath AttributeNameConfig;                                             // 0x05E8 (size: 0x20)
//     FSoftObjectPath MonsterInfoConfigPath;                                           // 0x0608 (size: 0x20)
//     FSoftObjectPath MonsterLevelInfoConfigPath;                                      // 0x0628 (size: 0x20)
//     FSoftObjectPath MonsterGroupConfigPath;                                          // 0x0648 (size: 0x20)
//     FSoftObjectPath FixedMonsterSpawnConfigPath;                                     // 0x0668 (size: 0x20)
//     FSoftObjectPath MonsterAIConfigConfigPath;                                       // 0x0688 (size: 0x20)
//     FSoftObjectPath AIStageConfigPath;                                               // 0x06A8 (size: 0x20)
//     FSoftObjectPath SkillTraitTemplatePoolConfigPath;                                // 0x06C8 (size: 0x20)
//     FSoftObjectPath UnusualEffectTemplatePoolConfigPath;                             // 0x06E8 (size: 0x20)
//     FSoftObjectPath PermanentTraitConfigPath;                                        // 0x0708 (size: 0x20)
//     FSoftObjectPath NpcStereoTypeConfigPath;                                         // 0x0728 (size: 0x20)
//     FSoftObjectPath AppearanceConfigPath;                                            // 0x0748 (size: 0x20)
//     FSoftObjectPath AppearanceAdditionConfigPath;                                    // 0x0768 (size: 0x20)
//     FSoftClassPath DefaultNpcBattleCharacterClass;                                   // 0x0788 (size: 0x20)
//     FSoftObjectPath SkyfallRiftConfigPath;                                           // 0x07A8 (size: 0x20)
//     FSoftObjectPath RenderingParameterCollection;                                    // 0x07C8 (size: 0x20)
//     float TickTimeLimited;                                                           // 0x07E8 (size: 0x4)
//     FSoftObjectPath BigWorldMapConfigPath;                                           // 0x07F0 (size: 0x20)
//     bool UnlockIsEnable;                                                             // 0x0810 (size: 0x1)
//     bool bShowLQEffectOnlyEditor;                                                    // 0x0811 (size: 0x1)
//     bool bShowPlayerDamageText;                                                      // 0x0812 (size: 0x1)
//     bool MonsterHpTextVisibility;                                                    // 0x0813 (size: 0x1)
//     bool MonsterHpVisibility;                                                        // 0x0814 (size: 0x1)
//     bool SummonHpVisibility;                                                         // 0x0815 (size: 0x1)
//     FSoftObjectPath GuideConfigPath;                                                 // 0x0818 (size: 0x20)
//     FSoftObjectPath JiYiConfigPath;                                                  // 0x0838 (size: 0x20)
//     FSoftObjectPath JiYiTalentConfigPath;                                            // 0x0858 (size: 0x20)
//     FSoftObjectPath DanYaoConfigPath;                                                // 0x0878 (size: 0x20)
//     FSoftObjectPath FuLuConfigPath;                                                  // 0x0898 (size: 0x20)
//     FSoftObjectPath FuWenConfigPath;                                                 // 0x08B8 (size: 0x20)
//     FSoftObjectPath FuZhiConfigPath;                                                 // 0x08D8 (size: 0x20)
//     FSoftObjectPath DialogueConfigPath;                                              // 0x08F8 (size: 0x20)
//     FSoftObjectPath ReadEventConfigPath;                                             // 0x0918 (size: 0x20)
//     FSoftObjectPath LevelCreateConfigPath;                                           // 0x0938 (size: 0x20)
//     FSoftObjectPath BattleSettlementConfigPath;                                      // 0x0958 (size: 0x20)
//     FSoftObjectPath BattleRoomDataConfigPath;                                        // 0x0978 (size: 0x20)
//     FSoftObjectPath ForgeTemplateConfigPath;                                         // 0x0998 (size: 0x20)
//     FSoftObjectPath AttributeTraitPoolConfigPath;                                    // 0x09B8 (size: 0x20)
//     FSoftObjectPath AttributeTraitTemplateConfigPath;                                // 0x09D8 (size: 0x20)
//     FSoftObjectPath LQTideConfigPath;                                                // 0x09F8 (size: 0x20)
//     FSoftObjectPath EquipGenFixPath;                                                 // 0x0A18 (size: 0x20)
//     FSoftObjectPath BattleDamageTextConfigPath;                                      // 0x0A38 (size: 0x20)
//     FSoftObjectPath SKillAbilitySpecParamEnum;                                       // 0x0A58 (size: 0x20)
//     FSoftObjectPath NpcBuildPropensityConfigPath;                                    // 0x0A78 (size: 0x20)
//     FSoftObjectPath NpcSkillTraitConfigPath;                                         // 0x0A98 (size: 0x20)
//     FSoftObjectPath TraumaTraitConfigPath;                                           // 0x0AB8 (size: 0x20)
//     FSoftObjectPath JingLuoPointConfigPath;                                          // 0x0AD8 (size: 0x20)
//     FSoftObjectPath PointTriatConfigPath;                                            // 0x0AF8 (size: 0x20)
//     FSoftObjectPath UnionPoiConfigPath;                                              // 0x0B18 (size: 0x20)
//     FSoftObjectPath CreatePlayerAttributeConfigPath;                                 // 0x0B38 (size: 0x20)
//     FSoftObjectPath PlayerDisplayAttributeConfigPath;                                // 0x0B58 (size: 0x20)
//     FSoftObjectPath RegionConfigPath;                                                // 0x0B78 (size: 0x20)
//     FSoftObjectPath ChildRegionConfigPath;                                           // 0x0B98 (size: 0x20)
//     FSoftObjectPath NpcStageAttributesConfigPath;                                    // 0x0BB8 (size: 0x20)
//     FSoftObjectPath NpcGrowFixConfigPath;                                            // 0x0BD8 (size: 0x20)
//     FSoftObjectPath NpcExploreDropConfigPath;                                        // 0x0BF8 (size: 0x20)
//     FSoftObjectPath BrightLightCreateConfigPath;                                     // 0x0C18 (size: 0x20)
//     FSoftObjectPath FieldBattleFixedDataPath;                                        // 0x0C38 (size: 0x20)
//     FSoftObjectPath POIBattleFixedDataPath;                                          // 0x0C58 (size: 0x20)
//     FSoftObjectPath POIBattleAdditionalConfigPath;                                   // 0x0C78 (size: 0x20)
//     FSoftObjectPath PoiUIInfoConfigPath;                                             // 0x0C98 (size: 0x20)
//     FSoftObjectPath SkyfallRiftGenerateConfigPath;                                   // 0x0CB8 (size: 0x20)
//     FSoftObjectPath ChaosRiftConfigPath;                                             // 0x0CD8 (size: 0x20)
//     FSoftObjectPath ZongMenGeneralConfigPath;                                        // 0x0CF8 (size: 0x20)
//     FSoftObjectPath JiYiGeneralConfigPath;                                           // 0x0D18 (size: 0x20)
//     FSoftObjectPath GymRoomConfigPath;                                               // 0x0D38 (size: 0x20)
//     FSoftObjectPath LandscapeAreaConfigPath;                                         // 0x0D58 (size: 0x20)
//     FSoftObjectPath LQNiagaraConfigPath;                                             // 0x0D78 (size: 0x20)
//     FSoftObjectPath SpawnerConfigPath;                                               // 0x0D98 (size: 0x20)
//     FSoftObjectPath ReputationConfigPath;                                            // 0x0DB8 (size: 0x20)
//     FSoftObjectPath KnowledgeConfigPath;                                             // 0x0DD8 (size: 0x20)
//     FSoftObjectPath CollectionPoiConfigPath;                                         // 0x0DF8 (size: 0x20)
//     FSoftObjectPath CollectionPoiGeneralConfigPath;                                  // 0x0E18 (size: 0x20)
//     FSoftObjectPath BigWorldGeneralConfigPath;                                       // 0x0E38 (size: 0x20)
//     FSoftObjectPath NpcEventGeneralConfigPath;                                       // 0x0E58 (size: 0x20)
//     FSoftObjectPath NpcEventConfigPath;                                              // 0x0E78 (size: 0x20)
//     FSoftObjectPath HexGridEventConfigPath;                                          // 0x0E98 (size: 0x20)
//     FSoftObjectPath HexGridEventPhaseConfigPath;                                     // 0x0EB8 (size: 0x20)
//     FSoftObjectPath DaoYunConfigPath;                                                // 0x0ED8 (size: 0x20)
//     FSoftObjectPath EmoteAnimationConfigPath;                                        // 0x0EF8 (size: 0x20)
//     FSoftObjectPath MountConfigPath;                                                 // 0x0F18 (size: 0x20)
//     FSoftObjectPath DanJiConfigPath;                                                 // 0x0F38 (size: 0x20)
//     FSoftObjectPath DanYeConfigPath;                                                 // 0x0F58 (size: 0x20)
//     FSoftObjectPath DanQingConfigPath;                                               // 0x0F78 (size: 0x20)
//     FSoftObjectPath JinDanConfigPath;                                                // 0x0F98 (size: 0x20)
//     FSoftObjectPath SuiDanGroupConfigPath;                                           // 0x0FB8 (size: 0x20)
//     FSoftObjectPath JieDanGeneralConfigPath;                                         // 0x0FD8 (size: 0x20)
//     FSoftObjectPath JieYingGeneralConfigPath;                                        // 0x0FF8 (size: 0x20)
//     FSoftObjectPath RegionTypeGeneralConfigPath;                                     // 0x1018 (size: 0x20)
//     FSoftObjectPath PronounPrefixConfigPath;                                         // 0x1038 (size: 0x20)
//     FSoftObjectPath AuctionConfigPath;                                               // 0x1058 (size: 0x20)
//     FSoftObjectPath CityStoneConfigPath;                                             // 0x1078 (size: 0x20)
//     FSoftObjectPath CreatePlayerConfigPath;                                          // 0x1098 (size: 0x20)
//     FSoftObjectPath HospitalConfigPath;                                              // 0x10B8 (size: 0x20)
//     FSoftObjectPath AudioDataConfigPath;                                             // 0x10D8 (size: 0x20)
//     FSoftObjectPath TrainLevelDataConfigPath;                                        // 0x10F8 (size: 0x20)
//     FSoftObjectPath TrainPlayDataConfigPath;                                         // 0x1118 (size: 0x20)
//     FSoftObjectPath InteractionOprateConfigath;                                      // 0x1138 (size: 0x20)
//     FSoftObjectPath HotelDataConfigath;                                              // 0x1158 (size: 0x20)
//     FSoftObjectPath MonsterAffixDataConfigPath;                                      // 0x1178 (size: 0x20)
//     FSoftObjectPath MonsterRandomAffixDataConfigPath;                                // 0x1198 (size: 0x20)
//     FSoftObjectPath WikiConfigPath;                                                  // 0x11B8 (size: 0x20)
//     TMap<class EM_MonsterType, class FLinearColor> JingyingColors;                   // 0x11D8 (size: 0x50)
//     TMap<EM_MonsterType, float> JingyingScaleAdd;                                    // 0x1228 (size: 0x50)
//     TMap<class EM_GAMEDIFFICULTY_LEVEL, class FSoftObjectPath> DifficultyConfigPath; // 0x1278 (size: 0x50)
//     TArray<FSoftClassPath> OverridenSingleAttributeClass;                            // 0x12C8 (size: 0x10)
//     FSoftClassPath NpcEvolveMechanicClass;                                           // 0x12D8 (size: 0x20)
//     FSoftClassPath LuaInstanceClass;                                                 // 0x12F8 (size: 0x20)
//     FSoftClassPath NPCMockBattleInstanceClass;                                       // 0x1318 (size: 0x20)
//     FSoftObjectPath InsightRenderTarget;                                             // 0x1338 (size: 0x20)
//     FSoftObjectPath InsightRenderTargetBlur;                                         // 0x1358 (size: 0x20)
//     FSoftObjectPath InsightRenderTargetBlurMaterial;                                 // 0x1378 (size: 0x20)
//     FVector2D InsightTexRosolution;                                                  // 0x1398 (size: 0x10)
//     FSoftObjectPath GridInfoRTPath;                                                  // 0x13A8 (size: 0x20)
//     FSoftObjectPath GridInfoBlurRTPath;                                              // 0x13C8 (size: 0x20)
//     FSoftObjectPath InvadeGridInfoRTPath;                                            // 0x13E8 (size: 0x20)
//     FSoftObjectPath InvadeGridInfoBlurRTPath;                                        // 0x1408 (size: 0x20)
//     FSoftObjectPath InvadeGridRenderTargetBlurMaterial;                              // 0x1428 (size: 0x20)
//     FSoftObjectPath TempInsightGridInfoRTPath;                                       // 0x1448 (size: 0x20)
//     FSoftObjectPath TempInsightGridInfoBlurRTPath;                                   // 0x1468 (size: 0x20)
//     FSoftObjectPath TempInsightGridRenderTargetBlurMaterial;                         // 0x1488 (size: 0x20)
//     FSoftObjectPath GridInfoBlurSecondRTPath;                                        // 0x14A8 (size: 0x20)
//     FSoftObjectPath GridInfoMatPath;                                                 // 0x14C8 (size: 0x20)
//     FSoftObjectPath QuestBlueprintpathTabPath;                                       // 0x14E8 (size: 0x20)
//     FSoftObjectPath DelegateQuestCreatePath;                                         // 0x1508 (size: 0x20)
//     FSoftObjectPath ZongmenQuestPath;                                                // 0x1528 (size: 0x20)
//     TMap<int32, FGameplayTag> EquiedSkillSlotToGamePlayTag;                          // 0x1548 (size: 0x50)
//     int32 QuestSystemVersion;                                                        // 0x1598 (size: 0x4)
//     float MaxTimeToCacheNextSkill;                                                   // 0x159C (size: 0x4)
//     TMap<class FName, class FSoftObjectPath> SpecSkillMontageTabs;                   // 0x15A0 (size: 0x50)
//     TSoftObjectPtr<UInputMappingContext> KeyMappingContext;                          // 0x15F0 (size: 0x30)
//     FSoftObjectPath EnhanceInputActionNameConfig;                                    // 0x1620 (size: 0x20)
//     FSoftObjectPath InvadePoiCoreFixedConfig;                                        // 0x1640 (size: 0x20)
//     FSoftObjectPath InvadePoiDoorFixedConfig;                                        // 0x1660 (size: 0x20)
//     FSoftObjectPath BattleTriggerConfigData;                                         // 0x1680 (size: 0x20)
//     FSoftObjectPath WorldMoveConfig;                                                 // 0x16A0 (size: 0x20)
//     FSoftObjectPath AttributeNameWithBigWorldAttributeConfig;                        // 0x16C0 (size: 0x20)
//     TMap<class FString, class UClass *> PoiFactoryClass;                             // 0x16E0 (size: 0x50)
//     FKeyResponseStrategy GlobalKeyResponseStrategy;                                  // 0x1730 (size: 0x78)
//     FSoftObjectPath PlayerAttributeConfig;                                           // 0x17A8 (size: 0x20)
//     FSoftObjectPath GameAbilityAIConfig;                                             // 0x17C8 (size: 0x20)
//     FBigWorldMiniMap_IconConfigData PlayerMiniIconInfo;                              // 0x17E8 (size: 0xA0)
//     FBigWorldMiniMap_IconConfigData QuestMiniIconInfo;                               // 0x1888 (size: 0xA0)
//     FBigWorldMiniMap_IconConfigData RiftKnowledgeMiniIconInfo;                       // 0x1928 (size: 0xA0)
//     FSoftObjectPath NPCRelationShipInitConfig;                                       // 0x19C8 (size: 0x20)
//     FSoftObjectPath IrregularTextureInfoDataAsset;                                   // 0x19E8 (size: 0x20)
//     FSoftObjectPath GuidanceDataConfigTab;                                           // 0x1A08 (size: 0x20)
//     FString GameVersion;                                                             // 0x1A28 (size: 0x10)

//     bool GetUnlockIsEnable();
//     int32 GetTotalPhaseByStageLevel(int32 Stage);
//     bool GetSummonHpVisibility();
//     bool GetShowPlayerDamageTextFlag();
//     bool GetShowLQEffectFlag();
//     bool GetMonsterHpVisibility();
//     bool GetMonsterHpTextVisibility();
//     int32 GetMaxStage();
//     class UFNGameProjectSettings *GetGlobalProjectSettings();
//     FSoftObjectPath GetGameDifficultyConfigPath(EM_GAMEDIFFICULTY_LEVEL DifficultyLevel);
//     float GetEvolveTickTimeLimited();
//     TMap<EM_GAMEDIFFICULTY_LEVEL, int32> GetDifficultyUnlockStage();
//     int32 GetDestinyLevelCount();
//     bool CheckStageInfo(int32 Stage, int32 Phase);
// }; // Size: 0x1A38

// class UFNGameRandomSystem : public UGameInstanceSubsystem
// {
//     FRandomStream RandomStream; // 0x0080 (size: 0x8)

//     void ReleaseSeprateRandom(FName SectionName);
//     void ReleaseNormalDistribution(FName KeyName);
//     void InitNormalDistribution(FName KeyName, float Seed, float Mean, float Sigma);
//     TArray<int32> GetWeightRandomNum(TArray<int32> TargetArray, TArray<int32> Weighet, int32 RandomNum, bool bNotRepeat);
//     FRandomStream GetSeprateRandom(FName SectionName);
//     bool GetNormalDistributionValue(FName KeyName, float &OutRes);
// }; // Size: 0xE0

// class UFNGameSettingBaseWidget : public UCommonActivatableWidget
// {
//     class UGameSettingVisualData *VisualData;              // 0x03C8 (size: 0x8)
//     FDataTableRowHandle BackInputActionData;               // 0x0430 (size: 0x10)
//     FDataTableRowHandle ApplyInputActionData;              // 0x0440 (size: 0x10)
//     FDataTableRowHandle CancelChangesInputActionData;      // 0x0450 (size: 0x10)
//     EFNGameWidgetInputMode InputConfig;                    // 0x046C (size: 0x1)
//     class UGameSettingRegistry *Registry;                  // 0x0470 (size: 0x8)
//     TArray<class UGameSetting *> VisibleSettings;          // 0x0478 (size: 0x10)
//     FGameSettingFilterState FilterState;                   // 0x0488 (size: 0x3B8)
//     TArray<FGameSettingFilterState> FilterNavigationStack; // 0x0840 (size: 0x10)

//     void ResetAllKeyBinding(FName NewKeyName);
//     void RefreshGameSettingWidget();
//     void OnSettingsDirtyStateChanged(bool bSettingsDirty);
//     void NavigateToSettings(const TArray<FName> &SettingDevNames);
//     bool HaveSettingsBeenChanged();
//     TArray<class UGameSetting *> GetVisibleSettings();
//     class UGameSettingCollection *GetSettingCollection(FName SettingDevName, bool &HasAnySettings);
//     class UWidget *CreateListItemBySettingItem(class UObject *Item);
//     bool ChangeKBMBinding(class UGameSetting *GameSetting, FName NewKeyName);
//     void CancelSingleChanges(class UGameSettingValue *Setting);
//     void CancelChanges();
//     bool AttemptToPopNavigation();
//     void ApplyChanges();
// }; // Size: 0x860

// class UFNGameSettingRegistry : public UGameSettingRegistry
// {
//     class UGameSettingCollection *VideoSettings;            // 0x00B0 (size: 0x8)
//     class UGameSettingCollection *AudioSettings;            // 0x00B8 (size: 0x8)
//     class UGameSettingCollection *GameplaySettings;         // 0x00C0 (size: 0x8)
//     class UGameSettingCollection *MouseAndKeyboardSettings; // 0x00C8 (size: 0x8)
//     class UGameSettingCollection *GamepadSettings;          // 0x00D0 (size: 0x8)

// }; // Size: 0xD8

// class UFNGameSettingScreenWidget : public UGameSettingScreen
// {
//     class UGameTabListWidgetBase *TopSettingsTabs;    // 0x0438 (size: 0x8)
//     FDataTableRowHandle BackInputActionData;          // 0x0440 (size: 0x10)
//     FDataTableRowHandle ApplyInputActionData;         // 0x0450 (size: 0x10)
//     FDataTableRowHandle CancelChangesInputActionData; // 0x0460 (size: 0x10)

// }; // Size: 0x480

// class UFNGameSingleton : public UObject
// {
//     TArray<class UFNSingleAttribute *> ArrayAttributes; // 0x0028 (size: 0x10)

// }; // Size: 0x40

// class UFNGameTaskBase : public UGameplayTask
// {
// }; // Size: 0x68

// class UFNGameUserSettings : public UGameUserSettings
// {
//     TMap<class EGameDisplayablePerformanceStat, class EGameStatDisplayMode> DisplayStatList; // 0x0150 (size: 0x50)
//     float DisplayGamma;                                                                      // 0x01B8 (size: 0x4)
//     float FrameRateLimit_OnBattery;                                                          // 0x01BC (size: 0x4)
//     float FrameRateLimit_InMenu;                                                             // 0x01C0 (size: 0x4)
//     float FrameRateLimit_WhenBackgrounded;                                                   // 0x01C4 (size: 0x4)
//     FString DesiredUserChosenDeviceProfileSuffix;                                            // 0x01C8 (size: 0x10)
//     FString CurrentAppliedDeviceProfileOverrideSuffix;                                       // 0x01D8 (size: 0x10)
//     FString UserChosenDeviceProfileSuffix;                                                   // 0x01E8 (size: 0x10)
//     bool bDesiredHeadphoneMode;                                                              // 0x0210 (size: 0x1)
//     bool bUseHeadphoneMode;                                                                  // 0x0211 (size: 0x1)
//     bool bUseHDRAudioMode;                                                                   // 0x0212 (size: 0x1)
//     FString AudioOutputDeviceId;                                                             // 0x0218 (size: 0x10)
//     float OverallVolume;                                                                     // 0x0270 (size: 0x4)
//     float MusicVolume;                                                                       // 0x0274 (size: 0x4)
//     float SoundFXVolume;                                                                     // 0x0278 (size: 0x4)
//     float DialogueVolume;                                                                    // 0x027C (size: 0x4)
//     float VoiceChatVolume;                                                                   // 0x0280 (size: 0x4)
//     TMap<class FName, class USoundControlBus *> ControlBusMap;                               // 0x0288 (size: 0x50)
//     class USoundControlBusMix *ControlBusMix;                                                // 0x02D8 (size: 0x8)
//     bool bSoundControlBusMixLoaded;                                                          // 0x02E0 (size: 0x1)
//     float SafeZoneScale;                                                                     // 0x02E4 (size: 0x4)
//     FName ControllerPlatform;                                                                // 0x02E8 (size: 0x8)
//     FName ControllerPreset;                                                                  // 0x02F0 (size: 0x8)
//     TArray<FLoadedMappableConfigPair> RegisteredInputConfigs;                                // 0x02F8 (size: 0x10)
//     TMap<class FName, class FKey> CustomKeyboardConfig;                                      // 0x0308 (size: 0x50)
//     int32 AutoSaveGameInterval;                                                              // 0x0360 (size: 0x4)
//     int32 AutoSaveGameNum;                                                                   // 0x0364 (size: 0x4)
//     bool AutoSaveEnable;                                                                     // 0x0368 (size: 0x1)
//     bool HealthRecoverEnable;                                                                // 0x0369 (size: 0x1)
//     bool ManaRecoverEnable;                                                                  // 0x036A (size: 0x1)
//     bool SkillShakeEnable;                                                                   // 0x036B (size: 0x1)

//     void SetVoiceChatVolume(float InVolume);
//     void SetSoundFXVolume(float InVolume);
//     void SetSkillShakeEnable(bool bEnable);
//     void SetSafeZone(float Value);
//     void SetOverallVolume(float InVolume);
//     void SetMusicVolume(float InVolume);
//     void SetManaRecoverEnableDefault(bool bEnable);
//     void SetHealthRecoverEnableDefault(bool bEnable);
//     void SetHeadphoneModeEnabled(bool bEnabled);
//     void SetHDRAudioModeEnabled(bool bEnabled);
//     void SetFrameRateLimit_WhenBackgrounded(float NewLimitFPS);
//     void SetFrameRateLimit_OnBattery(float NewLimitFPS);
//     void SetFrameRateLimit_InMenu(float NewLimitFPS);
//     void SetFrameRateLimit_Always(float NewLimitFPS);
//     void SetDisplayGamma(float InGamma);
//     void SetDialogueVolume(float InVolume);
//     void SetDesiredDeviceProfileQualitySuffix(FString InDesiredSuffix);
//     void SetControllerPlatform(const FName InControllerPlatform);
//     void SetAutoSaveGameNum(int32 Num);
//     void SetAutoSaveGameInterval(int32 InInterval);
//     void SetAutoSaveEnable(bool bEnable);
//     void SetAudioOutputDeviceId(FString InAudioOutputDeviceId);
//     bool IsSafeZoneSet();
//     bool IsHeadphoneModeEnabled();
//     bool IsHDRAudioModeEnabled();
//     float GetVoiceChatVolume();
//     float GetSoundFXVolume();
//     bool GetSkillShakeEnable();
//     float GetSafeZone();
//     float GetOverallVolume();
//     float GetMusicVolume();
//     bool GetManaRecoverEnableDefault();
//     class UPlayerMappableInputConfig *GetInputConfigByName(FName ConfigName);
//     bool GetHealthRecoverEnableDefault();
//     float GetFrameRateLimit_WhenBackgrounded();
//     float GetFrameRateLimit_OnBattery();
//     float GetFrameRateLimit_InMenu();
//     float GetFrameRateLimit_Always();
//     float GetDisplayGamma();
//     float GetDialogueVolume();
//     FString GetDesiredDeviceProfileQualitySuffix();
//     FName GetControllerPlatform();
//     int32 GetAutoSaveGameNum();
//     int32 GetAutoSaveGameInterval();
//     bool GetAutoSaveEnable();
//     FString GetAudioOutputDeviceId();
//     class UFNGameUserSettings *Get();
//     void ChangeAcionBindingKey(class ULocalPlayer *Player, FName ActionName, FName KeyName);
//     bool CanModifyHeadphoneModeEnabled();
// }; // Size: 0x370

// class UFNGameViewPort : public UCommonGameViewportClient
// {
// }; // Size: 0x3E0

// class UFNKeyAlreadyBoundWarning : public UGameSettingPressAnyKey
// {
//     class UTextBlock *WarningText; // 0x0410 (size: 0x8)
//     class UTextBlock *CancelText;  // 0x0418 (size: 0x8)

//     void UpdateBoundedKeyInfo(FString ActionNames, FString NewKeyName);
// }; // Size: 0x420

// class UFNLuaInstance : public UFNSingleAttribute
// {
//     class UObject *GlobalLuaConfigVar; // 0x0040 (size: 0x8)

//     void StartGameInstance(bool bEditorVerson);
//     void ResetGameData();
//     void PostStartGameInstance();
//     void LuaTick(float DeltaTime);
//     void InitRandomSeed(int32 Seed);
//     void ActiveUIEvent(ENUM_CALLUIEVNET nEventID, FString StrParames);
//     void ActiveAttributeUIEvent(ENUM_CALLUIEVNET nEventID, const FName AttributeName, int32 OldValue, int32 NewValue, int32 UserID);
// }; // Size: 0x50

// class UFNMontageManger : public UFNSingleAttribute
// {
//     class UDataTable *ConfigSkillData;                                         // 0x0038 (size: 0x8)
//     TArray<class UDataTable *> SpecMontageConfigs;                             // 0x0040 (size: 0x10)
//     TMap<class FSkillTabKey, class FSkillDataInfo> MapSkillnameToMontage;      // 0x0050 (size: 0x50)
//     FSoftClassPath SoftAnimNotifyClass;                                        // 0x00F0 (size: 0x20)
//     UClass *AbilityAnimNotifyClass;                                            // 0x0110 (size: 0x8)
//     FGameplayTag SkillPostCastEndTag;                                          // 0x0118 (size: 0x8)
//     FGameplayTag SkillPreCastStartTag;                                         // 0x0120 (size: 0x8)
//     FGameplayTag CommonUseSkillTag;                                            // 0x0128 (size: 0x8)
//     TMap<class FSoftObjectPath, class FSoftObjectPath> SynchronizationSkeMesh; // 0x0130 (size: 0x50)

//     void UpdateMontageCastTime(class UObject *WorldObject);
//     class UAnimMontage *GetSkillMontage(const FSkillTabKey &SkillTabKey);
//     class UAnimMontage *GetSkillChargeMontage(const FSkillTabKey &SkillTabKey);
// }; // Size: 0x180

// class UFNSingleAttribute : public UObject
// {
//     class UFNGameInstance *GameInstance; // 0x0028 (size: 0x8)

// }; // Size: 0x38

// class UFNTurnBaseSubsystem : public UFNSingleAttribute
// {
//     int32 TotalStepsOnTurn;                                        // 0x0040 (size: 0x4)
//     int32 QuickStep;                                               // 0x0044 (size: 0x4)
//     int32 QuickStepCount;                                          // 0x0048 (size: 0x4)
//     int32 ConsumeQuickStep;                                        // 0x004C (size: 0x4)
//     FFNTurnBaseSubsystemDelegateBaseNextTurn DelegateBaseNextTurn; // 0x0050 (size: 0x10)
//     void TurnBaseNextTurn(int32 TurnCount);
//     FFNTurnBaseSubsystemDelegateBaseConsumeStep DelegateBaseConsumeStep; // 0x0060 (size: 0x10)
//     void TurnBaseConsumeStep(bool bEnoughTime, bool bNeedPassTurn);
//     FFNTurnBaseSubsystemDelegatePlayerStartMove DelegatePlayerStartMove; // 0x0070 (size: 0x10)
//     void PlayeyStartMove(const FIntPoint &LastPoint, const FIntPoint &CurPoint);
//     FFNTurnBaseSubsystemDelegatePlayerEndMove DelegatePlayerEndMove; // 0x0080 (size: 0x10)
//     void PlayeyEndMove(const FIntPoint &LastPoint, const FIntPoint &CurPont);
//     FFNTurnBaseSubsystemDelegatePlayerStopMove DelegatePlayerStopMove; // 0x0090 (size: 0x10)
//     void PlayerStopMove();
//     FFNTurnBaseSubsystemDelegatePlayerStageLimitMoveToChildRegion DelegatePlayerStageLimitMoveToChildRegion; // 0x00A0 (size: 0x10)
//     void PlayerStageLimitMoveToChildRegion(int32 ChildRegionID);
//     int32 RemainStepCount; // 0x00B0 (size: 0x4)
//     int32 TotalTurnCount;  // 0x00B4 (size: 0x4)

//     void TurnBaseNextTurn__DelegateSignature(int32 TurnCount);
//     void TurnBaseConsumeStep__DelegateSignature(bool bEnoughTime, bool bNeedPassTurn);
//     void SetTurnBaseState(ETurnBaseState BaseState);
//     void PlayeyStartMove__DelegateSignature(const FIntPoint &LastPoint, const FIntPoint &CurPoint);
//     void PlayeyEndMove__DelegateSignature(const FIntPoint &LastPoint, const FIntPoint &CurPont);
//     void PlayerStopMove__DelegateSignature();
//     void PlayerStageLimitMoveToChildRegion__DelegateSignature(int32 ChildRegionID);
//     void NextTurn();
//     ETurnBaseState GetTurnBaseState();
//     int32 GetTotalTurnCount();
//     int32 GetRemainStepCount();
//     int32 ConsumeStepCountEx(int32 Steps);
//     int32 ConsumeStepCount(int32 Steps, bool bForceConsume);
// }; // Size: 0xC0

// class UFavorRecord : public ULifeRecordEntityBase
// {
//     int32 ActionID;  // 0x0030 (size: 0x4)
//     int32 TargetId;  // 0x0034 (size: 0x4)
//     uint8 IsFavorUP; // 0x0038 (size: 0x1)

//     void AddRecordByFavor(class UObject *WorldObject, int32 UesrID, int32 TargetUserID, bool IsUp);
// }; // Size: 0x40

// class UFeiqiPoiDongfu : public UPoibase
// {
// }; // Size: 0x170

// class UFieldBattle : public UPoibase
// {
//     int32 FieldBattleID;               // 0x0170 (size: 0x4)
//     EShowBattleType ShowBattleType;    // 0x0174 (size: 0x1)
//     int32 BattleDifficulty;            // 0x0178 (size: 0x4)
//     int32 Level;                       // 0x017C (size: 0x4)
//     int32 StartTurn;                   // 0x0180 (size: 0x4)
//     bool IsFixed;                      // 0x0184 (size: 0x1)
//     bool MoveTowardPoi;                // 0x0185 (size: 0x1)
//     FVector ModelScale;                // 0x0190 (size: 0x18)
//     int32 PlayerStageDuringGeneration; // 0x01A8 (size: 0x4)
//     bool DifficultyCoverLevel;         // 0x01AC (size: 0x1)

// }; // Size: 0x1B0

// class UFieldBattleGenConfig : public UPoiGenConifg
// {
// }; // Size: 0x160

// class UFieldBattleManger : public UFNBigWorldSubSystem
// {
//     FFieldBattleMangerBrightLightVictoryDelegate BrightLightVictoryDelegate; // 0x0040 (size: 0x10)
//     void BrightLightVictoryDelegate(int32 CellID);
//     TArray<class UFieldBattle *> AllFieldBattle;                       // 0x0050 (size: 0x10)
//     TMap<int32, FBrightLightPointInfo> BrightLightPointInfoMap;        // 0x0060 (size: 0x50)
//     TMap<int32, FBattlePoiPointInfo> BattlePoiPointInfoMap_YZCX;       // 0x00B0 (size: 0x50)
//     TMap<int32, FBattlePoiPointInfo> BattlePoiPointInfoMap_YDDJ;       // 0x0100 (size: 0x50)
//     TMap<int32, FBattlePoiPointInfo> BattlePoiPointInfoMap_FQZF;       // 0x0150 (size: 0x50)
//     class UBattlePOIAdditionalConfig *m_POIBattleAdditionalConfigData; // 0x01A0 (size: 0x8)

//     void RemoveFieldBattle(int32 CellID);
//     void OnPlayerEndMove(const FIntPoint &LastPos, const FIntPoint &CurPos);
//     void MoveToTriggerBattle(int32 CellID, int32 Level);
//     FEnttIndex GenerateFieldBattle(EShowBattleType ShowBattleType, int32 BattleDifficulty, int32 CellID, EDaoYunType DaoYun, bool DifficultyCoverLevel);
//     void ForceEditBattlePoiLifeTime(FEnttIndex EnttIndex, int32 LifeTurn);
//     void FieldBattleVictory(class UFieldBattle *FieldBattle);
// }; // Size: 0x1A8

// class UFieldBattleRecord : public ULifeRecordEntityBase
// {
//     uint8 FieldBattleType; // 0x0030 (size: 0x1)
//     int32 CellID;          // 0x0034 (size: 0x4)

//     void AddRecordByFieldBattle(class UObject *WorldObject, int32 UesrID, int32 FieldBattleCellID, EShowBattleType BattleType);
// }; // Size: 0x38

// class UFieldBattleSettlementInfo : public UBattleSettlementsBase
// {
//     class UFieldBattle *FieldBattle; // 0x0458 (size: 0x8)

// }; // Size: 0x460

// class UFixedLevelHexDataConfig : public UDataAsset
// {
//     TMap<class FIntPoint, class FHexGridFixedData> HexGridFixedDataMap; // 0x0030 (size: 0x50)
//     FHexFixedGenParamers FixedGenParamers;                              // 0x0080 (size: 0x80)
//     FPreFixedPoiConfigs PreFixedPoiConfigs;                             // 0x0100 (size: 0x50)

// }; // Size: 0x150

// class UForceDeathAbility : public USkillGameplayAbility
// {

//     bool ApplyForceToDeath(class UAbilitySystemComponent *SourceAbilitySystem, const class AActor *TargetActor, const class UGameplayAbility *Ability);
// }; // Size: 0x6F0

// class UFuLuItem : public UConsumeItem
// {
//     TMap<FName, int32> FuWenList; // 0x0050 (size: 0x50)
//     TArray<int32> MakeProcess;    // 0x00A0 (size: 0x10)

//     bool UseItemInBigWorld(int32 CharacterID);
//     bool UseFuLuItem(int32 CharacterID);
//     void AddFuWenListItem(FName FuWenListKey, int32 FuWenID);
// }; // Size: 0xB0

// class UFuLuItemCreator : public UItemCreatorBase
// {
// }; // Size: 0x30

// class UFuLuManager : public UFNSingleAttribute
// {

//     TArray<int32> GetPlayerLearnFuLu(int32 UserID);
//     int32 GetPlayerFuLuPartNum(int32 FuLuPartID);
//     FFuZhiInfo GetFuZhiConfig(int32 FuZhiID);
//     FFuWenInfo GetFuWenConfig(int32 FuWenID);
//     TArray<int32> GetFuLuRewardItem(int32 FuLuPartID);
//     FFuLuConfig GetFuLuConfig(int32 FuLuID);
//     void AddPlayerLearnFuLu(int32 UserID, int32 FuLuID);
//     void AddPlayerFuLuPart(int32 FuLuPartID, int32 Num, int32 UserID);
// }; // Size: 0x130

// class UFuWenSkillGameplayAbility : public USkillGameplayAbility
// {
//     TMap<FName, int32> FuWenArray; // 0x06F0 (size: 0x50)

//     bool ActiveSkillByFuWen(int32 FuWenID);
// }; // Size: 0x748

// class UFuluUseObject : public UObject
// {

//     void Script_UseFuluEffect(class UItemBase *Item, int32 UserID);
//     bool Script_CheckUse(class UItemBase *Item, int32 UserID);
// }; // Size: 0x30

// class UGameActionWidget : public UCommonActionWidget
// {
//     class UInputAction *AssociatedInputAction; // 0x0448 (size: 0x8)

// }; // Size: 0x450

// class UGameActivatableWidget : public UCommonActivatableWidget
// {
//     EGameWidgetInputMode InputConfig;       // 0x03C8 (size: 0x1)
//     EMouseCaptureMode GameMouseCaptureMode; // 0x03C9 (size: 0x1)

// }; // Size: 0x3D0

// class UGameAudioSettings : public UDeveloperSettings
// {
//     FSoftObjectPath DefaultControlBusMix;                        // 0x0038 (size: 0x20)
//     FSoftObjectPath LoadingScreenControlBusMix;                  // 0x0058 (size: 0x20)
//     FSoftObjectPath UserSettingsControlBusMix;                   // 0x0078 (size: 0x20)
//     FSoftObjectPath OverallVolumeControlBus;                     // 0x0098 (size: 0x20)
//     FSoftObjectPath MusicVolumeControlBus;                       // 0x00B8 (size: 0x20)
//     FSoftObjectPath SoundFXVolumeControlBus;                     // 0x00D8 (size: 0x20)
//     FSoftObjectPath DialogueVolumeControlBus;                    // 0x00F8 (size: 0x20)
//     FSoftObjectPath VoiceChatVolumeControlBus;                   // 0x0118 (size: 0x20)
//     TArray<FGameSubmixEffectChainMap> HDRAudioSubmixEffectChain; // 0x0138 (size: 0x10)
//     TArray<FGameSubmixEffectChainMap> LDRAudioSubmixEffectChain; // 0x0148 (size: 0x10)

// }; // Size: 0x158

// class UGameBoundActionButton : public UCommonBoundActionButton
// {
//     TSubclassOf<class UCommonButtonStyle> KeyboardStyle; // 0x1508 (size: 0x8)
//     TSubclassOf<class UCommonButtonStyle> GamepadStyle;  // 0x1510 (size: 0x8)
//     TSubclassOf<class UCommonButtonStyle> TouchStyle;    // 0x1518 (size: 0x8)

// }; // Size: 0x1520

// class UGameBrightnessEditor : public UCommonActivatableWidget
// {
//     bool bCanCancel;                                 // 0x03E8 (size: 0x1)
//     class UWidgetSwitcher *Switcher_SafeZoneMessage; // 0x03F8 (size: 0x8)
//     class UCommonRichTextBlock *RichText_Default;    // 0x0400 (size: 0x8)
//     class UCommonButtonBase *Button_Back;            // 0x0408 (size: 0x8)
//     class UCommonButtonBase *Button_Done;            // 0x0410 (size: 0x8)

//     void HandleDoneClicked();
//     void HandleBackClicked();
// }; // Size: 0x418

// class UGameButtonBase : public UCommonButtonBase
// {
//     uint8 bOverride_ButtonText; // 0x14F0 (size: 0x1)
//     FText ButtonText;           // 0x14F8 (size: 0x18)

//     void UpdateButtonText(const FText &InText);
//     void UpdateButtonStyle();
//     void SetButtonText(const FText &InText);
// }; // Size: 0x1510

// class UGameControllerDisconnectedScreen : public UCommonActivatableWidget
// {
//     class UHorizontalBox *HBox_SwitchUser; // 0x03C8 (size: 0x8)

// }; // Size: 0x3D0

// class UGameInputConfig : public UDataAsset
// {
//     TMap<class FName, class FGameInputActionDesc> ActionInputs; // 0x0030 (size: 0x50)

// }; // Size: 0x80

// class UGameInteractionCpt : public UFNGameCpt
// {
//     EOutLineType HoverOutLineType; // 0x00A8 (size: 0x1)

// }; // Size: 0xB0

// class UGameListView : public UCommonListView
// {
//     TArray<class UGameWidgetFactory *> FactoryRules; // 0x0C20 (size: 0x10)

// }; // Size: 0xC30

// class UGameLocalPlayer : public UCommonLocalPlayer
// {

//     class UFNGameUserSettings *GetLocalSettings();
// }; // Size: 0x2E8

// class UGameMechaincBase : public UObject
// {
// }; // Size: 0x28

// class UGameMechaincUtility : public UObject
// {
// }; // Size: 0x28

// class UGameMsgNotifyBase : public URuntimeSerializeObjectBase
// {
//     uint8 bNotifyTypeA;                                                          // 0x0028 (size: 0x1)
//     uint8 bNotifyTypeB;                                                          // 0x0028 (size: 0x1)
//     uint8 bNotifyTypeC;                                                          // 0x0028 (size: 0x1)
//     uint8 bNotifyInWorldThread;                                                  // 0x0028 (size: 0x1)
//     uint8 bMergeWhenLargerNumNotify;                                             // 0x0028 (size: 0x1)
//     uint8 bMonitorWorldAttributeChange;                                          // 0x0028 (size: 0x1)
//     uint8 bMsgSaveGame;                                                          // 0x0028 (size: 0x1)
//     TArray<FBigWorldAttributeName> IncludeAttribute;                             // 0x0030 (size: 0x10)
//     TArray<FName> AttributeNames;                                                // 0x0040 (size: 0x10)
//     int32 GenerateTurn;                                                          // 0x0050 (size: 0x4)
//     class UFNGameInstance *GameInstance;                                         // 0x0058 (size: 0x8)
//     TArray<FNotifyMsg_BigWorldAttributeChangeInfo> BigWorldAttributeChangeInfos; // 0x0060 (size: 0x10)

//     void Script_ResetMessageData();
//     FString GetMessageContext_TypeC(class UGameInstance *InGameInstance);
//     FString GetMessageContext_TypeB(class UGameInstance *InGameInstance);
//     FString GetMessageContext(class UGameInstance *InGameInstance);
// }; // Size: 0x70

// class UGameNiagaraEffectNotify : public UAnimNotify_PlayNiagaraEffect
// {
//     TMap<class FName, class bool> BoolParamers;          // 0x00D0 (size: 0x50)
//     TMap<FName, int32> IntParamers;                      // 0x0120 (size: 0x50)
//     TMap<class FName, class FVector> VectorParamers;     // 0x0170 (size: 0x50)
//     TMap<FName, float> floatParamers;                    // 0x01C0 (size: 0x50)
//     TMap<class FName, class FLinearColor> ColorParamers; // 0x0210 (size: 0x50)
//     uint8 bDestroyWithMontageEnd;                        // 0x0260 (size: 0x1)

// }; // Size: 0x270

// class UGamePerfStatContainerBase : public UCommonUserWidget
// {
//     EGameStatDisplayMode StatDisplayModeFilter; // 0x02A0 (size: 0x1)

//     void UpdateVisibilityOfChildren();
// }; // Size: 0x2A8

// class UGamePerfStatWidgetBase : public UCommonUserWidget
// {
//     class UGamePerformanceStatSubsystem *CachedStatSubsystem; // 0x02A0 (size: 0x8)
//     EGameDisplayablePerformanceStat StatToDisplay;            // 0x02A8 (size: 0x1)

//     EGameDisplayablePerformanceStat GetStatToDisplay();
//     double FetchStatValue();
// }; // Size: 0x2B0

// class UGamePerformanceSettings : public UDeveloperSettingsBackedByCVars
// {
//     FPerPlatformSettings PerPlatformSettings;                     // 0x0038 (size: 0x10)
//     TArray<int32> DesktopFrameRateLimits;                         // 0x0048 (size: 0x10)
//     TArray<FGamePerformanceStatGroup> UserFacingPerformanceStats; // 0x0058 (size: 0x10)

// }; // Size: 0x68

// class UGamePerformanceStatSubsystem : public UGameInstanceSubsystem
// {

//     double GetCachedStat(EGameDisplayablePerformanceStat Stat);
// }; // Size: 0x40

// class UGamePlatformSpecificRenderingSettings : public UPlatformSettings
// {
//     FString DefaultDeviceProfileSuffix;                                      // 0x0040 (size: 0x10)
//     TArray<FGameQualityDeviceProfileVariant> UserFacingDeviceProfileOptions; // 0x0050 (size: 0x10)
//     bool bSupportsGranularVideoQualitySettings;                              // 0x0060 (size: 0x1)
//     bool bSupportsAutomaticVideoQualityBenchmark;                            // 0x0061 (size: 0x1)
//     EGameFramePacingMode FramePacingMode;                                    // 0x0062 (size: 0x1)
//     TArray<int32> MobileFrameRateLimits;                                     // 0x0068 (size: 0x10)

// }; // Size: 0x78

// class UGameRegistry : public UFNSingleAttribute
// {

//     FCommonEcsSaveEntityIndex UpdateCommonSaveEntity(class UObject *WorldObject, const FCommonEcsSaveEntityIndex &CommonEntityIndex);
//     int32 Script_EntityToNum(const FEnttIndex &Entity);
// }; // Size: 0x38

// class UGameSafeZoneEditor : public UCommonActivatableWidget
// {
//     bool bCanCancel;                                 // 0x03E8 (size: 0x1)
//     class UWidgetSwitcher *Switcher_SafeZoneMessage; // 0x03F8 (size: 0x8)
//     class UCommonRichTextBlock *RichText_Default;    // 0x0400 (size: 0x8)
//     class UCommonButtonBase *Button_Back;            // 0x0408 (size: 0x8)
//     class UCommonButtonBase *Button_Done;            // 0x0410 (size: 0x8)

//     void HandleDoneClicked();
//     void HandleBackClicked();
// }; // Size: 0x418

// class UGameSettingAction_SafeZoneEditor : public UGameSettingAction
// {
//     class UGameSettingValueScalarDynamic_SafeZoneValue *SafeZoneValueSetting; // 0x01B8 (size: 0x8)

// }; // Size: 0x1C0

// class UGameSettingBasedScalar : public UInputModifier
// {
//     FName XAxisScalarSettingName; // 0x0028 (size: 0x8)
//     FName YAxisScalarSettingName; // 0x0030 (size: 0x8)
//     FName ZAxisScalarSettingName; // 0x0038 (size: 0x8)
//     FVector MaxValueClamp;        // 0x0040 (size: 0x18)
//     FVector MinValueClamp;        // 0x0058 (size: 0x18)

// }; // Size: 0x80

// class UGameSettingKeyboardInput : public UGameSettingValue
// {

//     FText GetSecondaryKeyText();
//     FText GetPrimaryKeyText();
// }; // Size: 0x170

// class UGameSettingListEntrySetting_Bool : public UGameSettingListEntry_Setting
// {
//     class UGameSettingValueDiscreteDynamic_Bool *BoolSetting; // 0x02E0 (size: 0x8)
//     class UCheckBox *CheckBox_Value;                          // 0x02E8 (size: 0x8)

//     void HandleCheckStateChange(bool bCheck);
// }; // Size: 0x2F0

// class UGameSettingListEntry_ComboBoxList : public UGameSettingListEntry_Setting
// {
//     int32 SelectedIndex;                              // 0x02E0 (size: 0x4)
//     class UGameSettingValueDiscrete *DiscreteSetting; // 0x02E8 (size: 0x8)
//     TArray<FText> AllOptions;                         // 0x02F0 (size: 0x10)
//     class UPanelWidget *Panel_Value;                  // 0x0300 (size: 0x8)
//     class UGameButtonBase *Button_ShowOptions;        // 0x0308 (size: 0x8)

//     void UpdateOptionList();
//     void ScriptSettingSelectedNotify();
//     void RegisterListButton(class UCommonButtonBase *ButtonBase, int32 Index);
//     void Refresh();
//     TArray<FText> GetAllOptionsList();
// }; // Size: 0x310

// class UGameSettingValueDiscreteDynamic_AudioOutputDevice : public UGameSettingValueDiscreteDynamic
// {

//     void OnCompletedDeviceSwap(const FSwapAudioOutputResult &SwapResult);
//     void OnAudioOutputDevicesObtained(const TArray<FAudioOutputDeviceInfo> &AvailableDevices);
//     void DeviceAddedOrRemoved(FString DeviceID);
//     void DefaultDeviceChanged(EAudioDeviceChangedRole InRole, FString DeviceID);
// }; // Size: 0x228

// class UGameSettingValueDiscrete_OverallQuality : public UGameSettingValueDiscrete
// {
// }; // Size: 0x188

// class UGameSettingValueDiscrete_PerfStat : public UGameSettingValueDiscrete
// {
// }; // Size: 0x190

// class UGameSettingValueDiscrete_Resolution : public UGameSettingValueDiscrete
// {
// }; // Size: 0x1B0

// class UGameSettingValueScalarDynamic_SafeZoneValue : public UGameSettingValueScalarDynamic
// {
// }; // Size: 0x230

// class UGameSettingsListEntrySetting_KeyboardInput : public UGameSettingListEntry_Setting
// {
//     FKey OriginalKeyToBind;                                                        // 0x02E0 (size: 0x18)
//     class UGameSettingKeyboardInput *KeyboardInputSetting;                         // 0x02F8 (size: 0x8)
//     TSubclassOf<class UGameSettingPressAnyKey> PressAnyKeyPanelClass;              // 0x0300 (size: 0x8)
//     TSubclassOf<class UFNKeyAlreadyBoundWarning> KeyAlreadyBoundWarningPanelClass; // 0x0308 (size: 0x8)
//     class UGameButtonBase *Button_PrimaryKey;                                      // 0x0310 (size: 0x8)
//     class UGameButtonBase *Button_Clear;                                           // 0x0318 (size: 0x8)

//     void ScriptSettingChange(bool bCancel);
//     TArray<FName> GetActionNamesByCategory(FString ActionName);
// }; // Size: 0x320

// class UGameTabButtonBase : public UGameButtonBase
// {
//     class UCommonLazyImage *LazyImage_Icon; // 0x1518 (size: 0x8)

//     void SetTabLabelInfo_Implementation(const FGameTabDescriptor &TabLabelInfo);
// }; // Size: 0x1520

// class UGameTabListWidgetBase : public UCommonTabListWidgetBase
// {
//     FGameTabListWidgetBaseOnTabContentCreated OnTabContentCreated; // 0x0388 (size: 0x10)
//     void OnTabContentCreated(FName TabId, class UCommonUserWidget *TabWidget);
//     TArray<FGameTabDescriptor> PreregisteredTabInfoArray;               // 0x03B0 (size: 0x10)
//     TMap<class FName, class FGameTabDescriptor> PendingTabLabelInfoMap; // 0x03C0 (size: 0x50)

//     void SetTabHiddenState(FName TabNameID, bool bHidden);
//     bool RegisterDynamicTab(const FGameTabDescriptor &TabDescriptor);
//     void OnTabContentCreated__DelegateSignature(FName TabId, class UCommonUserWidget *TabWidget);
//     bool IsTabVisible(FName TabId);
//     bool IsLastTabActive();
//     bool IsFirstTabActive();
//     int32 GetVisibleTabCount();
//     bool GetPreregisteredTabInfo(const FName TabNameID, FGameTabDescriptor &OutTabInfo);
// }; // Size: 0x410

// class UGameWidgetFactory : public UObject
// {

//     TSubclassOf<class UUserWidget> FindWidgetClassForData(const class UObject *Data);
// }; // Size: 0x28

// class UGameWidgetFactory_Class : public UGameWidgetFactory
// {
//     TMap<class TSoftClassPtr<UObject>, class TSubclassOf<UUserWidget>> EntryWidgetForClass; // 0x0028 (size: 0x50)

// }; // Size: 0x78

// class UGasCustomEffectbase : public UObject
// {
//     bool NeedTickable;                    // 0x0028 (size: 0x1)
//     bool bStackable;                      // 0x0029 (size: 0x1)
//     class UGameplayEffect *ResGameEffect; // 0x0030 (size: 0x8)

//     float GetFinalEffectiveValueEx(const FGasCustomEffectContext &CustomEffectContext);
//     float GetFinalEffectiveValue(const FGasCustomEffectContext &CustomEffectContext);
// }; // Size: 0x68

// class UGasHealthMonitor : public UBuffConditionCustomCheck
// {
// }; // Size: 0xF8

// class UGetItemRecordRecord : public ULifeRecordEntityBase
// {
//     int32 GetItemID; // 0x0030 (size: 0x4)

//     void AddRecordByGetItem(class UObject *WorldObject, int32 UesrID, int32 ItemId);
// }; // Size: 0x38

// class UGetTraumaBuffRecord : public ULifeRecordEntityBase
// {
//     int32 TraumaBuffID; // 0x0030 (size: 0x4)

//     void AddGetTraumaBuffRecord(class UObject *WorldObject, int32 UesrID, int32 BuffID);
// }; // Size: 0x38

// class UGetTraumaRecord : public ULifeRecordEntityBase
// {
//     float TraumaValue; // 0x0030 (size: 0x4)

//     void AddGetTraumaRecord(class UObject *WorldObject, int32 UesrID, float NewValue);
// }; // Size: 0x38

// class UGlobalConstGameDataCpt : public UFNSingleAttribute
// {
//     class UGameInputConfig *GameInputConfig;                  // 0x0038 (size: 0x8)
//     TMap<int32, FQuestEntityTabRow> QuestEntityTab;           // 0x0040 (size: 0x50)
//     TMap<int32, FDelegateQuestCreate> DelegateQuestCreateTab; // 0x0090 (size: 0x50)
//     TMap<int32, FZongmenQuest> ZongmenQuestTab;               // 0x00E0 (size: 0x50)
//     class UBigWorldGeneralConfig *BigWorldGeneralConfig;      // 0x0130 (size: 0x8)
//     FGlobalConstGameDataCptQuestEndDelegate QuestEndDelegate; // 0x0138 (size: 0x10)
//     void QuestEndDelegate(class UQuestEntityBase *QuestEntityBase);
//     FGlobalConstGameDataCptQuestTakeDelegate QuestTakeDelegate; // 0x0148 (size: 0x10)
//     void QuestTakeDelegate(class UQuestEntityBase *QuestEntityBase);
//     FGlobalConstGameDataCptQuestInfoUpdateDelegate QuestInfoUpdateDelegate; // 0x0158 (size: 0x10)
//     void QuestInfoUpdate(const FEnttIndex &EnttIndex);
//     FGlobalConstGameDataCptQuestCommitDelegate QuestCommitDelegate; // 0x0168 (size: 0x10)
//     void QuestCommitDelegate(const FEnttIndex &EnttIndex);
//     FGlobalConstGameDataCptQuestReadyToCommitDelegate QuestReadyToCommitDelegate; // 0x0178 (size: 0x10)
//     void QuestReadyToCommitDelegate(const FEnttIndex &EnttIndex);
//     FGlobalConstGameDataCptQuestActiveDelegate QuestActiveDelegate; // 0x0188 (size: 0x10)
//     void QuestActiveDelegate(const FEnttIndex &EnttIndex);
//     FGlobalConstGameDataCptQuestFailureDelegate QuestFailureDelegate; // 0x0198 (size: 0x10)
//     void QuestFailureDelegate(const FEnttIndex &EnttIndex, const FQuestFailureData &QuestFailureData);
//     FGlobalConstGameDataCptOnLearnSkillDelegate OnLearnSkillDelegate; // 0x01A8 (size: 0x10)
//     void OnLearnSkillDelegate(int32 UserID, int32 SkillID);
//     FGlobalConstGameDataCptOnBagItemChangeDelegate OnBagItemChangeDelegate; // 0x01B8 (size: 0x10)
//     void OnBagItemChange(int32 UserID);
//     FGlobalConstGameDataCptOnGuideCompelete OnGuideCompelete; // 0x01C8 (size: 0x10)
//     void OnGuideCompelete(int32 GuideID);
//     FGlobalConstGameDataCptOnPathBlockByTemp OnPathBlockByTemp; // 0x01D8 (size: 0x10)
//     void OnPathBlockedByAction(int32 BlockHandle);
//     FGlobalConstGameDataCptDelegateBigWorldSwitch DelegateBigWorldSwitch; // 0x01E8 (size: 0x10)
//     void BigWorldSwich(const class USingleWorldData *CurWorldData);
//     FGlobalConstGameDataCptDelegateBigWorldPreSwitch DelegateBigWorldPreSwitch; // 0x01F8 (size: 0x10)
//     void BigWorldSwich(const class USingleWorldData *CurWorldData);
//     FGlobalConstGameDataCptOnEnterBattleDelegate OnEnterBattleDelegate; // 0x0208 (size: 0x10)
//     void OnEnterBattleDelegate(int32 BattleID);
//     FGlobalConstGameDataCptDelegateCellUnableMove DelegateCellUnableMove; // 0x0218 (size: 0x10)
//     void CellUnableMove();
//     FGlobalConstGameDataCptDelegateArenaCompetition DelegateArenaCompetition; // 0x0228 (size: 0x10)
//     void ArenaCompetitionDelegate(int32 BattleResult);
//     FGlobalConstGameDataCptInteractWithNpcDelegate InteractWithNpcDelegate; // 0x0238 (size: 0x10)
//     void InteractWithNpcDelegate(const FEnttIndex &EnttIndex);
//     FGlobalConstGameDataCptPlayerDeadDelegate PlayerDeadDelegate; // 0x0248 (size: 0x10)
//     void PlayerDeadDelegate();
//     FGlobalConstGameDataCptPlayerBattleEndDelegate PlayerBattleEndDelegate; // 0x0258 (size: 0x10)
//     void BattleEndDelegate(class UBattleSettlementsBase *BattleSettlement);
//     FGlobalConstGameDataCptPlayerBattleBeginDelegate PlayerBattleBeginDelegate; // 0x0268 (size: 0x10)
//     void BattleBeginDelegate(class UBattleSettlementsBase *BattleSettlement);

//     void QuestInfoUpdateBroadcast(const FEnttIndex &EnttIndex);
//     class UGlobalConstGameDataCpt *GetGlobalConstGameDataCpt(class UObject *WorldObject);
// }; // Size: 0x278

// class UGlobalDynamicGameDataCpt : public UFNSingleAttribute
// {
//     FString WaitingInfo;                                                        // 0x0048 (size: 0x10)
//     FAttributeCptInsightInfo PlayerInsightInfo;                                 // 0x0058 (size: 0x60)
//     EM_ClientState CurClientState;                                              // 0x00B8 (size: 0x1)
//     bool bUpdateInsightPoiInfo;                                                 // 0x00D0 (size: 0x1)
//     uint8 bUpdateLODAndFog;                                                     // 0x00D4 (size: 0x1)
//     uint8 bInitFogTexture;                                                      // 0x00D4 (size: 0x1)
//     uint8 bPlayerMoving;                                                        // 0x00D4 (size: 0x1)
//     uint8 bInitWorld;                                                           // 0x00D4 (size: 0x1)
//     FAutoPassTurnProcessGameData AutoPassTurnStatusData;                        // 0x00E0 (size: 0x38)
//     FGlobalDynamicGameDataCptAutoPassTurnDoneDelegate AutoPassTurnDoneDelegate; // 0x0118 (size: 0x10)
//     void AutoPassTurnDone(int32 PassStep);
//     FGlobalDynamicGameDataCptAutoPassTurnStepDelegate AutoPassTurnStepDelegate; // 0x0128 (size: 0x10)
//     void AutoPassTurnStep(int32 PassStep);
//     TArray<FRelationshipEdge> Edges;                                 // 0x0148 (size: 0x10)
//     TArray<int32> RemovedEdgeIndexs;                                 // 0x0158 (size: 0x10)
//     EM_GAMEDIFFICULTY_LEVEL Gamedifficulty_Level;                    // 0x0178 (size: 0x1)
//     class UDifficultyInitialConfig *DifficultyConfig;                // 0x0180 (size: 0x8)
//     class UMultiCtrlSwitch *MultiCtrl_PlayerForbidMove;              // 0x0188 (size: 0x8)
//     TMap<int32, FArrayIntPointContainer> AllowMoveToCells;           // 0x0190 (size: 0x50)
//     class UMultiCtrlSwitch *MultiCtrl_PlayerTempDiableMove;          // 0x01E0 (size: 0x8)
//     TMap<int32, FArrayIntPointContainer> TempDisableMoveToCells;     // 0x01E8 (size: 0x50)
//     int32 LastAutoSaveTurn;                                          // 0x023C (size: 0x4)
//     bool HealthRecoverEnable;                                        // 0x0240 (size: 0x1)
//     bool ManaRecoverEnable;                                          // 0x0241 (size: 0x1)
//     class UMultiCtrlSwitch *MultiCtrl_BlockGameInput;                // 0x0248 (size: 0x8)
//     uint8 bCanSkipSequence;                                          // 0x0250 (size: 0x1)
//     uint8 bGameOver;                                                 // 0x0250 (size: 0x1)
//     uint8 bGameWin;                                                  // 0x0250 (size: 0x1)
//     class UInputMappingContext *InputMappingContext;                 // 0x0260 (size: 0x8)
//     class UFNGameSettingRegistry *GameSettingRegistry;               // 0x0268 (size: 0x8)
//     class UMaterialParameterCollection *MaterialParameterCollection; // 0x0270 (size: 0x8)
//     FString GameOverContext;                                         // 0x0278 (size: 0x10)
//     bool bShowWaiting;                                               // 0x0288 (size: 0x1)

//     void SetDifficultyLevel(EM_GAMEDIFFICULTY_LEVEL DifficultyLevel);
//     int32 GetPlayerInsight();
//     class UGlobalDynamicGameDataCpt *GetGlobalDynamicGameDataCpt(class UObject *WorldObject);
// }; // Size: 0x2E0

// class UGlobalSaveObject : public UObject
// {
//     uint8 DifficultyUnlock;        // 0x0028 (size: 0x1)
//     TArray<int32> KnowledgeUnlock; // 0x0030 (size: 0x10)

// }; // Size: 0x50

// class UGongFaFettersManger : public UFNSingleAttribute
// {
//     TMap<int32, int32> RunGongFaFettersIDMap; // 0x0038 (size: 0x50)
//     class UDataTable *GongFaFettersConfig;    // 0x00A0 (size: 0x8)

//     void UpadateGongFaFettersEffect(int32 UserID);
//     FGongFaFettersConfig GetGongFaFettersInfoRef(int32 FettersID);
//     void GetGongFaFattersID(TArray<int32> &Indexes, int32 Type, int32 Value);
//     void GetActiveGongFaFattersID(TArray<int32> &Indexes, int32 Type);
// }; // Size: 0xF8

// class UGongFaItem : public UItemBase
// {
//     TSubclassOf<class USkillGameplayAbility> GameAbilityClass; // 0x0050 (size: 0x8)

// }; // Size: 0x58

// class UGongFaManger : public UFNSingleAttribute
// {
//     FGongFaMangerGongFaChangeDelegate GongFaChangeDelegate; // 0x0040 (size: 0x10)
//     void GongFaChangeDelegate(int32 GongFaID, int32 UserID);
//     FGongFaMangerPlayerLearndGongFaDelegate PlayerLearndGongFaDelegate; // 0x0050 (size: 0x10)
//     void PlayerLearndGongFa(int32 GongFaID);
//     class UDataTable *GongFaConfig; // 0x0060 (size: 0x8)

//     bool UpgradeGongFa(int32 SkillMethodID, int32 UserID, int32 UpLevel);
//     bool StopRunState(int32 SkillMethodID, int32 UserID);
//     bool SetRunState(int32 SkillMethodID, int32 UserID);
//     bool SetLearnState(int32 SkillMethodID, int32 UserID);
//     void SetHideState(int32 GongFaID, int32 UserID);
//     int32 GetTotalGongFaNum();
//     void GetSingleLQSave(int32 UserID, int32 GongFaID, int32 Level, float &LQReserveOut, float &LQReservePerOut);
//     float GetLQSave(int32 UserID);
//     FGongFaConfig GetGongFaInfoRef(int32 SkillMethodID);
//     void CancelHideState(int32 GongFaID, int32 UserID);
// }; // Size: 0xB8

// class UGongfaItemCreator : public UItemCreatorBase
// {
// }; // Size: 0x38

// class UGuidanceWidgetTemplate : public UBaseWnd
// {
//     class UImage *Background; // 0x0420 (size: 0x8)
//     class UImage *ShowImg;    // 0x0428 (size: 0x8)

//     FEventReply OnClickedDown(FGeometry MyGeometry, const FPointerEvent &MouseEvent);
// }; // Size: 0x468

// class UGuidanceWndManger : public UObject
// {
//     class UCustomSaveGameManager *SaveGameManager; // 0x0078 (size: 0x8)
//     class UGameInstance *GameInstance;             // 0x0080 (size: 0x8)

//     void MakeSureGuidanceDoneByName(class UObject *WorldObject, FName GuidanceName);
// }; // Size: 0x98

// class UGuideHUDCpt : public UWidgetComponent
// {
//     bool bShowHUD; // 0x06B0 (size: 0x1)

//     void ShowHUDGuide(FSoftClassPath WndPath);
//     void HideHUDGuide();
// }; // Size: 0x6C0

// class UGuideManager : public UFNSingleAttribute
// {
//     class UDataTable *GuideTable;   // 0x0040 (size: 0x8)
//     TArray<FGuideConfig> GuideList; // 0x0058 (size: 0x10)

//     void Script_PlayGuide();
//     void Script_ClearExistingGuideEffect(FWidgetGuideEffect &WidgetGuideEffect);
//     void PlayGuide();
//     void InitListenWndBtnClick();
//     void GuideCompleteTrigger(EGuideStepCompleteType GuideStepCompleteType);
//     void GuideCompleteByID(int32 GuideID);
//     void ClickWidgetByMouse(const FName &WidgetName, FKey ClickType);
//     bool AddToGuideList(int32 GuideID);
// }; // Size: 0x68

// class UHQZhongMen : public UZhongMenBase
// {
// }; // Size: 0x3E0

// class UHaloSkillAbilityBase : public USkillGameplayAbility
// {
//     float TickInternal; // 0x06F0 (size: 0x4)

// }; // Size: 0x750

// class UHexGridEditorCompent : public USceneComponent
// {
// }; // Size: 0x2A0

// class UHexGridEvent : public UObject
// {
//     int32 HexGridEventID;               // 0x0028 (size: 0x4)
//     int32 CurrentPhaseID;               // 0x002C (size: 0x4)
//     TArray<int32> CompletedPhaseIDList; // 0x0030 (size: 0x10)

// }; // Size: 0x40

// class UHexGridEventProcess : public UEventProcessBase
// {
//     class UHexGridEvent *HexGridEvent;    // 0x0038 (size: 0x8)
//     int32 MoveTriggerProbability;         // 0x0040 (size: 0x4)
//     int32 TurnTriggerProbability;         // 0x0044 (size: 0x4)
//     TMap<int32, int32> HexGridEventCDMap; // 0x0048 (size: 0x50)

//     void Script_ShowGetItemUI(TArray<class UItemBase *> &ItemList);
//     void Script_ProcessEvent();
//     void ProcessCompletedPhase(int32 PhaseID);
//     void OnBattleEnd(class UBattleSettlementsBase *BattleSettlementsBase);
//     void EventProcessEnd();
// }; // Size: 0x98

// class UHexGridLQTideManager : public UFNSingleAttribute
// {
//     FHexGridLQTideManagerLQTideSwitchDelegate LQTideSwitchDelegate; // 0x0040 (size: 0x10)
//     void LQTideSwitchDelegate(bool State);

//     void SetPostProcessVolumeInfo(class UPostProcessComponent *PostProcessComponent);
//     void OnPlayerEndMove(const FIntPoint &LastPoint, const FIntPoint &CurPoint);
//     void OnNextTurn(int32 TurnCount);
//     bool CheckPlayerInActiveLQTideGrid();
//     void ChangeLQTideEffect();
// }; // Size: 0xA0

// class UHexGridSceneUICpt : public UWidgetComponent
// {
// }; // Size: 0x6B0

// class UHexGridSubsystem : public UFNBigWorldSubSystem
// {
//     TArray<FGridCellInfo> ArrayMapGrid;                                         // 0x00C8 (size: 0x10)
//     FIntPoint CellSize;                                                         // 0x00D8 (size: 0x8)
//     FVector WorldCenterOffset;                                                  // 0x00E0 (size: 0x18)
//     FVector LandRectCenter;                                                     // 0x00F8 (size: 0x18)
//     FIntPoint LandRectSize;                                                     // 0x0118 (size: 0x8)
//     TMap<class UStaticMesh *, class TWeakObjectPtr<AGenActor>> InstancedActors; // 0x0120 (size: 0x50)
//     FIntPoint DefaultBornPoint;                                                 // 0x0170 (size: 0x8)
//     float TotalChange;                                                          // 0x0178 (size: 0x4)
//     int32 MaxMoveHeight;                                                        // 0x017C (size: 0x4)
//     int32 MinMoveHeight;                                                        // 0x0180 (size: 0x4)
//     int32 OffsetCoordinateType;                                                 // 0x0184 (size: 0x4)
//     TMap<class FIntPoint, class FBridgePoint> BridgeMap;                        // 0x0188 (size: 0x50)
//     TArray<FCellDataByDaoYunTypeChange> CellDataByDaoYunTypeChanges;            // 0x01D8 (size: 0x10)
//     class ULandscapeAreaConfig *LandscapeAreaConfig;                            // 0x01E8 (size: 0x8)
//     class ULQNiagaraConfig *LQNiagaraConfig;                                    // 0x01F0 (size: 0x8)
//     TArray<TWeakObjectPtr<UHexGridVisualizeCpt>> HexGridVisualizeComps;         // 0x0298 (size: 0x10)

//     void UpdateLQByBattleOverFlow(float ToGenCount, int32 CellID);
//     void SetGridCellDaoYunTypeByCellID(int32 CellID, EDaoYunType NewDaoYunType, int32 ChangeTurn);
//     void OnNextTurn(int32 CurTurn);
//     void OnBattleLevelEndPlay(class UBattleSettlementsBase *BattleSettlementsBase);
//     bool IsLocationInPlayerStage(FVector WorldPosition);
//     bool IsLocationInPlayerInsight(FVector WorldPosition);
//     int32 HexGridDistanceByIndex(int32 IDA, int32 IDB);
//     int32 HexGridDistance(const FIntPoint &HexGridCoordinateA, const FIntPoint &HexGridCoordinateB);
//     bool HasAnyPoiInRange(const FGridCellInfo &GridCellInfo, int32 Range, TArray<class TSubclassOf<UPoibase>> FilterList);
//     FVector GetWorldPosForGridCellCentre(const FIntPoint &Pos);
//     TArray<FIntPoint> GetPointsByChildRegionID(int32 ChildRegionID);
//     class ULQNiagaraConfig *GetLQNiagaraConfig();
//     class ULandscapeAreaConfig *GetLandscapeAreaConfig();
//     void GetHexGridRangeByID(int32 CenterID, int32 Range, TArray<int32> &OutRes);
//     void GetHexGridRange(const FIntPoint &CenterPoint, int32 Range, TArray<FIntPoint> &OutRes);
//     void GetHexGridEqualRangeByID(int32 CenterID, int32 Range, TArray<int32> &OutRes);
//     void GetHexGridEqualRange(const FIntPoint &CenterPoint, int32 Range, TArray<FIntPoint> &OutRes);
//     bool GetGridCellForWorldPos(const FVector &WorldPos, FIntPoint &gridPos);
//     int32 GetGridCellCount();
//     int32 GetCellIDByLookup(const FIntPoint &InPoint);
//     bool GetCellAbleWalkByID(int32 CellID);
//     bool GetCellAbleFlyByID(int32 CellID);
//     TArray<FIntPoint> GetAbleMovePointsByRange(const FIntPoint &CentrePoint, int32 Range);
//     bool CheckGridID(int32 CellID);
//     bool CheckGridHexcoord(const FIntPoint &Pt);
//     bool AdjustPixelVector(const FVector &PixelPos, FVector &HexPos);
//     bool AdjustPixelPosition(const FVector2D &PixelPos, FVector2D &HexPos);
// }; // Size: 0x2A8

// class UHexGridVisualizeCpt : public UStaticMeshComponent
// {
//     EHexGridDescType HexGridDescType; // 0x05F0 (size: 0x1)
//     float CircleRange;                // 0x05F4 (size: 0x4)
//     float RectagleWidth;              // 0x05F8 (size: 0x4)
//     float RectagleHeighth;            // 0x05FC (size: 0x4)
//     TArray<FVector> AbsoluteOffsets;  // 0x0600 (size: 0x10)
//     bool bBlock;                      // 0x0610 (size: 0x1)
//     bool bActive;                     // 0x0611 (size: 0x1)

// }; // Size: 0x630

// class UHotelData : public UDataAsset
// {
//     FHotelConfig HotelConfig; // 0x0030 (size: 0xB8)

// }; // Size: 0xE8

// class UInitializeRelationship : public UObject
// {
// }; // Size: 0x28

// class UInteractRecord : public ULifeRecordEntityBase
// {
//     int32 ActionID; // 0x0030 (size: 0x4)
//     int32 TargetId; // 0x0034 (size: 0x4)

//     void AddRecordByInteract(int32 UesrID, int32 TargetUserID);
// }; // Size: 0x38

// class UInteractionBase : public UFNBigWorldSubSystem
// {
//     bool bInitReady; // 0x0038 (size: 0x1)

// }; // Size: 0x40

// class UInteractionOprateConfig : public UDataAsset
// {
//     FNormalChatConfig NormalChatConfig;                 // 0x0030 (size: 0x18)
//     FGiveGiftConfig GiftConfig;                         // 0x0048 (size: 0x8)
//     FAskForItemConfig AskForItemConfig;                 // 0x0050 (size: 0xC)
//     FSpiritualityLearnConfig SpiritualityLearnConfig;   // 0x005C (size: 0xC)
//     FSpiritualityBattleConfig SpiritualityBattleConfig; // 0x0068 (size: 0xC)
//     FOnDaoConfig OnDaoConfig;                           // 0x0078 (size: 0x28)
//     FInvestigateConfig InvestigateConfig;               // 0x00A0 (size: 0x20)
//     FStealConfig StealConfig;                           // 0x00C0 (size: 0x8)
//     FBlackmailConfig BlackmailConfig;                   // 0x00C8 (size: 0x58)
//     FDishonorConfig DishonorConfig;                     // 0x0120 (size: 0x8)
//     FShowLoveConfig ShowLoveConfig;                     // 0x0128 (size: 0x14)
//     FInviteToBeTogetherConfig InviteToBeTogetherConfig; // 0x013C (size: 0x4)
//     FShuangxiuConfig ShuangxiuConfig;                   // 0x0140 (size: 0x10)
//     FHealNpcConfig HealNpcConfig;                       // 0x0150 (size: 0x1C)
//     TArray<int32> StageValue;                           // 0x0170 (size: 0x10)
//     int32 SenseToStage;                                 // 0x0180 (size: 0x4)
//     int32 EscapeHeart;                                  // 0x0184 (size: 0x4)
//     FSoftObjectPath BattleEndSequence;                  // 0x0188 (size: 0x20)
//     FMainDialogueConfig MainDialogueConfig;             // 0x01A8 (size: 0x98)
//     FNpcBattleConfig SpiritualityConfig;                // 0x0240 (size: 0x8)
//     FNpcBattleConfig DeathBattleConfig;                 // 0x0248 (size: 0x8)

// }; // Size: 0x250

// class UInteractionSystem : public UGameInstanceSubsystem
// {
//     class UAppearanceAdditionConfig *m_AppearanceAdditionConfig;     // 0x0030 (size: 0x8)
//     class UInteractionOprateConfig *InteractionOprateConfig;         // 0x0038 (size: 0x8)
//     class UNpcInteraction *NpcInteraction;                           // 0x0040 (size: 0x8)
//     class UStateAreaInteraction *StateAreaInteraction;               // 0x0048 (size: 0x8)
//     class UZongmenData *ZongmenData;                                 // 0x0050 (size: 0x8)
//     class UDataTable *DTAppearanceConfig;                            // 0x00A8 (size: 0x8)
//     class UDataTable *DTPoiUIConfig;                                 // 0x00B0 (size: 0x8)
//     class UCityManger *CityManger;                                   // 0x00B8 (size: 0x8)
//     class UStoreInteraction *StoreInteraction;                       // 0x00C0 (size: 0x8)
//     class UArenaCompetitionInteraction *ArenaCompetitionInteraction; // 0x00C8 (size: 0x8)
//     class UFieldBattleManger *FieldBattleManger;                     // 0x00D0 (size: 0x8)
//     class UDataTable *InitRPGAttributeBaseInfo;                      // 0x00D8 (size: 0x8)
//     class UDataTable *DTEmoteAnimationConfig;                        // 0x00E0 (size: 0x8)

//     void OnPlayerStartMove(const FIntPoint &LastPos, const FIntPoint &CurPos);
//     void OnPlayerEndMove(const FIntPoint &LastPos, const FIntPoint &CurPos);
//     void OnNextTurn(int32 TurnCount);
//     void OnBigWorldSwitch(const class USingleWorldData *BigWorldData);
//     void OnBigWorldPreSwitch(const class USingleWorldData *BigWorldData);
//     class UStoreInteraction *GetStoreInteraction();
//     class UStateAreaInteraction *GetStateAreaInteraction();
//     class UNpcInteraction *GetNpcInteraction();
//     class UInteractionOprateConfig *GetInteractionOprateConfig();
//     TArray<FName> GetInteractDialogText(int32 DialogCode, int32 PromoterID, int32 ResponserID);
//     class UArenaCompetitionInteraction *GetArenaCompetitionInteraction();
//     float GetAppearanceAgingRateAlpha(FRPGAttributeBase &PlayerAttributeBase);
// }; // Size: 0x108

// class UInvadeCounterAttackQuestBase : public UQuestEntityBase
// {
//     FCommonEcsSaveEntityIndex CounterAttackQuestDataEntity; // 0x0120 (size: 0x18)

// }; // Size: 0x138

// class UInvadeMainConfig : public UPrimaryDataAsset
// {
//     int32 GrowStateTurn;                                                     // 0x0030 (size: 0x4)
//     int32 CrystalStateTurn;                                                  // 0x0034 (size: 0x4)
//     int32 LVLUpStateTurn;                                                    // 0x0038 (size: 0x4)
//     int32 SpreadStateTurn;                                                   // 0x003C (size: 0x4)
//     TArray<FInvadeStressConfigInfoData> InvadeStressConfigInfoData;          // 0x0040 (size: 0x10)
//     int32 CounterAttackGenerateInternal;                                     // 0x0050 (size: 0x4)
//     TMap<int32, FCounterAttackQuestConfigData> CounterAttackQuestConfigData; // 0x0058 (size: 0x50)
//     int32 MaxDistanceForGenerateCounterAttackQuest;                          // 0x00A8 (size: 0x4)
//     int32 SupportTransactionWeight;                                          // 0x00AC (size: 0x4)
//     int32 DefaultCounterAttackWeight;                                        // 0x00B0 (size: 0x4)
//     float InvadeGridCellBattleProb;                                          // 0x00B4 (size: 0x4)
//     int32 InvadeGridBattleMinStep;                                           // 0x00B8 (size: 0x4)
//     int32 InvadeGridBattleMaxStep;                                           // 0x00BC (size: 0x4)
//     bool bUseNpcStageInfoForTroopCalcMaxStage;                               // 0x00C0 (size: 0x1)
//     TArray<int32> CoreRangeByLevel;                                          // 0x00C8 (size: 0x10)

// }; // Size: 0xD8

// class UInvadeMechanic : public UFNSingleAttribute
// {
//     FDataTableRowHandle DefaultInvadeTroopFixKeyname_Grow;       // 0x0038 (size: 0x10)
//     FDataTableRowHandle DefaultInvadeTroopFixKeyname_Transport;  // 0x0048 (size: 0x10)
//     FDataTableRowHandle DefaultInvadeTroopFixKeyname_Assistance; // 0x0058 (size: 0x10)
//     FDataTableRowHandle DefaultInvadeTroopFixKeyname_Action;     // 0x0068 (size: 0x10)
//     FGenerateInvadeValueConfig GenerateInvadeValueConfig;        // 0x0078 (size: 0x58)
//     class UInvadeMainConfig *InvadeMainConfig;                   // 0x00D0 (size: 0x8)

//     void UpateInvadeStateData(class UObject *WorldObject, FEnttIndex InvadeIndex, const FInvadeCtrlData &InInvadeCtrlData);
//     FEnttIndex StartInvade(class UObject *WorldObject, int32 InvadeWorldID);
//     void Script_OpenBattleWnd(FEnttIndex BattleEntity);
//     bool PlayerTakeCounterQuest(class UFNGameInstance *InGameInstance, const FEnttIndex &CounterQuestEntity);
//     void OutPutInvadeInfo(class UGameInstance *InGameInstance);
//     void IncreaseTroopNum(class UObject *WorldObject, FEnttIndex InvadeIndex, int32 AddNum);
//     TArray<FCounterAttackQuestUIInfo> GetPlayerInvadeQuestEntities(class UFNGameInstance *InGameInstance, class UZhongMenBase *CurrentZM);
//     TMap<int32, int32> GetNpcStageToTroopValue(class UObject *WorldObject);
//     TArray<class UPoibase *> GetInvadingPOI(class UObject *WorldObject);
//     bool GetInvadeTroopData(class UObject *WorldObject, FEnttIndex InvadeIndex, FInvadeTroopData &OutInvadeTroopData);
//     FInvadeStressConfigInfoData GetInvadeStressConfigRef(class UObject *WorldObject, int32 Level);
//     bool GetInvadeState(class UObject *WorldObject, FEnttIndex InvadeIndex, FInvadeStateData &OutInvadeStateData);
//     bool GetInvadeSourceData(class UObject *WorldObject, FEnttIndex InvadeIndex, FInvadeSourceData &OutInvadeSourceData);
//     TArray<class UPoibase *> GetInvadePOI(class UObject *WorldObject, TArray<int32> &InvadeVal);
//     int32 GetInvadeLQValue(class UObject *WorldObject);
//     int32 GetInvadeGridNum(class UObject *WorldObject, int32 &HexVal);
//     int32 GetInvadeDoorCount(class UObject *WorldObject, int32 &InvadeVal);
//     bool GetInvadeCoreData(class UObject *WorldObject, FEnttIndex InvadeIndex, FInvadeCoreData &OutInvadeCoreData);
//     int32 GetInvadeCoreCount(class UObject *WorldObject, int32 &InvadeVal);
//     FEnttIndex GetCurrentWorldInvadeEntity(class UObject *WorldObject);
//     int32 GetBattleEntityMonsterLevelByGridEntity(class UGameInstance *InGameInstance, const FEnttIndex &GridEntity, EM_INVADE_BATTLETYPE Invade_BattleType);
//     void GenerateInvadePoi(class UObject *WorldObject, FEnttIndex InvadeIndex, FName PoiGroupName);
//     void EnterInvadeBattleByGridEntity(class UObject *WorldObject, FEnttIndex GridEntity, EM_INVADE_BATTLETYPE Invade_BattleType);
//     void EnterInvadeBattleByActorEntity(class UObject *WorldObject, FEnttIndex ActorEntity);
//     void CreateInvadeBattle(class UObject *WorldObject, FEnttIndex BattleEntity);
// }; // Size: 0xD8

// class UIrregularButton : public UBaseButton
// {
//     class UTexture2D *AdvancedHitTexture; // 0x05E8 (size: 0x8)
//     int32 AdvancedHitAlpha;               // 0x05F0 (size: 0x4)

// }; // Size: 0x600

// class UIrregularButtonTextureData : public UDataAsset
// {
// }; // Size: 0x80

// class UItemAdditionConfig : public UDataAsset
// {
//     float BaseValueCoe;       // 0x0030 (size: 0x4)
//     float AttributeValueCoe;  // 0x0034 (size: 0x4)
//     TArray<float> TBaseCoe;   // 0x0038 (size: 0x10)
//     float ValueToFavBaseCoe;  // 0x0048 (size: 0x4)
//     float ValueToFavPowerCoe; // 0x004C (size: 0x4)

// }; // Size: 0x50

// class UItemBase : public UObject
// {
//     int32 ItemTemplateID; // 0x0028 (size: 0x4)
//     int32 ItemCount;      // 0x002C (size: 0x4)
//     FGuid ItemGUID;       // 0x0030 (size: 0x10)
//     int32 CreatorID;      // 0x0040 (size: 0x4)
//     uint8 isDropInRift;   // 0x0044 (size: 0x1)
//     uint8 bDiscard;       // 0x0044 (size: 0x1)
//     uint8 bTrade;         // 0x0044 (size: 0x1)

//     bool UseItem(int32 UserID);
//     FName GetItemTipsDesc();
//     float GetItemRelativeValue(class UGameInstance *GameInstance, int32 UserID);
//     int32 GetItemCount();
//     FItemInfoEx GetItemBaseInfoEx();
//     FItemBaseInfo GetItemBaseInfo();
//     float GetItemAbsoluteValue();
//     void EquipItem(int32 UserID, bool bEquipment);
//     int32 CheckForUse(int32 UserID);
//     bool CarrayItem(int32 UserID, bool bCarray);
// }; // Size: 0x48

// class UItemBattleConsume : public UConsumeItem
// {

//     bool UseItemNext(int32 UserID);
// }; // Size: 0x50

// class UItemCreatorBase : public UObject
// {
//     TSubclassOf<class UItemBase> ItemClass; // 0x0028 (size: 0x8)

//     bool ItemCreateScriptEvent(class UItemBase *NewItem, const FItemConfig &TempalteItem, const FItemCreatorContextBase &CreatorContext);
//     class UItemBase *ItemCreater(const FItemConfig &TempalteItem, FItemCreatorContextBase &CreatorContext);
//     class UItemBase *ItemCreateByID(int32 TempalteItemID, FItemCreatorContextBase &CreatorContext);
//     class UItemBase *GetDefaultItemByID(int32 TempalteItemID, FItemCreatorContextBase &CreatorContext);
// }; // Size: 0x30

// class UItemEquipment : public UItemBase
// {
//     int32 EquipLevel;                                                           // 0x0050 (size: 0x4)
//     int32 EquipRarity;                                                          // 0x0054 (size: 0x4)
//     float EquipValueMul;                                                        // 0x0058 (size: 0x4)
//     int32 EquipRefineValue;                                                     // 0x005C (size: 0x4)
//     TArray<FBaseAttributeValueParam> BaseAttribute;                             // 0x0060 (size: 0x10)
//     TArray<FBaseAttributeValueParam> FixedAttribute;                            // 0x0070 (size: 0x10)
//     TArray<FBaseAttributeValueParam> ExternAttribute;                           // 0x0080 (size: 0x10)
//     TMap<class EEquipTraitAscription, class FEquipTraitInfo> EquipTraitInfoMap; // 0x0090 (size: 0x50)
//     int32 RandomCount;                                                          // 0x00E0 (size: 0x4)

//     FEquipmentConfig GetEquipmentConfig();
// }; // Size: 0xE8

// class UItemExternAttribteAdd : public UObject
// {
// }; // Size: 0x28

// class UItemForQuest : public UItemBase
// {
// }; // Size: 0x48

// class UItemMangerSystem : public UGameInstanceSubsystem
// {
//     FItemMangerSystemEquipChangeDelegate EquipChangeDelegate; // 0x0030 (size: 0x10)
//     void EquipChangeDelegate(FGuid OldItemGuid, FGuid CurItemGuid, int32 UserID);
//     class UItemAdditionConfig *ItemAdditionConfig;                  // 0x0040 (size: 0x8)
//     class UStereoToItemConfig *StereoToItemConfig;                  // 0x0048 (size: 0x8)
//     class UDataTable *ItemData;                                     // 0x0050 (size: 0x8)
//     class UDataTable *MaterialItemData;                             // 0x00A8 (size: 0x8)
//     class UDataTable *SpecialProductItemData;                       // 0x0100 (size: 0x8)
//     class UDataTable *DanLuItemData;                                // 0x0158 (size: 0x8)
//     class UDataTable *DropPackData;                                 // 0x01B0 (size: 0x8)
//     TMap<class FName, class UItemCreatorBase *> MapCreatorInstance; // 0x0218 (size: 0x50)
//     TArray<class UObject *> ReferencedObjects;                      // 0x0308 (size: 0x10)

//     void TakeOffEquip(FPlayerBag &PlayerBag, int32 EquipIndex, int32 nUserID);
//     void TabkeOffProp(FPlayerBag &PlayerBag, int32 PropIndex);
//     void PutOnProp(FPlayerBag &PlayerBag, int32 ItemIndex, int32 PropIndex);
//     void PutOnEquip(FPlayerBag &PlayerBag, int32 ItemIndex, int32 nUserID);
//     void MoveItemInBag(FPlayerBag &PlayerBag, EBagType BagType, int32 IndexLeft, int32 IndexRight);
//     class UStereoToItemConfig *GetStereoToItemConfig();
//     class UItemBase *GetRandomBagItem(FPlayerBag &PlayerBag, int32 RandomSeed, FString RandomSction);
//     float GetNpcMeasureOfValue(int32 NpcID);
//     int32 GetItemTotalCountByTemplateID(const FPlayerBag &PlayerBag, int32 ItemTemplateID);
//     int32 GetItemRelativeValueByTemplateID(int32 UserID, int32 ItemTemplateID);
//     class UItemCreatorBase *GetItemCreatorInstance(TSubclassOf<class UItemCreatorBase> CreatorClass);
//     FItemConfig GetItemConfigRefByItemID(int32 ItemTemplateID);
//     TArray<class UItemBase *> GetDropItemsByDropID(int32 DropID, int32 UserID);
//     TArray<class UItemBase *> GetBagItemListByTypeByUserID(int32 UserID, EBagType BagType);
//     TArray<class UItemBase *> GetBagItemListByType(FPlayerBag &PlayerBag, EBagType BagType);
//     TArray<class UItemBase *> GetBagItemListByItemTemplateIDByUserID(int32 UserID, int32 ItemTemplateID);
//     TArray<class UItemBase *> GetBagItemListByItemBaseTypes(FPlayerBag &PlayerBag, EBagType BagType, TArray<EItemBaseType> ItemBaseTypes);
//     TArray<class UItemBase *> GetBagItemListByItemBaseType(FPlayerBag &PlayerBag, EBagType BagType, EItemBaseType ItemBaseType);
//     TArray<class UItemBase *> FindItemByTypeEx(FPlayerBag &PlayerBag, EBagType BagType, EItemBaseType ItemBaseType);
//     class UItemBase *FindItemByType(FPlayerBag &PlayerBag, EBagType BagType, EItemBaseType ItemBaseType);
//     class UItemBase *FindItemByTemplateIDWithBagType(FPlayerBag &PlayerBag, EBagType BagType, int32 ItemTemplateID);
//     TArray<class UItemBase *> FindItemByTemplateIDEx(FPlayerBag &PlayerBag, int32 ItemTemplateID);
//     class UItemBase *FindItemByTemplateID(FPlayerBag &PlayerBag, int32 ItemTemplateID);
//     class UItemBase *FindItemByIndex(FPlayerBag &PlayerBag, EBagType BagType, int32 ItemIndex);
//     class UItemBase *FindItemByGuid(FPlayerBag &PlayerBag, FGuid ItemGUID);
//     int32 FindIndexByItem(FPlayerBag &PlayerBag, EBagType BagType, class UItemBase *Item);
//     void ExchangeProp(int32 PropIndexLeft, int32 PropIndexRight);
//     void DelItemFromBagByItemTemplateID(FPlayerBag &PlayerBag, EBagType BagType, int32 ItemTemplateID, int32 Num);
//     bool DelItemFromBagByIndex(FPlayerBag &PlayerBag, EBagType BagType, int32 Index);
//     void DelBagItem(FPlayerBag &PlayerBag, EBagType BagType, class UItemBase *ItemBase);
//     bool DelAllItems(FPlayerBag &PlayerBag);
//     bool DelAllItemByTemplateID(FPlayerBag &PlayerBag, int32 ItemTemplateID);
//     int32 CalItemMaterialValue(TMap<int32, int32> MaterialMap);
//     int32 CalItemMaterialCostDay(TMap<int32, int32> MaterialMap);
//     int32 CalItemMaterialAddExp(TMap<int32, int32> MaterialMap);
//     void AddItemToBag(FPlayerBag &PlayerBag, EBagType BagType, class UItemBase *Item, int32 Pos);
// }; // Size: 0x318

// class UItemPoolStatic : public UFNSingleAttribute
// {
//     class UDataTable *ItemPoolBaseTable; // 0x0038 (size: 0x8)

// }; // Size: 0x40

// class UItemUseFunction : public UObject
// {

//     void ItemSpecialUse(class UItemBase *Item, int32 UserID);
// }; // Size: 0x30

// class UJiYIGeneralConfig : public UDataAsset
// {
//     int32 LianDanBaseTime; // 0x0030 (size: 0x4)
//     int32 LianDanBaseExp;  // 0x0034 (size: 0x4)

// }; // Size: 0x38

// class UJiYiBooksItemCreator : public UItemCreatorBase
// {
// }; // Size: 0x38

// class UJiYiItem : public UItemBase
// {
// }; // Size: 0x50

// class UJiYiManager : public UFNSingleAttribute
// {
//     FJiYiManagerPlayerJiYiExpChangeDelegate PlayerJiYiExpChangeDelegate; // 0x0038 (size: 0x10)
//     void PlayerJiYiExpChange(EJiYiType JiYiType, int32 Exp);
//     FJiYiManagerPlayerJiYiLevelUpDelegate PlayerJiYiLevelUpDelegate; // 0x0048 (size: 0x10)
//     void PlayerJiYiLevelUp(EJiYiType JiYiType, int32 Level);
//     class UJiYIGeneralConfig *JiYIGeneralConfig; // 0x00B8 (size: 0x8)

//     void SetJiYiLevelByType(EJiYiType JiYiType, int32 Level, int32 UserID);
//     bool LearnTalentByJiYiBookID(int32 ItemTemplateID, int32 UserID);
//     class UJiYIGeneralConfig *GetJiYiGeneralConfig();
//     float GetEffectValue(int32 UserID, FName TalentName);
//     void ChangeJiYiExpByType(EJiYiType JiYiType, int32 ChangeExp, int32 UserID);
//     void AddTalentEffectValue(FName EffectName, float Value, int32 UserID);
// }; // Size: 0xC0

// class UJieDanGeneralConfig : public UDataAsset
// {
//     TMap<int32, FJieDanPhaseInfo> JieDanPhaseInfoMap; // 0x0030 (size: 0x50)
//     TArray<int32> JinDanReqConcentrations;            // 0x0080 (size: 0x10)
//     TArray<FSoftObjectPath> DanJiIconEffect;          // 0x0090 (size: 0x10)
//     TArray<FSoftObjectPath> DanQingIconEffect;        // 0x00A0 (size: 0x10)
//     TArray<FSoftObjectPath> JinDanIconEffect;         // 0x00B0 (size: 0x10)

// }; // Size: 0xC0

// class UJieYingGeneralConfig : public UDataAsset
// {
//     TMap<int32, FJieDanPhaseInfo> JieYingPhaseInfoMap; // 0x0030 (size: 0x50)
//     TArray<int32> YuanYingReqConcentrations;           // 0x0080 (size: 0x10)
//     TArray<FSoftObjectPath> YuanYingS1Effect;          // 0x0090 (size: 0x10)
//     TArray<FSoftObjectPath> YuanYingS2Effect;          // 0x00A0 (size: 0x10)
//     TArray<FSoftObjectPath> YuanYingS3Effect;          // 0x00B0 (size: 0x10)
//     TArray<FSoftObjectPath> SuiDanExplosionEffect;     // 0x00C0 (size: 0x10)
//     int32 RefreshDanYaoID;                             // 0x00D0 (size: 0x4)
//     int32 FenShenValue;                                // 0x00D4 (size: 0x4)
//     int32 NingShenValue;                               // 0x00D8 (size: 0x4)
//     int32 JuLingValue;                                 // 0x00DC (size: 0x4)

// }; // Size: 0xE0

// class UKismetFnGameLibrary : public UBlueprintFunctionLibrary
// {

//     TArray<EMRelationshipType> ToArrayRelations(const FRelationShipsDescribe &ShipsDescribe);
//     void RelationShip_Remove(const FRelationShipsDescribe &ShipsDescribe, const EMRelationshipType &ToRemoveRelation);
//     void RelationShip_Add(const FRelationShipsDescribe &ShipsDescribe, const EMRelationshipType &ToAddRelation);
//     bool IsRelationClassType(const FRelationShipsDescribe &ShipsDescribe, const EMRelationshipClassType &ToCheckRelationClassType);
//     EMRelationshipType GetRelationShipByIndex(const FRelationShipsDescribe &ShipsDescribe, int32 Index);
//     bool AnyOfRelationShip(const FRelationShipsDescribe &ShipsDescribe, const EMRelationshipType &ToCheckRelation);
// }; // Size: 0x28

// class UKnowledgeBase : public URuntimeSerializeObjectBase
// {
//     int32 InformationID;   // 0x0028 (size: 0x4)
//     int32 InformationAge;  // 0x002C (size: 0x4)
//     TArray<int32> CellIDs; // 0x0030 (size: 0x10)
//     int32 TargetCell;      // 0x0040 (size: 0x4)
//     int32 CreateTurn;      // 0x0044 (size: 0x4)

//     void Script_OnTimeEffect();
//     void Script_OnLoseEffect();
//     void OnTimeEffect();
//     void OnLoseffect();
//     FString GetKnowledgeDec();
//     bool GenerateKnowledgeData(int32 Cell);
// }; // Size: 0x48

// class UKnowledgeByItemID : public UKnowledgeBase
// {
//     int32 ItemId; // 0x0048 (size: 0x4)
//     int32 NpcID;  // 0x004C (size: 0x4)

//     class UKnowledgeByItemID *AddKnowledgeByItemID(class UObject *WorldObject, int32 CellID);
// }; // Size: 0x50

// class UKnowledgeFoLingcaiGenerate : public UKnowledgeBase
// {
//     int32 ItemId; // 0x0048 (size: 0x4)

//     class UKnowledgeFoLingcaiGenerate *AddKnowledgeFoLingcaiGenerate(class UObject *WorldObject, int32 CellID, int32 ItemTemplateID);
// }; // Size: 0x50

// class UKnowledgeForGather : public UKnowledgeBase
// {
//     int32 ItemId; // 0x0048 (size: 0x4)
//     int32 NpcID;  // 0x004C (size: 0x4)

//     class UKnowledgeForGather *AddKnowledgeForGather(class UObject *WorldObject, int32 UesrID, int32 ChildrenRegionID, int32 ItemTemplateID);
// }; // Size: 0x50

// class UKnowledgeForKillDeath : public UKnowledgeBase
// {
//     int32 DeathNpcID; // 0x0048 (size: 0x4)
//     int32 KillerID;   // 0x004C (size: 0x4)

//     class UKnowledgeForKillDeath *AddKnowledgeForNpcDeath(class UObject *WorldObject, int32 DeathPlayer, int32 KillerPlayer, int32 CellID);
// }; // Size: 0x50

// class UKnowledgeForLingfa : public UKnowledgeBase
// {
//     int32 LingFaID; // 0x0048 (size: 0x4)
//     int32 NpcID;    // 0x004C (size: 0x4)

//     class UKnowledgeForLingfa *AddKnowledgeForLingfa(class UObject *WorldObject, int32 CellID);
// }; // Size: 0x50

// class UKnowledgeForLingliTide : public UKnowledgeBase
// {

//     class UKnowledgeForLingliTide *AddKnowledgeForLingliTide(class UObject *WorldObject, int32 CellID);
// }; // Size: 0x48

// class UKnowledgeForOtherDeath : public UKnowledgeBase
// {
//     int32 DeathNpcID; // 0x0048 (size: 0x4)

//     class UKnowledgeForOtherDeath *AddKnowledgeForOtherDeath(class UObject *WorldObject, int32 DeathPlayer, int32 CellID);
// }; // Size: 0x50

// class UKnowledgeForRift : public UKnowledgeBase
// {
//     uint32 KnowledgeEntityIndex; // 0x0048 (size: 0x4)

//     class UKnowledgeForRift *AddKnowledgeForRift(class UObject *WorldObject, int32 CellID);
// }; // Size: 0x50

// class UKnowledgeForRiftEnd : public UKnowledgeBase
// {
//     int32 NpcID; // 0x0048 (size: 0x4)

//     class UKnowledgeForRiftEnd *AddKnowledgeForRiftEnd(class UObject *WorldObject, int32 CellID, int32 UserID);
// }; // Size: 0x50

// class UKnowledgeForRiftNotice : public UKnowledgeBase
// {

//     class UKnowledgeForRiftNotice *AddKnowledgeForRiftNotice(class UObject *WorldObject);
// }; // Size: 0x48

// class UKnowledgeinteraction : public UFNSingleAttribute
// {
//     FKnowledgeinteractionAddNewKnowledge AddNewKnowledge; // 0x0048 (size: 0x10)
//     void AddNewKnowledge();
//     class UDataTable *KnowledgeConfigTable; // 0x0058 (size: 0x8)
//     class UDataTable *WikeConfigTable;      // 0x0060 (size: 0x8)
//     int32 HandbookNum;                      // 0x00F8 (size: 0x4)
//     int32 IntelligenceNum;                  // 0x00FC (size: 0x4)

//     void ScriptRelease();
//     void ScriptInit();
//     void OnNextTurn(int32 CurTurn);
//     TArray<int32> GetStaticKnowledgeUnlock();
//     TArray<int32> GetStaticKnowledgeBySubType(EInformationSubType Subtype);
//     int32 GetKnowledgeNum(bool IsGet);
//     class UKnowledgeBase *GetKnowledgeDefaultObject(int32 KnowledgeID);
//     class UKnowledgeBase *GetKnowledgeBaseByIndex(int32 Index, bool IsGet);
//     TArray<int32> GetAllKnowledgeByCellID(int32 CellID);
//     TArray<int32> GetAllFirstWikiID();
//     void ClearRiftByCellID(int32 CellID);
//     bool CheckStaticKnowledgeUnlock(int32 KnowledgeID);
//     bool CheckKnowledgeGet(class UKnowledgeBase *Knowledge);
//     bool CheckIsGetKnowledgeByID(int32 InformationID);
//     void AddStaticKnowledgeData(int32 KnowledgeID);
//     void AddKnowledgeData(class UKnowledgeBase *Knowledge, bool bKnownList);
//     void AddKnowledgeByGather(class UKnowledgeBase *Knowledge, int32 PoiNum, int32 Distance);
// }; // Size: 0x100

// class ULQNiagaraConfig : public UDataAsset
// {
//     TMap<class EDaoYunType, class FSoftObjectPath> DaoYunToNiagaraMap; // 0x0030 (size: 0x50)

// }; // Size: 0x80

// class ULQTideData : public UFNBigWorldSubSystem
// {
//     TMap<int32, FTidePoint> LQTideMap; // 0x0038 (size: 0x50)
//     ETideType TideType;                // 0x0088 (size: 0x1)
//     int32 CurTideWuXingIndex;          // 0x008C (size: 0x4)
//     int32 StartTurn;                   // 0x0090 (size: 0x4)
//     uint8 PostProcessVolumeState;      // 0x0094 (size: 0x1)
//     bool BeginLQTideState;             // 0x0098 (size: 0x1)

// }; // Size: 0xA0

// class ULQTideEvolveMechanic : public UFNSingleAttribute
// {
// }; // Size: 0x38

// class ULandscapeAreaConfig : public UDataAsset
// {
//     TMap<class EMLandscapeAreaType, class FLandscapeAreaInfo> LandscapeAreaInfoMap; // 0x0030 (size: 0x50)

// }; // Size: 0x80

// class ULearnLingfaRecord : public ULifeRecordEntityBase
// {
//     int32 LearnLingfaID; // 0x0030 (size: 0x4)
//     int32 Ganwu;         // 0x0034 (size: 0x4)

//     void AddRecordByLearnLingfa(class UObject *WorldObject, int32 UesrID, int32 LingFaID, int32 AddValue);
// }; // Size: 0x38

// class ULegacyInputKeyboradSetting : public UGameSettingKeyboardInput
// {
// }; // Size: 0x1B8

// class ULianDanManager : public UFNSingleAttribute
// {

//     int32 GetMatchDaoYao(TArray<int32> YaoXingList, int32 YaoLiValue, int32 YaoYinMaterialID);
//     TArray<int32> GetMatchDanYaoListByYaoYinAndYaoXing(TArray<int32> YaoXingList, int32 YaoYinMaterialID);
//     TMap<int32, FDanYaoTypeInfo> GetAllDanYaoTypeInfo();
//     bool CheckMatchDanYaoIsMaxYaoLiOwner(TArray<int32> YaoXingList, int32 YaoLiValue, int32 YaoYinMaterialID);
//     int32 CalLianDanMaterialValue(TMap<int32, int32> MaterialMap, int32 UserID);
//     int32 CalLianDanCostDay(TMap<int32, int32> MaterialMap, int32 UserID);
//     int32 CalLianDanAddExp(TMap<int32, int32> MaterialMap, int32 UserID);
// }; // Size: 0x90

// class ULifeRecordEntityBase : public URuntimeSerializeObjectBase
// {
//     ELifeRecordType LifeRecordType; // 0x0028 (size: 0x1)
//     int32 ActionTurn;               // 0x002C (size: 0x4)

//     FString GetLifeRecordString(int32 UserID);
//     FString GetLifeRecordDec(int32 UserID);
// }; // Size: 0x30

// class ULingJingAttribute : public UAttributeSet
// {
//     FGameplayAttributeData LingJingMaxLevelCount;    // 0x0030 (size: 0x10)
//     FGameplayAttributeData LingJingCurLevelCount;    // 0x0040 (size: 0x10)
//     FGameplayAttributeData UnderAttackCountPerLevel; // 0x0050 (size: 0x10)
//     FGameplayAttributeData ConGealTime;              // 0x0060 (size: 0x10)

// }; // Size: 0x70

// class ULqEvolveMechanic : public UFNSingleAttribute
// {
//     TArray<FLQBackStepConfig> StepsValue; // 0x0038 (size: 0x10)

// }; // Size: 0x48

// class UMagnitudeCalculation_BuffDamage : public UGameplayModMagnitudeCalculation
// {
// }; // Size: 0x40

// class UMagnitudeCalculation_CD : public UGameplayModMagnitudeCalculation
// {
//     float CDRLimitValue; // 0x0040 (size: 0x4)

// }; // Size: 0x48

// class UMagnitudeCalculation_Cost : public UGameplayModMagnitudeCalculation
// {
// }; // Size: 0x40

// class UMagnitudeCalculation_PVPDec : public UGameplayModMagnitudeCalculation
// {
// }; // Size: 0x40

// class UMaterialItem : public UItemBase
// {
// }; // Size: 0x50

// class UMaterialItemCreator : public UItemCreatorBase
// {
// }; // Size: 0x38

// class UMeshEffectMangerCpt : public UFNGameCpt
// {
//     FLinearColor HitColor;                         // 0x00A8 (size: 0x10)
//     class UCurveFloat *HitCurve;                   // 0x00B8 (size: 0x8)
//     FLinearColor DissolveColor;                    // 0x00C0 (size: 0x10)
//     class UCurveFloat *DissolveCurve;              // 0x00D0 (size: 0x8)
//     TArray<class UMeshComponent *> MeshComponents; // 0x00D8 (size: 0x10)
//     TArray<FSingleMeshMaterials> OriginMaterials;  // 0x00E8 (size: 0x10)
//     uint8 bOveride_EffectScale;                    // 0x0138 (size: 0x1)
//     FVector EffectScale;                           // 0x0140 (size: 0x18)
//     class UMultiCtrlSwitch *CustomDepthSwitch;     // 0x0158 (size: 0x8)

//     void ResetMaterial();
//     void RemoveReplaceMaterialTask(FName ModelTaskName);
//     void OnDamageEffect(float DeltaValue, const class USkillGameplayAbility *DamageAbility, const class UGameplayEffect *GameEffect, const class AActor *InstigatorCharacter, const class AActor *DamageCauser, bool bCrit);
//     FVector GetEffectStandardScale();
//     void ActiveReplaceMaterialTask(const FReplaceMaterialEffectTask &ReplaceMaterialEffectTask);
// }; // Size: 0x178

// class UMiniMapIconWidget : public UUserWidget
// {
//     FEnttIndex IconEntity; // 0x0278 (size: 0x8)

//     void OnUpdateTraceState(bool bCurTrace, bool bHasTrace);
//     void OnIconUpdate();
//     void OnIconShow();
//     void OnIconHide();
// }; // Size: 0x280

// class UMiniMapViewWidget : public UUserWidget
// {
//     class UCanvasPanel *IconsPanel; // 0x0278 (size: 0x8)
//     FEnttIndex ViewEntity;          // 0x0280 (size: 0x8)

//     void OnViewUpdate();
// }; // Size: 0x288

// class UMonsterRandomAffixConfig : public UDataAsset
// {
//     TMap<class EM_MonsterType, class FMonsterRandomAffixData> MonsterRandomAffixDataMap; // 0x0030 (size: 0x50)

// }; // Size: 0x80

// class UMonsterSingleAttribute : public UFNSingleAttribute
// {
//     class UDataTable *MonsterTable;                                 // 0x0038 (size: 0x8)
//     class UDataTable *MonsterLevelInfoTable;                        // 0x0050 (size: 0x8)
//     class UDataTable *MonsterGroupTable;                            // 0x00B8 (size: 0x8)
//     class UDataTable *MonsterAIConfig;                              // 0x00D0 (size: 0x8)
//     class UDataTable *AIStageConfig;                                // 0x00D8 (size: 0x8)
//     TMap<class FName, class FMonsterAffixData> MonsterAffixDataMap; // 0x00E0 (size: 0x50)
//     class UMonsterRandomAffixConfig *MonsterRandomAffixConfig;      // 0x0130 (size: 0x8)

// }; // Size: 0x138

// class UMontageStateUtility : public UGameInstanceSubsystem
// {
// }; // Size: 0xD0

// class UMountManager : public UFNSingleAttribute
// {
//     class UTimelineComponent *AttachTimeLine; // 0x0040 (size: 0x8)
//     class UTimelineComponent *DisTimeLine;    // 0x0048 (size: 0x8)
//     class USkeletalMeshComponent *MountSke;   // 0x0050 (size: 0x8)
//     class UNiagaraComponent *RideNiagara;     // 0x0058 (size: 0x8)
//     class UNiagaraComponent *ShuiNiagara;     // 0x0060 (size: 0x8)
//     ERideState RideState;                     // 0x0068 (size: 0x1)
//     TMap<int32, FMountConfig> MountConfigArr; // 0x0098 (size: 0x50)

//     void OnPlayerMoveStart(const FIntPoint &LastPos, const FIntPoint &CurPos);
//     void OnPlayerMoveEnd(const FIntPoint &LastPos, const FIntPoint &CurPos);
//     void OnDisTimelineTick(float Output);
//     void OnDisTimelineEnd(float Output);
//     void OnBigWorldSwitch(const class USingleWorldData *BigWorldData);
//     void OnBackBigWorldEquipeRide();
//     void OnAttchTimelineTick(float Output);
//     void OnAttchTimelineEnd(float Output);
//     bool IsExistEquipMount(int32 UserID);
//     ERideState GetRideState();
//     bool GetIsRide();
//     void GetEquipChangeState(FGuid LastEquipID, FGuid CurEquipID, int32 nUserID);
//     void DisMount();
//     void DirectAttchRide(int32 ItemId);
//     void DelMount(ERideState tRideState);
//     void AttchMount();
//     void AttachMountToPlayerByID(int32 ItemId);
//     void AttachCurrentMountToPlayer();
// }; // Size: 0xF0

// class UMultiCtrlSwitch : public UObject
// {

//     int32 SetSwitchOn();
//     void SetSwitchOff(int32 Handle);
//     bool GetSwitchState();
// }; // Size: 0x80

// class UNPCMockBattle : public UFNSingleAttribute
// {
//     float MinRandom;                 // 0x0038 (size: 0x4)
//     float MaxRandom;                 // 0x003C (size: 0x4)
//     TArray<float> CoefficientByTier; // 0x0040 (size: 0x10)

//     int32 GetTotalGrade(int32 NpcID);
// }; // Size: 0x50

// class UNewMasterRecord : public ULifeRecordEntityBase
// {
//     int32 OldMaster; // 0x0030 (size: 0x4)
//     int32 NewMaster; // 0x0034 (size: 0x4)

//     void AddRecordByRelationship(class UObject *WorldObject, int32 UserID, int32 NewNpc, int32 OldNpc);
// }; // Size: 0x38

// class UNpcBuildManager : public UFNSingleAttribute
// {
// }; // Size: 0x38

// class UNpcEventGeneralConfig : public UDataAsset
// {
//     FNpcEventGeneralData NpcEventGeneralData; // 0x0030 (size: 0x18)

// }; // Size: 0x48

// class UNpcEventProcess : public UEventProcessBase
// {
//     TArray<FNpcEvent> ForceProcessNpcEvents;    // 0x0038 (size: 0x10)
//     TArray<FNpcEvent> OptionalProcessNpcEvents; // 0x0048 (size: 0x10)
//     TArray<FNpcEvent> NoProcessNpcEvents;       // 0x0058 (size: 0x10)
//     TArray<int32> NpcFlagList;                  // 0x0068 (size: 0x10)
//     TMap<int32, FNpcEventCD> NpcEventCDMap;     // 0x0078 (size: 0x50)
//     bool bNpcEventHappen;                       // 0x00C8 (size: 0x1)

//     void Script_ProcessEvent();
//     int32 GetNpcEventCountByID(int32 EventID);
//     void EventProcessEnd();
// }; // Size: 0xD0

// class UNpcEvolveDataConfig : public UDataAsset
// {
//     FAIEvolveGlobalData EvolveGlobalDataConfig; // 0x0030 (size: 0x2D0)

// }; // Size: 0x300

// class UNpcEvolveMechanic : public UFNSingleAttribute
// {
//     TSubclassOf<class UAIEvolve_Reputation> ReputationClass;                            // 0x0038 (size: 0x8)
//     TSubclassOf<class UAIEvolve_Heal> HealEvolveClass;                                  // 0x0040 (size: 0x8)
//     TSubclassOf<class UAIEvolve_Event> SpecEventEvolveClass;                            // 0x0048 (size: 0x8)
//     TSubclassOf<class UAIEvolve_ZongMen> ZongMenEvolveClass;                            // 0x0050 (size: 0x8)
//     TSubclassOf<class UAIEvolve_Social> SocialEvolveClass;                              // 0x0058 (size: 0x8)
//     TSubclassOf<class UAIEvolve_Practice> PracticeEvolveClass;                          // 0x0060 (size: 0x8)
//     TSubclassOf<class UAIEvolve_LingFa> LingFaEvolveClass;                              // 0x0068 (size: 0x8)
//     TSubclassOf<class UAIEvolve_JiYi> JiYiEvolveClass;                                  // 0x0070 (size: 0x8)
//     TSubclassOf<class UAIEvolve_ExploreAction> ExploreActionEvolveClass;                // 0x0078 (size: 0x8)
//     TSubclassOf<class UAIEvolve_Equipment> EquipmentEvolveClass;                        // 0x0080 (size: 0x8)
//     TSubclassOf<class UAIEvolve_City> CityEvolveClass;                                  // 0x0088 (size: 0x8)
//     TSubclassOf<class UAIEvolve_InvadeTransaction> InvadeTransactionEvolveClass;        // 0x0090 (size: 0x8)
//     TMap<class EM_GAMEDIFFICULTY_LEVEL, class FSoftObjectPath> EvolveConfigByDiffLevel; // 0x0098 (size: 0x50)
//     class UAIEvolve_Reputation *ReputationEvolve;                                       // 0x00E8 (size: 0x8)
//     class UAIEvolve_Heal *HealEvolve;                                                   // 0x00F0 (size: 0x8)
//     class UAIEvolve_Event *SpecEventEvolve;                                             // 0x00F8 (size: 0x8)
//     class UAIEvolve_ZongMen *ZongMenEvolve;                                             // 0x0100 (size: 0x8)
//     class UAIEvolve_City *CityEvolve;                                                   // 0x0108 (size: 0x8)
//     class UAIEvolve_Social *SocialEvolve;                                               // 0x0110 (size: 0x8)
//     class UAIEvolve_Practice *PracticeEvolve;                                           // 0x0118 (size: 0x8)
//     class UAIEvolve_LingFa *LingFaEvolve;                                               // 0x0120 (size: 0x8)
//     class UAIEvolve_JiYi *JiYiEvolve;                                                   // 0x0128 (size: 0x8)
//     class UAIEvolve_ExploreAction *ExploreActionEvolve;                                 // 0x0130 (size: 0x8)
//     class UAIEvolve_Equipment *EquipmentEvolve;                                         // 0x0138 (size: 0x8)
//     class UAIEvolve_InvadeTransaction *InvadeEvolveEvolve;                              // 0x0140 (size: 0x8)

//     void SetNpcEvolveEnable(class UObject *GameObject, int32 NpcIndex, bool bEnable);
//     int32 GetJiYiEvolveFixedID(int32 JiYiLevel, EJiYiType JiYiType);
//     int32 GetCurrentTransactionClassID(class UGameInstance *InGameInstance, int32 NpcIndex);
//     FEnttIndex CreateTransactionInstance(class UGameInstance *InGameInstance, int32 NpcID);
// }; // Size: 0x148

// class UNpcGenConfig : public UDataAsset
// {
//     float MalePercent;                                         // 0x0030 (size: 0x4)
//     TArray<FNpcAgeConfig> AgeByStage;                          // 0x0038 (size: 0x10)
//     TArray<int32> StageRatio;                                  // 0x0048 (size: 0x10)
//     int32 CapcityHighMin;                                      // 0x0058 (size: 0x4)
//     int32 CapcityHighMax;                                      // 0x005C (size: 0x4)
//     int32 CapcityOtherMin;                                     // 0x0060 (size: 0x4)
//     int32 CapcityOtherMax;                                     // 0x0064 (size: 0x4)
//     int32 PercerptionMiu;                                      // 0x0068 (size: 0x4)
//     int32 PercerptionSigma;                                    // 0x006C (size: 0x4)
//     int32 SenseMiu;                                            // 0x0070 (size: 0x4)
//     int32 SenseSigma;                                          // 0x0074 (size: 0x4)
//     int32 LuckMiu;                                             // 0x0078 (size: 0x4)
//     int32 LuckSigma;                                           // 0x007C (size: 0x4)
//     int32 FameStandMiu;                                        // 0x0080 (size: 0x4)
//     int32 FameStandSigma;                                      // 0x0084 (size: 0x4)
//     float MoneyInitBase;                                       // 0x0088 (size: 0x4)
//     float MoneyInitPower;                                      // 0x008C (size: 0x4)
//     float RandomLifeMin;                                       // 0x0090 (size: 0x4)
//     float RandomLifeMax;                                       // 0x0094 (size: 0x4)
//     float ExtraAttributeRandomMin;                             // 0x0098 (size: 0x4)
//     float ExtraAttributeRandomMax;                             // 0x009C (size: 0x4)
//     TMap<int32, FPersonalityIntToItemArray> NpcItemInitConfig; // 0x00A0 (size: 0x50)
//     TMap<int32, int32> NpcEquipInitConfig;                     // 0x00F0 (size: 0x50)
//     TMap<int32, FItemArray> PreFixNpcExtraItems;               // 0x0140 (size: 0x50)
//     TArray<FBuildArray> CityNpcBuildInitConfig;                // 0x0190 (size: 0x10)
//     TMap<EWuXingType, int32> NpcDefaultXinJue;                 // 0x01A0 (size: 0x50)
//     TMap<int32, FNpcInitLingFa> NpcInitLingFa;                 // 0x01F0 (size: 0x50)
//     TArray<int32> NpcDefaultSkill;                             // 0x0240 (size: 0x10)
//     float HairColorS;                                          // 0x0250 (size: 0x4)
//     float HairColorV;                                          // 0x0254 (size: 0x4)
//     int32 ZhanMenAgeFix;                                       // 0x0258 (size: 0x4)
//     int32 ZhangLaoAgeFix;                                      // 0x025C (size: 0x4)

// }; // Size: 0x260

// class UNpcInteraction : public UInteractionBase
// {
//     TArray<FSingleNpc> NpcDataOrigin;                         // 0x0050 (size: 0x10)
//     TMap<int32, int32> PresetNpces;                           // 0x0070 (size: 0x50)
//     TMap<int32, FPresetNpcInitConfig> PresetNpcInitConfigMap; // 0x00C0 (size: 0x50)
//     TArray<int32> NotAccessibleNpcList;                       // 0x0110 (size: 0x10)
//     TMap<int32, FNPCArray> MapByPosition;                     // 0x0120 (size: 0x50)

//     void SetNPCPursueValue(int32 NpcIndex, int32 OtherNpcIndex, float Value);
//     void SetNPCLoveValue(int32 NpcIndex, int32 OtherNpcIndex, float Value);
//     void SetNPCFavorability(int32 NpcIndex, int32 OtherNpcIndex, float Value);
//     void SetNPCFamiliarity(int32 NpcIndex, int32 OtherNpcIndex, int32 Value);
//     void RemoveNpcKnownLingfa(int32 NpcID, int32 LingFaID);
//     void RemoveNpcKnownItems(int32 NpcID, int32 ItemTemplateID);
//     void RemoveFromNotAccessibleList(int32 NpcID);
//     void NpcMove(int32 NpcIndex, const FIntPoint &DestCoordinate);
//     bool IsPresetNpc(int32 NpcIndex);
//     bool IsNpcAccessible(int32 NpcID);
//     bool IsInSameGrid(int32 NpcA, int32 NpcB);
//     int32 GetWorldIDByNpcIndex(int32 NpcIndex);
//     TArray<int32> GetSystemNpcs();
//     int32 GetPresetNpcRealIndex(int32 PresetID);
//     void GetNpcsByRange(int32 CellID, int32 SightRange, TArray<int32> &Npcs);
//     int32 GetNPCPursueValue(int32 NpcIndex, int32 OtherNpcIndex);
//     int32 GetNpcNumer();
//     float GetNpcMasterValue(int32 NpcID);
//     int32 GetNPCLoveValue(int32 NpcIndex, int32 OtherNpcIndex);
//     TArray<int32> GetNpcListByStage(int32 Stage, TArray<int32> ExcludeNpc);
//     TArray<int32> GetNpcListByPos(const FIntPoint &Coordinate);
//     TArray<int32> GetNpcListByChildRegion(int32 ChildRegionID);
//     TArray<int32> GetNpcListByCellID(int32 CellID);
//     TArray<int32> GetNpcKnownLingfa(int32 NpcID);
//     TArray<int32> GetNpcKnownItems(int32 NpcID);
//     TArray<int32> GetNpcHasLearnedOrGetBook(int32 UserID);
//     TArray<int32> GetNpcHasLearnedBooks(int32 UserID, bool IncludeLearning);
//     float GetNPCFavorability(int32 NpcIndex, int32 OtherNpcIndex);
//     int32 GetNPCFamiliarity(int32 NpcIndex, int32 OtherNpcIndex);
//     int32 GetNpcCountByPos(const FIntPoint &Coordinate);
//     bool FindNpc(int32 NpcIndex);
//     void DummpNpcInfoByRPGID(int32 RPGIndex);
//     void DummpNpcInfo();
//     void AddToNotAccessibleList(int32 NpcID);
//     void AddNpcStageProgress(int32 NpcID, int32 AddValue);
//     void AddNpcKnownLingfa(int32 NpcID, int32 LingFaID);
//     void AddNpcKnownItems(int32 NpcID, int32 ItemTemplateID);
// }; // Size: 0x1C0

// class UNpcInteractionSettlementInfo : public UBattleSettlementsBase
// {
// }; // Size: 0x460

// class UNpcStateMechanic : public UFNSingleAttribute
// {

//     void MarkCharacterSeclusionByID(class UObject *Object, int32 CharacterID, ESeclusionType SeclusionType, int32 TurnCount);
//     void MarkCharacterDeathByID(class UObject *Object, int32 CharacterID, int32 Killer, EDeathReasonType DeathReason);
//     class UNpcStateMechanic *Get(const class UObject *WorldContextObject);
//     void EndCharacterSeclusionByID(class UObject *Object, int32 CharacterID, ESeclusionType SeclusionType);
//     bool CheckCharacterSeclusionByID(class UObject *Object, int32 CharacterID);
//     bool CheckCharacterDeath(class UObject *Object, int32 CharacterID);
// }; // Size: 0x38

// class UOutLineManger : public UFNSingleAttribute
// {
//     class UGameInteractionCpt *MouseHoverOutlineCpt; // 0x0038 (size: 0x8)

//     void SetCurMouseHoverActor(class AActor *NewActor);
// }; // Size: 0x40

// class UPOIBattle : public UFieldBattle
// {
//     EDaoYunType DaoYunType; // 0x01B0 (size: 0x1)
//     int32 BattleID;         // 0x01B4 (size: 0x4)
//     int32 LifeTurns;        // 0x01B8 (size: 0x4)

// }; // Size: 0x1C0

// class UPOIBattle_FQFZ : public UPOIBattle
// {
// }; // Size: 0x1C0

// class UPOIBattle_YDDJ : public UPOIBattle
// {
// }; // Size: 0x1C0

// class UPOIBattle_YZCX : public UPOIBattle
// {
// }; // Size: 0x1C0

// class UPerFrameProcessWrapBase : public UObject
// {
// }; // Size: 0x28

// class UPerFrameProcessWrapFunctionCall : public UPerFrameProcessWrapBase
// {
// }; // Size: 0x70

// class UPlayerAttribute : public UFNBigWorldSubSystem
// {
//     FRPGAttributeBase PlayerAttributeBase;                                 // 0x0048 (size: 0xA58)
//     FPlayerAttributeFavorabilityChangeDelegate FavorabilityChangeDelegate; // 0x0AA0 (size: 0x10)
//     void FavorabilityChange(int32 NpcID, int32 PreSetValue, int32 NewValue);
//     FPlayerAttributeDebtOfGratitudeChangeDelegate DebtOfGratitudeChangeDelegate; // 0x0AB0 (size: 0x10)
//     void DebtOfGratitudeChange(int32 NpcID, int32 PreSetValue, int32 NewValue);
//     FPlayerAttributeFamiliarityChangeDelegate FamiliarityChangeDelegate; // 0x0AC0 (size: 0x10)
//     void FamiliarityChange(int32 NpcID, int32 PreSetValue, int32 NewValue);
//     FPlayerAttributeAccqNpcChangeDelegate AccqNpcChangeDelegate; // 0x0AD0 (size: 0x10)
//     void PlayerAcquaintanceNpcChange(int32 NpcID);
//     FPlayerAttributePlayerFightAttributeChangeDelegate PlayerFightAttributeChangeDelegate; // 0x0AE0 (size: 0x10)
//     void PlayerFightAttributeChange();
//     FPlayerAttributePlayerStageChange PlayerStageChange; // 0x0AF0 (size: 0x10)
//     void PlayerStageChange();
//     FPlayerAttributeInfomationLevelChangeDelegate InfomationLevelChangeDelegate; // 0x0B00 (size: 0x10)
//     void InfomationLevelChange(int32 NpcID, int32 InfomationType, int32 NewValue);
//     FPlayerAttributeInfomationLevelChangeSingleMessageDelegate InfomationLevelChangeSingleMessageDelegate; // 0x0B10 (size: 0x10)
//     void InfomationLevelChangeSingleMessage(int32 NpcID);
//     FPlayerAttributePursueChangeDelegate PursueChangeDelegate; // 0x0B20 (size: 0x10)
//     void PursueChange(int32 NpcID, int32 PreSetValue, int32 NewValue);
//     FPlayerAttributeLoveChangeDelegate LoveChangeDelegate; // 0x0B30 (size: 0x10)
//     void LoveChange(int32 NpcID, int32 PreSetValue, int32 NewValue);
//     TMap<int32, float> NpcDebtOfGratitudeMap;                         // 0x0B48 (size: 0x50)
//     TMap<int32, int32> DebtOfGratitudeChangeTrun;                     // 0x0B98 (size: 0x50)
//     TMap<int32, int32> NpcFamiliarityMap;                             // 0x0BE8 (size: 0x50)
//     TArray<int32> AcquaintanceNpc;                                    // 0x0C38 (size: 0x10)
//     TMap<int32, FNickNameInfo> NickNameMap;                           // 0x0C48 (size: 0x50)
//     FDestinyAttribute DestinyAttribute;                               // 0x0C98 (size: 0x18)
//     TMap<int32, FGuid> PropList;                                      // 0x0CB0 (size: 0x50)
//     TMap<int32, FInfomationLevel> NpcInfomationLevel;                 // 0x0D00 (size: 0x50)
//     TMap<int32, FInteractTimes> NpcInteractTimesOfType;               // 0x0D50 (size: 0x50)
//     TMap<int32, FInteractTimes> NpcInteractTimesOfTypeCurTurn;        // 0x0DA0 (size: 0x50)
//     TMap<int32, int32> BadInteractionTimes;                           // 0x0DF0 (size: 0x50)
//     TMap<int32, FNpcStereos> NpcStereos;                              // 0x0E40 (size: 0x50)
//     TArray<int32> XinJuePromoteRecords;                               // 0x0E90 (size: 0x10)
//     TMap<int32, FYaoLiInfo> YaoLiInfos;                               // 0x0EA0 (size: 0x50)
//     TArray<int32> JingLuoPointList;                                   // 0x0EF0 (size: 0x10)
//     TMap<int32, int32> CustomSaveValueMap;                            // 0x0F00 (size: 0x50)
//     int32 MessageTypeBCount;                                          // 0x0F50 (size: 0x4)
//     TArray<FMessageTypeB> MessageTypeBList;                           // 0x0F58 (size: 0x10)
//     TArray<FName> AllMessageTypeC;                                    // 0x0F68 (size: 0x10)
//     TMap<int32, FSpecialPointTriatInfo> AllSpecialPointInfo;          // 0x0F78 (size: 0x50)
//     TArray<FDaiGongInfo> AllDaiGongInfo;                              // 0x0FC8 (size: 0x10)
//     int32 TianDaoEventTriggerCount;                                   // 0x0FD8 (size: 0x4)
//     int32 WuXingRegionBuffID;                                         // 0x0FDC (size: 0x4)
//     TArray<int32> MatchDanJiArray;                                    // 0x0FE0 (size: 0x10)
//     TMap<int32, int32> MatchDanYePool;                                // 0x0FF0 (size: 0x50)
//     TArray<int32> CurrentDanYeArray;                                  // 0x1040 (size: 0x10)
//     TMap<int32, int32> OwnedDanYeMap;                                 // 0x1050 (size: 0x50)
//     TMap<int32, int32> OwnedSuiDanGroupMap;                           // 0x10A0 (size: 0x50)
//     TMap<int32, int32> MatchDanQingMap;                               // 0x10F0 (size: 0x50)
//     TArray<int32> QiArray;                                            // 0x1140 (size: 0x10)
//     TArray<int32> OwnedDanYeWuXingNum;                                // 0x1150 (size: 0x10)
//     int32 DanJiID;                                                    // 0x1160 (size: 0x4)
//     TMap<int32, int32> JinDanIDAndLevel;                              // 0x1168 (size: 0x50)
//     int32 JinDanID;                                                   // 0x11B8 (size: 0x4)
//     int32 JinDanLevel;                                                // 0x11BC (size: 0x4)
//     int32 YuanYingID;                                                 // 0x11C0 (size: 0x4)
//     int32 YuanYingLevel;                                              // 0x11C4 (size: 0x4)
//     TArray<int32> ZongMenFameRewardExchangedArray;                    // 0x11C8 (size: 0x10)
//     int32 LastReceiveSalaryTurn;                                      // 0x11D8 (size: 0x4)
//     bool SameGenderPursue;                                            // 0x11DC (size: 0x1)
//     TMap<int32, int32> DaoYun2LingFaHighestLevelMap;                  // 0x11E0 (size: 0x50)
//     TArray<int32> ArrivedChildRegion;                                 // 0x1230 (size: 0x10)
//     TArray<int32> SelectedCreateAttribute;                            // 0x1240 (size: 0x10)
//     TArray<int32> XinJueTraitReplaceSlot;                             // 0x1250 (size: 0x10)
//     TMap<int32, int32> ItemUsedHistory;                               // 0x1260 (size: 0x50)
//     FGuid CharacterGUID;                                              // 0x12B0 (size: 0x10)
//     bool IsZhenXianMode;                                              // 0x12C0 (size: 0x1)
//     TMap<int32, FZongMenExchangeBookInfo> ZongMenExchangeBookInfoMap; // 0x12C8 (size: 0x50)
//     bool LianQiGeLearnState;                                          // 0x1318 (size: 0x1)
//     bool LianDanGeLearnState;                                         // 0x1319 (size: 0x1)
//     TArray<int32> LearnedFormulaIDList;                               // 0x1320 (size: 0x10)
//     bool bLQSaveLimit;                                                // 0x1330 (size: 0x1)
//     EYiShiTingShowBattleType YiShiTingShowBattle;                     // 0x1331 (size: 0x1)
//     bool YiShiTingBattleState;                                        // 0x1332 (size: 0x1)
//     int32 YiShiTingBattleJoinTurn;                                    // 0x1334 (size: 0x4)
//     FInvadedEffectRuntimeData InvadedEffectRuntimeData;               // 0x1338 (size: 0x10)
//     int32 InvadeGridCellWalkStep;                                     // 0x1348 (size: 0x4)
//     int32 GenerateBadEventFlag;                                       // 0x134C (size: 0x4)
//     FString FirstNameToSave;                                          // 0x1350 (size: 0x10)
//     FString LastNameToSave;                                           // 0x1360 (size: 0x10)

//     void UpdateNpcInfomationLevel(int32 NpcID);
//     void UnlockDifficulty();
//     void TurnEnd(int32 TurnCount);
//     void SetPursueValue(int32 NpcIndex, float Value);
//     void SetPorpItemPos(int32 Pos, FGuid ItemGUID);
//     void SetPlayerName(FString FisrtName, FString LastName);
//     void SetPlayerDynamicGameValueByIndex(int32 IndentyID, int32 Value);
//     void SetNpcStereos(int32 NpcID, int32 StereoID);
//     void SetNpcNickName(int32 NpcID, FString PlayerNickName, FString NpcNickName);
//     void SetNpcInfomationLevel(int32 NpcID, int32 Value, int32 InformationType);
//     void SetLoveValue(int32 NpcIndex, float Value);
//     void SetInteractTimesAdd(int32 NpcID, int32 InformationType, int32 Value);
//     void SetFavorability(int32 NpcIndex, float Value, bool RepayDebt);
//     void SetFamiliarity(int32 NpcIndex, int32 Value);
//     void SetDebtOfGratitude(int32 NpcIndex, float Value);
//     void SetCharacterGUID();
//     void ScriptRlease();
//     void ScriptOnLootItem(class UItemBase *ItemObject);
//     void ScriptInit();
//     void SaveDaiGongInfo(class UItemBase *ItemBase, int32 NeedDay, EDaiGongType DaiGongType);
//     void ResetMessageTypeC();
//     void RemoveXinJueTraitReplaceSlot(int32 SlotIndex);
//     void RemoveNpcNickName(int32 NpcID);
//     void RemoveFormula(int32 DanYaoID, int32 Index);
//     void RecordItemUsed(int32 ItemTemplateID, int32 Count);
//     void OnLootItem(class UItemBase *ItemObject);
//     void OnBigWorldAttributeChange(FName BigWorldAttributeName, int32 UserID, float OldValue, float DeltaValue);
//     bool LearnFormulaByItem(int32 BookID);
//     TArray<int32> GetXinJueTraitReplaceSlot();
//     int32 GetTotalDaoYunValue();
//     TArray<int32> GetSpecialPointInfoByJingLuoID(int32 JingLuoID);
//     float GetPursueValue(int32 NpcIndex);
//     float GetPursueAddByFavor(int32 NpcIndex, float FAdd);
//     int32 GetPropItemPos(FGuid ItemGUID);
//     int32 GetPlayerDynamicGameValueByIndex(int32 IndentyID);
//     TArray<int32> GetNpcStereos(int32 NpcID);
//     FNickNameInfo GetNpcNickName(int32 NpcID);
//     int32 GetNpcInfomationLevel(int32 NpcID, TEnumAsByte<EInfomationType> InfoType);
//     Enum_AttitudeType GetNpcAttitude(int32 NpcIndex);
//     float GetLoveValue(int32 NpcIndex);
//     float GetLoveAddByFavor(int32 NpcIndex, float FAdd);
//     TArray<int32> GetLearningLingFaByType(EItemBaseType ItemBaseType);
//     TArray<int32> GetLearnedJingLuoPointList();
//     int32 GetItemUsedHistory(int32 ItemTemplateID);
//     bool GetIsZhenXianMode();
//     int32 GetInteractTimesCurTurn(int32 NpcID, int32 InformationType);
//     int32 GetInteractTimes(int32 NpcID, int32 InformationType);
//     float GetFavorability(int32 NpcIndex);
//     int32 GetFamiliarity(int32 NpcIndex);
//     float GetDebtOfGratitude(int32 NpcIndex);
//     float GetDebtChangeByFavor(int32 NpcIndex, float FAdd);
//     int32 GetDaoYunValue(EDaoYunType DaoYunType);
//     int32 GetDaiGongInfoByCellIDAndItemBaseType(int32 CellID, EDaiGongType DaiGongType);
//     TArray<int32> GetCreatePlayerTrait();
//     FGuid GetCharacterGUID();
//     int32 GetBadInteractionTime(int32 NpcID);
//     void DayEnd(bool bEnoughTime, bool bNeedPassTurn);
//     bool CheckTheSameFormula(int32 DanYaoID, int32 YaoYinID, TMap<int32, int32> YaoCaiMap);
//     void ChangeFormulaLike(int32 DanYaoID, int32 Index);
//     int32 CalDaiGongRemainTime(FDaiGongInfo &DaiGongInfo);
//     void AutoRecoverHealthAndMana();
//     void AddZongMenExchangeBook(int32 BookID, int32 ZongMenID);
//     void AddSpecialPointInfo(int32 JingLuoID, int32 PointTriatID);
//     void AddMessageTypeC(FString &Message);
//     void AddMessageTypeB(FString &Message, int32 MessageID, bool UnRead, FString &MessageIcon);
//     void AddFormula(FFormulaInfo FormulaInfo);
//     void AddDaoYunValue(EDaoYunType DaoYunType, int32 AddValue);
//     void AddCreatePlayerTrait(int32 CreateAttributeID);
//     void AddBadInteractionTime(int32 NpcID);
//     void AddAcquaintanceNpc(int32 NpcID);
// }; // Size: 0x1370

// class UPlayerAttributeItemIDConfig : public UDataAsset
// {
//     TArray<FPlayerAttributeIPropetyInfo> AttributeItemID; // 0x0030 (size: 0x10)
//     TMap<class FName, class FName> ReNameTable;           // 0x0040 (size: 0x50)

// }; // Size: 0x90

// class UPlayerInfomationManager : public UFNSingleAttribute
// {
//     class UDataTable *PlayerDisplayInfomationData; // 0x0038 (size: 0x8)
//     TArray<EInfoDataCatagory> InfoDataCatagories;  // 0x0090 (size: 0x10)

//     void SaveFliterCatagoryIndex(EInfoDataCatagory InfoDataCatagory);
//     float GetUsualEffectPro(int32 ID);
//     float GetSummonUsualEffectPro(int32 ID);
//     float GetRealAttributeValueByName(FGameplayAttribute Attribute);
//     TArray<EInfoDataCatagory> GetFliterCatagories();
//     void ClearFliterCatagoryIndex();
// }; // Size: 0xA0

// class UPlayerInteraction : public UInteractionBase
// {
// }; // Size: 0x40

// class UPoiBigCity : public UCityBase
// {
// }; // Size: 0x2A0

// class UPoiConfigDataAsset : public UDataAsset
// {
//     TMap<class FString, class UPoiGenerateConfigBase *> PoiConfigMap; // 0x0030 (size: 0x50)

// }; // Size: 0xD0

// class UPoiDaGuaidian : public UPoibase
// {
// }; // Size: 0x170

// class UPoiDongFuGenConifg : public UPoiGenConifg
// {
// }; // Size: 0x160

// class UPoiGenConifg : public UPoiGenerateConfigBase
// {
//     TArray<FPoiConfigBase> ConfigByLeves; // 0x0150 (size: 0x10)

// }; // Size: 0x160

// class UPoiGenerateConfigBase : public UObject
// {
//     bool bHightPriority;                            // 0x0028 (size: 0x1)
//     FSoftClassPath VisualizeActor;                  // 0x0030 (size: 0x20)
//     FTransform POIExternTransform;                  // 0x0050 (size: 0x60)
//     FBigWorldMiniMap_IconConfigData IconConfigData; // 0x00B0 (size: 0xA0)

// }; // Size: 0x150

// class UPoiGuaiDianGenConfig : public UPoiGenConifg
// {
// }; // Size: 0x160

// class UPoiInfoHelper : public UObject
// {

//     class UPoibase *GetZMPoiOfPeople(class UObject *WorldContext, int32 PeopleID);
//     TArray<class UPoibase *> GetPoiObjectByFilter(class UObject *WorldContext, const FPoiGetterFilter &PoiGetterFilter);
//     class UPoibase *GetCityOfPeople(class UObject *WorldContext, int32 PeopleID);
// }; // Size: 0x28

// class UPoiInvadeCore : public UPoibase
// {
// }; // Size: 0x170

// class UPoiInvadeDoor : public UPoibase
// {
// }; // Size: 0x170

// class UPoiMidCity : public UCityBase
// {
// }; // Size: 0x2A0

// class UPoiSkyfallRift : public UPoibase
// {
//     int32 StartTurn;                // 0x0170 (size: 0x4)
//     int32 SkyfallRiftID;            // 0x0174 (size: 0x4)
//     int32 TurnCountBefore;          // 0x0178 (size: 0x4)
//     TArray<int32> ChangeLQCellList; // 0x0298 (size: 0x10)
//     TArray<int32> OriginDaoYunList; // 0x02A8 (size: 0x10)

//     void OnNextTurn(int32 TurnCount);
//     void OnDestoryNSFinished(class UNiagaraComponent *NSComponent);
// }; // Size: 0x2C0

// class UPoiSkyfallRiftGenConfig : public UPoiGenConifg
// {
// }; // Size: 0x160

// class UPoiSmallGuaidian : public UPoibase
// {
// }; // Size: 0x170

// class UPoibase : public UObject
// {
//     TArray<int32> Cells;                                        // 0x0028 (size: 0x10)
//     FName PoiName;                                              // 0x0038 (size: 0x8)
//     TMap<class EPoiFunctionEnum, class bool> FunctionLockState; // 0x0040 (size: 0x50)
//     FString PoiTypeName;                                        // 0x0090 (size: 0x10)
//     TSubclassOf<class UPoiGenerateConfigBase> PoiConfigClass;   // 0x00A0 (size: 0x8)
//     class UGameInstance *CurGameInstance;                       // 0x00A8 (size: 0x8)
//     class USingleWorldData *BelongSingleWorldData;              // 0x00B0 (size: 0x8)
//     FName FixedConfigKeyName;                                   // 0x00B8 (size: 0x8)
//     bool bNeedInitVisualizeGrid;                                // 0x00C0 (size: 0x1)
//     int32 PerceptionSize;                                       // 0x00C4 (size: 0x4)
//     FTransform ExternTransform;                                 // 0x00D0 (size: 0x60)
//     FCommonEcsSaveEntityIndex PoiEntityIndex;                   // 0x0130 (size: 0x18)
//     TArray<FInstancedStruct> InstancedStructs;                  // 0x0148 (size: 0x10)
//     TArray<FInstancedStruct> VisualizeStructsForActiveWorld;    // 0x0158 (size: 0x10)

//     void Trigger();
//     bool ScriptCheckPoiType(class UGameInstance *GameInstance, const FEnttIndex &InEnttIndex);
//     void Script_Trigger();
//     void Script_OnPerception(const FIntPoint &LastPosition, const FIntPoint &CurPosition);
//     void LockFunction(EPoiFunctionEnum FunctionEnum, bool bLock);
//     bool IsInSenseRange(int32 Scale);
//     bool IsInPoiRange(FIntPoint Position);
//     bool IsFall();
//     bool IsBudgeOrFall();
//     bool IsBudge();
//     bool IsAbandon();
//     bool GetShowState();
//     void GetPoiCenterWorldPosition(FVector &WorldPos);
//     bool GetLockState(EPoiFunctionEnum FunctionEnum);
//     int32 DistanceToPoi(const FIntPoint &HexGridCoordinatePos);
// }; // Size: 0x170

// class UProceduralHexGridCpt : public UActorComponent
// {
// }; // Size: 0xA0

// class UProceduralTagBuff : public UGameplayEffect
// {
// }; // Size: 0x860

// class UProgramInternalCacheAttribute : public UAttributeSet
// {
//     FGameplayAttributeData ProgramInternalCacheA; // 0x0030 (size: 0x10)
//     FGameplayAttributeData ProgramInternalCacheB; // 0x0040 (size: 0x10)
//     FGameplayAttributeData ProgramInternalCacheC; // 0x0050 (size: 0x10)

// }; // Size: 0x60

// class UQestDetailBase : public UObject
// {
//     FString QuestDetailText;      // 0x0028 (size: 0x10)
//     bool bReloadActionNeedActive; // 0x0038 (size: 0x1)
//     bool bMultiActiveAtSameTime;  // 0x0039 (size: 0x1)

// }; // Size: 0x48

// class UQuestActionEntityPrefabBase : public UQestDetailBase
// {
//     FQuestActionEntityPrefabBaseOnStart OnStart; // 0x0048 (size: 0x10)
//     void OnQuestActionStart(class UQuestActionEntityPrefabBase *QuestActionEntityPrefabBase);
//     FQuestActionEntityPrefabBaseOnEnd OnEnd; // 0x0058 (size: 0x10)
//     void OnQuestActionEnd(class UQuestActionEntityPrefabBase *QuestActionEntityPrefabBase);
//     FQuestActionEntityPrefabBaseOnAction OnAction; // 0x0068 (size: 0x10)
//     void OnQuestActionState(class UQuestActionEntityPrefabBase *QuestActionEntityPrefabBase);
//     EQuestActionRes QuestActionState;                         // 0x0078 (size: 0x1)
//     TWeakObjectPtr<class UQuestEntityBase> ParentQuestEntity; // 0x007C (size: 0x8)

//     void Script_OnInit();
//     void Script_DeactiveQuestAction();
//     void Script_ActiveQuestAction();
//     void InternalActionState();
//     void DeactiveQuestAction();
//     void ActiveQuestAction();
// }; // Size: 0x88

// class UQuestEntityBase : public URuntimeSerializeObjectBase
// {
//     FEnttIndex EnttIndex;                                       // 0x0028 (size: 0x8)
//     int32 QuestID;                                              // 0x0030 (size: 0x4)
//     TArray<class UQestDetailBase *> QuestDetailes;              // 0x0038 (size: 0x10)
//     TArray<class UQestDetailBase *> NotSaveDetails;             // 0x0048 (size: 0x10)
//     FString QuestTitileText;                                    // 0x0058 (size: 0x10)
//     FString QuestSimpleDescText;                                // 0x0068 (size: 0x10)
//     FString QuestSimpleDescTextTemplate;                        // 0x0078 (size: 0x10)
//     FString QuestFullDescText;                                  // 0x0088 (size: 0x10)
//     TArray<FQuestDetailSaveResInfo> QuestDetailResByActionList; // 0x0098 (size: 0x10)
//     bool bForceEndFlag;                                         // 0x00A8 (size: 0x1)
//     TArray<class UQestDetailBase *> ToDeactiveQuestDetailes;    // 0x00B8 (size: 0x10)

//     void SetQuestTitle(FString Title);
//     void SetQuestSimpleDesc(FString Desc);
//     void Script_OnTake();
//     void Script_OnRestore(int32 CurQuestVersion, int32 OldQuestVersion);
//     void Script_OnInit();
//     void Script_OnEnd(EQuestState QuestState);
//     void Script_OnDestory();
//     FString Script_GetQuestTotalDesc();
// }; // Size: 0x120

// class UQuestMechanic : public UFNSingleAttribute
// {
//     int32 DelegateQuestTakeMaxNum;                        // 0x0050 (size: 0x4)
//     TArray<FName> StopGenerateDelegateQuestPOIFixedNames; // 0x0058 (size: 0x10)
//     TArray<class UObject *> ActionEntityRefs;             // 0x0068 (size: 0x10)

//     void TakeQuest(class UObject *WorldObject, FEnttIndex EnttIndex);
//     FEnttIndex SetZongmenQuestActive(class UObject *WorldObject, int32 QuestPrefabID, FName ZongmenFixedName);
//     void SetQuestReadytoCommit(class UObject *WorldObject, const FEnttIndex &EnttIndex, bool bReady);
//     void SetQuestHexTracePoint(class UObject *WorldObject, const FEnttIndex &EnttIndex, FIntPoint TracePoint, bool bRemove);
//     void SetQuestHexTraceByEntity(class UObject *WorldObject, const FEnttIndex &QuestEnttIndex, const FEnttIndex &TargetEnttIndex, bool bRemove);
//     void SetQuestEnd(class UObject *WorldObject, FEnttIndex EnttIndex, EQuestState EndState);
//     class UQuestEntityBase *SetQuestActiveEx(class UObject *WorldObject, int32 QuestPrefabID);
//     FEnttIndex SetQuestActive(class UObject *WorldObject, int32 QuestPrefabID);
//     FEnttIndex SetDelegateQuestActive(class UObject *WorldObject, int32 QuestPrefabID, int32 DelegateNpcID, FName POIFixedName);
//     void SetCurTraceQuest(class UObject *WorldObject, const FEnttIndex &EnttIndex);
//     FEnttIndex SetBranchQuestActive(class UObject *WorldObject, int32 QuestPrefabID, int32 TakenNpcID, int32 CommitNpcID);
//     void RestoreZongmenQuest(class UObject *WorldObject, const FEnttIndex &EnttIndex, FName ZongmenFixedName);
//     void RestoreDelegateQuest(class UObject *WorldObject, const FEnttIndex &EnttIndex, int32 DelegateNpcID, FName POIFixedName);
//     void RestoreBranchQuest(class UObject *WorldObject, const FEnttIndex &EnttIndex, int32 TakenNpcID, int32 CommitNpcID);
//     void OnNextTurn(int32 TurnCount);
//     TArray<FEnttIndex> GetReadyToTakeQuestsByNpc(class UObject *WorldObject, int32 TakenNpcID, EQuestDomainType QuestDomainType);
//     TArray<FEnttIndex> GetReadytoTakeDelegateQuestsByPOI(class UObject *WorldObject, FName POIFixedName);
//     TArray<FEnttIndex> GetReadyToCommitQuestsByNpc(class UObject *WorldObject, int32 CommitNpcID, EQuestDomainType QuestDomainType);
//     TArray<FEnttIndex> GetReadytoCommitDelegateQuestsByPOI(class UObject *WorldObject, FName POIFixedName);
//     bool GetQuestNewFlag(class UObject *WorldObject, const FEnttIndex &EnttIndex);
//     TArray<FEnttIndex> GetOngoingZongmenQuests(class UObject *WorldObject, FName ZongmenFixedName);
//     TArray<FEnttIndex> GetOngoingQuestsForTrace(class UObject *WorldObject);
//     TArray<FEnttIndex> GetOngoingQuestsByType(class UObject *WorldObject, EQuestDomainType QuestDomainType);
//     TArray<FEnttIndex> GetOngoingQuestsByNpc(class UObject *WorldObject, int32 TakenNpcID, int32 CommitNpcID, EQuestDomainType QuestDomainType);
//     TArray<FEnttIndex> GetOngoingQuestsByInteractNpc(class UObject *WorldObject, int32 InteractNpcID, EQuestDomainType QuestDomainType);
//     TArray<FEnttIndex> GetOngoingDelegateQuestsByPOI(class UObject *WorldObject, FName POIFixedName);
//     TArray<FEnttIndex> GetHistroyQuestes(class UObject *WorldObject, int32 QuestPrefabID);
//     FEnttIndex GetHistroyQuest(class UObject *WorldObject, int32 QuestPrefabID);
//     FEnttIndex GetCurTraceQuest(class UObject *WorldObject);
//     class UQuestMechanic *Get(const class UObject *WorldContextObject);
//     void CommitQuest(class UObject *WorldObject, const FEnttIndex &EnttIndex);
//     void ClearZongmenQuests(class UObject *WorldObject, FName ZongmenFixedName);
//     void CancelQuestNewFlag(class UObject *WorldObject, const FEnttIndex &EnttIndex);
// }; // Size: 0x78

// class UQuestTriggerConditionBase : public UQestDetailBase
// {
//     bool bConditionRes;                                                          // 0x0048 (size: 0x1)
//     FQuestTriggerConditionBaseQuestTriggerConditionRet QuestTriggerConditionRet; // 0x0050 (size: 0x10)
//     void OnQuestTriggerConditionRet(class UQuestTriggerConditionBase *QuestActionEntityPrefabBase);
//     FQuestTriggerConditionBaseQuestTriggerConditionChange QuestTriggerConditionChange; // 0x0060 (size: 0x10)
//     void OnQuestTriggerConditionChange(class UQuestTriggerConditionBase *QuestActionEntityPrefabBase);
//     TWeakObjectPtr<class UQuestEntityBase> ParentQuestEntity; // 0x0070 (size: 0x8)

//     void TriggerConditionChange();
//     void TriggerCondition(bool ConditionRes);
//     void Script_DeactiveQuestTrigger(bool bTrigger);
//     void Script_ActiveQuestTrigger();
//     void DeactiveQuestTrigger(bool bForceDeactive);
//     void ActiveQuestTrigger();
// }; // Size: 0x78

// class URPGAttributeOprate : public UObject
// {

//     void UpdateValue(const class UObject *WorldContextObject, int32 UserID, FBigWorldAttributeName BigWorldAttributeName, FFloatAttributeValue AddValue, EM_BigWorldAttributeOperateType OperateType);
//     float GetValue(const class UObject *WorldContextObject, int32 UserID, FBigWorldAttributeName BigWorldAttributeName);
// }; // Size: 0x28

// class URPGLifeRecordMechanic : public UFNSingleAttribute
// {
//     TMap<class FName, class TSubclassOf<ULifeRecordEntityBase>> LifeRecordClasses; // 0x0040 (size: 0x50)

//     class ULifeRecordEntityBase *GetSerializedRecordEntityByIndex(class UObject *WorldObject, int32 Index);
//     class ULifeRecordEntityBase *GetDefaultRecordEntityBaseByClass(class UObject *WorldObject, TSubclassOf<class ULifeRecordEntityBase> ClassType);
//     class ULifeRecordEntityBase *GetDefaultRecordEntityBase(class UObject *WorldObject, FName ClassKeyName);
//     int32 AddLifeRecordToGame(class UObject *WorldObject, class ULifeRecordEntityBase *LifeRecodeEntityBase);
//     void AddLifeRecordIndexToRPGAttribute(class UObject *WorldObject, int32 UserID, int32 RecordIndex);
// }; // Size: 0xA0

// class URandomNameSingleAttribute : public UFNSingleAttribute
// {
//     class UDataTable *RandomNameTable; // 0x0038 (size: 0x8)

//     void RandomName(int32 MaleIndex, FName &ResFirstName, FName &ResLastName, TArray<int32> &Indexes);
//     void GetNameByIndex(TArray<int32> &Indexes, int32 MaleIndex, FName &ResFirstName, FName &ResLastName);
// }; // Size: 0x50

// class UReadEventManager : public UFNSingleAttribute
// {

//     bool SetLingFaExp(int32 UserID, int32 LingFaID, int32 Exp);
//     int32 GetLingFaExp(int32 UserID, int32 LingFaID);
//     int32 GetDaoYunTotalValue(int32 UserID, int32 ItemTemplateID);
//     void DeleteLingFaExp(int32 UserID, int32 LingFaID);
//     bool CheckLingFaLearnState(int32 UserID, int32 LingFaID);
//     float CalUserPerceptionValue(int32 UserID);
//     float CalRuleCoefficient(int32 UserID, int32 ItemTemplateID);
//     int32 CalLearnLingFaNeedDay(int32 UserID, int32 BookID, bool ContainLearnedExp);
//     float CalAptitudeCoefficient(int32 UserID, int32 WuXingValue);
// }; // Size: 0x88

// class URecastFilter_FNGameDefaultArea : public UNavigationQueryFilter
// {
// }; // Size: 0x48

// class URegionManager : public UFNSingleAttribute
// {
//     int32 LastChildRegionID;                                 // 0x0040 (size: 0x4)
//     class UDataTable *RegionConfigTable;                     // 0x0048 (size: 0x8)
//     class UDataTable *ChildRegionConfigTable;                // 0x0060 (size: 0x8)
//     class URegionTypeGeneralConfig *RegionTypeGeneralConfig; // 0x0078 (size: 0x8)

//     void Script_UpdateRegionInfo(int32 ChildRegionID);
//     void Script_StandbyOnWuXingRegion(int32 ChildRegionID);
//     void Script_MoveOnWuXingRegion(int32 ChildRegionID);
//     FChildRegionConfig K2_GetChildRegionConfig(int32 ChildRegionID);
//     class URegionTypeGeneralConfig *GetRegionTypeGeneralConfig();
// }; // Size: 0x80

// class URegionTypeGeneralConfig : public UDataAsset
// {
//     TMap<class ERegionType, class FSoftObjectPath> BigWorldStandbySpecialEffects;  // 0x0030 (size: 0x50)
//     TMap<class ERegionType, class FSoftObjectPath> BigWorldMoveFootSpecialEffects; // 0x0080 (size: 0x50)

// }; // Size: 0xD0

// class URelationShipInitDataConfig : public UDataAsset
// {
//     int32 MinStageOfCityNpcHasDisciple;     // 0x0030 (size: 0x4)
//     int32 BaseNumOfCityNpcHasDisciple;      // 0x0034 (size: 0x4)
//     int32 MinFavForMaster;                  // 0x0038 (size: 0x4)
//     int32 MaxFavForMaster;                  // 0x003C (size: 0x4)
//     int32 MinFavForOtherDisciple;           // 0x0040 (size: 0x4)
//     int32 MaxFavForOtherDisciple;           // 0x0044 (size: 0x4)
//     int32 MinRandomBaseFix;                 // 0x0048 (size: 0x4)
//     int32 MaxRandomBaseFix;                 // 0x004C (size: 0x4)
//     int32 MaxStageInternalForFriend;        // 0x0050 (size: 0x4)
//     float DiffPOIFrientCoef;                // 0x0054 (size: 0x4)
//     int32 MinFavForFriend;                  // 0x0058 (size: 0x4)
//     int32 MaxFavForFriend;                  // 0x005C (size: 0x4)
//     float MinRandomChumNumCoef;             // 0x0060 (size: 0x4)
//     float MaxRandomChumNumCoef;             // 0x0064 (size: 0x4)
//     int32 MaxStageInternalForChum;          // 0x0068 (size: 0x4)
//     int32 MaxFameStandInternalForChum;      // 0x006C (size: 0x4)
//     int32 MinFavForChum;                    // 0x0070 (size: 0x4)
//     int32 MaxFavForChum;                    // 0x0074 (size: 0x4)
//     int32 MaxEnemyRandomBaseValue;          // 0x0078 (size: 0x4)
//     int32 MinFavForEnemy;                   // 0x007C (size: 0x4)
//     int32 MaxFavForEnemy;                   // 0x0080 (size: 0x4)
//     int32 MaxStageInternalBySpouse;         // 0x0084 (size: 0x4)
//     int32 MinFavForSpouse;                  // 0x0088 (size: 0x4)
//     int32 MaxFavForSpouse;                  // 0x008C (size: 0x4)
//     float ProbOfHaveLover;                  // 0x0090 (size: 0x4)
//     int32 LoverBaseNum;                     // 0x0094 (size: 0x4)
//     int32 MinValueOfRandomSocForLover;      // 0x0098 (size: 0x4)
//     int32 DivideValueOfSocForLoverRandom;   // 0x009C (size: 0x4)
//     int32 MinValueOfRandomCharmForLover;    // 0x00A0 (size: 0x4)
//     int32 DivideValueOfCharmForLoverRandom; // 0x00A4 (size: 0x4)
//     int32 MinFavForLover;                   // 0x00A8 (size: 0x4)
//     int32 MaxFavForLover;                   // 0x00AC (size: 0x4)
//     float DiffPOIHeartNumCoef;              // 0x00B0 (size: 0x4)
//     int32 MinRandomOfHeart;                 // 0x00B4 (size: 0x4)
//     int32 DivideValueOfSocForHeart;         // 0x00B8 (size: 0x4)
//     int32 MinFavForHeart;                   // 0x00BC (size: 0x4)
//     int32 MaxFavForHeart;                   // 0x00C0 (size: 0x4)

// }; // Size: 0xC8

// class URelationshipConfig : public UDataAsset
// {
//     TMap<class EMRelationshipType, class FRelationship> RelationshipConfigMap;    // 0x0030 (size: 0x50)
//     TMap<class EMRelationshipClassType, class FRelationArray> RelationClassTypes; // 0x0080 (size: 0x50)
//     TMap<class FName, class FRelationArray> MutualExclusionRelations;             // 0x00D0 (size: 0x50)
//     TArray<FRelationShipEvolveInfo> RelationShipEvolveInfos;                      // 0x0120 (size: 0x10)

// }; // Size: 0x130

// class URelationshipMutexDataConfig : public UDataAsset
// {
// }; // Size: 0x30

// class URelationshipRecord : public ULifeRecordEntityBase
// {
//     int32 ActionID;         // 0x0030 (size: 0x4)
//     int32 TargetId;         // 0x0034 (size: 0x4)
//     uint8 RelationshipType; // 0x0038 (size: 0x1)
//     bool IsMake;            // 0x0039 (size: 0x1)

//     void AddRecordByRelationship(class UObject *WorldObject, int32 UesrID, int32 TargetUserID, EMRelationshipType Relationship, bool MakeRelationship);
// }; // Size: 0x40

// class URelationshipSystem : public UInteractionBase
// {
//     FRelationshipSystemPlayerAddRelationshipDelegate PlayerAddRelationshipDelegate; // 0x0040 (size: 0x10)
//     void PlayerAddRelationshipDelegate(int32 NpcID, EMRelationshipType RelationshipType);
//     FRelationshipSystemPlayerRemoveRelationshipDelegate PlayerRemoveRelationshipDelegate; // 0x0050 (size: 0x10)
//     void PlayerRemoveRelationshipDelegate(int32 NpcID, EMRelationshipType RelationshipType);

//     void TestPerformance(int32 Count);
//     bool RemoveSingleRelationshipByType(int32 StartIndex, int32 EndIndex, EMRelationshipType RelationshipType, bool bBroadcast);
//     void RemoveRelationshipByTypes(int32 StartIndex, int32 EndIndex, const FRelationShipsDescribe &RelationShipsDescribe, bool bBroadcast);
//     bool QueryRelationshipEdgeContainsByDesc(int32 StartIndex, int32 EndIndex, const FRelationShipsDescribe &RelationshipDesc);
//     bool QueryRelationshipEdgeContains(int32 StartIndex, int32 EndIndex, EMRelationshipType RelationshipType);
//     bool QueryRelationshipEdge(int32 StartIndex, int32 EndIndex, FRelationshipEdge &Relationships);
//     bool QueryRelationshipClassEdgeContains(int32 StartIndex, int32 EndIndex, const EMRelationshipClassType &RelationshipClassType);
//     bool QueryCharactersByOutRelationshipType_Excludes(int32 Index, const TArray<EMRelationshipType> &ExcludeRelationshipTypes, TArray<int32> &Characters);
//     bool QueryCharactersByOutRelationshipType_Exclude(int32 Index, EMRelationshipType RelationshipType, TArray<int32> &Characters);
//     bool QueryCharactersByOutRelationshipType(int32 Index, EMRelationshipType RelationshipType, TArray<int32> &Characters);
//     bool QueryCharactersByOutRelationshipClassType(int32 Index, EMRelationshipClassType RelationshipClassType, TArray<int32> &Characters);
//     bool QueryCharactersByInRelationshipType_Excludes(int32 Index, const TArray<EMRelationshipType> &ExcludeRelationshipTypes, TArray<int32> &Characters);
//     bool QueryCharactersByInRelationshipType_Exclude(int32 Index, EMRelationshipType RelationshipType, TArray<int32> &Characters);
//     bool QueryCharactersByInRelationshipType(int32 Index, EMRelationshipType RelationshipType, TArray<int32> &Characters);
//     bool QueryCharactersByInRelationshipClassType(int32 Index, EMRelationshipClassType RelationshipClassType, TArray<int32> &Characters);
//     bool QueryAllRelationshipOut(int32 Index, TArray<FRelationshipEdge> &RelationshipEdges);
//     bool QueryAllRelationshipIn(int32 Index, TArray<FRelationshipEdge> &RelationshipEdges);
//     FRelationShipsDescribe MakeRelationShipDescribe(const TArray<EMRelationshipType> &Ships);
//     void GetRelationshipConfig(EMRelationshipType RelationshipType, FRelationship &Relationship);
//     bool CheckRelationByOutRelationshipType(int32 Index, EMRelationshipType RelationshipType);
//     bool CheckRelationByInRelationshipType(int32 Index, EMRelationshipType RelationshipType);
//     bool AddSingleRelationshipByTypes(int32 StartIndex, int32 EndIndex, const FRelationShipsDescribe &RelationshipTypes, bool bBroadcast);
//     bool AddSingleRelationshipByType(int32 StartIndex, int32 EndIndex, EMRelationshipType RelationshipType, bool bBroadcast);
// }; // Size: 0x60

// class UReputationManager : public UFNSingleAttribute
// {
//     class UDataTable *ReputationConfigTable; // 0x0038 (size: 0x8)

//     void SetWorldReputationValue(int32 UserID);
//     void SetRegionReputationValue(int32 RegionID, int32 UserID, int32 ReputationValue);
//     void SetFameStandValue(int32 UserID, int32 FameStandValue);
//     void ListenReputationValueByZongmen(int32 ChangeValue, int32 GroupID);
//     int32 GetWorldReputationValue(int32 UserID);
//     int32 GetRegionReputationValue(int32 RegionID, int32 UserID);
//     int32 GetFameStandValue(int32 UserID);
// }; // Size: 0x50

// class UResMgr : public UObject
// {
//     class UDataTable *m_pDataTableDynamicllyLoadedResConfig; // 0x0038 (size: 0x8)

//     UClass *LoadSynchronousClass(FString strPathFileName);
//     class UResMgr *Get(class UWorld *pWorld);
// }; // Size: 0x130

// class URiftManager : public UFNSingleAttribute
// {
//     int32 CurrentRiftID;                                         // 0x0038 (size: 0x4)
//     TMap<int32, UPoiSkyfallRift *> SkyfallRiftPoiMap;            // 0x0040 (size: 0x50)
//     int32 LastParentRegionID;                                    // 0x0090 (size: 0x4)
//     int32 LastSkyfallRiftID;                                     // 0x0094 (size: 0x4)
//     class UDataTable *SkyfallRiftTable;                          // 0x0098 (size: 0x8)
//     class USkyfallRiftGenerateConfig *SkyfallRiftGenerateConfig; // 0x00B0 (size: 0x8)
//     class UChaosRiftConfig *ChaosRiftConfig;                     // 0x00B8 (size: 0x8)

//     void SpecialGenerateSkyRift(int32 SkyfallRiftID, const FIntPoint &CellCoordinate);
//     void RemoveSkyfallRiftPOI();
//     void OnNextTurn(int32 CurTurn);
//     FSkyfallRiftGenerateData GetSkyfallRiftGenerateData();
//     void GenerateSkyfallRift(int32 StartTurn);
//     void EnterRift(int32 RiftID);
// }; // Size: 0xC0

// class URoadSplineComponent : public USplineComponent
// {
//     class UStaticMesh *RoadMesh;                                     // 0x0638 (size: 0x8)
//     class UMaterialInterface *RoadMaterialInterface;                 // 0x0640 (size: 0x8)
//     class UMaterialInterface *WalkRoadMaterialInterface;             // 0x0648 (size: 0x8)
//     class UMaterialInterface *TextMaterialInterface;                 // 0x0650 (size: 0x8)
//     class UMaterialInterface *NoStepMaterialInterface;               // 0x0658 (size: 0x8)
//     class UMaterialParameterCollection *MaterialParameterCollection; // 0x0660 (size: 0x8)
//     int32 PointZOffSet;                                              // 0x0668 (size: 0x4)
//     float Rata;                                                      // 0x066C (size: 0x4)
//     float WalkRata;                                                  // 0x0670 (size: 0x4)
//     class UCurveFloat *Curver;                                       // 0x0678 (size: 0x8)
//     class UTimelineComponent *TimelineComponent;                     // 0x06B8 (size: 0x8)
//     TArray<class USplineMeshComponent *> SplineMesharr;              // 0x06C0 (size: 0x10)
//     class UNiagaraSystem *EndNiagaraSystem;                          // 0x06D0 (size: 0x8)
//     class UNiagaraSystem *NotWalkNiagaraSystem;                      // 0x06D8 (size: 0x8)
//     class UNiagaraSystem *CellNiagara;                               // 0x06E0 (size: 0x8)
//     class UNiagaraSystem *ImpassableCellNiagara;                     // 0x06E8 (size: 0x8)
//     FSoftObjectPath EndNiagara;                                      // 0x06F0 (size: 0x20)
//     FSoftObjectPath EndNiagaraByNotWalk;                             // 0x0710 (size: 0x20)
//     FSoftObjectPath CellNiagaraPath;                                 // 0x0730 (size: 0x20)
//     FSoftObjectPath ImpassableCellNiagaraPath;                       // 0x0750 (size: 0x20)
//     float ScaleA;                                                    // 0x0770 (size: 0x4)
//     float ScaleB;                                                    // 0x0774 (size: 0x4)
//     class UHexGridSubsystem *HexGridSubsystem;                       // 0x0780 (size: 0x8)
//     TArray<class UNiagaraComponent *> Niagaraarr;                    // 0x0788 (size: 0x10)

//     void SetRoad();
//     void RightClick();
//     void OnTimelineTick(float Output);
//     void OnTimelineEnd(float Output);
//     void OnPlayerMoveStart(const FIntPoint &LastPos, const FIntPoint &CurPos);
//     void OnPlayerMoveEnd(const FIntPoint &LastPos, const FIntPoint &CurPos);
//     void OnOpenWnd(class UBaseWnd *BaseWnd);
//     void OnNextTurn(int32 CurTurn);
//     void HidenRoad();
// }; // Size: 0x7A0

// class URuntimeSerializeObjectBase : public UObject
// {

//     class URuntimeSerializeObjectBase *GetDefaultClassObjectByClass(TSubclassOf<class URuntimeSerializeObjectBase> RuntimeSerializeClass);
//     int32 GetClassRuntimeID(UClass *RuntimeSerializeClass);
// }; // Size: 0x28

// class URuntimeSerializeObjectTest : public URuntimeSerializeObjectBase
// {
// }; // Size: 0x28

// class URuntimeSerializeVersionInfo : public UObject
// {
// }; // Size: 0x30

// class USceneHeadUI : public UUserWidget
// {

//     void UpdateSceneHeadUI(class AActor *BattleCharacter);
// }; // Size: 0x278

// class UShifuDongfuGenConifg : public UPoiGenConifg
// {
//     int32 PresetNpcID;         // 0x0160 (size: 0x4)
//     int32 PerceptionSize;      // 0x0164 (size: 0x4)
//     int32 FreeTime;            // 0x0168 (size: 0x4)
//     TArray<int32> NeedItemID;  // 0x0170 (size: 0x10)
//     TArray<int32> NeedQuestID; // 0x0180 (size: 0x10)

// }; // Size: 0x190

// class USingleWorldData : public UObject
// {
//     class UHexGridSubsystem *HexGridData;                                                 // 0x0028 (size: 0x8)
//     class UNpcInteraction *WorldNpcInteraction;                                           // 0x0030 (size: 0x8)
//     class UZongmenData *ZongmenData;                                                      // 0x0038 (size: 0x8)
//     class UCityManger *CityManger;                                                        // 0x0040 (size: 0x8)
//     class UFieldBattleManger *FieldBattleManger;                                          // 0x0048 (size: 0x8)
//     class UStateAreaInteraction *StateAreaInteraction;                                    // 0x0050 (size: 0x8)
//     class UStoreInteraction *StoreInteraction;                                            // 0x0058 (size: 0x8)
//     class UArenaCompetitionInteraction *ArenaCompetitionInteraction;                      // 0x0060 (size: 0x8)
//     class URelationshipSystem *RelationShipGrap;                                          // 0x0068 (size: 0x8)
//     class ULQTideData *LQTideData;                                                        // 0x0070 (size: 0x8)
//     class UCollectionData *CollectionData;                                                // 0x0078 (size: 0x8)
//     class UFNEventManager *EventData;                                                     // 0x0080 (size: 0x8)
//     int32 LevelIndex;                                                                     // 0x0088 (size: 0x4)
//     EM_LoadWorldOption CurSwitchOption;                                                   // 0x008C (size: 0x1)
//     TMap<class TSubclassOf<UPoibase>, class UPoiGenerateConfigBase *> LegendPoiConfigMap; // 0x0090 (size: 0x50)

//     class UPoibase *GetBelongPOIObjectByIndex(int32 NpcIndex);
// }; // Size: 0xE0

// class USkillBooksItem : public UItemBase
// {
//     TSubclassOf<class USkillGameplayAbility> GameAbilityClass; // 0x0050 (size: 0x8)

// }; // Size: 0x58

// class USkillBooksItemCreator : public UItemCreatorBase
// {
// }; // Size: 0x38

// class USkillGameplayAbility : public UBattleGameplayAbility
// {
//     uint8 bSupportTraitPostCast;                                                       // 0x0428 (size: 0x1)
//     uint8 bSupportTraitEndAbility;                                                     // 0x0428 (size: 0x1)
//     uint8 bSupportTraitPreCast;                                                        // 0x0428 (size: 0x1)
//     uint8 bSupportDelayExeByGE;                                                        // 0x0428 (size: 0x1)
//     uint8 bIgnoreAbilitySystemDisable;                                                 // 0x0428 (size: 0x1)
//     int32 TrigerPriority;                                                              // 0x042C (size: 0x4)
//     TMap<class FGameplayTag, class FBattleGameplayEffectContainer> EffectContainerMap; // 0x0430 (size: 0x50)
//     FGameplayTagContainer CooldownTags;                                                // 0x0480 (size: 0x20)
//     FSkillTraitArray DynamicTraitArray;                                                // 0x04A0 (size: 0x10)
//     FSKillAbilityAttributeSet BaseSKillAbilityAttributeSet;                            // 0x04B0 (size: 0x20)
//     FSKillAbilityAttributeSet BaseSKillAbilityAttributeSetRuntime;                     // 0x04D0 (size: 0x20)
//     TWeakObjectPtr<class AActor> RealInstigator;                                       // 0x04F0 (size: 0x8)
//     TArray<class TSubclassOf<UBattleAbilityBaseCpt>> ReqAttachCpts;                    // 0x04F8 (size: 0x10)
//     class AActor *TargetActor1;                                                        // 0x0538 (size: 0x8)
//     class AActor *TargetActor2;                                                        // 0x0540 (size: 0x8)
//     FName AbilityName;                                                                 // 0x0548 (size: 0x8)
//     bool bAutoActivate;                                                                // 0x0550 (size: 0x1)
//     bool bManualPostCast;                                                              // 0x0551 (size: 0x1)
//     class USkillGameplayAbility *MainSkillAbility;                                     // 0x0568 (size: 0x8)
//     TArray<FInstancedStruct> BattleAIAbilityData;                                      // 0x0578 (size: 0x10)

//     void UpdateRuntimeBaseInfo(class AActor *CastActor);
//     void UnRegisterTickEvent();
//     void UnRegAttributeChange(const FGameplayAttribute &Attribute);
//     void SetFollowMousePositionState(bool bEnable);
//     void SetAbilityTraitAttributeValueByType(TEnumAsByte<EMTraitAttributeType> TaritAttributeType, float Value);
//     void ScriptOnMontageEvent(FGameplayTag EventTag);
//     void RemoveBuffToTargetByAbilityEx(class UAbilitySystemComponent *TargetASC, int32 BuffID, int32 Stack);
//     void RemoveBuffToTargetByAbility(class UAbilitySystemComponent *TargetASC, int32 BuffID);
//     void ReleaseParentSkillCaptureState();
//     void ReleaseCaptureState();
//     void RegisterTickEvent(float TickInternal);
//     void RegisterAttributeChange(const FGameplayAttribute &Attribute);
//     void OnAbilityChargeEndEvent(class AActor *Instigator);
//     void OnAbilityChargeBeginEvent(class AActor *Instigator);
//     void ManualPostSkillCast();
//     bool MakeTargetDetectionCheck(const FGameplayTag &GameplayTag, const class AActor *TargetActor, const FGameplayEventData &EventData);
//     void MakeTargetDetection(const FGameplayTag &GameplayTag, const FGameplayEventData &EventData);
//     void KeepParentSkillCaptureState();
//     void KeepCaptureState();
//     void K2_OnAttributeChange(const FGameplayAttribute &GameplayAttribute, float OldValue, float NewValue);
//     bool HasSpecificTag(const FGameplayTag &TagToCheck);
//     FGameplayAbilityTargetDataHandle GetTargetDataByTag(const FGameplayTag &GameplayTag);
//     float GetSpecParamValueByEnum(int32 SpecParamNameIndex);
//     float GetAbilityTraitAttributeValueByTypeConst(TEnumAsByte<EMTraitAttributeType> TaritAttributeType);
//     float GetAbilityTraitAttributeValueByType(TEnumAsByte<EMTraitAttributeType> TaritAttributeType);
//     FName GetAbilityName();
//     void CantCastAbilityBroadcast(ECantCastAbilityType CantCastAbilityType, FGameplayAbilityActorInfo ActorInfo);
//     TArray<FActiveGameplayEffectHandle> ApplyExternalEffectContainerSpec(const FGameplayTag &GameplayTag);
//     TArray<FActiveGameplayEffectHandle> ApplyBuffToTargetDataByTag(const FGameplayTag &GameplayTag, int32 BuffID, int32 Stack);
//     FActiveGameplayEffectHandle ApplyBuffToTargetByAbilityEx(class UAbilitySystemComponent *TargetASC, TEnumAsByte<EM_LevelType> LevelType, int32 BuffID, int32 Stack);
//     FActiveGameplayEffectHandle ApplyBuffToTargetByAbility(class UAbilitySystemComponent *TargetASC, TEnumAsByte<EM_LevelType> LevelType, int32 BuffID);
//     void AddTargetsToEffectContainerSpec(const FGameplayTag &GameplayTag, const TArray<FHitResult> &HitResults, const TArray<class AActor *> &TargetActors);
//     void AddSpecTagValue(const FGameplayTag &GameplayTag, const FGameplayTag &ValueGameplayTag, float Value);
//     void AddDamageCount(int32 Count);
// }; // Size: 0x6F0

// class USkillManger : public UFNSingleAttribute
// {
//     TArray<class TSubclassOf<USkillGameplayAbility>> SkillGameplayAbilitiesHasInstancingCache; // 0x0040 (size: 0x10)
//     FSkillMangerPlayerLearndSkillDelegate PlayerLearndSkillDelegate;                           // 0x0050 (size: 0x10)
//     void PlayerLearndSkill(int32 SkillID);
//     class UDataTable *SkillBaseInfoConfig;    // 0x0060 (size: 0x8)
//     class UDataTable *SkillGroupInfoConfig;   // 0x0068 (size: 0x8)
//     class UDataTable *BuffBaseInfonConfig;    // 0x0070 (size: 0x8)
//     class UDataTable *SkillTraitDescTable;    // 0x00C8 (size: 0x8)
//     class UDataTable *SkillTraitPool;         // 0x00D0 (size: 0x8)
//     class UDataTable *UnusualEffectDataTable; // 0x0218 (size: 0x8)
//     TArray<FName> PerpetualTraitEffectName;   // 0x0220 (size: 0x10)
//     class UEnum *AbilitySpecParamEnum;        // 0x02A8 (size: 0x8)

//     void UpgradeSkillGroup(int32 SkillGroupID, int32 UserID, int32 UpLevel);
//     void UpdateSkill(int32 GroupID, int32 UserID);
//     bool LearnSkillBookByTemplateID(int32 ItemTemplateID, int32 UserID);
//     bool LearnSkillBook(class UItemBase *BookItem, int32 UserID);
//     FSkillBaseInfo K2_GetSingleSkillConfigBySkillNameKey(FName SkillNameKey);
//     FGEBuffBaseInfo K2_GetBuffInofByID(int32 BuffID);
//     bool InstancingSkillTraitFromDynamicDesc(FDynamicTraitSpec &DynamicTraitSpec, TArray<FSkillTraitDesc> &SkillTraitDescInstance);
//     void InitSkillEntity(int32 ItemTemplateID, FRPGAttributeBase &RpgaAttributeBase);
//     bool GetSpecParamValueByString(int32 SkillID, int32 SkillLevel, FString ParamName, FFloatAttributeValue &Value);
//     FName GetSkillNameByID(int32 TemplateID);
//     FSkillGroupConfigInfo GetSingleSkillGroupConfig(int32 SkillGroupID);
//     FString GetGameAbilityDescRuntime(TSubclassOf<class USkillGameplayAbility> AbilityClass);
//     FString GetGameAbilityDesc(TSubclassOf<class USkillGameplayAbility> AbilityClass);
//     int32 GetBuffStackCount(class AActor *Instigator, class AActor *Target, int32 BuffID);
//     bool GetBuffInfoByGE(class UFNGameEffectBuffBase *GameplayEffect, FGEBuffBaseInfo &GEBuffBaseInfo);
//     class UGameplayEffect *GetBuffGEInstnceOnlyCheck(int32 BuffID, int32 BuffLevel, const class AActor *CastActor, const class AActor *TagetActor);
//     float GetBattleSkillExp(class UBattleSettlementsBase *BattleSettlementsBase, int32 UserID);
//     float GetBaseAbilitySpecParamInfoByIndex(FName AbilityName, int32 Level, int32 SpecParamIndex);
//     float GetAbilityBaseCDTime(const class USkillGameplayAbility *GA, int32 AbilityLevel);
//     bool EquipSkill(int32 Slot, int32 nItemTemplateID, int32 UserID);
//     bool CheckBuffStackCountReachTheLimit(class AActor *Target, int32 BuffID);
//     bool CancelSkillTraitByIndex(int32 SkillGroupID, int32 Index, int32 Level);
//     bool bPreTraitPointActived(FSkillGroupEntity &SkillGroupEntity, FSingleSkillTrait &SingleSkillTrait);
//     bool bCanActiveSkillTrait(FSkillGroupEntity &SkillGroupEntity, FSingleSkillTrait &SingleSkillTrait);
//     void BattleEnd(class UBattleSettlementsBase *BattleSettlementsBase);
//     FActiveGameplayEffectHandle ApplyMultiBuffsToTarget(class AActor *SourceActor, class AActor *TargetActor, int32 BuffID, int32 StackCount);
//     FActiveGameplayEffectHandle ApplyBuffToTargetByProbability(class UAbilitySystemComponent *SourceASC, class UAbilitySystemComponent *TargetASC, int32 BuffID, float Probability, int32 MaxProbability);
//     FActiveGameplayEffectHandle ApplyBuffToTarget(class UAbilitySystemComponent *SourceASC, class UAbilitySystemComponent *TargetASC, int32 BuffID, int32 BuffLevel, int32 BuffStacks);
//     void AddSkillGroupExp(int32 SkillGroupID, float Exp, int32 UserID);
//     bool ActiveSkillTraitByIndex(int32 SkillGroupID, int32 Index);
// }; // Size: 0x2C8

// class USkyfallRiftGenerateConfig : public UDataAsset
// {
//     FSkyfallRiftGenerateData SkyfallRiftGenerateData; // 0x0030 (size: 0x14)

// }; // Size: 0x48

// class USmallCity : public UCityBase
// {
// }; // Size: 0x2A0

// class USpecialProductItem : public UItemBase
// {
// }; // Size: 0x50

// class USpecialProductItemCreator : public UItemCreatorBase
// {
// }; // Size: 0x30

// class USpecialWnd : public UObject
// {

//     class UBaseWnd *GetSpecialWnd();
//     bool CheckWidgetName(const FName &ClickWidgetName);
// }; // Size: 0x28

// class USpiritInteraction : public UInteractionBase
// {
// }; // Size: 0x40

// class UStageBreakCheckHandle : public UObject
// {

//     void GetCheckListDesc(int32 ListIndex, FString &Desc);
//     int32 GetCheckListCount();
//     bool CheckListByIndex(int32 ListIndex);
//     bool CheckListAll();
// }; // Size: 0x28

// class UStageBreakThroughManger : public UFNSingleAttribute
// {
//     TMap<int32, FStageBaseConfig> DataMaps;            // 0x00C8 (size: 0x50)
//     class UDataTable *PointTriatData;                  // 0x0118 (size: 0x8)
//     class UDataTable *JingLuoData;                     // 0x0170 (size: 0x8)
//     class UDataTable *DanJiData;                       // 0x01C8 (size: 0x8)
//     class UDataTable *DanYeData;                       // 0x0220 (size: 0x8)
//     class UDataTable *DanQingData;                     // 0x0278 (size: 0x8)
//     class UDataTable *JinDanData;                      // 0x02D0 (size: 0x8)
//     class UDataTable *SuiDanGroupData;                 // 0x0328 (size: 0x8)
//     class UJieDanGeneralConfig *JieDanGeneralConfig;   // 0x0380 (size: 0x8)
//     class UJieYingGeneralConfig *JieYingGeneralConfig; // 0x0388 (size: 0x8)

//     void StageBreakSubMaxLife();
//     void SetJingLuoEffect(int32 UserID);
//     void SetAttributeByStage(int32 UserID, int32 Count);
//     int32 RandomSingleDanYe(int32 &TotalNum, TMap<int32, int32> &MatchDanYeMap);
//     TArray<int32> RandomDanYeArray(int32 LockNum);
//     void NingQiResetCurrentDanYeArray(TArray<int32> LockDanYeIndexArray);
//     void MatchPlayerDanYeArray();
//     void LoadZhuJiJinDanBattleEffect(int32 UserID);
//     void LoadZhuJiDanYeBattleEffect(int32 UserID);
//     void LoadYuanYingBattleEffect(int32 UserID);
//     void LoadSuiDanGroupBattleEffect(int32 UserID);
//     TArray<int32> InitQiValue();
//     void GroupDanYePoolByPlayerMainWuXing(TMap<int32, int32> &tMatchWuXing, TMap<int32, int32> &tUnMatchWuXing);
//     FStageBaseConfig GetStageInfoRef(int32 Stage, int32 Phase);
//     TArray<int32> GetMatchSuiDanGroupArray();
//     TArray<int32> GetMatchPlayerJinDanArray(int32 Level, bool IsJinDan);
//     TMap<int32, int32> GetMatchPlayerDanQingArray();
//     TArray<int32> GetMatchPlayerDanJiArray();
//     class UJieYingGeneralConfig *GetJieYingGeneralConfig();
//     class UJieDanGeneralConfig *GetJieDanGeneralConfig();
//     int32 GetBreakLifeConsumePerActionByStage();
//     void ExchangeDanYe(int32 DanYeID, int32 Index);
//     void ClearMatchDanYeByWuXing(EWuXingType WuXingType);
// }; // Size: 0x390

// class UStageRecord : public ULifeRecordEntityBase
// {
//     int32 PlayerStage; // 0x0030 (size: 0x4)
//     int32 PlayerPhase; // 0x0034 (size: 0x4)
//     bool IsBreak;      // 0x0038 (size: 0x1)

//     void AddRecordByStage(class UObject *WorldObject, int32 UesrID, int32 Stage, int32 Phase, bool IsSuccess);
// }; // Size: 0x40

// class UStateAreaConfig : public UDataAsset
// {
//     class UTextureRenderTarget2D *LandscapeAreaRT;            // 0x0030 (size: 0x8)
//     int32 TextureScale;                                       // 0x0038 (size: 0x4)
//     FStateAreaConfigAttri AreaConfig;                         // 0x0040 (size: 0x58)
//     class UPoiConfigDataAsset *PoiConfigInfo;                 // 0x0098 (size: 0x8)
//     TSubclassOf<class UAreaLandTypeDescBase> DefaultLandType; // 0x00A0 (size: 0x8)
//     int32 HexagonType;                                        // 0x00A8 (size: 0x4)

// }; // Size: 0xB0

// class UStateAreaDesc : public UObject
// {
//     EStateAreaType StateAreaType; // 0x0028 (size: 0x1)
//     FName StateAreaName;          // 0x002C (size: 0x8)
//     int32 StateAreaLevel;         // 0x0034 (size: 0x4)

// }; // Size: 0x38

// class UStateAreaInteraction : public UInteractionBase
// {
//     TArray<FStateAreaAttribute> AllStateAreaInfo;         // 0x0048 (size: 0x10)
//     TArray<class UPoibase *> AllPoiArray;                 // 0x0058 (size: 0x10)
//     TMap<int32, EMLandscapeAreaType> LandscapeTypeLookup; // 0x00B8 (size: 0x50)

//     void RemovePOI(const class UPoibase *Poibase);
//     bool MovePOI(const FEnttIndex &POIEntity, int32 NewCellID);
//     TArray<class UPoibase *> GetPoisByCellID(const int32 &CellID);
//     TArray<FEnttIndex> GetPoiEntity(const int32 &CellID);
//     class UPoibase *GetPoiDataNotInvade(const int32 &CellID);
//     class UPoibase *GetPoiData(const int32 &CellID);
//     bool AddPOI(class UPoibase *Poibase, const TArray<int32> &CellIDs);
// }; // Size: 0x168

// class UStereoManager : public UFNSingleAttribute
// {
//     class UDataTable *NpcStereoTypeConfig; // 0x0040 (size: 0x8)
//     class UDataTable *StereoEffectConfig;  // 0x0048 (size: 0x8)

// }; // Size: 0xA0

// class UStereoToItemConfig : public UDataAsset
// {
//     TMap<int32, ESpecialProductSubtype> StereoToItemMap; // 0x0030 (size: 0x50)

// }; // Size: 0x80

// class UStoreInteraction : public UInteractionBase
// {
//     class UDataTable *StoreDataTable;      // 0x0048 (size: 0x8)
//     class UDataTable *StoreItemsDataTable; // 0x0060 (size: 0x8)

//     void HandleStoreByNextTurn(int32 TurnCount);
//     int32 GetZmFamePrice(int32 StoreID, int32 ItemId);
//     void GetStoreItems(int32 StoreID, TArray<FStoreItemConfig> &Items);
//     FStoreConfig GetStoreConfigByID(int32 StoreID);
//     void AddStoreItemToStore(FPlayerBag &SingleStore, int32 StoreID);
// }; // Size: 0x78

// class USummonFindTargetAbility : public USkillGameplayAbility
// {
// }; // Size: 0x6F0

// class UTestSkillGameplayAbility : public USkillGameplayAbility
// {
//     TArray<int32> TraitArrayByConfigID; // 0x06F0 (size: 0x10)

// }; // Size: 0x710

// class UTrainLevelDataConfig : public UDataAsset
// {
//     FTrainLevelData TrainLevelData; // 0x0030 (size: 0x40)

// }; // Size: 0x70

// class UTrainManager : public UFNSingleAttribute
// {
//     class UTrainLevelDataConfig *TrainLevelDataConfig; // 0x0038 (size: 0x8)
//     TMap<int32, FTrainPlayData> TrainPlayDataMap;      // 0x0040 (size: 0x50)

//     class UTrainLevelDataConfig *GetTrainLevelDataConfig();
// }; // Size: 0x90

// class UTraitUtility : public UObject
// {
// }; // Size: 0x28

// class UTraumaManager : public UFNSingleAttribute
// {
//     class UDataTable *TraumaConfigTable; // 0x0038 (size: 0x8)

//     void OnTurnEnd(int32 TurnCount);
// }; // Size: 0x60

// class UTurnBasePathFollowCpt : public UPathFollowingComponent
// {
// }; // Size: 0x2C8

// class UUnlockFunctionManager : public UFNSingleAttribute
// {
//     class UEnum *UnlockDomainEnum; // 0x0040 (size: 0x8)
//     FUnlockFunctionManagerDel Del; // 0x0050 (size: 0x10)
//     void CheckFunctionLockDelegate(EGameFunctionType GameFunction, EGameLockDomain GameLockDomain);
//     FUnlockFunctionManagerUnlockDelegate UnlockDelegate; // 0x0060 (size: 0x10)
//     void FunctionUnlockDelegate(EGameFunctionType GameFunction, EGameLockDomain GameLockDomain, bool LockState);

//     void FunctionUnlock(EGameFunctionType GameFunctionType, EGameLockDomain LockDemain);
//     void Functionlock(EGameFunctionType GameFunctionType, EGameLockDomain LockDemain);
//     bool CheckFunctionUnlock(EGameFunctionType GameFunctionType, EGameLockDomain LockDemain, bool bBroadcast);
// }; // Size: 0x70

// class UWidgetDragDropOperation : public UDragDropOperation
// {
//     class UObject *DragItem; // 0x00B0 (size: 0x8)

// }; // Size: 0xB8

// class UWidgetExpand : public UBlueprintFunctionLibrary
// {

//     void SetWidgetBrushFromTexture(class UImage *pImage, FString texturePath, FVector2D Size);
//     void SetWidgetBrushFromMaterial(class UImage *pImage, FString MaterialPath, FVector2D Size);
//     void SetTextBlockFontSize(class UTextBlock *pTextBlock, int32 FontSize);
//     void SetPlaySound(const class UObject *WorldContextObject, FString SoundPath, float VolumeMultiplier, float PitchMultiplier, float StartTime);
//     void SetMaterialBrushFromTexture(class UImage *pImage, FName ParameterName, FString texturePath);
//     void SetBorderBrushFromTexture(class UBorder *Border, FString texturePath, FVector2D Size);
//     class UWidgetAnimation *PlayWidgetTransformAnimation(class UWidget *BindingObject, float TimeLength, FName Property, FAnimationChannelKeys ChannelKeys);
//     class UWidgetAnimation *PlayWidgetMaterialAnimation(class UWidget *BindingObject, float TimeLength, TArray<FName> Properties, TArray<FAnimationChannelKeys> ChannelKeys);
//     class UWidgetAnimation *PlayWidgetFloatPropertyAnimation(class UWidget *BindingObject, float TimeLength, FName Property, FAnimationChannelKeys ChannelKey);
//     void MySetVisibility(class UWidget *pWidget, ESlateVisibility InVisibility);
//     TArray<FName> GetActionKeyByName(class UUserWidget *WidgetContext, FName ActionName);
//     class UWidget *CreateTooltipChildWidget(class UUserWidget *pWidget, class UPanelWidget *pPanelWidget, UClass *pClassType, FName Name);
//     class UWidget *CreateMyTooltipWidget(class UWidget *pOwingWidget, const FSoftObjectPath &strMyGuiWidgetPath);
//     class UWidget *CreateChildWidgetByName(class UUserWidget *pWidget, class UPanelWidget *pPanelWidget, FName idWnd, FName WndName);
// }; // Size: 0x28

// class UWidgetHeadSceneUICpt : public UWidgetComponent
// {
// }; // Size: 0x6E0

// class UWndMessage : public UBaseWnd
// {

//     int32 GetMessageTextID();
// }; // Size: 0x430

// class UWndMgr : public UGameUIManagerSubsystem
// {
//     TArray<class UBaseWnd *> m_arrayWnd;         // 0x00C0 (size: 0x10)
//     class UGuidanceWndManger *GuidanceWndManger; // 0x0178 (size: 0x8)

//     void SwitchOpenClose(FName idWnd, FName idDat);
//     void ShowHiddenWnd();
//     class UUserWidget *SetMyToolTip(class UWidget *pWidget, FName ToolTipName);
//     void SetAllWndVisible(ESlateVisibility Visibility);
//     void RemoveTempKeyResponseStrategy(int32 Handle);
//     class UBaseWnd *Query(FName idWnd);
//     bool ProcessMsg(FName idWnd, int32 nType, const FProcessFlushData &stData);
//     void PopMessage(const FText &Text);
//     class UBaseWnd *OpenWnd(FName idWnd, FName idDat);
//     void OnNextTurn(int32 TurnCount);
//     void MessageWnd(int32 TextID);
//     bool IsWndOpen(FName idWnd);
//     void HideAllWnd(TArray<FName> arrayIdWndExcept, int32 Reason);
//     class UWndMgr *Get(class UWorld *pWorld);
//     bool FlushWindow(FName idWnd, int32 nType);
//     void Flush_OpenWnd(FName idWnd, FName idDat);
//     void DumpCurrentStackWnd();
//     void CloseWnd(FName idWnd);
//     void CloseAllWnd(TArray<FName> arrayIdWndExcept);
//     void ClickWndButton(FName idWnd, FName idButton);
//     int32 AddTempKeyResponseStrategy(const FKeyResponseStrategy &ResponseStrategy);
// }; // Size: 0x180

// class UWorldAutoPassTurnMechanic : public UFNSingleAttribute
// {
// }; // Size: 0x40

// class UWorldEcsUtils : public UObject
// {

//     void SetPoiTriggeredStatus(class UObject *WorldObject, bool bTriggered, const FEnttIndex &Entity);
//     bool IsPoiTriggered(class UObject *WorldObject, const FEnttIndex &Entity);
// }; // Size: 0x28

// class UWorldEvolveMnager : public UFNSingleAttribute
// {
//     class UGlobalDynamicGameDataCpt *GlobalDynamicGameDataCpt;                // 0x0038 (size: 0x8)
//     class UWorldGridLODMechanic *WorldGridLODMechanic;                        // 0x0040 (size: 0x8)
//     class UWorldAutoPassTurnMechanic *WorldAutoPassTurnMechanic;              // 0x0048 (size: 0x8)
//     class UMaterialParameterCollection *MaterialParameterCollection;          // 0x0050 (size: 0x8)
//     class UWorldMoveMechanic *WorldMoveActorMechanic;                         // 0x0058 (size: 0x8)
//     class UInvadeMechanic *InvadeMechanic;                                    // 0x0060 (size: 0x8)
//     class UECSDataSaveMechanic *ECSDataSaveMechanic;                          // 0x0068 (size: 0x8)
//     class UBigWorldMiniMapMechanic *WorldMiniMapMechanic;                     // 0x0070 (size: 0x8)
//     TArray<class UPerFrameProcessWrapBase *> PerFrameProcessObjectsForEvolve; // 0x0080 (size: 0x10)

//     FTimerHandle SetFnGameTimerDelegate(FSetFnGameTimerDelegateDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
//     void OnPlayerStartMove(const FIntPoint &LastPos, const FIntPoint &CurPos);
//     void OnPlayerEndMove(const FIntPoint &LastPos, const FIntPoint &CurPos);
//     void OnBigWorldSwitch(const class USingleWorldData *BigWorldData);
//     void ClearFNGameTimerHandle(const class UObject *WorldContextObject, FTimerHandle Handle);
//     void ClearAndInvalidateFnGameTimerHandle(const class UObject *WorldContextObject, FTimerHandle &Handle);
// }; // Size: 0x90

// class UWorldGridLODMechanic : public UFNSingleAttribute
// {

//     void RemoveFixedInsightRange(class UObject *WorldObject, int32 WorldIndex, TArray<int32> Cells);
//     void AddFixedInsightRange(class UObject *WorldObject, int32 WorldIndex, TArray<int32> Cells);
// }; // Size: 0x38

// class UWorldGridTipsCpt : public UWidgetComponent
// {

//     void Script_UpdateUI();
//     TSubclassOf<class UUserWidget> MyGetWidgetClass();
// }; // Size: 0x6E0

// class UWorldMoveActorConfig : public UPrimaryDataAsset
// {
//     TMap<int32, FBigWorldActorConfigInfo> WorldMoveActorExCptData; // 0x0030 (size: 0x50)
//     TMap<int32, FSoftClassPath> WorldMoveActorMaps;                // 0x0080 (size: 0x50)

// }; // Size: 0xD0

// class UWorldMoveMechanic : public UFNSingleAttribute
// {

//     FEnttIndex GetTemplateShowEntityByShowIndex(class UObject *WorldObject, int32 ShowActorIndex, int32 CellPosIndex, int32 WorldIndex);
//     void DestroyTemplateShowEntity(class UObject *WorldObject, FEnttIndex EntityIndex);
//     FEnttIndex CreateTemplateShowEntity(class UObject *WorldObject, int32 ShowActorIndex, int32 CellPosIndex, int32 WorldIndex);
// }; // Size: 0x38

// class UWorldWaitingMechanic : public UFNSingleAttribute
// {

//     void UpdataWaitingMechanicInfo();
// }; // Size: 0x38

// class UXinJueAdditionConfig : public UDataAsset
// {
//     TArray<int32> XinJueSlotReqStage;     // 0x0030 (size: 0x10)
//     float SmallLoopEffectBase;            // 0x0040 (size: 0x4)
//     float BigLoopEffectBase;              // 0x0044 (size: 0x4)
//     float InspirationEffectBase;          // 0x0048 (size: 0x4)
//     float OneTimeBigBase;                 // 0x004C (size: 0x4)
//     int32 SmallLoopTimeBase;              // 0x0050 (size: 0x4)
//     int32 BigLoopTimeBase;                // 0x0054 (size: 0x4)
//     float SmallEffectFixLow;              // 0x0058 (size: 0x4)
//     float SmallEffectFixMid;              // 0x005C (size: 0x4)
//     float SmallEffectFixHigh;             // 0x0060 (size: 0x4)
//     float BigEffectFixLow;                // 0x0064 (size: 0x4)
//     float BigEffectFixMid;                // 0x0068 (size: 0x4)
//     float BigEffectFixHigh;               // 0x006C (size: 0x4)
//     float InspEffectFixLow;               // 0x0070 (size: 0x4)
//     float InspEffectFixMid;               // 0x0074 (size: 0x4)
//     float InspEffectFixHigh;              // 0x0078 (size: 0x4)
//     float SXBase;                         // 0x007C (size: 0x4)
//     float SXStep;                         // 0x0080 (size: 0x4)
//     TArray<int32> LQMaxValue;             // 0x0088 (size: 0x10)
//     TArray<float> LQMaxAddFix;            // 0x0098 (size: 0x10)
//     float LqToLqMaxFix;                   // 0x00A8 (size: 0x4)
//     TArray<float> TraitReqExp;            // 0x00B0 (size: 0x10)
//     float TraitChangePara;                // 0x00C0 (size: 0x4)
//     float XinJuePerceptionCoe;            // 0x00C4 (size: 0x4)
//     float XinJuePerceptionCoeAdd;         // 0x00C8 (size: 0x4)
//     TArray<int32> MoodIntervalToPractice; // 0x00D0 (size: 0x10)
//     int32 AgeIntervalToPractice;          // 0x00E0 (size: 0x4)
//     int32 WorldFameIntervalToInspiration; // 0x00E4 (size: 0x4)
//     int32 MoodPerSmallLoop;               // 0x00E8 (size: 0x4)
//     float MaxInspirationGainFix;          // 0x00EC (size: 0x4)

// }; // Size: 0xF0

// class UXinJueItem : public UItemBase
// {
// }; // Size: 0x50

// class UXinJueTraitBookItem : public UItemBase
// {
// }; // Size: 0x50

// class UXinJueTraitBookItemCreator : public UItemCreatorBase
// {
// }; // Size: 0x30

// class UXinjueItemCreator : public UItemCreatorBase
// {
// }; // Size: 0x30

// class UXinjueManager : public UFNSingleAttribute
// {
//     FXinjueManagerOnXinJueLearnStateChange OnXinJueLearnStateChange; // 0x0040 (size: 0x10)
//     void XinJueLearnStateChange(int32 XinJueID);
//     FXinjueManagerPlayerLearndXinJueDelegate PlayerLearndXinJueDelegate; // 0x0080 (size: 0x10)
//     void PlayerLearndXinJue(int32 XinJueID);
//     FXinjueManagerPlayerRunXinJueDelegate PlayerRunXinJueDelegate; // 0x0090 (size: 0x10)
//     void PlayerRunXinJue(int32 XinJueID);
//     FXinjueManagerPlayerLearnedYaoYiDelegate PlayerLearnedYaoYiDelegate; // 0x00A0 (size: 0x10)
//     void PlayerLearnedYaoYi(int32 YaoYiID);
//     class UXinJueAdditionConfig *m_XinJueAddtionConfig; // 0x0100 (size: 0x8)
//     class UDataTable *XinJueData;                       // 0x0108 (size: 0x8)
//     class UDataTable *XinJueTraitBookData;              // 0x0110 (size: 0x8)

//     bool UnlockXinJueTrait(int32 XinJueID, int32 Index, int32 UserID);
//     bool UnlockXinJueSlot(int32 UserID, int32 SlotIndex);
//     void SetRunState(int32 XinJueID, int32 UserID);
//     void SetProcessPracticeState(bool State);
//     bool ReplaceXinJueTrait(int32 Rarity, int32 Index, int32 TraitID, int32 UserID);
//     void PracticeXinJueByID(int32 SLoopNum, int32 UserID, EPracticeType PracticeType, float SpiriteBase, int32 TargetId, int32 WuXingIndex);
//     void OnNextTurn(int32 TurnCount);
//     void LearnYaoYiByID(int32 XinJueTraitBookID, int32 UserID);
//     void LearnXinJueByItem(class UXinJueItem *XinJueItem, int32 UserID, bool SkipLearning);
//     void LearnXinJueByID(int32 XinJueID, int32 UserID, bool SkipLearning);
//     bool HasXinJueInRunState(int32 UserID);
//     EWuXingType GetWuXingByXinJue(int32 UserID);
//     TArray<int32> GetUnRunXinjueSlot(int32 UserID);
//     TArray<int32> GetUnLearnXinjueSlot(int32 UserID);
//     float GetTraitReqExp(int32 UserID);
//     float GetTraitReplaceReqExp(int32 UserID);
//     TArray<int32> GetTraitListBySlotID(int32 Rarity, int32 Index, int32 UserID);
//     TArray<int32> GetToLeanedXinjueBySlotIndex(int32 UserID, int32 SlotIndex);
//     int32 GetSmallLoopTime(int32 UserID);
//     float GetSmallLoopEffect(int32 UserID, int32 WuXingIndex);
//     int32 GetReduceLQByCells(int32 SLoopNum, int32 UserID);
//     float GetOneTimeBigEffect(int32 UserID);
//     float GetInspirationEffect(int32 UserID);
//     float GetFixCoe(float Value);
//     int32 GetCapacityWuXing(int32 UserID);
//     void GetCapacityAndPerceptionFix(int32 UserID, float &PerceptionFix, float &CapacityFix);
//     int32 GetBigLoopTime(int32 UserID);
//     float GetBigLoopEffect(int32 UserID, int32 WuXingIndex);
//     void BattleEnd(class UBattleSettlementsBase *BattleSettlementsBase);
// }; // Size: 0x1D0

// class UXinshouShifuDongfu : public UPoibase
// {
//     int32 ShifuID;             // 0x0170 (size: 0x4)
//     int32 FreeTime;            // 0x0174 (size: 0x4)
//     TArray<int32> NeedItemID;  // 0x0180 (size: 0x10)
//     TArray<int32> NeedQuestID; // 0x0190 (size: 0x10)

//     void UpdataPoiShowState(class UQuestEntityBase *QuestEntityBase);
// }; // Size: 0x1A0

// class UZMChangeRecord : public ULifeRecordEntityBase
// {
//     int32 ZmID;       // 0x0030 (size: 0x4)
//     bool IsEnterZM;   // 0x0034 (size: 0x1)
//     int32 ZmJobLevel; // 0x0038 (size: 0x4)

//     void AddRecordByZMChange(class UObject *WorldObject, int32 UesrID, int32 ZongMenID, bool IsEnter);
// }; // Size: 0x40

// class UZMJobRaiseRecord : public ULifeRecordEntityBase
// {
//     int32 ZmID;       // 0x0030 (size: 0x4)
//     int32 ZmJobLevel; // 0x0034 (size: 0x4)

//     void AddRecordByZMJobRaise(class UObject *WorldObject, int32 UesrID, int32 ZongMenID, int32 JobLevel);
// }; // Size: 0x38

// class UZhongMenBase : public UPoibase
// {
//     TMap<class EZongMenJobType, class FZmJobInfo> ZmJobs; // 0x0170 (size: 0x50)
//     TArray<int32> NpcCemetery;                            // 0x01C0 (size: 0x10)
//     int32 ZhongmenID;                                     // 0x01D0 (size: 0x4)
//     int32 Population;                                     // 0x01D4 (size: 0x4)
//     int32 ZmMaxJingjie;                                   // 0x01D8 (size: 0x4)
//     int32 MaxPhase;                                       // 0x01DC (size: 0x4)
//     int32 ZmShengWang;                                    // 0x01E0 (size: 0x4)
//     EWuXingType ZmWuXingType;                             // 0x01E4 (size: 0x1)
//     EZhongmenPopulation ZmScaleType;                      // 0x01E5 (size: 0x1)
//     int32 ZmAttitude;                                     // 0x01E8 (size: 0x4)
//     bool IsHQ;                                            // 0x01EC (size: 0x1)
//     TArray<int32> ReputationGainTotal;                    // 0x01F0 (size: 0x10)
//     TArray<int32> HonorMan;                               // 0x0200 (size: 0x10)
//     FPlayerBag ZmStore;                                   // 0x0210 (size: 0x18)
//     FPlayerBag ZmBackStore;                               // 0x0228 (size: 0x18)
//     int32 CurStoreRefreshTime;                            // 0x0240 (size: 0x4)
//     int32 LastUpdateDelegateQuestTurnCount;               // 0x0244 (size: 0x4)
//     FZongmenFixedData ZongmenFixedDataCache;              // 0x0248 (size: 0x140)

//     bool IsSameGroupWithPlayerZongmen();
//     int32 GetSingleZhangMen();
//     TArray<int32> GetNPCArrayByJobLevel(EZongMenJobType JobLevel);
//     TArray<int32> GetFuZhangMen();
//     void GenerateZongmenQuestByTurn(int32 TurnCount);
// }; // Size: 0x3E0

// class UZhongmenGenConfig : public UPoiGenConifg
// {
//     FZmPopulationGenCoinfg PopulationGenCoinfg; // 0x0160 (size: 0xA0)
//     int32 MinJingjie;                           // 0x0200 (size: 0x4)

// }; // Size: 0x210

// class UZhongmenInteractionManger : public UFNSingleAttribute
// {
//     FZhongmenInteractionMangerPlayerPromotionNumLimitDelegate PlayerPromotionNumLimitDelegate; // 0x0040 (size: 0x10)
//     void PlayerPromotionNumLimitDelegate(int32 LimitNum);
//     FZhongmenInteractionMangerPlayerJoinZongMenDelegate PlayerJoinZongMenDelegate; // 0x0050 (size: 0x10)
//     void PlayerJoinZongMenDelegate(int32 ZongMenID, EZongMenJobType ZongMenJobType);
//     FZhongmenInteractionMangerPlayerQuitZongMenDelegate PlayerQuitZongMenDelegate; // 0x0060 (size: 0x10)
//     void PlayerQuitZongMenDelegate(int32 ZongMenID);
//     FZhongmenInteractionMangerPlayerPromotionDelegate PlayerPromotionDelegate; // 0x0070 (size: 0x10)
//     void PlayerPromotionDelegate(int32 ZongMenID, EZongMenJobType ZongMenJobType);
//     class UDataTable *ZongmenFixedDataTable;           // 0x0098 (size: 0x8)
//     class UZongMenGeneralConfig *ZongMenGeneralConfig; // 0x00A0 (size: 0x8)

//     bool UserZongMenPromotion(int32 UserID, bool IsForce);
//     bool UserQuitZongMen(int32 UserID);
//     bool UserJoinZongMen(int32 UserID, int32 ZongMenID, bool IsForce, EZongMenJobType NewJobLevel);
//     void SetZongMenFameByNpcFavor(int32 UserID, int32 NpcID, int32 FavorAdd);
//     void SetUserToZongMenFame(int32 UserID, int32 GroupIndex, int32 ChangeValue, TEnumAsByte<EZongMenReputationType> ZongMenReputationType);
//     bool GetZongMenWuXingCapcity(int32 ZongMenID, int32 &WuXingIndex, int32 &WuXingValue);
//     EZongMenJobType GetZongMenPreOrNextJobLevel(EZongMenJobType ZhongmenJobLevel, int32 ZongMenID, bool State);
//     class UZongMenGeneralConfig *GetZongMenGeneralConfig();
//     class UZhongMenBase *GetZhongMenBaseByFixedConfigKeyName(FName FixedConfigKeyName);
//     class UZhongMenBase *GetZhongmenAttributeByID(int32 ZmID);
//     int32 GetUserToZongMenFame(int32 UserID, int32 GroupIndex);
//     TArray<class UZhongMenBase *> GetTheSameGroupZongMenBase(int32 GroupIndex);
//     int32 GetSingleTypeZongMenFame(int32 UserID, int32 GroupIndex, TEnumAsByte<EZongMenReputationType> ZongMenReputationType);
//     class UZhongMenBase *GetRandomZongmenByWuXing(class USingleWorldData *SingleWorldData, EWuXingType WuXing);
//     class UZhongMenBase *GetHQZhongMenBaseByDivID(int32 DivID);
//     TArray<class UZhongMenBase *> GetDivZhongMenBaseArrayByHQID(int32 HQID);
//     TArray<class UZhongMenBase *> GetAllZhongmensByWorldIndex(int32 WorldIndex);
//     bool CheckUserZongMenPromotionState(int32 UserID);
//     bool CheckUserTheSameGroupZongMen(int32 UserID, int32 ZongMenID);
//     bool CheckUserJoinZongMenState(int32 UserID, int32 ZongMenID);
//     bool CheckUserIsDivToHQ(int32 UserID, int32 ZongMenID);
//     int32 CalOnceZongMenJobSalary(int32 UserID);
// }; // Size: 0xF8

// class UZongMenGeneralConfig : public UDataAsset
// {
//     int32 Fame_RtlMax;                                                               // 0x0030 (size: 0x4)
//     TArray<int32> Fame_StageGain;                                                    // 0x0038 (size: 0x10)
//     TMap<class EZongMenJobType, class FZongMenJobLevelConfig> ZongMenJobLevelConfig; // 0x0048 (size: 0x50)
//     FHQAndDivZongMenGeneralConfig HQZongMenGeneralConfig;                            // 0x0098 (size: 0x20)
//     FHQAndDivZongMenGeneralConfig DivZongMenGeneralConfig;                           // 0x00B8 (size: 0x20)
//     int32 FameAward_Dialogue;                                                        // 0x00D8 (size: 0x4)
//     int32 RewardInterval;                                                            // 0x00DC (size: 0x4)
//     float SalaryFixByFame;                                                           // 0x00E0 (size: 0x4)

// }; // Size: 0xE8

// class UZongmenData : public UFNBigWorldSubSystem
// {
//     TArray<class UZhongMenBase *> AllZhongmens;               // 0x0038 (size: 0x10)
//     TArray<class UZhongMenBase *> HQZhongmens;                // 0x0048 (size: 0x10)
//     TArray<class UZhongMenBase *> DivZhongmens;               // 0x0058 (size: 0x10)
//     TMap<int32, FHQAndDivZongMenInfo> HQAndDivZongMenMapList; // 0x0068 (size: 0x50)

//     void ScriptRelease();
//     void ScriptInit();
// }; // Size: 0xB8

// #endif
