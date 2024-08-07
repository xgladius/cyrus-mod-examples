#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CastleGamesEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class CastleGamesUpdate : public PropertyClass {
public:
    List<SharedPointer<CastleGamesEntry>> * getEntryList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CastleGamesEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEntryList(List<SharedPointer<CastleGamesEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CastleGamesEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getNumberOfGames() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setNumberOfGames(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};