#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CombatSigilTemplate.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SigilTemplate.h>

class BattlegroundSigilTemplate : public CombatSigilTemplate {
public:
    unsigned int getTickRateMS() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x228);
    }

    void setTickRateMS(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x228) = val;
    }

    float getPlayerAggroRange() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x22C);
    }

    void setPlayerAggroRange(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x22C) = val;
    }

    std::string getDeathEffect() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x230);
    }

    void setDeathEffect(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x230) = val;
    }

    std::string getNoAggroEffect() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x250);
    }

    void setNoAggroEffect(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x250) = val;
    }

    std::string getRedTeamStart() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x270);
    }

    void setRedTeamStart(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x270) = val;
    }

    std::string getBlueTeamStart() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x290);
    }

    void setBlueTeamStart(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x290) = val;
    }

    unsigned int getRedPlaceholdObjectID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2B0);
    }

    void setRedPlaceholdObjectID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2B0) = val;
    }

    unsigned int getBluePlaceholdObjectID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2B4);
    }

    void setBluePlaceholdObjectID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2B4) = val;
    }

};