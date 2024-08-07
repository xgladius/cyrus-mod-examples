#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimContainer.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimConcurrent : public WinAnimContainer {
public:
    List<SharedPointer<WindowAnimation>> * getFinishedAnimList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<WindowAnimation>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setFinishedAnimList(List<SharedPointer<WindowAnimation>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<WindowAnimation>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};