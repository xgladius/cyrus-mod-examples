#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DoodleDoug.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimMoveToLocation.h>
#include <Cyrus/Classes/WinAnimMoveToLocationSpeed.h>
#include <Cyrus/Classes/WindowAnimation.h>

class DdWinAnimMoveMob : public WinAnimMoveToLocationSpeed {
public:
    DoodleDoug__DdDirection getFacing() { // Property Generated Getter
      return *reinterpret_cast<DoodleDoug__DdDirection*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setFacing(DoodleDoug__DdDirection val) { // Property Generated Setter
      *reinterpret_cast<DoodleDoug__DdDirection*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    DoodleDoug__DdDirection getCameFrom() { // Property Generated Getter
      return *reinterpret_cast<DoodleDoug__DdDirection*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setCameFrom(DoodleDoug__DdDirection val) { // Property Generated Setter
      *reinterpret_cast<DoodleDoug__DdDirection*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    Point<int> getNextWaypoint() { // Property Generated Getter
      return *reinterpret_cast<Point<int>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setNextWaypoint(Point<int> val) { // Property Generated Setter
      *reinterpret_cast<Point<int>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    DoodleDoug* * getMyBoard() { // Property Generated Getter
      return reinterpret_cast<DoodleDoug* *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setMyBoard(DoodleDoug* * val) { // Property Generated Setter
      *reinterpret_cast<DoodleDoug* **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    void InitializeAnimation(int a0, float a1, DoodleDoug a2) { // Function Generated
        using FunctionPointerType = void (*)(DdWinAnimMoveMob *self, int a0, float a1, DoodleDoug a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF42610);
        return inner(this, a0, a1, a2);
    }

};