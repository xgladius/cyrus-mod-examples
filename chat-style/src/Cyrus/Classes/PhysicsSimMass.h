#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class PhysicsSimMass : public PropertyClass {
public:
    float GetMassKilograms() { // Function Generated
        using FunctionPointerType = float (*)(PhysicsSimMass *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14C1820);
        return inner(this);
    }

    Vector3D GetCenterOfMass() { // Function Generated
        using FunctionPointerType = Vector3D (*)(PhysicsSimMass *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14C17F0);
        return inner(this);
    }

    void SetMassKilograms(float a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimMass *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14BC850);
        return inner(this, a0);
    }

    void SetCenterOfMass(Vector3D a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimMass *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14B2EC0);
        return inner(this, a0);
    }

};