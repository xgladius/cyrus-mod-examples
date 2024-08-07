#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ControlDraw__Line : public PropertyClass {
public:
    Vector<Point<int>> getPointData() { // Property Generated Getter
      return *reinterpret_cast<Vector<Point<int>>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPointData(Vector<Point<int>> val) { // Property Generated Setter
      *reinterpret_cast<Vector<Point<int>>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Color getColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};