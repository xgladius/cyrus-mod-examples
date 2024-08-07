#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/CollisionBehavior.h>
#include <Cyrus/Classes/CoreObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class PhysicsBehavior : public CollisionBehavior {
public:
    gid getNHolderGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setNHolderGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    Vector3D getVHoldOffset() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setVHoldOffset(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    float getFHoldForce() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x174);
    }

    void setFHoldForce(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x174) = val;
    }

    bool IsEnabled() { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x358830);
        return inner(this);
    }

    bool IsResting() { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14BC3B0);
        return inner(this);
    }

    void SetEnabled(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsBehavior *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B76C0);
        return inner(this, a0);
    }

    bool CreateSimObject() { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B76F0);
        return inner(this);
    }

    bool DestroySimObject() { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B7F10);
        return inner(this);
    }

    PhysicsSimObject* GetSimObject() { // Function Generated
        using FunctionPointerType = PhysicsSimObject* (*)(PhysicsBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14BB8C0);
        return inner(this);
    }

    PhysicsBehaviorTemplate* GetPhysicsTemplate() { // Function Generated
        using FunctionPointerType = PhysicsBehaviorTemplate* (*)(PhysicsBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14BB7B0);
        return inner(this);
    }

    CoreObject* GetHolder() { // Function Generated
        using FunctionPointerType = CoreObject* (*)(PhysicsBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14BB770);
        return inner(this);
    }

    Vector3D GetHolderOffset() { // Function Generated
        using FunctionPointerType = Vector3D (*)(PhysicsBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14BB7A0);
        return inner(this);
    }

    float GetHolderForce() { // Function Generated
        using FunctionPointerType = float (*)(PhysicsBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14BB790);
        return inner(this);
    }

    bool Start() { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xCA2424);
        return inner(this);
    }

    bool Stop() { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xCA2430);
        return inner(this);
    }

    bool ApplyForce(Vector3D a0) { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsBehavior *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xCA243C);
        return inner(this, a0);
    }

    bool ApplyTorque(Vector3D a0) { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsBehavior *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xCA2454);
        return inner(this, a0);
    }

    bool Grab(CoreObject a0, Vector3D a1, float a2) { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsBehavior *self, CoreObject a0, Vector3D a1, float a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xCA2460);
        return inner(this, a0, a1, a2);
    }

    bool Release(CoreObject a0) { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsBehavior *self, CoreObject a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xCA246C);
        return inner(this, a0);
    }

};