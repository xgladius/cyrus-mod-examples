#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlBar.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlSlider : public ControlBar {
public:
    float getFMin() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2BC);
    }

    void setFMin(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2BC) = val;
    }

    float getFMax() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2C0);
    }

    void setFMax(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2C0) = val;
    }

    int getNTabWidth() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2C4);
    }

    void setNTabWidth(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2C4) = val;
    }

    float GetValue() { // Function Generated
        using FunctionPointerType = float (*)(ControlSlider *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1660320);
        return inner(this);
    }

    void SetValue(float a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlSlider *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x647700);
        return inner(this, a0);
    }

    void SetMinMax(float a0, float a1) { // Function Generated
        using FunctionPointerType = void (*)(ControlSlider *self, float a0, float a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16603E0);
        return inner(this, a0, a1);
    }

};