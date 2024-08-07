#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/HousingBlobObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingBlob : public PropertyClass {
public:
    Vector<SharedPointer<HousingBlobObject>> * getHousingBlobObjectList() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<HousingBlobObject>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setHousingBlobObjectList(Vector<SharedPointer<HousingBlobObject>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<HousingBlobObject>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};