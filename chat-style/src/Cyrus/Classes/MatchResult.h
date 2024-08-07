#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Result.h>

class MatchResult : public Result {
public:
    RequirementList* * getRequirements() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setRequirements(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    ResultList* * getResults() { // Property Generated Getter
      return reinterpret_cast<ResultList* *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setResults(ResultList* * val) { // Property Generated Setter
      *reinterpret_cast<ResultList* **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};