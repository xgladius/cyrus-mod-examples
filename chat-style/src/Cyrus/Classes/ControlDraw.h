#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlDraw::GesturePoint.h>
#include <Cyrus/Classes/ControlDraw::Line.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlDraw : public Window {
public:
    Vector<ControlDraw__GesturePoint> getMarkers() { // Property Generated Getter
      return *reinterpret_cast<Vector<ControlDraw__GesturePoint>*>(reinterpret_cast<uintptr_t>(this) + 0x250);
    }

    void setMarkers(Vector<ControlDraw__GesturePoint> val) { // Property Generated Setter
      *reinterpret_cast<Vector<ControlDraw__GesturePoint>*>(reinterpret_cast<uintptr_t>(this) + 0x250) = val;
    }

    Vector<ControlDraw__GesturePoint> getRefPoints() { // Property Generated Getter
      return *reinterpret_cast<Vector<ControlDraw__GesturePoint>*>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setRefPoints(Vector<ControlDraw__GesturePoint> val) { // Property Generated Setter
      *reinterpret_cast<Vector<ControlDraw__GesturePoint>*>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    Vector<ControlDraw__Line> getLineList() { // Property Generated Getter
      return *reinterpret_cast<Vector<ControlDraw__Line>*>(reinterpret_cast<uintptr_t>(this) + 0x298);
    }

    void setLineList(Vector<ControlDraw__Line> val) { // Property Generated Setter
      *reinterpret_cast<Vector<ControlDraw__Line>*>(reinterpret_cast<uintptr_t>(this) + 0x298) = val;
    }

};