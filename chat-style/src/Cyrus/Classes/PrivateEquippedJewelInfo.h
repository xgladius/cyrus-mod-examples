#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PrivateSocketJewelPair.h>
#include <Cyrus/Classes/PropertyClass.h>

class PrivateEquippedJewelInfo : public PropertyClass {
public:
    List<SharedPointer<PrivateSocketJewelPair>> * getInfoPairs() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PrivateSocketJewelPair>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setInfoPairs(List<SharedPointer<PrivateSocketJewelPair>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PrivateSocketJewelPair>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};