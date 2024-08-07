#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Requirement.h>
#include <Cyrus/Enums/ReqNumeric__OPERATOR_TYPE.h>

class ReqNumeric : public Requirement {
public:
    float getNumericValue() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setNumericValue(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    ReqNumeric__OPERATOR_TYPE getOperatorType() { // Property Generated Getter
      return *reinterpret_cast<ReqNumeric__OPERATOR_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setOperatorType(ReqNumeric__OPERATOR_TYPE val) { // Property Generated Setter
      *reinterpret_cast<ReqNumeric__OPERATOR_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

};