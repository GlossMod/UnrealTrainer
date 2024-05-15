#pragma once

#include "FNGameX.hpp"

using namespace RC;

struct FRPGAttributeBase
{
    uint8_t p1[8];                              // 0x0000 (size: 0x8)
    int32 RPGIndexID;                           // 0x0008 (size: 0x4)
    int32 BigWorldInsightSize;                  // 0x000C (size: 0x4)   玩家视野
    uint8_t CoordinatePositon[8];               // 0x0010 (size: 0x8)   坐标位置
    FCharactorInfo CharactorInfomation;         // 0x0018 (size: 0x98)  角色信息
    FFightAttribute FightAttribute;             // 0x00B0 (size: 0x1A8) Fight 属性
    FBattleAttribute BattleAttribute;           // 0x0258 (size: 0xB8)  Battle 属性
    FZhongmenJobAttribute ZhongmenJobAttribute; // 0x0310 (size: 0x14)  宗门任务属性
    int32 CityID;                               // 0x0324 (size: 0x4)   城市ID
    uint8_t OldOrganizations[0x10];             // 0x0328 (size: 0x10)
    uint8_t StageBreakTime[0x50];               // 0x0338 (size: 0x50)
    FSocialAttribute SocialAttribute;           // 0x0388 (size: 0x3A0)
    FPlayerBag PlayerBag;                       // 0x0728 (size: 0x18)  玩家背包
    uint8_t EquipedPassive[0x10];               // 0x0740 (size: 0x10)  装备被动
    uint8_t HidePassive[0x10];                  // 0x0750 (size: 0x10)  隐藏被动
    uint8_t TempleEquipedPassive[0x10];         // 0x0760 (size: 0x10)
    uint8_t EquipedSkill[0x50];                 // 0x0770 (size: 0x50)
    uint8_t XinjueInRunState[0x50];             // 0x07C0 (size: 0x50)
    int32 SLoopNum;                             // 0x0810 (size: 0x4)   循环次数
    int32 BLoopNum;                             // 0x0814 (size: 0x4)   循环次数
    int64 LingShi;                              // 0x0818 (size: 0x8)   灵石数量
    int64 SkyGold;                              // 0x0820 (size: 0x8)
    int64 ZongMenFamePoint;                     // 0x0828 (size: 0x8)   宗门声望
    int64 AvailableZongMenJobSalary;            // 0x0830 (size: 0x8)   宗门工资
    FPlayerJiYiData JiYiInfo;                   // 0x0838 (size: 0x100) 记忆信息
    uint8_t LearnedFuLu[0x10];                  // 0x0938 (size: 0x10)  学习附录
    FPlayerBag PlayerFuLuBag;                   // 0x0948 (size: 0x18)  玩家fulu背包
    int32 NPCStoreID;                           // 0x0960 (size: 0x4)   NPC商店ID
    uint8_t p2[4];                              // 0x0964 (size: 0x4)
    FPlayerBag StoreBag;                        // 0x0968 (size: 0x18)  背包
    uint8_t EntiyIndex[0x18];                   // 0x0980 (size: 0x18)  存档索引
    int32 CurrentBD;                            // 0x0998 (size: 0x4)
    bool CurrentBDComplete;                     // 0x099C (size: 0x1)
    uint8_t BDList[0x10];                       // 0x09A0 (size: 0x10)
    FRelationshipVertex RelationshipVertex;     // 0x09B0 (size: 0x8)
    uint8_t LingFaExpList[0x50];                // 0x09B8 (size: 0x50)
    uint8_t DieAfterQuest[0x10];                // 0x0A08 (size: 0x10)
    uint8_t PersonLifeRecords[0x10];            // 0x0A18 (size: 0x10)
    uint8_t KnownItems[0x10];                   // 0x0A28 (size: 0x10)  已知项目
    uint8_t KnownLingfa[0x10];                  // 0x0A38 (size: 0x10)  已知灵法
    uint8_t KnownEnemy[0x10];                   // 0x0A48 (size: 0x10)  已知敌人
};