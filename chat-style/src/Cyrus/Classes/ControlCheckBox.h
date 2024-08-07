#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlButton.h>
#include <Cyrus/Classes/ControlButtonState.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlCheckBox : public ControlButton {
public:
    int getNGroupID() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x370);
    }

    void setNGroupID(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x370) = val;
    }

    bool getBChecked() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x374);
    }

    void setBChecked(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x374) = val;
    }

    SharedPointer<ControlButtonState> * getPCheckedState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x378);
    }

    void setPCheckedState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x378) = val;
    }

    SharedPointer<ControlButtonState> * getPCheckedGreyedState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x388);
    }

    void setPCheckedGreyedState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x388) = val;
    }

    SharedPointer<ControlButtonState> * getPCheckedHighlightedState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x398);
    }

    void setPCheckedHighlightedState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x398) = val;
    }

    SharedPointer<ControlButtonState> * getPCheckedDepressedState() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlButtonState> *>(reinterpret_cast<uintptr_t>(this) + 0x3A8);
    }

    void setPCheckedDepressedState(SharedPointer<ControlButtonState> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlButtonState> **>(reinterpret_cast<uintptr_t>(this) + 0x3A8) = val;
    }

    void SetChecked(bool a0, bool a1) { // Function Generated
        using FunctionPointerType = void (*)(ControlCheckBox *self, bool a0, bool a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16260F8);
        return inner(this, a0, a1);
    }

    bool IsChecked() { // Function Generated
        using FunctionPointerType = bool (*)(ControlCheckBox *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16262A0);
        return inner(this);
    }

};