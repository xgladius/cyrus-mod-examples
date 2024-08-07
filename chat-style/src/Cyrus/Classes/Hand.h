#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Spell.h>

class Hand : public PropertyClass {
public:
    List<SharedPointer<Spell>> * getSpellList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<Spell>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSpellList(List<SharedPointer<Spell>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<Spell>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};