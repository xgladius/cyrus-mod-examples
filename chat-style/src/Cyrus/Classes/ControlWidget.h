#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/Material.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WidgetBackground.h>
#include <Cyrus/Classes/Window.h>

class ControlWidget : public Window {
public:
    SharedPointer<WidgetBackground> * getPWidgetBackground() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<WidgetBackground> *>(reinterpret_cast<uintptr_t>(this) + 0x248);
    }

    void setPWidgetBackground(SharedPointer<WidgetBackground> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<WidgetBackground> **>(reinterpret_cast<uintptr_t>(this) + 0x248) = val;
    }

    SharedPointer<Material> * getPTopLeftCornerMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x258);
    }

    void setPTopLeftCornerMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x258) = val;
    }

    SharedPointer<Material> * getPTopRightCornerMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setPTopRightCornerMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    SharedPointer<Material> * getPBottomLeftCornerMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x278);
    }

    void setPBottomLeftCornerMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x278) = val;
    }

    SharedPointer<Material> * getPBottomRightCornerMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x288);
    }

    void setPBottomRightCornerMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x288) = val;
    }

    SharedPointer<Material> * getPBottomEdgeMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x298);
    }

    void setPBottomEdgeMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x298) = val;
    }

    SharedPointer<Material> * getPTopEdgeMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x2A8);
    }

    void setPTopEdgeMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x2A8) = val;
    }

    SharedPointer<Material> * getPLeftEdgeMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x2B8);
    }

    void setPLeftEdgeMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x2B8) = val;
    }

    SharedPointer<Material> * getPRightEdgeMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x2C8);
    }

    void setPRightEdgeMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x2C8) = val;
    }

    SharedPointer<Material> * getPCenterMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x2D8);
    }

    void setPCenterMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x2D8) = val;
    }

    Size<int> getMaximumSize() { // Property Generated Getter
      return *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2E8);
    }

    void setMaximumSize(Size<int> val) { // Property Generated Setter
      *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2E8) = val;
    }

    Size<int> getMinimumSize() { // Property Generated Getter
      return *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2F0);
    }

    void setMinimumSize(Size<int> val) { // Property Generated Setter
      *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2F0) = val;
    }

    void SetTopLeftCornerMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlWidget *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162C480);
        return inner(this, a0);
    }

    void SetTopRightCornerMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlWidget *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162C560);
        return inner(this, a0);
    }

    void SetBottomLeftCornerMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlWidget *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162BF40);
        return inner(this, a0);
    }

    void SetBottomRightCornerMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlWidget *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162C020);
        return inner(this, a0);
    }

    void SetBottomEdgeMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlWidget *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162BE60);
        return inner(this, a0);
    }

    void SetTopEdgeMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlWidget *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162C3A0);
        return inner(this, a0);
    }

    void SetLeftEdgeMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlWidget *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162C1E0);
        return inner(this, a0);
    }

    void SetRightEdgeMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlWidget *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162C2C0);
        return inner(this, a0);
    }

    void SetCenterMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlWidget *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162C100);
        return inner(this, a0);
    }

};