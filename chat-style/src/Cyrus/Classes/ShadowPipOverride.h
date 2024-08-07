#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CombatRule.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/kShadow_Threshold_Type.h>

class ShadowPipOverride : public CombatRule {
public:
    kShadow_Threshold_Type getShadowThresholdType() { // Property Generated Getter
      return *reinterpret_cast<kShadow_Threshold_Type*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setShadowThresholdType(kShadow_Threshold_Type val) { // Property Generated Setter
      *reinterpret_cast<kShadow_Threshold_Type*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    float getShadowThresholdFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setShadowThresholdFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    float getShadowPipRatingFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setShadowPipRatingFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};