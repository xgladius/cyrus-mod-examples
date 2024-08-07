#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AdvPvPLeaderboardEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class AdvPvPLeaderboardEntryList : public PropertyClass {
public:
    int getStartPosition() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setStartPosition(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getTotalPlayerCount() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setTotalPlayerCount(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    List<SharedPointer<AdvPvPLeaderboardEntry>> * getEntries() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<AdvPvPLeaderboardEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setEntries(List<SharedPointer<AdvPvPLeaderboardEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<AdvPvPLeaderboardEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};