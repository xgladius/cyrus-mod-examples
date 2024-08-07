#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class PhysicsSimObject : public PropertyClass {
public:
    bool IsDampingEnabled() { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B2EA0);
        return inner(this);
    }

    float GetMass() { // Function Generated
        using FunctionPointerType = float (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B2080);
        return inner(this);
    }

    unsigned int GetUniqueID() { // Function Generated
        using FunctionPointerType = unsigned int (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xCA2D90);
        return inner(this);
    }

    PhysicsSim* GetParent() { // Function Generated
        using FunctionPointerType = PhysicsSim* (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B2090);
        return inner(this);
    }

    PhysicsBehavior* GetPhysicsBehavior() { // Function Generated
        using FunctionPointerType = PhysicsBehavior* (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B20B0);
        return inner(this);
    }

    void SetGravityEnabled(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AF810);
        return inner(this, a0);
    }

    void SetDampingEnabled(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B2ED0);
        return inner(this, a0);
    }

    void ApplyForce(Vector3D a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B09C0);
        return inner(this, a0);
    }

    void ApplyRelForce(Vector3D a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B0A40);
        return inner(this, a0);
    }

    void ApplyForceAtPos(Vector3D a0, Vector3D a1) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0, Vector3D a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B0AC0);
        return inner(this, a0, a1);
    }

    void ApplyForceAtRelPos(Vector3D a0, Vector3D a1) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0, Vector3D a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B0B70);
        return inner(this, a0, a1);
    }

    void ApplyRelForceAtPos(Vector3D a0, Vector3D a1) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0, Vector3D a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B0C20);
        return inner(this, a0, a1);
    }

    void ApplyRelForceAtRelPos(Vector3D a0, Vector3D a1) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0, Vector3D a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B0CD0);
        return inner(this, a0, a1);
    }

    void ZeroForce() { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B0D80);
        return inner(this);
    }

    void ApplyTorque(Vector3D a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B0DB0);
        return inner(this, a0);
    }

    void ApplyRelTorque(Vector3D a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B0E30);
        return inner(this, a0);
    }

    void ZeroTorque() { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B0EB0);
        return inner(this);
    }

    void SetDamping(Vector3D a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B2EC0);
        return inner(this, a0);
    }

    void SetAngularDamping(Vector3D a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B2EB0);
        return inner(this, a0);
    }

    void SetMass(float a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AF960);
        return inner(this, a0);
    }

    void SetPosition(Vector3D a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AF970);
        return inner(this, a0);
    }

    void SetRotation(Matrix3x3 a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Matrix3x3 a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AF9D0);
        return inner(this, a0);
    }

    void SetRotationByEulerAngle(Euler a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Euler a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AFAC0);
        return inner(this, a0);
    }

    void SetRotationByYaw(float a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AFCC0);
        return inner(this, a0);
    }

    void SetLinearVelocity(Vector3D a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AFD00);
        return inner(this, a0);
    }

    void ZeroLinearVelocity() { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AFD60);
        return inner(this);
    }

    void SetAngularVelocity(Vector3D a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AFDC0);
        return inner(this, a0);
    }

    void ZeroAngularVelocity() { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AFE20);
        return inner(this);
    }

    Vector3D GetPosition() { // Function Generated
        using FunctionPointerType = Vector3D (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AF510);
        return inner(this);
    }

    Matrix3x3 GetRotation() { // Function Generated
        using FunctionPointerType = Matrix3x3 (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AF560);
        return inner(this);
    }

    Vector3D GetLinearVelocity() { // Function Generated
        using FunctionPointerType = Vector3D (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AF5F0);
        return inner(this);
    }

    Vector3D GetAngularVelocity() { // Function Generated
        using FunctionPointerType = Vector3D (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AF640);
        return inner(this);
    }

    Vector3D GetForce() { // Function Generated
        using FunctionPointerType = Vector3D (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AF690);
        return inner(this);
    }

    Vector3D GetTorque() { // Function Generated
        using FunctionPointerType = Vector3D (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AF6E0);
        return inner(this);
    }

    Euler GetEulerAngles() { // Function Generated
        using FunctionPointerType = Euler (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AF730);
        return inner(this);
    }

    bool IsDisabled() { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsSimObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AF4E0);
        return inner(this);
    }

};