#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BlobRequestObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class BlobRequest : public PropertyClass {
public:
    std::string getType() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setType(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    gid getAssociatedGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setAssociatedGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<SharedPointer<BlobRequestObject>> * getBlobRequestObjectList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BlobRequestObject>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setBlobRequestObjectList(List<SharedPointer<BlobRequestObject>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BlobRequestObject>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};