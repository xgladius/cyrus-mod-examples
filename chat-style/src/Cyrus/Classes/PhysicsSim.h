#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BaseZone::BaseSimulation.h>
#include <Cyrus/Classes/PropertyClass.h>

class PhysicsSim : public BaseZone::BaseSimulation {
public:
    PhysicsSimObject* FindSimObject(unsigned int a0) { // Function Generated
        using FunctionPointerType = PhysicsSimObject* (*)(PhysicsSim *self, unsigned int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AD490);
        return inner(this, a0);
    }

    float GetUpdateFrequencySeconds() { // Function Generated
        using FunctionPointerType = float (*)(PhysicsSim *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AD7A0);
        return inner(this);
    }

    bool GetUseDeterministicSolver() { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsSim *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AD7B0);
        return inner(this);
    }

    bool GetUseLSS() { // Function Generated
        using FunctionPointerType = bool (*)(PhysicsSim *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AD7C0);
        return inner(this);
    }

    Vector3D GetGravity() { // Function Generated
        using FunctionPointerType = Vector3D (*)(PhysicsSim *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AD680);
        return inner(this);
    }

    float GetGlobalBounce() { // Function Generated
        using FunctionPointerType = float (*)(PhysicsSim *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AD660);
        return inner(this);
    }

    float GetGlobalMu() { // Function Generated
        using FunctionPointerType = float (*)(PhysicsSim *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AD670);
        return inner(this);
    }

    float GetGlobalERP() { // Function Generated
        using FunctionPointerType = float (*)(PhysicsSim *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AB190);
        return inner(this);
    }

    float GetGlobalCFM() { // Function Generated
        using FunctionPointerType = float (*)(PhysicsSim *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AB1B0);
        return inner(this);
    }

    float GetGlobalContactSurfaceDepth() { // Function Generated
        using FunctionPointerType = float (*)(PhysicsSim *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AB1D0);
        return inner(this);
    }

    void SetUpdateFrequencySeconds(float a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSim *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14ADAB0);
        return inner(this, a0);
    }

    void SetUseDeterministicSolver(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSim *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14ADAC0);
        return inner(this, a0);
    }

    void SetUseLSS(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSim *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14ADAD0);
        return inner(this, a0);
    }

    void SetGravity(Vector3D a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSim *self, Vector3D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AB000);
        return inner(this, a0);
    }

    void SetGlobalBounce(float a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSim *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AD9C0);
        return inner(this, a0);
    }

    void SetGlobalMu(float a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSim *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AD9D0);
        return inner(this, a0);
    }

    void SetGlobalERP(float a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSim *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AB050);
        return inner(this, a0);
    }

    void SetGlobalCFM(float a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSim *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AB070);
        return inner(this, a0);
    }

    void SetGlobalContactSurfaceDepth(float a0) { // Function Generated
        using FunctionPointerType = void (*)(PhysicsSim *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AB090);
        return inner(this, a0);
    }

    unsigned int GetSimulationFrame() { // Function Generated
        using FunctionPointerType = unsigned int (*)(PhysicsSim *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14AD790);
        return inner(this);
    }

};