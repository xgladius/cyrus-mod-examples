#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/EquipmentSet.h>
#include <Cyrus/Classes/PropertyClass.h>

class EquipmentSetList : public PropertyClass {
public:
    List<SharedPointer<EquipmentSet>> * getEquipmentSetList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<EquipmentSet>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEquipmentSetList(List<SharedPointer<EquipmentSet>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<EquipmentSet>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};