#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellData.h>

class DeckBehavior : public BehaviorInstance {
public:
    List<SharedPointer<SpellData>> * getSpellList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellData>> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setSpellList(List<SharedPointer<SpellData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellData>> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getSerializedExclusionList() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setSerializedExclusionList(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    unsigned int getArchmasterySchool() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setArchmasterySchool(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

};