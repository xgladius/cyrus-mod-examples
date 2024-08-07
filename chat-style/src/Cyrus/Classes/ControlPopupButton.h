#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlButton.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlPopupButton : public ControlButton {
public:
    bool getBUp() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x370);
    }

    void setBUp(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x370) = val;
    }

    float GetPopupDelay() { // Function Generated
        using FunctionPointerType = float (*)(ControlPopupButton *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1687480);
        return inner(this);
    }

    void SetPopupDelay(float a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlPopupButton *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16874B0);
        return inner(this, a0);
    }

    float GetPopdownDelay() { // Function Generated
        using FunctionPointerType = float (*)(ControlPopupButton *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1687470);
        return inner(this);
    }

    void SetPopdownDelay(float a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlPopupButton *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16874A0);
        return inner(this, a0);
    }

};