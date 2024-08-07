#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/CaughtFish.h>
#include <Cyrus/Classes/FishHistory.h>
#include <Cyrus/Classes/PropertyClass.h>

class FishingBehaviorBase : public BehaviorInstance {
public:
    List<SharedPointer<CaughtFish>> * getCaughtFishList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CaughtFish>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setCaughtFishList(List<SharedPointer<CaughtFish>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CaughtFish>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<SharedPointer<FishHistory>> * getFishHistoryList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<FishHistory>> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setFishHistoryList(List<SharedPointer<FishHistory>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<FishHistory>> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};