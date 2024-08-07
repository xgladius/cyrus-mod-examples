#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/Requirement__Operator.h>

class Requirement : public PropertyClass {
public:
    bool getApplyNOT() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setApplyNOT(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Requirement__Operator getOperator() { // Property Generated Getter
      return *reinterpret_cast<Requirement__Operator*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setOperator(Requirement__Operator val) { // Property Generated Setter
      *reinterpret_cast<Requirement__Operator*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

};