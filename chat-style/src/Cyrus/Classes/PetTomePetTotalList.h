#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PetTomePetTotal.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetTomePetTotalList : public PropertyClass {
public:
    List<SharedPointer<PetTomePetTotal>> * getPetTomePetTotalList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PetTomePetTotal>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPetTomePetTotalList(List<SharedPointer<PetTomePetTotal>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PetTomePetTotal>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<unsigned int> getPetTemplateList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPetTemplateList(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};