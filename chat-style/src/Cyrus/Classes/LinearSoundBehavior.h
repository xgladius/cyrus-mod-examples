#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AreaBehavior.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PositionalSoundBehavior.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoundBehavior.h>
#include <Cyrus/Enums/PositionInfoAttenuationType.h>

class LinearSoundBehavior : public PositionalSoundBehavior {
public:
    float getFRangeScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setFRangeScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    float getFAttenuationFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x204);
    }

    void setFAttenuationFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x204) = val;
    }

    PositionInfoAttenuationType getEAttenuationType() { // Property Generated Getter
      return *reinterpret_cast<PositionInfoAttenuationType*>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setEAttenuationType(PositionInfoAttenuationType val) { // Property Generated Setter
      *reinterpret_cast<PositionInfoAttenuationType*>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

    Vector<Vector3D> getVPositions() { // Property Generated Getter
      return *reinterpret_cast<Vector<Vector3D>*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setVPositions(Vector<Vector3D> val) { // Property Generated Setter
      *reinterpret_cast<Vector<Vector3D>*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

};