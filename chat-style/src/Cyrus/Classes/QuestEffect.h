#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectBase.h>
#include <Cyrus/Classes/NamedEffect.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RequirementList.h>
#include <Cyrus/Classes/ResultList.h>

class QuestEffect : public NamedEffect {
public:
    SharedPointer<RequirementList> * getStartReqs() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<RequirementList> *>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setStartReqs(SharedPointer<RequirementList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<RequirementList> **>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    SharedPointer<ResultList> * getStartResults() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setStartResults(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    SharedPointer<ResultList> * getEndResults() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setEndResults(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

};