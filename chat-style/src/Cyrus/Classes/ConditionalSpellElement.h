#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RequirementList.h>
#include <Cyrus/Classes/SpellEffect.h>

class ConditionalSpellElement : public PropertyClass {
public:
    SharedPointer<RequirementList> * getPReqs() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<RequirementList> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPReqs(SharedPointer<RequirementList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<RequirementList> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<SpellEffect> * getPEffect() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<SpellEffect> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPEffect(SharedPointer<SpellEffect> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<SpellEffect> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};