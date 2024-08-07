#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/LevelUpElixirPropertyRegistryEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class LevelUpElixirSchoolSpecificData : public PropertyClass {
public:
    unsigned int getSchoolID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSchoolID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<std::string> getSpellsToGive() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setSpellsToGive(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    List<std::string> getQuestsToComplete() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setQuestsToComplete(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    List<std::string> getQuestsToAdd() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setQuestsToAdd(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<unsigned int> getItemsToPlaceInInventory() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setItemsToPlaceInInventory(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    List<unsigned int> getGearToEquip() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setGearToEquip(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    std::string getTeleportToZoneOnComplete() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setTeleportToZoneOnComplete(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    List<std::string> getBadgesToComplete() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setBadgesToComplete(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    std::string getSchoolName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setSchoolName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    List<LevelUpElixirPropertyRegistryEntry> getPropertyRegistryEntires() { // Property Generated Getter
      return *reinterpret_cast<List<LevelUpElixirPropertyRegistryEntry>*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setPropertyRegistryEntires(List<LevelUpElixirPropertyRegistryEntry> val) { // Property Generated Setter
      *reinterpret_cast<List<LevelUpElixirPropertyRegistryEntry>*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    List<std::string> getAddTrainingPointIfQuestNotComplete() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setAddTrainingPointIfQuestNotComplete(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

};