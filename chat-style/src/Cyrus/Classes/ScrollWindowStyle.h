#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlButton.h>
#include <Cyrus/Classes/Material.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WindowStyle.h>

class ScrollWindowStyle : public WindowStyle {
public:
    SharedPointer<Material> * getPVMiddle() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setPVMiddle(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    SharedPointer<Material> * getPVSliderTop() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setPVSliderTop(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    SharedPointer<Material> * getPVSliderMiddle() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setPVSliderMiddle(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    SharedPointer<Material> * getPVSliderBottom() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setPVSliderBottom(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    SharedPointer<ControlButton> * getPVUpButton() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButton> *>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setPVUpButton(SharedPointer<ControlButton> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButton> **>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    SharedPointer<ControlButton> * getPVDownButton() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButton> *>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setPVDownButton(SharedPointer<ControlButton> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButton> **>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    SharedPointer<Material> * getPHLeftArrow() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setPHLeftArrow(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    SharedPointer<Material> * getPHRightArrow() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setPHRightArrow(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    SharedPointer<Material> * getPHMiddle() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setPHMiddle(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

    SharedPointer<Material> * getPHSliderLeft() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setPHSliderLeft(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    SharedPointer<Material> * getPHSliderMiddle() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setPHSliderMiddle(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    SharedPointer<Material> * getPHSliderRight() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setPHSliderRight(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

    int getNScrollButtonDelta() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setNScrollButtonDelta(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

};