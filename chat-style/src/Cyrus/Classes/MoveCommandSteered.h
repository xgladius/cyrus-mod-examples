#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MoveController::MoveCommand.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/MoveState.h>

class MoveCommandSteered : public MoveController::MoveCommand {
public:
    Vector3D getVTarget() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setVTarget(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    MoveState getKState() { // Property Generated Getter
      return *reinterpret_cast<MoveState*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setKState(MoveState val) { // Property Generated Setter
      *reinterpret_cast<MoveState*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

};