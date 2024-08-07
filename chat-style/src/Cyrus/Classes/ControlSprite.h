#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/Material.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TextComponent.h>
#include <Cyrus/Classes/Window.h>

class ControlSprite : public Window {
public:
    SharedPointer<Material> * getPMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x250);
    }

    void setPMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x250) = val;
    }

    float getFRotation() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setFRotation(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    Color getColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x248);
    }

    void setColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x248) = val;
    }

    Color getTextColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x264);
    }

    void setTextColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x264) = val;
    }

    TextComponent getTextComponent() { // Property Generated Getter
      return *reinterpret_cast<TextComponent*>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setTextComponent(TextComponent val) { // Property Generated Setter
      *reinterpret_cast<TextComponent*>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    bool SetMaterialByName(std::string a0) { // Function Generated
        using FunctionPointerType = bool (*)(ControlSprite *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E71F0);
        return inner(this, a0);
    }

    bool SetDiffuseTextureByName(std::string a0) { // Function Generated
        using FunctionPointerType = bool (*)(ControlSprite *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E77B0);
        return inner(this, a0);
    }

    void SetRotation(float a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlSprite *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E79A0);
        return inner(this, a0);
    }

    float GetRotation() { // Function Generated
        using FunctionPointerType = float (*)(ControlSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E79B0);
        return inner(this);
    }

    int AddText(int a0, int a1, std::wstring a2) { // Function Generated
        using FunctionPointerType = int (*)(ControlSprite *self, int a0, int a1, std::wstring a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E7A70);
        return inner(this, a0, a1, a2);
    }

    void ClearText() { // Function Generated
        using FunctionPointerType = void (*)(ControlSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E93E0);
        return inner(this);
    }

    void SetTextColor(Color a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlSprite *self, Color a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15EA290);
        return inner(this, a0);
    }

    void FlipHorizontal(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlSprite *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E79C0);
        return inner(this, a0);
    }

    void FlipVertical(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlSprite *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E79D0);
        return inner(this, a0);
    }

    bool GetFlippedHorizontal() { // Function Generated
        using FunctionPointerType = bool (*)(ControlSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E79E0);
        return inner(this);
    }

    bool GetFlippedVertical() { // Function Generated
        using FunctionPointerType = bool (*)(ControlSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E79F0);
        return inner(this);
    }

    void SetMaterial(Material a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlSprite *self, Material a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x3B1FF0);
        return inner(this, a0);
    }

    Material* GetMaterial() { // Function Generated
        using FunctionPointerType = Material* (*)(ControlSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E97A0);
        return inner(this);
    }

    Color GetColor() { // Function Generated
        using FunctionPointerType = Color (*)(ControlSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E9790);
        return inner(this);
    }

    void SetColor(Color a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlSprite *self, Color a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15EA280);
        return inner(this, a0);
    }

    TextComponent GetTextComponent() { // Function Generated
        using FunctionPointerType = TextComponent (*)(ControlSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E7AF0);
        return inner(this);
    }

    void SetTextComponent(TextComponent a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlSprite *self, TextComponent a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E7A90);
        return inner(this, a0);
    }

};