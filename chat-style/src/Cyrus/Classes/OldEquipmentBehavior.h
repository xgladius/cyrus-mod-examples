#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>

class OldEquipmentBehavior : public BehaviorInstance {
public:
    List<OldWizardEquippedItemInfo*> * getPublicItemList() { // Property Generated Getter
      return reinterpret_cast<List<OldWizardEquippedItemInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setPublicItemList(List<OldWizardEquippedItemInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<OldWizardEquippedItemInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};