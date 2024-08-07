#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/CoreObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class InventoryBehaviorBase : public BehaviorInstance {
public:
    List<SharedPointer<CoreObject>> * getItemList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CoreObject>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setItemList(List<SharedPointer<CoreObject>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CoreObject>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};