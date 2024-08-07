#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class CastleMagicPlayersInZone : public PropertyClass {
public:
    List<gid> getPlayersInZoneList() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPlayersInZoneList(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};