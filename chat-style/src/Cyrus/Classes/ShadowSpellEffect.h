#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/EffectListSpellEffect.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellEffect.h>

class ShadowSpellEffect : public EffectListSpellEffect {
public:
    int getInitialBacklash() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setInitialBacklash(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

};