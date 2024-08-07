#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PetDerbyResult.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetDerbyResults : public PropertyClass {
public:
    List<SharedPointer<PetDerbyResult>> * getResultList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PetDerbyResult>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setResultList(List<SharedPointer<PetDerbyResult>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PetDerbyResult>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};