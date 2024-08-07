#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/AudioCategory.h>

class AreaBehavior : public BehaviorInstance {
public:
    float getRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
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

};