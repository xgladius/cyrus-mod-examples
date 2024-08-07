#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/ElixirBehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TimedItemBehaviorTemplate.h>

class ElixirBenefitBehaviorTemplate : public ElixirBehaviorTemplate {
public:
    std::string getClassProjectName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setClassProjectName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

};