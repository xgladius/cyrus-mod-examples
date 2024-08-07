#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Requirement.h>
#include <Cyrus/Enums/ExpansionData__Category.h>

class ReqCanAddExpansion : public Requirement {
public:
    ExpansionData__Category getCategory() { // Property Generated Getter
      return *reinterpret_cast<ExpansionData__Category*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setCategory(ExpansionData__Category val) { // Property Generated Setter
      *reinterpret_cast<ExpansionData__Category*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};