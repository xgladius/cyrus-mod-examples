#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MyStitchEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class MyStitchEntryList : public PropertyClass {
public:
    List<SharedPointer<MyStitchEntry>> * getMyStitchEntryList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MyStitchEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMyStitchEntryList(List<SharedPointer<MyStitchEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MyStitchEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    bool getHasEventJudgesChoiceAvailable() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setHasEventJudgesChoiceAvailable(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};