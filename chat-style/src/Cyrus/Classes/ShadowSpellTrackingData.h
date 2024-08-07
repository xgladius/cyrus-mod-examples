#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ShadowSpellEffect.h>

class ShadowSpellTrackingData : public PropertyClass {
public:
    SharedPointer<ShadowSpellEffect> * getPSpellEffect() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ShadowSpellEffect> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPSpellEffect(SharedPointer<ShadowSpellEffect> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ShadowSpellEffect> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getRemainingTurns() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setRemainingTurns(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};