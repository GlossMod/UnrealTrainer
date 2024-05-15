#pragma once

#include <Unreal/UObjectGlobals.hpp>
#include <UnrealDef.hpp>
#include "FNGameX_enums.hpp"

using namespace RC;
using namespace RC::Unreal::UE::Math;

struct FGameDataBase
{
}; // Size: 0x8

struct FTableRowBase
{
}; // Size: 0x8

struct FTraumaData
{
    float Trauma;                          // 0x0000 (size: 0x4)
    uint8_t TraumaState[0x4];              // 0x0004 (size: 0x1)
    float TraumaDec;                       // 0x0008 (size: 0x4)
    float TraumaSelfHeal;                  // 0x000C (size: 0x4)
    float TraumaHelpHealRate;              // 0x0010 (size: 0x4)
    uint8_t p1[0x4];                       // 0x0014 (size: 0x4)
    uint8_t BrokenTraumaTraitIDList[0x10]; // 0x0018 (size: 0x10)
    int32 CurStateStartTurn;               // 0x0028 (size: 0x4)
    uint8_t p2[0x4];                       // 0x002C (size: 0x4)

}; // Size: 0x30

struct FDaoYunInfo
{
    int32 DaoYunValue;                      // 0x0000 (size: 0x4)
    uint8_t DaoYunAllocateToTraitMap[0x50]; // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FGongFaEntity
{
    int32 GongFaLevel;  // 0x0000 (size: 0x4)
    float CurGongFaExp; // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FXinJueState
{
    int32 XinjueIndex;       // 0x0000 (size: 0x4)
    int32 DefaultTrait;      // 0x0004 (size: 0x4)
    uint8_t Traits[0x10];    // 0x0008 (size: 0x10)
    uint8_t PreTraits[0x50]; // 0x0018 (size: 0x50)

}; // Size: 0x68

struct FSkillGroupTraitPointInfo
{
    int32 TraitPointID; // 0x0000 (size: 0x4)
    int32 Level;        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSkillGroupEntity
{
    int32 SkillGroupTypeID;         // 0x0000 (size: 0x4)
    int32 SkillLevel;               // 0x0004 (size: 0x4)
    int32 CurSkillExp;              // 0x0008 (size: 0x4)
    int32 CurSkillTemplateID;       // 0x000C (size: 0x4)
    uint8_t TraitPointInfo[0x10];   // 0x0010 (size: 0x10)
    int32 SkillTraitPoint;          // 0x0020 (size: 0x4)
    uint8_t LearnedEvolution[0x10]; // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FFightAttribute
{
    int32 Stage;                    // 0x0000 (size: 0x4)
    int32 Phase;                    // 0x0004 (size: 0x4)
    float LQ_Total;                 // 0x0008 (size: 0x4)
    float LQ_MaxTotal;              // 0x000C (size: 0x4)
    float LQ_MaxTotalChange;        // 0x0010 (size: 0x4)
    uint8_t p1[0x4];                // 0x0014 (size: 0x4)
    FTraumaData TraumaData;         // 0x0018 (size: 0x30)  受伤数据
    int32 Perception;               // 0x0048 (size: 0x4)   悟性
    uint8_t p2[0x4];                // 0x004C (size: 0x4)
    uint8_t DaoYunInfoList[0x10];   // 0x0050 (size: 0x10)  道运信息
    int32 Mental_Lechou;            // 0x0060 (size: 0x4)   乐仇
    int32 Metal_Xibei;              // 0x0064 (size: 0x4)   袭背
    int32 Mental_Nujing;            // 0x0068 (size: 0x4)   怒劲
    int32 Mental_ZuYuan;            // 0x006C (size: 0x4)   阻援
    TArray<int32> CapcityWuxing;    // 0x0070 (size: 0x10)  五行灵根
    uint8_t p3[0x8];                // 0x0078 (size: 0x8)
    uint8_t MaxCapacityType[0x8];   // 0x0080 (size: 0x1)   最大容量类型
    uint8_t LearnedSkillBook[0x10]; // 0x0088 (size: 0x10)  学习技能书
    uint8_t LearnedPassive[0x50];   // 0x0098 (size: 0x50)  学习被动
    uint8_t LearnedXinjue[0x50];    // 0x00E8 (size: 0x50)  学习心诀
    uint8_t LearnedYaoYi[0x10];     // 0x0138 (size: 0x10)  学习药异
    uint8_t AllSKillTypeInfo[0x50]; // 0x0148 (size: 0x50)  所有技能类型信息
    int32 Mobility;                 // 0x0198 (size: 0x4)   机动性
    float Inspiration;              // 0x019C (size: 0x4)   灵感
    int32 InspirationLevel;         // 0x01A0 (size: 0x4)   灵感等级
    uint8_t p4[0x4];                // 0x01A4 (size: 0x4)
}; // Size: 0x1A8

struct FCharactorInfo
{
    FName FirstName;           // 0x0000 (size: 0x8)
    FName LastName;            // 0x0008 (size: 0x8)
    uint8_t NameIDs[0x10];     // 0x0010 (size: 0x10)
    uint8 Gender;              // 0x0020 (size: 0x1)
    int32 BodyIndex;           // 0x0024 (size: 0x4)
    int32 Face;                // 0x0028 (size: 0x4)
    int32 Hair;                // 0x002C (size: 0x4)
    int32 HairBehind;          // 0x0030 (size: 0x4)
    uint8_t HairColor[0x10];   // 0x0034 (size: 0x10)
    int32 Makeup;              // 0x0044 (size: 0x4)
    int32 EyeBrown;            // 0x0048 (size: 0x4)
    int32 Eye;                 // 0x004C (size: 0x4)
    int32 Nose;                // 0x0050 (size: 0x4)
    int32 Mouth;               // 0x0054 (size: 0x4)
    int32 EyeMakeup;           // 0x0058 (size: 0x4)
    int32 Bread;               // 0x005C (size: 0x4)
    int32 BreadColor;          // 0x0060 (size: 0x4)
    int32 ClothColor;          // 0x0064 (size: 0x4)
    int32 PresetAppearance;    // 0x0068 (size: 0x4)
    int32 MaxLife;             // 0x006C (size: 0x4)
    int32 CurLife;             // 0x0070 (size: 0x4)
    int32 CurDay;              // 0x0074 (size: 0x4)
    int32 Luck;                // 0x0078 (size: 0x4)
    uint8_t EffectScale[0x18]; // 0x0080 (size: 0x18)

}; // Size: 0x98

struct FBattleAttribute
{
    int32 HpBase;              // 0x0000 (size: 0x4)    血量基础
    int32 HpAdd;               // 0x0004 (size: 0x4)    血量增加
    float HpMul;               // 0x0008 (size: 0x4)    血量倍率
    int32 HpCurrent;           // 0x000C (size: 0x4)    当前血量
    int32 MpBase;              // 0x0010 (size: 0x4)    蓝量基础
    int32 MpAdd;               // 0x0014 (size: 0x4)    蓝量增加
    int32 MpMul;               // 0x0018 (size: 0x4)    蓝量倍率
    int32 MpCurrent;           // 0x001C (size: 0x4)    当前蓝量
    int32 LQHeal;              // 0x0020 (size: 0x4)    灵气恢复
    float LQHealRatio;         // 0x0024 (size: 0x4)    灵气恢复比率
    int32 LQHealAdd;           // 0x0028 (size: 0x4)    灵气恢复增加
    int32 LQHealMul;           // 0x002C (size: 0x4)    灵气恢复倍率
    int32 LQRegen;             // 0x0030 (size: 0x4)    灵气回复
    float LQRegenRatio;        // 0x0034 (size: 0x4)    灵气回复比率
    int32 LQRegenAdd;          // 0x0038 (size: 0x4)    灵气回复增加
    int32 LQRegenMul;          // 0x003C (size: 0x4)    灵气回复倍率
    int32 Att;                 // 0x0040 (size: 0x4)    攻击
    int32 AttAdd;              // 0x0044 (size: 0x4)    攻击增加
    int32 AttMul;              // 0x0048 (size: 0x4)    攻击倍率
    int32 Def;                 // 0x004C (size: 0x4)    防御
    int32 DefAdd;              // 0x0050 (size: 0x4)    防御增加
    int32 DefMul;              // 0x0054 (size: 0x4)    防御倍率
    float CritChance;          // 0x0058 (size: 0x4)    暴击率
    float CritChanceAdd;       // 0x005C (size: 0x4)    暴击率增加
    float CritChanceMul;       // 0x0060 (size: 0x4)    暴击率倍率
    float CritDamageRate;      // 0x0064 (size: 0x4)    暴击伤害
    float CritDamageRateAdd;   // 0x0068 (size: 0x4)    暴击伤害增加
    float CritDamageRateMul;   // 0x006C (size: 0x4)    暴击伤害倍率
    int32 MoveSpeed;           // 0x0070 (size: 0x4)    移动速度
    int32 MoveSpeedMul;        // 0x0074 (size: 0x4)    移动速度倍率
    int32 MoveSpeedAdd;        // 0x0078 (size: 0x4)    移动速度增加
    int32 DamageFinalIncrease; // 0x007C (size: 0x4)    伤害最终增加
    int32 DamageFinalDecrease; // 0x0080 (size: 0x4)    伤害最终减少
    int32 BasicDamage;         // 0x0084 (size: 0x4)    基础伤害
    float DamageJinDec;        // 0x0088 (size: 0x4)    伤害金减少
    float DamageShuiDec;       // 0x008C (size: 0x4)    伤害水减少
    float DamageMuDec;         // 0x0090 (size: 0x4)    伤害木减少
    float DamageHuoDec;        // 0x0094 (size: 0x4)    伤害火减少
    float DamageTuDec;         // 0x0098 (size: 0x4)    伤害土减少
    float DamageJinMul;        // 0x009C (size: 0x4)    伤害金倍率
    float DamageShuiMul;       // 0x00A0 (size: 0x4)    伤害水倍率
    float DamageMuMul;         // 0x00A4 (size: 0x4)    伤害木倍率
    float DamageHuoMul;        // 0x00A8 (size: 0x4)    伤害火倍率
    float DamageTuMul;         // 0x00AC (size: 0x4)    伤害土倍率
    float BasicAtkSpeed;       // 0x00B0 (size: 0x4)    基础攻击速度
    float BasicCDR;            // 0x00B4 (size: 0x4)    基础CDR

}; // Size: 0xB8

struct FZhongmenJobAttribute
{
    int32 ZhongmenID;                 // 0x0000 (size: 0x4)
    EZongMenJobType ZhongmenJobLevel; // 0x0004 (size: 0x1)
    int32 ZhongmenAuxiliary;          // 0x0008 (size: 0x4)
    int32 JoinTime;                   // 0x000C (size: 0x4)
    int32 QuitTime;                   // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FZongMenFame
{
    uint8_t ZongMenFameList[0x10];    // 0x0000 (size: 0x10)
    int32 ZongMenFameHistoryMaxValue; // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FSocialAttribute
{
    int32 Charm;                        // 0x0000 (size: 0x4)
    uint8_t p1[0x4];                    // 0x0004 (size: 0x4)
    uint8_t Titles[0x10];               // 0x0008 (size: 0x10)
    uint8_t Rlts_Familys[0x50];         // 0x0018 (size: 0x50)
    uint8_t Rlts_Romantics[0x10];       // 0x0068 (size: 0x10)
    uint8_t Rlts_Friends[0x10];         // 0x0078 (size: 0x10)
    int32 Mood;                         // 0x0088 (size: 0x4)
    int32 Morality;                     // 0x008C (size: 0x4)
    int32 PersonalitySoc;               // 0x0090 (size: 0x4)
    int32 PersonalityFor;               // 0x0094 (size: 0x4)
    int32 PersonalityAmb;               // 0x0098 (size: 0x4)
    int32 PersonalityInt;               // 0x009C (size: 0x4)
    int32 PersonalityDil;               // 0x00A0 (size: 0x4)
    int32 PersonalityDZ;                // 0x00A4 (size: 0x4)
    int32 PersonalityLD;                // 0x00A8 (size: 0x4)
    uint8_t p2[0x4];                    // 0x00AC (size: 0x4)
    uint8_t Stereo[0x10];               // 0x00B0 (size: 0x10)
    uint8_t p3[0x4];                    // 0x00C0 (size: 0x4)
    int32 Sense;                        // 0x00C4 (size: 0x4)
    int32 GoodAndBad;                   // 0x00C8 (size: 0x4)
    int32 TakeMaster;                   // 0x00CC (size: 0x4)
    uint8_t NpcFavorabilityMap[0x50];   // 0x00D0 (size: 0x50)
    uint8_t NpcFamiliarityMap[0x50];    // 0x0120 (size: 0x50)
    uint8_t ZongMenFameValue[0x50];     // 0x0170 (size: 0x50)
    uint8_t RegionReputationList[0x50]; // 0x01C0 (size: 0x50)
    uint8_t WorldReputationList[0x50];  // 0x0210 (size: 0x50)
    uint8_t FameRDValue[0x50];          // 0x0260 (size: 0x50)
    uint8_t FameStand[0x50];            // 0x02B0 (size: 0x50)
    uint8_t PursueValue[0x50];          // 0x0300 (size: 0x50)
    uint8_t LoveValue[0x50];            // 0x0350 (size: 0x50)

}; // Size: 0x3A0

struct FBagBase
{
    EBagType BagType;       // 0x0000 (size: 0x1)
    uint8_t ItemList[0x10]; // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPlayerBag
{
    uint8_t BagList[0x10]; // 0x0000 (size: 0x10)
    int32 BagOwnerUserId;  // 0x0010 (size: 0x4)
    uint8_t p1[0x4];       // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FEnttIndex
{
}; // Size: 0x8

struct FCommonEcsSaveEntityIndex : public FGameDataBase
{
    FEnttIndex EnttEntity; // 0x0008 (size: 0x8)

}; // Size: 0x18

struct FBuildData
{
    int32 BuildID;     // 0x0000 (size: 0x4)
    float MasterValue; // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRelationshipVertex
{
    int32 FirstInIndex;  // 0x0000 (size: 0x4)
    int32 FirstOutIndex; // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPlayerJiYiData
{
    uint8_t CurJiYiLevel[0x50];    // 0x0000 (size: 0x50)
    uint8_t CurJiYiExp[0x50];      // 0x0050 (size: 0x50)
    uint8_t LearnedJiYiBook[0x10]; // 0x00A0 (size: 0x10)
    uint8_t JiYiEffectValue[0x50]; // 0x00B0 (size: 0x50)

}; // Size: 0x100