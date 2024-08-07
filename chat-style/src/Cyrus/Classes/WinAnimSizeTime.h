#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimSize.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimSizeTime : public WinAnimSize {
public:
    float getFTimeTotal() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setFTimeTotal(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    float getFTimeRemaining() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setFTimeRemaining(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    Vector3D getCurrentSize() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setCurrentSize(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    void SetTime(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimSizeTime *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16C81E0);
        return inner(this, a0);
    }

    float GetTime() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimSizeTime *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC41F70);
        return inner(this);
    }

    float GetTimeRemaining() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimSizeTime *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1676A30);
        return inner(this);
    }

};