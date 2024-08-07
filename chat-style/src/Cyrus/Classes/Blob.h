#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BlobDefinition.h>
#include <Cyrus/Classes/PropertyClass.h>

class Blob : public BlobDefinition {
public:
    SharedPointer<PropertyClass> * getData() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PropertyClass> *>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setData(SharedPointer<PropertyClass> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PropertyClass> **>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

};