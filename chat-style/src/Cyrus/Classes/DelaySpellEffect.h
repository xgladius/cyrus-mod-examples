#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Spell.h>
#include <Cyrus/Classes/SpellEffect.h>

class DelaySpellEffect : public SpellEffect {
public:
    int getDamage() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xEC);
    }

    void setDamage(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xEC) = val;
    }

    int getRounds() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setRounds(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    unsigned int getSpellDelayedTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF4);
    }

    void setSpellDelayedTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF4) = val;
    }

    unsigned int getSpellDelayedTemplateDamageID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setSpellDelayedTemplateDamageID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    unsigned int getSpellEnchanterTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xFC);
    }

    void setSpellEnchanterTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xFC) = val;
    }

    List<int> getTargetSubcircleList() { // Property Generated Getter
      return *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setTargetSubcircleList(List<int> val) { // Property Generated Setter
      *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    char getSpellHits() { // Property Generated Getter
      return *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setSpellHits(char val) { // Property Generated Setter
      *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    SharedPointer<Spell> * getSpell() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Spell> *>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setSpell(SharedPointer<Spell> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Spell> **>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

};