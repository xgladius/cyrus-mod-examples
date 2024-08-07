#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/MatchCostAdjustment__ADJUSTMENT_TYPE.h>

class MatchCostAdjustment : public PropertyClass {
public:
    MatchCostAdjustment__ADJUSTMENT_TYPE getMatchAdjustmentType() { // Property Generated Getter
      return *reinterpret_cast<MatchCostAdjustment__ADJUSTMENT_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMatchAdjustmentType(MatchCostAdjustment__ADJUSTMENT_TYPE val) { // Property Generated Setter
      *reinterpret_cast<MatchCostAdjustment__ADJUSTMENT_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};