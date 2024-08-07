#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AreaBehavior.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoundBehavior.h>

class PositionalSoundBehavior : public SoundBehavior {
public:
    float getMinimumFalloff() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setMinimumFalloff(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    float getMaximumFalloff() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x14C);
    }

    void setMaximumFalloff(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x14C) = val;
    }

    bool getAnimDriven() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setAnimDriven(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    bool getInverted() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x18D);
    }

    void setInverted(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x18D) = val;
    }

};