#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/MoveBehavior::Controller.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/MoveState.h>

class MoveBehavior : public BehaviorInstance {
public:
    unsigned int getNFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setNFlags(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    MoveState getNMoveState() { // Property Generated Getter
      return *reinterpret_cast<MoveState*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setNMoveState(MoveState val) { // Property Generated Setter
      *reinterpret_cast<MoveState*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    MoveBehavior::Controller* GetActiveController() { // Function Generated
        using FunctionPointerType = MoveBehavior::Controller* (*)(MoveBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1495FB0);
        return inner(this);
    }

    bool SetActiveController(MoveBehavior::Controller a0) { // Function Generated
        using FunctionPointerType = bool (*)(MoveBehavior *self, MoveBehavior::Controller a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1490F70);
        return inner(this, a0);
    }

};