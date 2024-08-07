#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Requirement.h>

class RequirementList : public Requirement {
public:
    List<Requirement*> * getRequirements() { // Property Generated Getter
      return reinterpret_cast<List<Requirement*> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setRequirements(List<Requirement*> * val) { // Property Generated Setter
      *reinterpret_cast<List<Requirement*> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};