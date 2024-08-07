#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class EquipmentTemplate : public CoreTemplate {
public:
    List<EquipSlot*> * getBaseSlots() { // Property Generated Getter
      return reinterpret_cast<List<EquipSlot*> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setBaseSlots(List<EquipSlot*> * val) { // Property Generated Setter
      *reinterpret_cast<List<EquipSlot*> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    std::string getEquipmentName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setEquipmentName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};