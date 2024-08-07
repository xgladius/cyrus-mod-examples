#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ItemSetBonusData : public PropertyClass {
public:
    int getNumItemsToEquip() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNumItemsToEquip(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getDescription() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setDescription(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    RequirementList* * getEquipEffectsGrantedRequirements() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setEquipEffectsGrantedRequirements(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<GameEffectInfo*> * getEquipEffectsGranted() { // Property Generated Getter
      return reinterpret_cast<List<GameEffectInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setEquipEffectsGranted(List<GameEffectInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<GameEffectInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};