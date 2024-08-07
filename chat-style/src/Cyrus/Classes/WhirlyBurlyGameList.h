#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WhirlyBurlyGameInfo.h>

class WhirlyBurlyGameList : public PropertyClass {
public:
    List<SharedPointer<WhirlyBurlyGameInfo>> * getWhirlyBurlyGameList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<WhirlyBurlyGameInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setWhirlyBurlyGameList(List<SharedPointer<WhirlyBurlyGameInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<WhirlyBurlyGameInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};