#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellEffect.h>

class CombatResolver : public PropertyClass {
public:
    bool getBGlobalEffect() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setBGlobalEffect(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    SharedPointer<SpellEffect> * getGlobalEffect() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<SpellEffect> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setGlobalEffect(SharedPointer<SpellEffect> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<SpellEffect> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    Vector<SharedPointer<SpellEffect>> * getBattlefieldEffects() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<SpellEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setBattlefieldEffects(Vector<SharedPointer<SpellEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<SpellEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};