#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicStageTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/CameraCutCinematicAction__kCameraRelative.h>

class RemoveHangingCinematicStageTemplate : public CinematicStageTemplate {
public:
    float getBurnHangingTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setBurnHangingTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    bool getStopRotating() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x9E);
    }

    void setStopRotating(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x9E) = val;
    }

    bool getStartRotating() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x9F);
    }

    void setStartRotating(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x9F) = val;
    }

    float getStartRotationTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setStartRotationTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    std::string getRevealText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setRevealText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    bool getRevealsHanging() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setRevealsHanging(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    CameraCutCinematicAction__kCameraRelative getCamRel() { // Property Generated Getter
      return *reinterpret_cast<CameraCutCinematicAction__kCameraRelative*>(reinterpret_cast<uintptr_t>(this) + 0xCC);
    }

    void setCamRel(CameraCutCinematicAction__kCameraRelative val) { // Property Generated Setter
      *reinterpret_cast<CameraCutCinematicAction__kCameraRelative*>(reinterpret_cast<uintptr_t>(this) + 0xCC) = val;
    }

    bool getBSwitchCameraToWideLong() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x9C);
    }

    void setBSwitchCameraToWideLong(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x9C) = val;
    }

    bool getAnnouncesSpell() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x9D);
    }

    void setAnnouncesSpell(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x9D) = val;
    }

    bool getDetonate() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setDetonate(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

};