#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActorDialog.h>
#include <Cyrus/Classes/PropertyClass.h>

class QuestListPage__DialogDataCacheEntry : public PropertyClass {
public:
    SharedPointer<ActorDialog> * getDialog() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ActorDialog> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDialog(SharedPointer<ActorDialog> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ActorDialog> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getGoalCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setGoalCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};