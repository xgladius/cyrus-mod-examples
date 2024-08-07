#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ControlTileMap__CellInfo : public PropertyClass {
public:
    int getNTileIndex() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNTileIndex(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    float getFCurrentFrame() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setFCurrentFrame(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    bool getBIsFlippedHorizontal() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setBIsFlippedHorizontal(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    bool getBIsFlippedVertical() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x51);
    }

    void setBIsFlippedVertical(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x51) = val;
    }

    unsigned int getNRotation() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setNRotation(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    int GetTileIndex() { // Function Generated
        using FunctionPointerType = int (*)(struct ControlTileMap::CellInfo *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16AAB00);
        return inner(this);
    }

    void SetTileIndex(int a0) { // Function Generated
        using FunctionPointerType = void (*)(struct ControlTileMap::CellInfo *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16AAB50);
        return inner(this, a0);
    }

    float GetCurrentFrame() { // Function Generated
        using FunctionPointerType = float (*)(struct ControlTileMap::CellInfo *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE590);
        return inner(this);
    }

    void SetCurrentFrame(float a0) { // Function Generated
        using FunctionPointerType = void (*)(struct ControlTileMap::CellInfo *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFF00);
        return inner(this, a0);
    }

    bool GetFlipVertical() { // Function Generated
        using FunctionPointerType = bool (*)(struct ControlTileMap::CellInfo *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE5A0);
        return inner(this);
    }

    void SetFlipVertical(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(struct ControlTileMap::CellInfo *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFF30);
        return inner(this, a0);
    }

    bool GetFlipHorizontal() { // Function Generated
        using FunctionPointerType = bool (*)(struct ControlTileMap::CellInfo *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x346EA0);
        return inner(this);
    }

    void SetFlipHorizontal(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(struct ControlTileMap::CellInfo *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFF20);
        return inner(this, a0);
    }

    unsigned int GetRotation() { // Function Generated
        using FunctionPointerType = unsigned int (*)(struct ControlTileMap::CellInfo *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE610);
        return inner(this);
    }

    void SetRotation(unsigned int a0) { // Function Generated
        using FunctionPointerType = void (*)(struct ControlTileMap::CellInfo *self, unsigned int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFF50);
        return inner(this, a0);
    }

};