#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlButton.h>
#include <Cyrus/Classes/ControlButtonState.h>
#include <Cyrus/Classes/Material.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlDecalButton : public ControlButton {
public:
    SharedPointer<Material> * getPDecal() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x370);
    }

    void setPDecal(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x370) = val;
    }

    Color getDecalColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x380);
    }

    void setDecalColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x380) = val;
    }

    Rect<int> getDecalOffset() { // Property Generated Getter
      return *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x384);
    }

    void setDecalOffset(Rect<int> val) { // Property Generated Setter
      *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x384) = val;
    }

    SharedPointer<ControlButtonState> * getPGreyedDecalState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x3A8);
    }

    void setPGreyedDecalState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x3A8) = val;
    }

    SharedPointer<ControlButtonState> * getPNormalDecalState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x398);
    }

    void setPNormalDecalState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x398) = val;
    }

    SharedPointer<ControlButtonState> * getPHighlightedDecalState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x3B8);
    }

    void setPHighlightedDecalState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x3B8) = val;
    }

    SharedPointer<ControlButtonState> * getPSelectedDecalState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x3C8);
    }

    void setPSelectedDecalState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x3C8) = val;
    }

    SharedPointer<ControlButtonState> * getPDepressedDecalState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x3D8);
    }

    void setPDepressedDecalState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x3D8) = val;
    }

};