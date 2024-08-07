#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlButton.h>
#include <Cyrus/Classes/ControlButtonState.h>
#include <Cyrus/Classes/ControlCheckBox.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class InventoryPageWindow__InventoryItem : public ControlCheckBox {
public:
    SharedPointer<ControlButtonState> * getPEquipNormalState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x3D0);
    }

    void setPEquipNormalState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x3D0) = val;
    }

    SharedPointer<ControlButtonState> * getPEquipPressState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x3E0);
    }

    void setPEquipPressState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x3E0) = val;
    }

    SharedPointer<ControlButtonState> * getPEquipHighlightState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x3F0);
    }

    void setPEquipHighlightState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x3F0) = val;
    }

    SharedPointer<ControlButtonState> * getPEquipCheckState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x400);
    }

    void setPEquipCheckState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x400) = val;
    }

    SharedPointer<ControlButtonState> * getPEquipCheckPressState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x410);
    }

    void setPEquipCheckPressState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x410) = val;
    }

    SharedPointer<ControlButtonState> * getPEquipCheckHighlightState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x420);
    }

    void setPEquipCheckHighlightState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x420) = val;
    }

};