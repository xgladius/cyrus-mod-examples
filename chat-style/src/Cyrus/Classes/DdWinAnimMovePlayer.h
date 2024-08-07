#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DoodleDoug.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WindowAnimation.h>

class DdWinAnimMovePlayer : public WindowAnimation {
public:
    DoodleDoug__DdDirection getFacing() { // Property Generated Getter
      return *reinterpret_cast<DoodleDoug__DdDirection*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setFacing(DoodleDoug__DdDirection val) { // Property Generated Setter
      *reinterpret_cast<DoodleDoug__DdDirection*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    DoodleDoug__DdDirection getDirection() { // Property Generated Getter
      return *reinterpret_cast<DoodleDoug__DdDirection*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setDirection(DoodleDoug__DdDirection val) { // Property Generated Setter
      *reinterpret_cast<DoodleDoug__DdDirection*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    float getFSpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setFSpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    Vector3D getCurrentLocation() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setCurrentLocation(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    Vector3D getTargetLocation() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setTargetLocation(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    DoodleDoug* * getMyBoard() { // Property Generated Getter
      return reinterpret_cast<DoodleDoug* *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setMyBoard(DoodleDoug* * val) { // Property Generated Setter
      *reinterpret_cast<DoodleDoug* **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    void InitializeAnimation(int a0, int a1, float a2, DoodleDoug a3) { // Function Generated
        using FunctionPointerType = void (*)(DdWinAnimMovePlayer *self, int a0, int a1, float a2, DoodleDoug a3);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF43C20);
        return inner(this, a0, a1, a2, a3);
    }

};