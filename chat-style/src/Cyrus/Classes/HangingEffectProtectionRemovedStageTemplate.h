#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicStageTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/CameraCutCinematicAction__kCameraRelative.h>

class HangingEffectProtectionRemovedStageTemplate : public CinematicStageTemplate {
public:
    bool getStopRotating() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x99);
    }

    void setStopRotating(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x99) = val;
    }

    bool getStartRotating() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x9A);
    }

    void setStartRotating(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x9A) = val;
    }

    float getStartRotationTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x9C);
    }

    void setStartRotationTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x9C) = val;
    }

    CameraCutCinematicAction__kCameraRelative getCamRel() { // Property Generated Getter
      return *reinterpret_cast<CameraCutCinematicAction__kCameraRelative*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setCamRel(CameraCutCinematicAction__kCameraRelative val) { // Property Generated Setter
      *reinterpret_cast<CameraCutCinematicAction__kCameraRelative*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

    bool getBSwitchCameraToWideLong() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setBSwitchCameraToWideLong(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    bool getIsCloaked() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setIsCloaked(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

};