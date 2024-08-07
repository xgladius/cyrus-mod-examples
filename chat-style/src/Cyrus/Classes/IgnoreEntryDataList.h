#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/IgnoreEntryData.h>
#include <Cyrus/Classes/PropertyClass.h>

class IgnoreEntryDataList : public PropertyClass {
public:
    List<SharedPointer<IgnoreEntryData>> * getIgnoreDataList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<IgnoreEntryData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setIgnoreDataList(List<SharedPointer<IgnoreEntryData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<IgnoreEntryData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};