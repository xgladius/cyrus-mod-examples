#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PhysicsSimMass.h>
#include <Cyrus/Classes/PropertyClass.h>

class PhysicsSimMassSphere : public PhysicsSimMass {
public:
    float GetRadiusMeters() { // Function Generated
        using FunctionPointerType = float (*)(PhysicsSimMassSphere *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC41F70);
        return inner(this);
    }

    void SetRadiusMeters(float a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimMassSphere *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14BCCA0);
        return inner(this, a0);
    }

};