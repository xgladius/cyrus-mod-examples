#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Requirement.h>
#include <Cyrus/Classes/RequirementList.h>
#include <Cyrus/Classes/ServiceOptionBase.h>

class WizTrainingOption : public ServiceOptionBase {
public:
    int getTrainingIndex() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setTrainingIndex(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    int getTrainingCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC);
    }

    void setTrainingCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC) = val;
    }

    std::string getSpellName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setSpellName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    bool getBCanTrain() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setBCanTrain(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

    int getRequiredLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setRequiredLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    SharedPointer<RequirementList> * getRequirements() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<RequirementList> *>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setRequirements(SharedPointer<RequirementList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<RequirementList> **>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    SharedPointer<Requirement> * getFailedRequirement() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Requirement> *>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setFailedRequirement(SharedPointer<Requirement> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Requirement> **>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

};