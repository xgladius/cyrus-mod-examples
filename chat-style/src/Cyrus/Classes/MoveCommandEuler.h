#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MoveController::MoveCommand.h>
#include <Cyrus/Classes/PropertyClass.h>

class MoveCommandEuler : public MoveController::MoveCommand {
public:
    Euler getOrientation() { // Property Generated Getter
      return *reinterpret_cast<Euler*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setOrientation(Euler val) { // Property Generated Setter
      *reinterpret_cast<Euler*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};