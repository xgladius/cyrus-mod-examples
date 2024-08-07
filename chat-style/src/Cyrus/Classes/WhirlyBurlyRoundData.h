#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class WhirlyBurlyRoundData : public PropertyClass {
public:
    unsigned char getRoundNumber() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setRoundNumber(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned char getMaximumRounds() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x49);
    }

    void setMaximumRounds(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x49) = val;
    }

    unsigned char getPlanningTurnTime() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x4A);
    }

    void setPlanningTurnTime(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x4A) = val;
    }

    unsigned int getBlueTeamScore() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setBlueTeamScore(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    unsigned int getOrangeTeamScore() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setOrangeTeamScore(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int getRedTeamScore() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setRedTeamScore(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    unsigned int getPassport() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPassport(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    unsigned char getTeam1() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setTeam1(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    unsigned char getTeam2() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x5D);
    }

    void setTeam2(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x5D) = val;
    }

    unsigned char getTeam3() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x5E);
    }

    void setTeam3(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x5E) = val;
    }

    List<unsigned int> getHandList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setHandList(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};