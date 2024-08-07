#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/Font.h>
#include <Cyrus/Classes/PropertyClass.h>

class FontGlyphis : public Font {
public:
    std::string getSFilename() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setSFilename(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    float getFScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setFScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    int getNKerningAdjust() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setNKerningAdjust(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    void SetFileName(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(FontGlyphis *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163FAD0);
        return inner(this, a0);
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetFileName() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(FontGlyphis *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15FBCB0);
        return inner(this);
    }

    void SetScaling(float a0) { // Function Generated
        using FunctionPointerType = void (*)(FontGlyphis *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163F844);
        return inner(this, a0);
    }

    float GetScaling() { // Function Generated
        using FunctionPointerType = float (*)(FontGlyphis *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163F838);
        return inner(this);
    }

};