#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ShowcasedStoreItem.h>

class ShowcasedStoreItemList : public PropertyClass {
public:
    List<SharedPointer<ShowcasedStoreItem>> * getItems() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ShowcasedStoreItem>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setItems(List<SharedPointer<ShowcasedStoreItem>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ShowcasedStoreItem>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};