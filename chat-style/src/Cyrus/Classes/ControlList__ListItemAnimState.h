#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlList::ListItemState.h>
#include <Cyrus/Classes/PropertyClass.h>

class ControlList__ListItemAnimState : public ControlList::ListItemState {
public:
    int getNAnimBeginFrame() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setNAnimBeginFrame(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    int getNAnimEndFrame() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setNAnimEndFrame(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    float getFAnimRate() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setFAnimRate(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    bool getBAnimLoop() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setBAnimLoop(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

};