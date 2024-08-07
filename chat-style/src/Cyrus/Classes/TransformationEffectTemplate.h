#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class TransformationEffectTemplate : public GameEffectTemplate {
public:
    std::string getSRace() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setSRace(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    float getFScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setFScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    int getNPrimaryColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x18C);
    }

    void setNPrimaryColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x18C) = val;
    }

    int getNSecondaryColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setNSecondaryColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    int getNPatternOption() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x194);
    }

    void setNPatternOption(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x194) = val;
    }

    int getNGeometryOption() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setNGeometryOption(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    std::string getSNaturalAttack() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1A0);
    }

    void setSNaturalAttack(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1A0) = val;
    }

};