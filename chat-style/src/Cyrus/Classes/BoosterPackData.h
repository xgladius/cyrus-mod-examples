#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BoosterPackLootTypeMaxes.h>
#include <Cyrus/Classes/PropertyClass.h>

class BoosterPackData : public PropertyClass {
public:
    List<SharedPointer<BoosterPackLootTypeMaxes>> * getLootTypeMaxes() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BoosterPackLootTypeMaxes>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLootTypeMaxes(List<SharedPointer<BoosterPackLootTypeMaxes>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BoosterPackLootTypeMaxes>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};