#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/NodeDescriptor.h>
#include <Cyrus/Classes/PropertyClass.h>

class NodeObject : public PropertyClass {
public:
    Vector3D getLocation() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLocation(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    float getFRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setFRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    gid getId() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setId(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    float getDirection() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setDirection(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    float getRoll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setRoll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    SharedPointer<NodeDescriptor> * getDescriptor() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<NodeDescriptor> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setDescriptor(SharedPointer<NodeDescriptor> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<NodeDescriptor> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    Vector3D GetLocation() { // Function Generated
        using FunctionPointerType = Vector3D (*)(NodeObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1435180);
        return inner(this);
    }

    float GetRadius() { // Function Generated
        using FunctionPointerType = float (*)(NodeObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC41F60);
        return inner(this);
    }

    float GetDirection() { // Function Generated
        using FunctionPointerType = float (*)(NodeObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x146C550);
        return inner(this);
    }

};