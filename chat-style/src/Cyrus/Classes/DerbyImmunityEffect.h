#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/PropertyClass.h>

class DerbyImmunityEffect : public DerbyEffect {
public:
    bool getBToDebuffs() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setBToDebuffs(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

};