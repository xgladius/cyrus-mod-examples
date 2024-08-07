#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ControlDraw__GesturePoint : public PropertyClass {
public:
    Point<int> getPoint() { // Property Generated Getter
      return *reinterpret_cast<Point<int>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPoint(Point<int> val) { // Property Generated Setter
      *reinterpret_cast<Point<int>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Color getColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};