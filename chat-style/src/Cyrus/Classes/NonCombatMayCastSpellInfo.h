#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/NonCombatMayCastSpellDescription.h>
#include <Cyrus/Classes/PropertyClass.h>

class NonCombatMayCastSpellInfo : public GameEffectInfo {
public:
    std::string getSpellName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setSpellName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    int getPercentChance() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setPercentChance(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    SharedPointer<NonCombatMayCastSpellDescription> * getSpellDescription() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<NonCombatMayCastSpellDescription> *>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setSpellDescription(SharedPointer<NonCombatMayCastSpellDescription> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<NonCombatMayCastSpellDescription> **>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

};