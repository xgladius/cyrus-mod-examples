#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/EquippedItemInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class EquipmentBehaviorTemplate : public BehaviorTemplate {
public:
    List<unsigned int> getItemList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setItemList(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getEquipmentTemplate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setEquipmentTemplate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    List<SharedPointer<EquippedItemInfo>> * getInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<EquippedItemInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setInfoList(List<SharedPointer<EquippedItemInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<EquippedItemInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};