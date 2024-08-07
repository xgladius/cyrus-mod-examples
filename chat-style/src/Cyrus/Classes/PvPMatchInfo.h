#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ArenaMatchInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/PvPMatchJoinQueueRequirements.h>
#include <Cyrus/Classes/SpellEffectPenalty.h>

class PvPMatchInfo : public ArenaMatchInfo {
public:
    SharedPointer<PvPMatchJoinQueueRequirements> * getJoinQueueRequirements() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PvPMatchJoinQueueRequirements> *>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setJoinQueueRequirements(SharedPointer<PvPMatchJoinQueueRequirements> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PvPMatchJoinQueueRequirements> **>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    unsigned int getTimeLimitSec() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setTimeLimitSec(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    bool getUseHistoricDiego() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setUseHistoricDiego(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    List<gid> getIgnoredList() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setIgnoredList(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    float getMatchTimer() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x164);
    }

    void setMatchTimer(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x164) = val;
    }

    int getBonusTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setBonusTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    int getPassPenalty() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x16C);
    }

    void setPassPenalty(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x16C) = val;
    }

    int getYellowTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setYellowTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    int getRedTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x174);
    }

    void setRedTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x174) = val;
    }

    int getMinTurnTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setMinTurnTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

    Vector<SharedPointer<SpellEffectPenalty>> * getEffects() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<SpellEffectPenalty>> *>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setEffects(Vector<SharedPointer<SpellEffectPenalty>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<SpellEffectPenalty>> **>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    bool getUpdateBattlePassPoints() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setUpdateBattlePassPoints(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    int getBattlePassWinPoints() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x19C);
    }

    void setBattlePassWinPoints(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x19C) = val;
    }

    int getBattlePassLosePoints() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A0);
    }

    void setBattlePassLosePoints(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A0) = val;
    }

};