#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MoveController::MoveCommand.h>
#include <Cyrus/Classes/PropertyClass.h>

class MoveCommandTime : public MoveController::MoveCommand {
public:
    Vector3D getVTarget() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setVTarget(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    float getFTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setFTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

};