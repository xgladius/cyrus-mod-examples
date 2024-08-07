#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BattlegroundMatchmaking.h>
#include <Cyrus/Classes/PropertyClass.h>

class BattlegroundTemplate : public PropertyClass {
public:
    std::string getBattlegroundName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setBattlegroundName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    float getCountdownSeconds() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setCountdownSeconds(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    int getMatchSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setMatchSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    std::string getTeamStartA() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setTeamStartA(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    std::string getTeamStartB() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setTeamStartB(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    std::string getBattlegroundZone() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setBattlegroundZone(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    int getCancelCooldownSeconds() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setCancelCooldownSeconds(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    int getMaximumDisplayPoints() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC);
    }

    void setMaximumDisplayPoints(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC) = val;
    }

    int getMatchTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setMatchTimeSeconds(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    int getRevealTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setRevealTimeSeconds(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

    Vector<SharedPointer<BattlegroundMatchmaking>> * getMatchmakingList() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<BattlegroundMatchmaking>> *>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setMatchmakingList(Vector<SharedPointer<BattlegroundMatchmaking>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<BattlegroundMatchmaking>> **>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    List<std::string> getUnlockedPolymorphTags() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setUnlockedPolymorphTags(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    std::string getLootWinner() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setLootWinner(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    std::string getLootLoser() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setLootLoser(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    std::string getLootTie() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setLootTie(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    bool getPveMode() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setPveMode(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    int getDefeatedPolyLockCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x184);
    }

    void setDefeatedPolyLockCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x184) = val;
    }

    bool getLockSigilSpotOnDefeat() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setLockSigilSpotOnDefeat(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

};