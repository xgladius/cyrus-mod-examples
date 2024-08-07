#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/BattlegroundPlayerStats__PlayerStatusEnum.h>

class BattlegroundPlayerStats : public PropertyClass {
public:
    BattlegroundPlayerStats__PlayerStatusEnum getStatus() { // Property Generated Getter
      return *reinterpret_cast<BattlegroundPlayerStats__PlayerStatusEnum*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setStatus(BattlegroundPlayerStats__PlayerStatusEnum val) { // Property Generated Setter
      *reinterpret_cast<BattlegroundPlayerStats__PlayerStatusEnum*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    BattlegroundPlayerStats__PlayerTeamEnum getTeam() { // Property Generated Getter
      return *reinterpret_cast<BattlegroundPlayerStats__PlayerTeamEnum*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setTeam(BattlegroundPlayerStats__PlayerTeamEnum val) { // Property Generated Setter
      *reinterpret_cast<BattlegroundPlayerStats__PlayerTeamEnum*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    std::string getPackedName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPackedName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    gid getPlayerID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setPlayerID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    unsigned int getPolymorphID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setPolymorphID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    int getRating() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setRating(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    int getPlayerKills() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setPlayerKills(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    int getMobKills() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setMobKills(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    int getAutoCaps() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setAutoCaps(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    int getCombatCaps() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setCombatCaps(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    int getDeaths() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setDeaths(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

};