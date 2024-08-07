#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientObjectInfo.h>
#include <Cyrus/Classes/CoreObjectInfo.h>
#include <Cyrus/Classes/PositionalSoundEmitterInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoundEmitterInfo.h>
#include <Cyrus/Classes/SoundInfo.h>
#include <Cyrus/Enums/PositionInfoAttenuationType.h>

class ConicalSoundEmitterInfo : public PositionalSoundEmitterInfo {
public:
    float getFInsideAngle() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setFInsideAngle(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    float getFOutsideAngle() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E4);
    }

    void setFOutsideAngle(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E4) = val;
    }

    float getFOutsideVolume() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setFOutsideVolume(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    float getFRangeScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1EC);
    }

    void setFRangeScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1EC) = val;
    }

    float getFAttenuationFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setFAttenuationFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    PositionInfoAttenuationType getEAttenuationType() { // Property Generated Getter
      return *reinterpret_cast<PositionInfoAttenuationType*>(reinterpret_cast<uintptr_t>(this) + 0x1F4);
    }

    void setEAttenuationType(PositionInfoAttenuationType val) { // Property Generated Setter
      *reinterpret_cast<PositionInfoAttenuationType*>(reinterpret_cast<uintptr_t>(this) + 0x1F4) = val;
    }

};