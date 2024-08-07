#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/HouseZone.h>
#include <Cyrus/Classes/PropertyClass.h>

class HouseNameList : public PropertyClass {
public:
    List<SharedPointer<HouseZone>> * getHouseZoneList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<HouseZone>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setHouseZoneList(List<SharedPointer<HouseZone>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<HouseZone>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};