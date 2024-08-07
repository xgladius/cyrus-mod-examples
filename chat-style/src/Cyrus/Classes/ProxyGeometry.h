#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GeomParams.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/ProxyType.h>

class ProxyGeometry : public PropertyClass {
public:
    std::string getSName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setSName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    Matrix3x3 getBaseOrientation() { // Property Generated Getter
      return *reinterpret_cast<Matrix3x3*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setBaseOrientation(Matrix3x3 val) { // Property Generated Setter
      *reinterpret_cast<Matrix3x3*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    Vector3D getBasePosition() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setBasePosition(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    float getFCurrentScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xEC);
    }

    void setFCurrentScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xEC) = val;
    }

    std::string getSurfaceType() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setSurfaceType(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    SharedPointer<GeomParams> * getPInitialParams() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<GeomParams> *>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setPInitialParams(SharedPointer<GeomParams> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<GeomParams> **>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    Vector3D GetBasePosition() { // Function Generated
        using FunctionPointerType = Vector3D (*)(ProxyGeometry *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x145ECE0);
        return inner(this);
    }

    ProxyType GetType() { // Function Generated
        using FunctionPointerType = ProxyType (*)(ProxyGeometry *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x145ED10);
        return inner(this);
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetSurfaceType() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(ProxyGeometry *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x145ED30);
        return inner(this);
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetName() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(ProxyGeometry *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x145F800);
        return inner(this);
    }

    CoreObject* GetObject() { // Function Generated
        using FunctionPointerType = CoreObject* (*)(ProxyGeometry *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x145F840);
        return inner(this);
    }

};