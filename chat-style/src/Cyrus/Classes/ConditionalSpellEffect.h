#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ConditionalSpellElement.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellEffect.h>

class ConditionalSpellEffect : public SpellEffect {
public:
    List<SharedPointer<ConditionalSpellElement>> * getElements() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ConditionalSpellElement>> *>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setElements(List<SharedPointer<ConditionalSpellElement>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ConditionalSpellElement>> **>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

};