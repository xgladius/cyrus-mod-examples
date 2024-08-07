#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ParticleEmitter2D : public PropertyClass {
public:
    void SetEmitterPosition(float a0, float a1) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0, float a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18204B0);
        return inner(this, a0, a1);
    }

    Rect<int> GetEmitterClipFrame() { // Function Generated
        using FunctionPointerType = Rect<int> (*)(ParticleEmitter2D *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18200F0);
        return inner(this);
    }

    void SetEmitterClipFrame(Rect<int> a0) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, Rect<int> a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18200C0);
        return inner(this, a0);
    }

    bool ClippingEnabled() { // Function Generated
        using FunctionPointerType = bool (*)(ParticleEmitter2D *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820110);
        return inner(this);
    }

    void SetEmitterTarget(int a0, int a1, float a2, bool a3) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, int a0, int a1, float a2, bool a3);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18204E0);
        return inner(this, a0, a1, a2, a3);
    }

    void SetEmitterGravity(float a0, float a1) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0, float a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820670);
        return inner(this, a0, a1);
    }

    void SetParticleGravity(float a0, float a1) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0, float a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18208D0);
        return inner(this, a0, a1);
    }

    void SetParticleStartColor(int a0, int a1, int a2, int a3) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, int a0, int a1, int a2, int a3);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18208F0);
        return inner(this, a0, a1, a2, a3);
    }

    void SetParticleEndColor(int a0, int a1, int a2, int a3) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, int a0, int a1, int a2, int a3);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820920);
        return inner(this, a0, a1, a2, a3);
    }

    void SetParticleDispersionRadius(float a0) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820950);
        return inner(this, a0);
    }

    void SetParticleDirection(float a0, float a1) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0, float a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820960);
        return inner(this, a0, a1);
    }

    void SetParticleRate(float a0, float a1) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0, float a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820980);
        return inner(this, a0, a1);
    }

    void SetParticleLife(float a0, float a1) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0, float a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18209A0);
        return inner(this, a0, a1);
    }

    void SetParticleSpeed(float a0, float a1) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0, float a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18209C0);
        return inner(this, a0, a1);
    }

    void SetEmitterInitialParticleCount(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820560);
        return inner(this, a0);
    }

    void SetParticleStartSize(float a0, float a1) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0, float a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18209E0);
        return inner(this, a0, a1);
    }

    void SetParticleEndSize(float a0, float a1) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0, float a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820A00);
        return inner(this, a0, a1);
    }

    void SetParticleMaterialName(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820A40);
        return inner(this, a0);
    }

    void SetParticleBlendingType(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820A30);
        return inner(this, a0);
    }

    void SetEmitterLife(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820550);
        return inner(this, a0);
    }

    bool SetEmitterMaterial(std::string a0, int a1, int a2, float a3) { // Function Generated
        using FunctionPointerType = bool (*)(ParticleEmitter2D *self, std::string a0, int a1, int a2, float a3);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820140);
        return inner(this, a0, a1, a2, a3);
    }

    void SetParticleRotation(float a0, float a1) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0, float a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820A90);
        return inner(this, a0, a1);
    }

    void SetNextEmitter(ParticleEmitter2D a0) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, ParticleEmitter2D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820570);
        return inner(this, a0);
    }

    void EmitterAddColorPalette(int a0, int a1, int a2) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, int a0, int a1, int a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820690);
        return inner(this, a0, a1, a2);
    }

    void SetParticleStartColorPalette(int a0, int a1, int a2) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, int a0, int a1, int a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820AB0);
        return inner(this, a0, a1, a2);
    }

    void SetEmitterDirection(float a0, float a1) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0, float a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820870);
        return inner(this, a0, a1);
    }

    void SetParticleEndColorPalette(int a0, int a1, int a2) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, int a0, int a1, int a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820AE0);
        return inner(this, a0, a1, a2);
    }

    void CalculateParticleRotationFromDirection() { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820B10);
        return inner(this);
    }

    void EmitterAddAttractor(float a0, float a1, float a2, float a3) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0, float a1, float a2, float a3);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820720);
        return inner(this, a0, a1, a2, a3);
    }

    void SetEmitterUseAttractor(int a0, int a1, bool a2) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, int a0, int a1, bool a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820C20);
        return inner(this, a0, a1, a2);
    }

    void SetParticleMaterialAnim(int a0, int a1, float a2) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, int a0, int a1, float a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1820A70);
        return inner(this, a0, a1, a2);
    }

    void SetEmitterWidth(float a0) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1822700);
        return inner(this, a0);
    }

    void SetEmitterViscosity(float a0) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14ADAB0);
        return inner(this, a0);
    }

    void SetEmitterWarmupTime(float a0) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18226F0);
        return inner(this, a0);
    }

    void SetEmitterDelayStart(float a0) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18226E0);
        return inner(this, a0);
    }

    void EnableDebug(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(ParticleEmitter2D *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1821A10);
        return inner(this, a0);
    }

};