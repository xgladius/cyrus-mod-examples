#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MoveBehavior::Controller.h>
#include <Cyrus/Classes/MoveController::MoveCommand.h>
#include <Cyrus/Classes/PropertyClass.h>

class MoveController : public MoveBehavior::Controller {
public:
    bool getBPaused() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setBPaused(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    SharedPointer<MoveController__MoveCommand> * getSpCommand() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MoveController__MoveCommand> *>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setSpCommand(SharedPointer<MoveController__MoveCommand> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MoveController__MoveCommand> **>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    List<SharedPointer<MoveController__MoveCommand>> * getQueue() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MoveController__MoveCommand>> *>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setQueue(List<SharedPointer<MoveController__MoveCommand>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MoveController__MoveCommand>> **>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    int MoveCount() { // Function Generated
        using FunctionPointerType = int (*)(MoveController *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x149A0B0);
        return inner(this);
    }

    MoveController::MoveCommand* GetActiveCommand() { // Function Generated
        using FunctionPointerType = MoveController::MoveCommand* (*)(MoveController *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1499560);
        return inner(this);
    }

    bool IsPaused() { // Function Generated
        using FunctionPointerType = bool (*)(MoveController *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x149A0A0);
        return inner(this);
    }

    void SetPID(unsigned int a0) { // Function Generated
        using FunctionPointerType = void (*)(MoveController *self, unsigned int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1497820);
        return inner(this, a0);
    }

    void SetPaused(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(MoveController *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14973F0);
        return inner(this, a0);
    }

    void PushMoveCommand(MoveController::MoveCommand a0) { // Function Generated
        using FunctionPointerType = void (*)(MoveController *self, MoveController::MoveCommand a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1497400);
        return inner(this, a0);
    }

    void ClearAllMoveCommands() { // Function Generated
        using FunctionPointerType = void (*)(MoveController *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14975B0);
        return inner(this);
    }

    bool NextMoveCommand() { // Function Generated
        using FunctionPointerType = bool (*)(MoveController *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1497630);
        return inner(this);
    }

};