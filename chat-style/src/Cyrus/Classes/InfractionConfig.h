#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/InfractionCategory.h>
#include <Cyrus/Classes/PropertyClass.h>

class InfractionConfig : public PropertyClass {
public:
    List<SharedPointer<InfractionCategory>> * getCategories() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<InfractionCategory>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setCategories(List<SharedPointer<InfractionCategory>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<InfractionCategory>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};