#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/LeaderboardEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class LeaderboardEntryList : public PropertyClass {
public:
    List<SharedPointer<LeaderboardEntry>> * getEntryList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<LeaderboardEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEntryList(List<SharedPointer<LeaderboardEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<LeaderboardEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};