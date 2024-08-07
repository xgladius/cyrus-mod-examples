#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ResultList.h>
#include <Cyrus/Classes/ZoneTokenBase.h>
#include <Cyrus/Enums/ZTCounterType.h>

class ZoneTokenCount : public ZoneTokenBase {
public:
    int getMinValue() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setMinValue(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    int getStartValue() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x124);
    }

    void setStartValue(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x124) = val;
    }

    int getMaxValue() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setMaxValue(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    int getCurValue() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x12C);
    }

    void setCurValue(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x12C) = val;
    }

    ZTCounterType getCounterType() { // Property Generated Getter
      return *reinterpret_cast<ZTCounterType*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setCounterType(ZTCounterType val) { // Property Generated Setter
      *reinterpret_cast<ZTCounterType*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    SharedPointer<ResultList> * getOnIncrease() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setOnIncrease(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    SharedPointer<ResultList> * getOnDecrease() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setOnDecrease(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    SharedPointer<ResultList> * getOnEmpty() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setOnEmpty(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    SharedPointer<ResultList> * getOnFull() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setOnFull(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

};