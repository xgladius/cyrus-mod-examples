#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BadgeLeaderboardInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class BadgeLeaderboardInfoList : public PropertyClass {
public:
    List<SharedPointer<BadgeLeaderboardInfo>> * getBadgeLeaderboardInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BadgeLeaderboardInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBadgeLeaderboardInfoList(List<SharedPointer<BadgeLeaderboardInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BadgeLeaderboardInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getPage() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPage(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    bool getExtraCredit() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setExtraCredit(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    int getTotalEntries() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setTotalEntries(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    bool getIsFriends() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setIsFriends(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

};