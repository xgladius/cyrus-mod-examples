#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/eGender.h>
#include <Cyrus/Enums/eMountType.h>
#include <Cyrus/Enums/eRace.h>

class ClientMountOwnerBehavior : public BehaviorInstance {
public:
    eGender getGender() { // Property Generated Getter
      return *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setGender(eGender val) { // Property Generated Setter
      *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    eRace getRace() { // Property Generated Getter
      return *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0xB4);
    }

    void setRace(eRace val) { // Property Generated Setter
      *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0xB4) = val;
    }

    eMountType getEMountType() { // Property Generated Getter
      return *reinterpret_cast<eMountType*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setEMountType(eMountType val) { // Property Generated Setter
      *reinterpret_cast<eMountType*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    int getPrimaryColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xBC);
    }

    void setPrimaryColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xBC) = val;
    }

    int getSecondaryColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setSecondaryColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    int getPatternColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC4);
    }

    void setPatternColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC4) = val;
    }

    bool getAdjustableAnimationRate() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setAdjustableAnimationRate(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    int getGeometryOption() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xCC);
    }

    void setGeometryOption(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xCC) = val;
    }

    gid getLastMountID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setLastMountID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

};