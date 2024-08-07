#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellTemplate.h>
#include <Cyrus/Enums/FishingSpellTemplate__FishingSpellType.h>

class FishingSpellTemplate : public SpellTemplate {
public:
    FishingSpellTemplate__FishingSpellType getFishingSpellType() { // Property Generated Getter
      return *reinterpret_cast<FishingSpellTemplate__FishingSpellType*>(reinterpret_cast<uintptr_t>(this) + 0x320);
    }

    void setFishingSpellType(FishingSpellTemplate__FishingSpellType val) { // Property Generated Setter
      *reinterpret_cast<FishingSpellTemplate__FishingSpellType*>(reinterpret_cast<uintptr_t>(this) + 0x320) = val;
    }

    int getEnergyCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x324);
    }

    void setEnergyCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x324) = val;
    }

    std::string getAnimationKFM() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x328);
    }

    void setAnimationKFM(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x328) = val;
    }

    std::string getAnimationName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x348);
    }

    void setAnimationName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x348) = val;
    }

    std::string getSoundEffectName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x368);
    }

    void setSoundEffectName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x368) = val;
    }

    float getSoundEffectGain() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x388);
    }

    void setSoundEffectGain(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x388) = val;
    }

    int getFishingSpellImageIndex() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x38C);
    }

    void setFishingSpellImageIndex(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x38C) = val;
    }

    std::string getFishingSpellImageName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x390);
    }

    void setFishingSpellImageName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x390) = val;
    }

    std::string getFishingSchoolFocus() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x3B0);
    }

    void setFishingSchoolFocus(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x3B0) = val;
    }

};