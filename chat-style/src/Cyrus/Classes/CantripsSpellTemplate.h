#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellTemplate.h>
#include <Cyrus/Enums/CantripsSpellTemplate__CantripsSpellEffect.h>
#include <Cyrus/Enums/CantripsSpellTemplate__CantripsSpellType.h>

class CantripsSpellTemplate : public SpellTemplate {
public:
    CantripsSpellTemplate__CantripsSpellType getCantripsSpellType() { // Property Generated Getter
      return *reinterpret_cast<CantripsSpellTemplate__CantripsSpellType*>(reinterpret_cast<uintptr_t>(this) + 0x320);
    }

    void setCantripsSpellType(CantripsSpellTemplate__CantripsSpellType val) { // Property Generated Setter
      *reinterpret_cast<CantripsSpellTemplate__CantripsSpellType*>(reinterpret_cast<uintptr_t>(this) + 0x320) = val;
    }

    int getEnergyCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x324);
    }

    void setEnergyCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x324) = val;
    }

    Vector<std::string> getAnimationKFMs() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x328);
    }

    void setAnimationKFMs(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x328) = val;
    }

    Vector<std::string> getAnimationNames() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x340);
    }

    void setAnimationNames(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x340) = val;
    }

    std::string getSoundEffectName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x358);
    }

    void setSoundEffectName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x358) = val;
    }

    float getSoundEffectGain() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x378);
    }

    void setSoundEffectGain(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x378) = val;
    }

    int getCantripsSpellImageIndex() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x37C);
    }

    void setCantripsSpellImageIndex(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x37C) = val;
    }

    std::string getCantripsSpellImageName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x380);
    }

    void setCantripsSpellImageName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x380) = val;
    }

    std::string getEffectParameter() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x3A0);
    }

    void setEffectParameter(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x3A0) = val;
    }

    CantripsSpellTemplate__CantripsSpellEffect getCantripsSpellEffect() { // Property Generated Getter
      return *reinterpret_cast<CantripsSpellTemplate__CantripsSpellEffect*>(reinterpret_cast<uintptr_t>(this) + 0x3C0);
    }

    void setCantripsSpellEffect(CantripsSpellTemplate__CantripsSpellEffect val) { // Property Generated Setter
      *reinterpret_cast<CantripsSpellTemplate__CantripsSpellEffect*>(reinterpret_cast<uintptr_t>(this) + 0x3C0) = val;
    }

    int getCooldownSeconds() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3C4);
    }

    void setCooldownSeconds(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3C4) = val;
    }

};