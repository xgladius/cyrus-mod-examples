#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CSRPropertyEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClientCSRRegistryList : public PropertyClass {
public:
    List<SharedPointer<CSRPropertyEntry>> * getPropertyList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CSRPropertyEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPropertyList(List<SharedPointer<CSRPropertyEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CSRPropertyEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};