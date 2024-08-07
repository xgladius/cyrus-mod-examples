#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/LootInfo.h>
#include <Cyrus/Classes/LootInfoBase.h>
#include <Cyrus/Classes/PetStatModificationSet.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetXPLootInfo : public LootInfo {
public:
    PetStatModificationSet getStatModifierSet() { // Property Generated Getter
      return *reinterpret_cast<PetStatModificationSet*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setStatModifierSet(PetStatModificationSet val) { // Property Generated Setter
      *reinterpret_cast<PetStatModificationSet*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    bool getLeveledUp() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setLeveledUp(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    unsigned int getLastTalentGiven() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x10C);
    }

    void setLastTalentGiven(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x10C) = val;
    }

    unsigned int getLastPowerGiven() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setLastPowerGiven(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    unsigned int getLastJewelGiven() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x114);
    }

    void setLastJewelGiven(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x114) = val;
    }

};