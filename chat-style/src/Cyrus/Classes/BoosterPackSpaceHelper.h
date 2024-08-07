#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BoosterPackData.h>
#include <Cyrus/Classes/PropertyClass.h>

class BoosterPackSpaceHelper : public PropertyClass {
public:
    List<SharedPointer<BoosterPackData>> * getAllPacks() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BoosterPackData>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setAllPacks(List<SharedPointer<BoosterPackData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BoosterPackData>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};