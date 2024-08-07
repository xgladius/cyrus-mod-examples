#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectBase.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/eGender.h>

class TransformationEffect : public GameEffectBase {
public:
    std::string getSRace() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setSRace(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    eGender getEGender() { // Property Generated Getter
      return *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setEGender(eGender val) { // Property Generated Setter
      *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    float getFScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setFScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

    int getNPrimaryColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setNPrimaryColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    int getNSecondaryColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xAC);
    }

    void setNSecondaryColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xAC) = val;
    }

    int getNPatternOption() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setNPatternOption(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    int getNGeometryOption() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB4);
    }

    void setNGeometryOption(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB4) = val;
    }

    std::string getSNaturalAttack() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setSNaturalAttack(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

};