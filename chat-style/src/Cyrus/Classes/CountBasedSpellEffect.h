#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellEffect.h>
#include <Cyrus/Enums/CountBasedSpellEffect__CountBasedType.h>

class CountBasedSpellEffect : public SpellEffect {
public:
    CountBasedSpellEffect__CountBasedType getMode() { // Property Generated Getter
      return *reinterpret_cast<CountBasedSpellEffect__CountBasedType*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setMode(CountBasedSpellEffect__CountBasedType val) { // Property Generated Setter
      *reinterpret_cast<CountBasedSpellEffect__CountBasedType*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    List<SharedPointer<SpellEffect>> * getEffectList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setEffectList(List<SharedPointer<SpellEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

};