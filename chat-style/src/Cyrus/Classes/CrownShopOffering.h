#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class CrownShopOffering : public PropertyClass {
public:
    List<gid> getBoosterPacks() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBoosterPacks(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getShopType() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setShopType(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};