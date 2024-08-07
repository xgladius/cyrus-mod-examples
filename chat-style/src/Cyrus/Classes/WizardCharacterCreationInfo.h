#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CharacterCreationInfo.h>
#include <Cyrus/Classes/EquippedItemInfoList.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizardCharacterBehavior.h>

class WizardCharacterCreationInfo : public CharacterCreationInfo {
public:
    SharedPointer<WizardCharacterBehavior> * getAvatarBehavior() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<WizardCharacterBehavior> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setAvatarBehavior(SharedPointer<WizardCharacterBehavior> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<WizardCharacterBehavior> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    SharedPointer<EquippedItemInfoList> * getEquipmentInfoList() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<EquippedItemInfoList> *>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setEquipmentInfoList(SharedPointer<EquippedItemInfoList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<EquippedItemInfoList> **>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    std::string getLocation() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setLocation(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    int getLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    int getWorld() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xCC);
    }

    void setWorld(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xCC) = val;
    }

    unsigned int getSchoolOfFocus() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setSchoolOfFocus(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    unsigned int getNameIndices() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xD4);
    }

    void setNameIndices(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xD4) = val;
    }

};