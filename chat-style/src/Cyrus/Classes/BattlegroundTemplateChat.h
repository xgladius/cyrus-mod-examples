#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BattlegroundMatchmakingChat.h>
#include <Cyrus/Classes/PropertyClass.h>

class BattlegroundTemplateChat : public PropertyClass {
public:
    unsigned int getProjectID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setProjectID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    float getCountdownSeconds() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setCountdownSeconds(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    int getMatchSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setMatchSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    int getCancelCooldownSeconds() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setCancelCooldownSeconds(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    int getTeamCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setTeamCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<SharedPointer<BattlegroundMatchmakingChat>> * getMatchmakingList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BattlegroundMatchmakingChat>> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setMatchmakingList(List<SharedPointer<BattlegroundMatchmakingChat>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BattlegroundMatchmakingChat>> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};