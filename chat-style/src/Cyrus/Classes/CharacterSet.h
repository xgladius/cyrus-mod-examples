#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/InclusiveRange.h>
#include <Cyrus/Classes/PropertyClass.h>

class CharacterSet : public PropertyClass {
public:
    List<SharedPointer<InclusiveRange>> * getSet() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<InclusiveRange>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSet(List<SharedPointer<InclusiveRange>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<InclusiveRange>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getCost() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setCost(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};