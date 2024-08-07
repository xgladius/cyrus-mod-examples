#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/FishTournamentEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class FishTournamentUpdate : public PropertyClass {
public:
    int getNumberOfEntries() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNumberOfEntries(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getFishTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setFishTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    List<SharedPointer<FishTournamentEntry>> * getEntryList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<FishTournamentEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setEntryList(List<SharedPointer<FishTournamentEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<FishTournamentEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};