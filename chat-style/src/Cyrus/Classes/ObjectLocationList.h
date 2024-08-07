#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ObjectLocation.h>
#include <Cyrus/Classes/PropertyClass.h>

class ObjectLocationList : public PropertyClass {
public:
    List<SharedPointer<ObjectLocation>> * getObjectList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ObjectLocation>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setObjectList(List<SharedPointer<ObjectLocation>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ObjectLocation>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};