#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ComboItem.h>
#include <Cyrus/Classes/Material.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>
#include <Cyrus/Classes/WindowStyle.h>

class ControlComboBox : public Window {
public:
    Vector<ComboItem> getItems() { // Property Generated Getter
      return *reinterpret_cast<Vector<ComboItem>*>(reinterpret_cast<uintptr_t>(this) + 0x248);
    }

    void setItems(Vector<ComboItem> val) { // Property Generated Setter
      *reinterpret_cast<Vector<ComboItem>*>(reinterpret_cast<uintptr_t>(this) + 0x248) = val;
    }

    int getNSelected() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setNSelected(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    int getNExpandedSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x264);
    }

    void setNExpandedSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x264) = val;
    }

    int getNButtonSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setNButtonSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    SharedPointer<Material> * getPButtonMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x270);
    }

    void setPButtonMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x270) = val;
    }

    SharedPointer<WindowStyle> * getButtonStyle() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<WindowStyle> *>(reinterpret_cast<uintptr_t>(this) + 0x2E0);
    }

    void setButtonStyle(SharedPointer<WindowStyle> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<WindowStyle> **>(reinterpret_cast<uintptr_t>(this) + 0x2E0) = val;
    }

    int ItemCount() { // Function Generated
        using FunctionPointerType = int (*)(ControlComboBox *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x165E3D0);
        return inner(this);
    }

    ComboItem* ItemAt(int a0) { // Function Generated
        using FunctionPointerType = ComboItem* (*)(ControlComboBox *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x165E3C0);
        return inner(this, a0);
    }

    int Selected() { // Function Generated
        using FunctionPointerType = int (*)(ControlComboBox *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x165E460);
        return inner(this);
    }

    std::wstring SelectedText() { // Function Generated
        using FunctionPointerType = std::wstring (*)(ControlComboBox *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x4FCA30);
        return inner(this);
    }

    void SetSelected(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlComboBox *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1659650);
        return inner(this, a0);
    }

    int SetSelectedText(std::wstring a0) { // Function Generated
        using FunctionPointerType = int (*)(ControlComboBox *self, std::wstring a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16596B0);
        return inner(this, a0);
    }

    void Reset() { // Function Generated
        using FunctionPointerType = void (*)(ControlComboBox *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1659DC0);
        return inner(this);
    }

    void Sort() { // Function Generated
        using FunctionPointerType = void (*)(ControlComboBox *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1659E20);
        return inner(this);
    }

    void Collapse() { // Function Generated
        using FunctionPointerType = void (*)(ControlComboBox *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1659E70);
        return inner(this);
    }

    int AddItem(std::wstring a0, unsigned int a1, unsigned __int64 a2) { // Function Generated
        using FunctionPointerType = int (*)(ControlComboBox *self, std::wstring a0, unsigned int a1, unsigned __int64 a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16598A0);
        return inner(this, a0, a1, a2);
    }

    bool DeleteItem(int a0) { // Function Generated
        using FunctionPointerType = bool (*)(ControlComboBox *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16599E0);
        return inner(this, a0);
    }

};