#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/ClientEquipmentBehavior.h>
#include <Cyrus/Classes/EquipmentSet.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClientWizEquipmentBehavior : public ClientEquipmentBehavior {
public:
    List<SharedPointer<EquipmentSet>> * getEquipmentSets() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<EquipmentSet>> *>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setEquipmentSets(List<SharedPointer<EquipmentSet>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<EquipmentSet>> **>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

};