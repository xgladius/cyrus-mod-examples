#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class SigilTemplate : public CoreTemplate {
public:
    std::string getSigilName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setSigilName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    std::string getSigilType() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setSigilType(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    ResultList* * getEntryResults() { // Property Generated Getter
      return reinterpret_cast<ResultList* *>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setEntryResults(ResultList* * val) { // Property Generated Setter
      *reinterpret_cast<ResultList* **>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    RequirementList* * getRequirements() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setRequirements(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    ResultList* * getCancelResults() { // Property Generated Getter
      return reinterpret_cast<ResultList* *>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setCancelResults(ResultList* * val) { // Property Generated Setter
      *reinterpret_cast<ResultList* **>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    ResultList* * getCompleteResults() { // Property Generated Getter
      return reinterpret_cast<ResultList* *>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setCompleteResults(ResultList* * val) { // Property Generated Setter
      *reinterpret_cast<ResultList* **>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    bool getUseState() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setUseState(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    std::string getStateOverride() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setStateOverride(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    List<SigilSubCircle*> * getSubCircles() { // Property Generated Getter
      return reinterpret_cast<List<SigilSubCircle*> *>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setSubCircles(List<SigilSubCircle*> * val) { // Property Generated Setter
      *reinterpret_cast<List<SigilSubCircle*> **>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

};