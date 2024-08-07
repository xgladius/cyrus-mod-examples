#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class QuestCompilation : public PropertyClass {
public:
    List<PrepEntry*> * getPrepEntries() { // Property Generated Getter
      return reinterpret_cast<List<PrepEntry*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPrepEntries(List<PrepEntry*> * val) { // Property Generated Setter
      *reinterpret_cast<List<PrepEntry*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<UnderwayEntry*> * getUnderwayEntries() { // Property Generated Getter
      return reinterpret_cast<List<UnderwayEntry*> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setUnderwayEntries(List<UnderwayEntry*> * val) { // Property Generated Setter
      *reinterpret_cast<List<UnderwayEntry*> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<AvailableCompleteEntry*> * getAvailableCompleteEntries() { // Property Generated Getter
      return reinterpret_cast<List<AvailableCompleteEntry*> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setAvailableCompleteEntries(List<AvailableCompleteEntry*> * val) { // Property Generated Setter
      *reinterpret_cast<List<AvailableCompleteEntry*> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<AvailableQuestEntry*> * getAvailableQuestEntries() { // Property Generated Getter
      return reinterpret_cast<List<AvailableQuestEntry*> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setAvailableQuestEntries(List<AvailableQuestEntry*> * val) { // Property Generated Setter
      *reinterpret_cast<List<AvailableQuestEntry*> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};