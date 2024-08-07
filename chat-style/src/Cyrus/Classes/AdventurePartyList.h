#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AdventurePartyInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class AdventurePartyList : public PropertyClass {
public:
    List<SharedPointer<AdventurePartyInfo>> * getAdventurePartyList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<AdventurePartyInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAdventurePartyList(List<SharedPointer<AdventurePartyInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<AdventurePartyInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};