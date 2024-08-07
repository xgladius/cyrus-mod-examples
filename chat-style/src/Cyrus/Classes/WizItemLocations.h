#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/WizItemLocations__eItemType.h>

class WizItemLocations : public PropertyClass {
public:
    WizItemLocations__eItemType getItemType() { // Property Generated Getter
      return *reinterpret_cast<WizItemLocations__eItemType*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setItemType(WizItemLocations__eItemType val) { // Property Generated Setter
      *reinterpret_cast<WizItemLocations__eItemType*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};