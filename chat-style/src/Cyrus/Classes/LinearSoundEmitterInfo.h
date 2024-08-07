#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientObjectInfo.h>
#include <Cyrus/Classes/CoreObjectInfo.h>
#include <Cyrus/Classes/PositionalSoundEmitterInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoundEmitterInfo.h>
#include <Cyrus/Classes/SoundInfo.h>
#include <Cyrus/Enums/PositionInfoAttenuationType.h>

class LinearSoundEmitterInfo : public PositionalSoundEmitterInfo {
public:
    float getFRangeScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setFRangeScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    float getFAttenuationFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E4);
    }

    void setFAttenuationFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E4) = val;
    }

    PositionInfoAttenuationType getEAttenuationType() { // Property Generated Getter
      return *reinterpret_cast<PositionInfoAttenuationType*>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setEAttenuationType(PositionInfoAttenuationType val) { // Property Generated Setter
      *reinterpret_cast<PositionInfoAttenuationType*>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    Vector<Vector3D> getVPositions() { // Property Generated Getter
      return *reinterpret_cast<Vector<Vector3D>*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setVPositions(Vector<Vector3D> val) { // Property Generated Setter
      *reinterpret_cast<Vector<Vector3D>*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

};