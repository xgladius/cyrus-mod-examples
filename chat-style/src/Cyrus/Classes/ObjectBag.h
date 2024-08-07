#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class ObjectBag : public PropertyClass {
public:
    List<SharedPointer<CoreObject>> * getItemList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CoreObject>> *>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setItemList(List<SharedPointer<CoreObject>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CoreObject>> **>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    int getMaxItemStack() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setMaxItemStack(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

};