#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ParticleEmitter2D.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ParticleSystem2D : public Window {
public:
    int AttachEmitter(ParticleEmitter2D a0) { // Function Generated
        using FunctionPointerType = int (*)(ParticleSystem2D *self, ParticleEmitter2D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x17F4790);
        return inner(this, a0);
    }

    int ParticleCountInRadius(ParticleEmitter2D a0, int a1, int a2, float a3) { // Function Generated
        using FunctionPointerType = int (*)(ParticleSystem2D *self, ParticleEmitter2D a0, int a1, int a2, float a3);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x17F4FB0);
        return inner(this, a0, a1, a2, a3);
    }

    void SetAllParticlePositions(int a0, int a1) { // Function Generated
        using FunctionPointerType = void (*)(ParticleSystem2D *self, int a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x17F5440);
        return inner(this, a0, a1);
    }

};