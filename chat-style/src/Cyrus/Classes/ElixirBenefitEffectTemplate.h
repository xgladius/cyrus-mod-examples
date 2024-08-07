#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class ElixirBenefitEffectTemplate : public GameEffectTemplate {
public:
    unsigned int getFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setFlags(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

};