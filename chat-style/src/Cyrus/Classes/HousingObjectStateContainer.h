#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/HousingObjectState.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingObjectStateContainer : public PropertyClass {
public:
    List<SharedPointer<HousingObjectState>> * getHousingObjectStateList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<HousingObjectState>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setHousingObjectStateList(List<SharedPointer<HousingObjectState>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<HousingObjectState>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    gid getZoneGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setZoneGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};