#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CastleTourMyCastleData.h>
#include <Cyrus/Classes/PropertyClass.h>

class CastleTourMyCastleDataList : public PropertyClass {
public:
    List<SharedPointer<CastleTourMyCastleData>> * getEntryList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CastleTourMyCastleData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEntryList(List<SharedPointer<CastleTourMyCastleData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CastleTourMyCastleData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};