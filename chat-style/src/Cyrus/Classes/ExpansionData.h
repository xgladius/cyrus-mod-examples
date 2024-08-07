#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/ExpansionData__Category.h>

class ExpansionData : public PropertyClass {
public:
    ExpansionData__Category getCategory() { // Property Generated Getter
      return *reinterpret_cast<ExpansionData__Category*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setCategory(ExpansionData__Category val) { // Property Generated Setter
      *reinterpret_cast<ExpansionData__Category*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getMaxExpansions() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setMaxExpansions(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    int getExpansionSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setExpansionSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};