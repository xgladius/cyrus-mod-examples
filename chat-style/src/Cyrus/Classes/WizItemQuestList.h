#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizItemLocations.h>
#include <Cyrus/Classes/WizItemQuestData.h>

class WizItemQuestList : public WizItemLocations {
public:
    List<SharedPointer<WizItemQuestData>> * getQuests() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<WizItemQuestData>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setQuests(List<SharedPointer<WizItemQuestData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<WizItemQuestData>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};