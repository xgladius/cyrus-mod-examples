#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>

class CameraFadeCinematicAction : public CinematicAction {
public:
    float getFDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setFDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    bool getBCycle() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setBCycle(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    bool getBFadeIn() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x55);
    }

    void setBFadeIn(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x55) = val;
    }

};