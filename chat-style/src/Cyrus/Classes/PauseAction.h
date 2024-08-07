#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PathBehaviorTemplate::Action.h>
#include <Cyrus/Classes/PropertyClass.h>

class PauseAction : public PathBehaviorTemplate::Action {
public:
    float getFMinPauseTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setFMinPauseTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    float getFMaxPauseTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setFMaxPauseTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

};