#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class GoalCompilation : public PropertyClass {
public:
    List<GoalEntryFull*> * getGoals() { // Property Generated Getter
      return reinterpret_cast<List<GoalEntryFull*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setGoals(List<GoalEntryFull*> * val) { // Property Generated Setter
      *reinterpret_cast<List<GoalEntryFull*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};