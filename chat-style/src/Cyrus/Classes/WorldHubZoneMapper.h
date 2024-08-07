#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class WorldHubZoneMapper : public PropertyClass {
public:
    List<HubZoneMapping*> * getHubZoneMapping() { // Property Generated Getter
      return reinterpret_cast<List<HubZoneMapping*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setHubZoneMapping(List<HubZoneMapping*> * val) { // Property Generated Setter
      *reinterpret_cast<List<HubZoneMapping*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};