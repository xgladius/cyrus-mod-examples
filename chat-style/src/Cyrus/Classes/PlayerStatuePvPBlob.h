#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BasePetItemBehavior.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/GameEffectContainer.h>
#include <Cyrus/Classes/PlayerStatueBlob.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/PublicEquippedJewelInfo.h>
#include <Cyrus/Classes/WizGameStats.h>
#include <Cyrus/Classes/WizardCharacterBehavior.h>

class PlayerStatuePvPBlob : public PlayerStatueBlob {
public:
    int getLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getSchool() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setSchool(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    int getGender() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setGender(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int getNameKeys() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setNameKeys(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    std::string getBadge() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setBadge(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    SharedPointer<WizardCharacterBehavior> * getPCharacterBehavior() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<WizardCharacterBehavior> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setPCharacterBehavior(SharedPointer<WizardCharacterBehavior> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<WizardCharacterBehavior> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    SharedPointer<BehaviorInstance> * getPEquipment() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<BehaviorInstance> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setPEquipment(SharedPointer<BehaviorInstance> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<BehaviorInstance> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    SharedPointer<WizGameStats> * getPStats() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<WizGameStats> *>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setPStats(SharedPointer<WizGameStats> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<WizGameStats> **>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    SharedPointer<GameEffectContainer> * getPGameEffects() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<GameEffectContainer> *>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setPGameEffects(SharedPointer<GameEffectContainer> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<GameEffectContainer> **>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    unsigned int getPetTID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setPetTID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    SharedPointer<BasePetItemBehavior> * getPPetBehavior() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<BasePetItemBehavior> *>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setPPetBehavior(SharedPointer<BasePetItemBehavior> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<BasePetItemBehavior> **>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    SharedPointer<PublicEquippedJewelInfo> * getPPetJewels() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PublicEquippedJewelInfo> *>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setPPetJewels(SharedPointer<PublicEquippedJewelInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PublicEquippedJewelInfo> **>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

};