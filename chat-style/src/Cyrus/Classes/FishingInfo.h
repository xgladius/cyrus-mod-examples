#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BodyOfWater.h>
#include <Cyrus/Classes/PropertyClass.h>

class FishingInfo : public PropertyClass {
public:
    List<SharedPointer<BodyOfWater>> * getBodyOfWaterList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BodyOfWater>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBodyOfWaterList(List<SharedPointer<BodyOfWater>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BodyOfWater>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};