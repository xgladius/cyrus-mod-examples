#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MoveController::MoveCommand.h>
#include <Cyrus/Classes/PropertyClass.h>

class MoveCommandRoll : public MoveController::MoveCommand {
public:
    float getFRoll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setFRoll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};