#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MapInfoRequirementsRequest.h>
#include <Cyrus/Classes/PropertyClass.h>

class MapInfoRequirementsList : public PropertyClass {
public:
    List<SharedPointer<MapInfoRequirementsRequest>> * getMapInfoRequirementsList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MapInfoRequirementsRequest>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMapInfoRequirementsList(List<SharedPointer<MapInfoRequirementsRequest>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MapInfoRequirementsRequest>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};