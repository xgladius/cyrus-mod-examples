#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimMoveToLocation : public WindowAnimation {
public:
    Vector3D getTargetLocation() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setTargetLocation(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    Point<int> GetTargetLocation() { // Function Generated
        using FunctionPointerType = Point<int> (*)(WinAnimMoveToLocation *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16877F0);
        return inner(this);
    }

    void SetTargetLocation(int a0, int a1) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimMoveToLocation *self, int a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1687810);
        return inner(this, a0, a1);
    }

};