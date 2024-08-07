#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/EquippedItemInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class EquippedItemInfoList : public PropertyClass {
public:
    List<SharedPointer<EquippedItemInfo>> * getInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<EquippedItemInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setInfoList(List<SharedPointer<EquippedItemInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<EquippedItemInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};