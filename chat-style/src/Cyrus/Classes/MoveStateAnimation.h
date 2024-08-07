#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/MoveAnimation.h>
#include <Cyrus/Enums/MoveState.h>

class MoveStateAnimation : public PropertyClass {
public:
    MoveState getNMoveState() { // Property Generated Getter
      return *reinterpret_cast<MoveState*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNMoveState(MoveState val) { // Property Generated Setter
      *reinterpret_cast<MoveState*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    MoveAnimation getNMoveAnimation() { // Property Generated Getter
      return *reinterpret_cast<MoveAnimation*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setNMoveAnimation(MoveAnimation val) { // Property Generated Setter
      *reinterpret_cast<MoveAnimation*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    std::string getSAnimationName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setSAnimationName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};