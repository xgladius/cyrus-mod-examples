#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ConditionalSpellEffectRequirement.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Requirement.h>
#include <Cyrus/Enums/SpellEffect__kHangingDisposition.h>

class ReqHangingOverTime : public ConditionalSpellEffectRequirement {
public:
    SpellEffect__kHangingDisposition getDisposition() { // Property Generated Getter
      return *reinterpret_cast<SpellEffect__kHangingDisposition*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setDisposition(SpellEffect__kHangingDisposition val) { // Property Generated Setter
      *reinterpret_cast<SpellEffect__kHangingDisposition*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    int getMinCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setMinCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    int getMaxCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setMaxCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};