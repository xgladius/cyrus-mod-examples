#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/EffectListSpellEffect.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellEffect.h>

class TargetCountSpellEffect : public SpellEffect {
public:
    List<SharedPointer<EffectListSpellEffect>> * getEffectLists() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<EffectListSpellEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setEffectLists(List<SharedPointer<EffectListSpellEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<EffectListSpellEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

};