#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/MoraleModificationMap.h>
#include <Cyrus/Classes/PropertyClass.h>

class DerbyModifyMoraleChance : public DerbyEffect {
public:
    MoraleModificationMap getMoraleChanceActionMap() { // Property Generated Getter
      return *reinterpret_cast<MoraleModificationMap*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setMoraleChanceActionMap(MoraleModificationMap val) { // Property Generated Setter
      *reinterpret_cast<MoraleModificationMap*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

};