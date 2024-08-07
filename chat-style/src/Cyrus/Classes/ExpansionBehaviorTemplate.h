#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/ExpansionData.h>
#include <Cyrus/Classes/PropertyClass.h>

class ExpansionBehaviorTemplate : public BehaviorTemplate {
public:
    List<SharedPointer<ExpansionData>> * getExpansions() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ExpansionData>> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setExpansions(List<SharedPointer<ExpansionData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ExpansionData>> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};