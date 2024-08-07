#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicStageTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/CameraCutCinematicAction__kCameraRelative.h>

class ActCinematicStageTemplate : public CinematicStageTemplate {
public:
    Vector<std::string> getCameras() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setCameras(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    Vector<std::string> getAltcameras() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setAltcameras(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    std::string getActAnim() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setActAnim(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    CameraCutCinematicAction__kCameraRelative getCamRel() { // Property Generated Getter
      return *reinterpret_cast<CameraCutCinematicAction__kCameraRelative*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setCamRel(CameraCutCinematicAction__kCameraRelative val) { // Property Generated Setter
      *reinterpret_cast<CameraCutCinematicAction__kCameraRelative*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    std::string getSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    float getInterpDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setInterpDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    bool getAnnouncesSpell() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x114);
    }

    void setAnnouncesSpell(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x114) = val;
    }

};