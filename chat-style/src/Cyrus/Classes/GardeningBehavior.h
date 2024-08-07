#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/GardenData.h>
#include <Cyrus/Classes/PropertyClass.h>

class GardeningBehavior : public BehaviorInstance {
public:
    SharedPointer<GardenData> * getGardeningData() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<GardenData> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setGardeningData(SharedPointer<GardenData> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<GardenData> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};