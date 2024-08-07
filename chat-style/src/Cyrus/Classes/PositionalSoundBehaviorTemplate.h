#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AreaBehaviorTemplate.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoundBehaviorTemplate.h>

class PositionalSoundBehaviorTemplate : public SoundBehaviorTemplate {
public:
    float getInnerRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setInnerRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    bool getInverted() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x12C);
    }

    void setInverted(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x12C) = val;
    }

};