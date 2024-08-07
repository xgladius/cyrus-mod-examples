#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class CurrentQuestCompilation : public PropertyClass {
public:
    List<QuestEntry*> * getQuestEntries() { // Property Generated Getter
      return reinterpret_cast<List<QuestEntry*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setQuestEntries(List<QuestEntry*> * val) { // Property Generated Setter
      *reinterpret_cast<List<QuestEntry*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};