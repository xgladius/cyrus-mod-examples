#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimContainer.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimContainerBounded : public WinAnimContainer {
public:
    Rect<int> getBoundary() { // Property Generated Getter
      return *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setBoundary(Rect<int> val) { // Property Generated Setter
      *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};