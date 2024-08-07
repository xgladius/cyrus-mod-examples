#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/Material.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TextComponent.h>

class ControlTileMap__Tile : public PropertyClass {
public:
    Color getColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<Material> * getPMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    Rect<float> getUV() { // Property Generated Getter
      return *reinterpret_cast<Rect<float>*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setUV(Rect<float> val) { // Property Generated Setter
      *reinterpret_cast<Rect<float>*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    int getNNextTile() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setNNextTile(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    TextComponent getTextComponent() { // Property Generated Getter
      return *reinterpret_cast<TextComponent*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setTextComponent(TextComponent val) { // Property Generated Setter
      *reinterpret_cast<TextComponent*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    int AddText(int a0, int a1, std::wstring a2) { // Function Generated
        using FunctionPointerType = int (*)(struct ControlTileMap::Tile *self, int a0, int a1, std::wstring a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BDBF0);
        return inner(this, a0, a1, a2);
    }

    void ClearText() { // Function Generated
        using FunctionPointerType = void (*)(struct ControlTileMap::Tile *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BDD20);
        return inner(this);
    }

    void SetColor(Color a0) { // Function Generated
        using FunctionPointerType = void (*)(struct ControlTileMap::Tile *self, Color a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFEF0);
        return inner(this, a0);
    }

    Color GetColor() { // Function Generated
        using FunctionPointerType = Color (*)(struct ControlTileMap::Tile *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE580);
        return inner(this);
    }

    void SetMaterial(SharedPointer<Material> a0) { // Function Generated
        using FunctionPointerType = void (*)(struct ControlTileMap::Tile *self, SharedPointer<Material> a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFF40);
        return inner(this, a0);
    }

    Material* GetMaterial() { // Function Generated
        using FunctionPointerType = Material* (*)(struct ControlTileMap::Tile *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE5B0);
        return inner(this);
    }

    void SetUV(Rect<float> a0) { // Function Generated
        using FunctionPointerType = void (*)(struct ControlTileMap::Tile *self, Rect<float> a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFFD0);
        return inner(this, a0);
    }

    Rect<float> GetUV() { // Function Generated
        using FunctionPointerType = Rect<float> (*)(struct ControlTileMap::Tile *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE780);
        return inner(this);
    }

    void SetTextComponent(TextComponent a0) { // Function Generated
        using FunctionPointerType = void (*)(struct ControlTileMap::Tile *self, TextComponent a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFF60);
        return inner(this, a0);
    }

    TextComponent GetTextComponent() { // Function Generated
        using FunctionPointerType = TextComponent (*)(struct ControlTileMap::Tile *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE620);
        return inner(this);
    }

};