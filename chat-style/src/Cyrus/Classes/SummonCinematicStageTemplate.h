#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicStageTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/CameraCutCinematicAction__kCameraRelative.h>
#include <Cyrus/Enums/CreateActorCinematicAction__kCreateOrientation.h>

class SummonCinematicStageTemplate : public CinematicStageTemplate {
public:
    std::string getSummon() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setSummon(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    Vector<std::string> getCameras() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setCameras(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    Vector<std::string> getAltcameras() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setAltcameras(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    CameraCutCinematicAction__kCameraRelative getCamRel() { // Property Generated Getter
      return *reinterpret_cast<CameraCutCinematicAction__kCameraRelative*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setCamRel(CameraCutCinematicAction__kCameraRelative val) { // Property Generated Setter
      *reinterpret_cast<CameraCutCinematicAction__kCameraRelative*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    std::string getSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    float getInterpDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setInterpDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    std::string getSummonAnim() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setSummonAnim(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    bool getReturnToIdle() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setReturnToIdle(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    CreateActorCinematicAction__kCreateOrientation getCreateOrientation() { // Property Generated Getter
      return *reinterpret_cast<CreateActorCinematicAction__kCreateOrientation*>(reinterpret_cast<uintptr_t>(this) + 0x13C);
    }

    void setCreateOrientation(CreateActorCinematicAction__kCreateOrientation val) { // Property Generated Setter
      *reinterpret_cast<CreateActorCinematicAction__kCreateOrientation*>(reinterpret_cast<uintptr_t>(this) + 0x13C) = val;
    }

    bool getHidePolymorphFloatyText() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setHidePolymorphFloatyText(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

};