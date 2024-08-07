#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CastleTourLeaderboardEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class CastleTourLeaderboardUpdate : public PropertyClass {
public:
    List<SharedPointer<CastleTourLeaderboardEntry>> * getEntryList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CastleTourLeaderboardEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEntryList(List<SharedPointer<CastleTourLeaderboardEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CastleTourLeaderboardEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getLeaderboardSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setLeaderboardSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};