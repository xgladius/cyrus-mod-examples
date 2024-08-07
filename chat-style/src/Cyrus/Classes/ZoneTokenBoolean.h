#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ResultList.h>
#include <Cyrus/Classes/ZoneTokenBase.h>

class ZoneTokenBoolean : public ZoneTokenBase {
public:
    SharedPointer<ResultList> * getOnSet() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setOnSet(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    SharedPointer<ResultList> * getOnClear() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setOnClear(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    bool getBSet() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setBSet(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

};