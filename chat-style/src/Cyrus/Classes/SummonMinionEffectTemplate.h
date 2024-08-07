#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/MinionType.h>

class SummonMinionEffectTemplate : public GameEffectTemplate {
public:
    MinionType getMinionType() { // Property Generated Getter
      return *reinterpret_cast<MinionType*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setMinionType(MinionType val) { // Property Generated Setter
      *reinterpret_cast<MinionType*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    int getSummonedTemplateID() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x16C);
    }

    void setSummonedTemplateID(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x16C) = val;
    }

};