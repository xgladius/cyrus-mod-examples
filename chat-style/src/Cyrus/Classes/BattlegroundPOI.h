#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BattlegroundPOIData.h>
#include <Cyrus/Classes/PropertyClass.h>

class BattlegroundPOI : public PropertyClass {
public:
    List<SharedPointer<BattlegroundPOIData>> * getPoiList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BattlegroundPOIData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPoiList(List<SharedPointer<BattlegroundPOIData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BattlegroundPOIData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};