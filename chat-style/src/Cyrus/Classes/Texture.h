#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class Texture : public PropertyClass {
public:
    std::string getSFilename() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setSFilename(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    bool getBAlphaChannel() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x89);
    }

    void setBAlphaChannel(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x89) = val;
    }

    bool getBDoubleSided() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8A);
    }

    void setBDoubleSided(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8A) = val;
    }

    bool getBMipMap() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8B);
    }

    void setBMipMap(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8B) = val;
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetFileName() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(Texture *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1316610);
        return inner(this);
    }

    void SetFileName(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(Texture *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1346444);
        return inner(this, a0);
    }

};