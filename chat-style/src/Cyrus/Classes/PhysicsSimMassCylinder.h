#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PhysicsSimMass.h>
#include <Cyrus/Classes/PhysicsSimMassSphere.h>
#include <Cyrus/Classes/PropertyClass.h>

class PhysicsSimMassCylinder : public PhysicsSimMassSphere {
public:
    PhysicsSimMass__CylinderDirection GetCylinderDirection() { // Function Generated
        using FunctionPointerType = PhysicsSimMass__CylinderDirection (*)(PhysicsSimMassCylinder *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14C1800);
        return inner(this);
    }

    float GetCylinderLengthMeters() { // Function Generated
        using FunctionPointerType = float (*)(PhysicsSimMassCylinder *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14C1810);
        return inner(this);
    }

    void SetCylinderDirection(PhysicsSimMass__CylinderDirection a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimMassCylinder *self, PhysicsSimMass__CylinderDirection a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14C1BD0);
        return inner(this, a0);
    }

    void SetCylinderLengthMeters(float a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSimMassCylinder *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14BD230);
        return inner(this, a0);
    }

};