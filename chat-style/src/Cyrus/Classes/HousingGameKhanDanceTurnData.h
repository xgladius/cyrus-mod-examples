#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingGameKhanDanceTurnData : public PropertyClass {
public:
    List<gid> getPlayerGIDList() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPlayerGIDList(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<unsigned char> getPlayerYawList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned char>*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPlayerYawList(List<unsigned char> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned char>*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};