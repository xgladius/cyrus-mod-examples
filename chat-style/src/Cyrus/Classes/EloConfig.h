#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/EloRatingsTable.h>
#include <Cyrus/Classes/PropertyClass.h>

class EloConfig : public PropertyClass {
public:
    SharedPointer<EloRatingsTable> * getDefaultRatingsTable() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<EloRatingsTable> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDefaultRatingsTable(SharedPointer<EloRatingsTable> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<EloRatingsTable> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<EloRatingsTable>> * getPerLeagueRatingsTables() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<EloRatingsTable>> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPerLeagueRatingsTables(List<SharedPointer<EloRatingsTable>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<EloRatingsTable>> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};