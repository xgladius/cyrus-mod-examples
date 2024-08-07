#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BlobDefinition.h>
#include <Cyrus/Classes/PropertyClass.h>

class BlobDirectory : public PropertyClass {
public:
    List<SharedPointer<BlobDefinition>> * getBlobDefinitionList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BlobDefinition>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBlobDefinitionList(List<SharedPointer<BlobDefinition>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BlobDefinition>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};