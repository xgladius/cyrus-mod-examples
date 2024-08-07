#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DoodleMapPair.h>
#include <Cyrus/Classes/PropertyClass.h>

class DoodleMapMap : public PropertyClass {
public:
    List<DoodleMapPair> getMapList() { // Property Generated Getter
      return *reinterpret_cast<List<DoodleMapPair>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMapList(List<DoodleMapPair> val) { // Property Generated Setter
      *reinterpret_cast<List<DoodleMapPair>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};