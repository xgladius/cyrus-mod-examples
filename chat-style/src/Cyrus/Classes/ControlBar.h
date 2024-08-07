#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/Material.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlBar : public Window {
public:
    float getFPosition() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x248);
    }

    void setFPosition(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x248) = val;
    }

    Color getBaseColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x24C);
    }

    void setBaseColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x24C) = val;
    }

    Color getBarColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x250);
    }

    void setBarColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x250) = val;
    }

    bool getBDisplayVertical() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x254);
    }

    void setBDisplayVertical(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x254) = val;
    }

    SharedPointer<Material> * getPBarMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x258);
    }

    void setPBarMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x258) = val;
    }

    SharedPointer<Material> * getPTopLeftMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setPTopLeftMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    SharedPointer<Material> * getPCenterMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x278);
    }

    void setPCenterMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x278) = val;
    }

    SharedPointer<Material> * getPBottomRightMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x288);
    }

    void setPBottomRightMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x288) = val;
    }

    void SetPosition(float a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlBar *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x558C1C);
        return inner(this, a0);
    }

    void SetBaseColor(Color a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlBar *self, Color a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16319D0);
        return inner(this, a0);
    }

    void SetBarColor(Color a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlBar *self, Color a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16319C0);
        return inner(this, a0);
    }

    void SetDisplayVertical(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlBar *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16319E0);
        return inner(this, a0);
    }

    void SetBarMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlBar *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162C480);
        return inner(this, a0);
    }

    void SetBarMaterialByName(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlBar *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16305B0);
        return inner(this, a0);
    }

    void SetTopLeftMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlBar *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162C560);
        return inner(this, a0);
    }

    void SetCenterMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlBar *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162BF40);
        return inner(this, a0);
    }

    void SetBottomRightMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlBar *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x162C020);
        return inner(this, a0);
    }

};