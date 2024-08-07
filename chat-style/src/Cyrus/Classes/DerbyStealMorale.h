#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/PropertyClass.h>

class DerbyStealMorale : public DerbyEffect {
public:
    int getNAmountToSteal() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setNAmountToSteal(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

};