#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/LoyaltyStoreItem.h>
#include <Cyrus/Classes/PropertyClass.h>

class LoyaltyStoreData : public PropertyClass {
public:
    List<SharedPointer<LoyaltyStoreItem>> * getItems() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<LoyaltyStoreItem>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setItems(List<SharedPointer<LoyaltyStoreItem>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<LoyaltyStoreItem>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};