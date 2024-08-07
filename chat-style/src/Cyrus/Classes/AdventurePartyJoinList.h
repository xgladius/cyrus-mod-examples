#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AdventurePartyJoinInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class AdventurePartyJoinList : public PropertyClass {
public:
    List<SharedPointer<AdventurePartyJoinInfo>> * getAdventurePartyJoinList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<AdventurePartyJoinInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAdventurePartyJoinList(List<SharedPointer<AdventurePartyJoinInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<AdventurePartyJoinInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};