#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/Material.h>
#include <Cyrus/Classes/PropertyClass.h>

class TileMaterial : public Material {
public:
    int getTilesX() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setTilesX(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    int getTilesY() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF4);
    }

    void setTilesY(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF4) = val;
    }

    bool CalculateFrames() { // Function Generated
        using FunctionPointerType = bool (*)(TileMaterial *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x11E75E4);
        return inner(this);
    }

    int GetTilesX() { // Function Generated
        using FunctionPointerType = int (*)(TileMaterial *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1673640);
        return inner(this);
    }

    void SetTilesX(int a0) { // Function Generated
        using FunctionPointerType = void (*)(TileMaterial *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16737F0);
        return inner(this, a0);
    }

    int GetTilesY() { // Function Generated
        using FunctionPointerType = int (*)(TileMaterial *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1673650);
        return inner(this);
    }

    void SetTilesY(int a0) { // Function Generated
        using FunctionPointerType = void (*)(TileMaterial *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1673800);
        return inner(this, a0);
    }

};