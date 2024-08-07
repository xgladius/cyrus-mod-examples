#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellIDTracker.h>

class ClientSpellbookBehavior : public BehaviorInstance {
public:
    List<SharedPointer<SpellIDTracker>> * getSpellIDList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellIDTracker>> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setSpellIDList(List<SharedPointer<SpellIDTracker>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellIDTracker>> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};