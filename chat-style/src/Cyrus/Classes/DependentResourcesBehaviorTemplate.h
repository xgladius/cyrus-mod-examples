#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/DependentResourceContainer.h>
#include <Cyrus/Classes/PropertyClass.h>

class DependentResourcesBehaviorTemplate : public BehaviorTemplate {
public:
    List<DependentResourceContainer> getDependentResourceList() { // Property Generated Getter
      return *reinterpret_cast<List<DependentResourceContainer>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setDependentResourceList(List<DependentResourceContainer> val) { // Property Generated Setter
      *reinterpret_cast<List<DependentResourceContainer>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};