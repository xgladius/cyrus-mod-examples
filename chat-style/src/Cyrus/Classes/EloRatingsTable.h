#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/EloRank.h>
#include <Cyrus/Classes/PropertyClass.h>

class EloRatingsTable : public PropertyClass {
public:
    std::string getLeagueType() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLeagueType(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getStartingElo() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setStartingElo(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    int getMinElo() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setMinElo(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

    Vector<SharedPointer<EloRank>> * getRanks() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<EloRank>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setRanks(Vector<SharedPointer<EloRank>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<EloRank>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};