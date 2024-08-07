#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/HousingLayoutObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingLayout : public PropertyClass {
public:
    Vector<SharedPointer<HousingLayoutObject>> * getHousingLayoutObjectList() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<HousingLayoutObject>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setHousingLayoutObjectList(Vector<SharedPointer<HousingLayoutObject>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<HousingLayoutObject>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};