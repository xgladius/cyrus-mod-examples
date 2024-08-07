#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/HouseTransferResult.h>
#include <Cyrus/Classes/PropertyClass.h>

class HouseTransferResultList : public PropertyClass {
public:
    List<SharedPointer<HouseTransferResult>> * getHouseTransferResultList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<HouseTransferResult>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setHouseTransferResultList(List<SharedPointer<HouseTransferResult>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<HouseTransferResult>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    gid getCharacterGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setCharacterGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};