#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BattlegroundPOI.h>
#include <Cyrus/Classes/BattlegroundPlayerStats.h>
#include <Cyrus/Classes/PropertyClass.h>

class BattlegroundPlayerStatsManager : public PropertyClass {
public:
    List<SharedPointer<BattlegroundPlayerStats>> * getStatsList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BattlegroundPlayerStats>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setStatsList(List<SharedPointer<BattlegroundPlayerStats>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BattlegroundPlayerStats>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<BattlegroundPOI> * getPoi() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<BattlegroundPOI> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPoi(SharedPointer<BattlegroundPOI> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<BattlegroundPOI> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};