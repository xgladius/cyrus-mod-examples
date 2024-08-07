#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/PublicSocketJewelPair.h>

class PublicEquippedJewelInfo : public PropertyClass {
public:
    List<SharedPointer<PublicSocketJewelPair>> * getInfoPairs() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PublicSocketJewelPair>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setInfoPairs(List<SharedPointer<PublicSocketJewelPair>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PublicSocketJewelPair>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    bool getBSocketsLocked() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setBSocketsLocked(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};