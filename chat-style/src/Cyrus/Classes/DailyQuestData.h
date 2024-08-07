#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DailyQuestInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class DailyQuestData : public PropertyClass {
public:
    List<SharedPointer<DailyQuestInfo>> * getDailyQuestList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DailyQuestInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDailyQuestList(List<SharedPointer<DailyQuestInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DailyQuestInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};