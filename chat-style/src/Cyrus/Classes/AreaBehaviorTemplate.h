#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RequirementList.h>
#include <Cyrus/Enums/AudioCategory.h>

class AreaBehaviorTemplate : public BehaviorTemplate {
public:
    float getRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    AudioCategory getCategory() { // Property Generated Getter
      return *reinterpret_cast<AudioCategory*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setCategory(AudioCategory val) { // Property Generated Setter
      *reinterpret_cast<AudioCategory*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    bool getExclusive() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setExclusive(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    bool getActive() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x81);
    }

    void setActive(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x81) = val;
    }

    SharedPointer<RequirementList> * getEnableReqs() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<RequirementList> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setEnableReqs(SharedPointer<RequirementList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<RequirementList> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};