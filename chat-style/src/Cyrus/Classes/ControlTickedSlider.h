#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlBar.h>
#include <Cyrus/Classes/ControlSlider.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlTickedSlider : public ControlSlider {
public:
    int getNNumberOfTicks() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2C8);
    }

    void setNNumberOfTicks(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2C8) = val;
    }

    void SetNumberOfTicks(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlTickedSlider *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x23209B0);
        return inner(this, a0);
    }

    int GetNumberOfTicks() { // Function Generated
        using FunctionPointerType = int (*)(ControlTickedSlider *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x2320870);
        return inner(this);
    }

    int GetCurrentTick() { // Function Generated
        using FunctionPointerType = int (*)(ControlTickedSlider *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x231FA90);
        return inner(this);
    }

    void SetCurrentTick(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlTickedSlider *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x231FB00);
        return inner(this, a0);
    }

    int GetNearestTickToPosition(float a0) { // Function Generated
        using FunctionPointerType = int (*)(ControlTickedSlider *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x231FB50);
        return inner(this, a0);
    }

    float GetTickPosition(int a0) { // Function Generated
        using FunctionPointerType = float (*)(ControlTickedSlider *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x231FBC0);
        return inner(this, a0);
    }

};