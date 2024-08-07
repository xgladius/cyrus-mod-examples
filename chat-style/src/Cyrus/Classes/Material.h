#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Texture.h>
#include <Cyrus/Enums/Material__Blending.h>
#include <Cyrus/Enums/Material__Repeating.h>

class Material : public PropertyClass {
public:
    std::wstring getSMaterialName() { // Property Generated Getter
      return *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSMaterialName(std::wstring val) { // Property Generated Setter
      *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Material__Blending getBlending() { // Property Generated Getter
      return *reinterpret_cast<Material__Blending*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setBlending(Material__Blending val) { // Property Generated Setter
      *reinterpret_cast<Material__Blending*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    Material__Repeating getERepeat() { // Property Generated Getter
      return *reinterpret_cast<Material__Repeating*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setERepeat(Material__Repeating val) { // Property Generated Setter
      *reinterpret_cast<Material__Repeating*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    SharedPointer<Texture> * getPDiffuseMap() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Texture> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setPDiffuseMap(SharedPointer<Texture> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Texture> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    SharedPointer<Texture> * getPAlphaMask() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Texture> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setPAlphaMask(SharedPointer<Texture> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Texture> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    float getFLastAlpha() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setFLastAlpha(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    Color getDiffuse() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x9C);
    }

    void setDiffuse(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x9C) = val;
    }

    Color getAmbient() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setAmbient(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    Color getSpecular() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setSpecular(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    float getFSpecularPower() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xAC);
    }

    void setFSpecularPower(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xAC) = val;
    }

    Vector<Rect<float>> getFrames() { // Property Generated Getter
      return *reinterpret_cast<Vector<Rect<float>>*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setFrames(Vector<Rect<float>> val) { // Property Generated Setter
      *reinterpret_cast<Vector<Rect<float>>*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    int getNCurrentFrame() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setNCurrentFrame(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    float getFAnimRate() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setFAnimRate(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

    int getNAnimBegin() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC);
    }

    void setNAnimBegin(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC) = val;
    }

    int getNAnimEnd() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setNAnimEnd(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    float getFAnimTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setFAnimTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    float getFMaterialScaleX() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB4);
    }

    void setFMaterialScaleX(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB4) = val;
    }

    float getFMaterialScaleY() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setFMaterialScaleY(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    bool CalculateMaterialUVs() { // Function Generated
        using FunctionPointerType = bool (*)(Material *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1639600);
        return inner(this);
    }

    void SetUVCoords(Rect<float> a0, int a1) { // Function Generated
        using FunctionPointerType = void (*)(Material *self, Rect<float> a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163CA90);
        return inner(this, a0, a1);
    }

    std::wstring GetMaterialName() { // Function Generated
        using FunctionPointerType = std::wstring (*)(Material *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x10F4AF0);
        return inner(this);
    }

    void SetMaterialName(std::wstring a0) { // Function Generated
        using FunctionPointerType = void (*)(Material *self, std::wstring a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163CA40);
        return inner(this, a0);
    }

    Material__Blending GetBlending() { // Function Generated
        using FunctionPointerType = Material__Blending (*)(Material *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163BBE0);
        return inner(this);
    }

    void SetBlending(Material__Blending a0) { // Function Generated
        using FunctionPointerType = void (*)(Material *self, Material__Blending a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163CA20);
        return inner(this, a0);
    }

    Material__Repeating GetMaterialRepeat() { // Function Generated
        using FunctionPointerType = Material__Repeating (*)(Material *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163BC00);
        return inner(this);
    }

    void SetMaterialRepeat(Material__Repeating a0) { // Function Generated
        using FunctionPointerType = void (*)(Material *self, Material__Repeating a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163CA70);
        return inner(this, a0);
    }

    SharedPointer<Texture> GetDiffuseTexture() { // Function Generated
        using FunctionPointerType = SharedPointer<Texture> (*)(Material *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x10F4AD0);
        return inner(this);
    }

    bool SetDiffuseTexture(Texture a0) { // Function Generated
        using FunctionPointerType = bool (*)(Material *self, Texture a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x2A9740);
        return inner(this, a0);
    }

    SharedPointer<Texture> GetAlphaMaskTexture() { // Function Generated
        using FunctionPointerType = SharedPointer<Texture> (*)(Material *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163B830);
        return inner(this);
    }

    bool SetAlphaMaskTexture(Texture a0) { // Function Generated
        using FunctionPointerType = bool (*)(Material *self, Texture a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x913870);
        return inner(this, a0);
    }

    int GetCurrentFrame() { // Function Generated
        using FunctionPointerType = int (*)(Material *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163BBF0);
        return inner(this);
    }

    void SetCurrentFrame(int a0) { // Function Generated
        using FunctionPointerType = void (*)(Material *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163CA30);
        return inner(this, a0);
    }

    float GetRate() { // Function Generated
        using FunctionPointerType = float (*)(Material *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163BC10);
        return inner(this);
    }

    void SetRate(float a0) { // Function Generated
        using FunctionPointerType = void (*)(Material *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163CA80);
        return inner(this, a0);
    }

    int GetAnimBegin() { // Function Generated
        using FunctionPointerType = int (*)(Material *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163B860);
        return inner(this);
    }

    void SetAnimBegin(int a0) { // Function Generated
        using FunctionPointerType = void (*)(Material *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163C9D0);
        return inner(this, a0);
    }

    int GetAnimEnd() { // Function Generated
        using FunctionPointerType = int (*)(Material *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163B870);
        return inner(this);
    }

    void SetAnimEnd(int a0) { // Function Generated
        using FunctionPointerType = void (*)(Material *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163C9F0);
        return inner(this, a0);
    }

    float GetAnimTime() { // Function Generated
        using FunctionPointerType = float (*)(Material *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163B880);
        return inner(this);
    }

    void SetAnimTime(float a0) { // Function Generated
        using FunctionPointerType = void (*)(Material *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163CA10);
        return inner(this, a0);
    }

};