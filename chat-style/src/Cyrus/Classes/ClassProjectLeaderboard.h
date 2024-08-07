#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClassProjectLeaderboardPlayer.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClassProjectLeaderboard : public PropertyClass {
public:
    int getLeaderboardSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setLeaderboardSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<SharedPointer<ClassProjectLeaderboardPlayer>> * getLeaderboardList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ClassProjectLeaderboardPlayer>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLeaderboardList(List<SharedPointer<ClassProjectLeaderboardPlayer>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ClassProjectLeaderboardPlayer>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getTopEntry() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setTopEntry(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

};