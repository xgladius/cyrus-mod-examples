#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellEffect.h>

class VariableSpellEffect : public SpellEffect {
public:
    List<SharedPointer<SpellEffect>> * getEffectList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setEffectList(List<SharedPointer<SpellEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

};