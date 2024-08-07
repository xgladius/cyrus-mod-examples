#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class WhirlyBurlyMovementData : public PropertyClass {
public:
    unsigned char getUnitType() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setUnitType(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getCardUsed() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setCardUsed(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    unsigned char getMovementTurnTime() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setMovementTurnTime(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int getBlueTeamScore() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setBlueTeamScore(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    unsigned int getOrangeTeamScore() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setOrangeTeamScore(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

    unsigned int getRedTeamScore() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setRedTeamScore(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<unsigned int> getUnitMovementList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setUnitMovementList(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};