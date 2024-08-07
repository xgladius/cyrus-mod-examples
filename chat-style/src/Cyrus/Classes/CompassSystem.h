#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CompassMarker.h>
#include <Cyrus/Classes/PropertyClass.h>

class CompassSystem : public PropertyClass {
public:
    List<CompassMarker> getMarkers() { // Property Generated Getter
      return *reinterpret_cast<List<CompassMarker>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setMarkers(List<CompassMarker> val) { // Property Generated Setter
      *reinterpret_cast<List<CompassMarker>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};