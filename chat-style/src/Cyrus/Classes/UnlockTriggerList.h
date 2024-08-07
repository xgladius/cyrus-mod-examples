#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/UnlockTriggerInfo.h>

class UnlockTriggerList : public PropertyClass {
public:
    List<SharedPointer<UnlockTriggerInfo>> * getUnlockTriggerList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<UnlockTriggerInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setUnlockTriggerList(List<SharedPointer<UnlockTriggerInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<UnlockTriggerInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};