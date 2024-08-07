#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AdvPvPEloRecord.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>

class AdvPvPEloBehavior : public BehaviorInstance {
public:
    bool getLoaded() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setLoaded(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<SharedPointer<AdvPvPEloRecord>> * getEntries() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<AdvPvPEloRecord>> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setEntries(List<SharedPointer<AdvPvPEloRecord>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<AdvPvPEloRecord>> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    SharedPointer<AdvPvPEloRecord> * getRecordCache() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<AdvPvPEloRecord> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setRecordCache(SharedPointer<AdvPvPEloRecord> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<AdvPvPEloRecord> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};