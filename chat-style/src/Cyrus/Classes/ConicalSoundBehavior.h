#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AreaBehavior.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PositionalSoundBehavior.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoundBehavior.h>
#include <Cyrus/Enums/PositionInfoAttenuationType.h>

class ConicalSoundBehavior : public PositionalSoundBehavior {
public:
    float getFInsideAngle() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setFInsideAngle(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

    float getFOutsideAngle() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x214);
    }

    void setFOutsideAngle(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x214) = val;
    }

    float getFOutsideVolume() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setFOutsideVolume(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

    float getFRangeScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x21C);
    }

    void setFRangeScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x21C) = val;
    }

    float getFAttenuationFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x220);
    }

    void setFAttenuationFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x220) = val;
    }

    PositionInfoAttenuationType getEAttenuationType() { // Property Generated Getter
      return *reinterpret_cast<PositionInfoAttenuationType*>(reinterpret_cast<uintptr_t>(this) + 0x224);
    }

    void setEAttenuationType(PositionInfoAttenuationType val) { // Property Generated Setter
      *reinterpret_cast<PositionInfoAttenuationType*>(reinterpret_cast<uintptr_t>(this) + 0x224) = val;
    }

};