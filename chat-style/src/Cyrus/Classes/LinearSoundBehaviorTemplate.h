#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AreaBehaviorTemplate.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PositionalSoundBehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoundBehaviorTemplate.h>
#include <Cyrus/Enums/PositionInfoAttenuationType.h>

class LinearSoundBehaviorTemplate : public PositionalSoundBehaviorTemplate {
public:
    float getFRangeScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setFRangeScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    float getFAttenuationFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x134);
    }

    void setFAttenuationFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x134) = val;
    }

    PositionInfoAttenuationType getEAttenuationType() { // Property Generated Getter
      return *reinterpret_cast<PositionInfoAttenuationType*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setEAttenuationType(PositionInfoAttenuationType val) { // Property Generated Setter
      *reinterpret_cast<PositionInfoAttenuationType*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    Vector<Vector3D> getVPositions() { // Property Generated Getter
      return *reinterpret_cast<Vector<Vector3D>*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setVPositions(Vector<Vector3D> val) { // Property Generated Setter
      *reinterpret_cast<Vector<Vector3D>*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

};