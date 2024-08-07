#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActiveTimedPassEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class ActiveTimedAccessPassList : public PropertyClass {
public:
    List<SharedPointer<ActiveTimedPassEntry>> * getPassList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ActiveTimedPassEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPassList(List<SharedPointer<ActiveTimedPassEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ActiveTimedPassEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};