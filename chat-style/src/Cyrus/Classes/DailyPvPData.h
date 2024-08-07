#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DailyPvPInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class DailyPvPData : public PropertyClass {
public:
    List<SharedPointer<DailyPvPInfo>> * getDailyPvPList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DailyPvPInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDailyPvPList(List<SharedPointer<DailyPvPInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DailyPvPInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};