#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MatchRequest.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/PvPMatchJoinQueueRequirements.h>
#include <Cyrus/Classes/SpellEffectPenalty.h>

class PvPMatchRequest : public MatchRequest {
public:
    SharedPointer<PvPMatchJoinQueueRequirements> * getJoinQueueRequirements() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PvPMatchJoinQueueRequirements> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setJoinQueueRequirements(SharedPointer<PvPMatchJoinQueueRequirements> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PvPMatchJoinQueueRequirements> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<gid> getIgnoredList() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setIgnoredList(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    float getMatchTimer() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setMatchTimer(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    int getBonusTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x94);
    }

    void setBonusTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x94) = val;
    }

    int getPassPenalty() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setPassPenalty(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    int getYellowTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x9C);
    }

    void setYellowTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x9C) = val;
    }

    int getRedTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setRedTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    int getMinTurnTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setMinTurnTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

    Vector<SharedPointer<SpellEffectPenalty>> * getEffects() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<SpellEffectPenalty>> *>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setEffects(Vector<SharedPointer<SpellEffectPenalty>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<SpellEffectPenalty>> **>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

};