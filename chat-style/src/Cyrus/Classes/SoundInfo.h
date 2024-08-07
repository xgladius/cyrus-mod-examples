#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientObjectInfo.h>
#include <Cyrus/Classes/CoreObjectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RequirementList.h>
#include <Cyrus/Enums/AudioCategory.h>

class SoundInfo : public ClientObjectInfo {
public:
    float getRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    bool getExclusive() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x104);
    }

    void setExclusive(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x104) = val;
    }

    bool getStartActive() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x105);
    }

    void setStartActive(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x105) = val;
    }

    AudioCategory getCategory() { // Property Generated Getter
      return *reinterpret_cast<AudioCategory*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setCategory(AudioCategory val) { // Property Generated Setter
      *reinterpret_cast<AudioCategory*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    int getOverride() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x10C);
    }

    void setOverride(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x10C) = val;
    }

    SharedPointer<RequirementList> * getEnableReqs() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<RequirementList> *>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setEnableReqs(SharedPointer<RequirementList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<RequirementList> **>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

};