#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimSize.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimSizeSpeed : public WinAnimSize {
public:
    float getFSpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setFSpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    Vector3D getCurrentSize() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setCurrentSize(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    void SetSpeed(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimSizeSpeed *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16C7BC0);
        return inner(this, a0);
    }

    float GetSpeed() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimSizeSpeed *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC41F70);
        return inner(this);
    }

};