#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/CameraCutCinematicAction__kCameraRelative.h>

class CameraCutCinematicAction : public CinematicAction {
public:
    Vector<std::string> getCameras() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setCameras(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    Vector<std::string> getAltcameras() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setAltcameras(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getInitialCameraName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setInitialCameraName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    CameraCutCinematicAction__kCameraRelative getCamRel() { // Property Generated Getter
      return *reinterpret_cast<CameraCutCinematicAction__kCameraRelative*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setCamRel(CameraCutCinematicAction__kCameraRelative val) { // Property Generated Setter
      *reinterpret_cast<CameraCutCinematicAction__kCameraRelative*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    float getInterpolationDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setInterpolationDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    float getReleaseInterpolationDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setReleaseInterpolationDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

    bool getBUseOrientationOverride() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xBC);
    }

    void setBUseOrientationOverride(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xBC) = val;
    }

    Vector3D getOverrideOrientation() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setOverrideOrientation(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    bool getBUseLocationOverride() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xAC);
    }

    void setBUseLocationOverride(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xAC) = val;
    }

    Vector3D getOverrideLocation() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setOverrideLocation(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    std::string getNamedActor() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setNamedActor(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    float getCamScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setCamScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

};