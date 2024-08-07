#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizItemLocations.h>
#include <Cyrus/Classes/WizItemVendorData.h>

class WizItemVendorDataList : public WizItemLocations {
public:
    List<SharedPointer<WizItemVendorData>> * getVendors() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<WizItemVendorData>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setVendors(List<SharedPointer<WizItemVendorData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<WizItemVendorData>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};