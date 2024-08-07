#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/JewelSocketUnlockCost.h>
#include <Cyrus/Classes/PropertyClass.h>

class JewelSocketUnlockCostList : public PropertyClass {
public:
    List<JewelSocketUnlockCost> getJewelSocketUnlockList() { // Property Generated Getter
      return *reinterpret_cast<List<JewelSocketUnlockCost>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setJewelSocketUnlockList(List<JewelSocketUnlockCost> val) { // Property Generated Setter
      *reinterpret_cast<List<JewelSocketUnlockCost>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};