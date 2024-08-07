#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class WhirlyBurlyAddGroup : public PropertyClass {
public:
    List<gid> getPlayerList() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPlayerList(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};