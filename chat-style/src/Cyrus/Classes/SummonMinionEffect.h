#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectBase.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/MinionType.h>

class SummonMinionEffect : public GameEffectBase {
public:
    MinionType getMinionType() { // Property Generated Getter
      return *reinterpret_cast<MinionType*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setMinionType(MinionType val) { // Property Generated Setter
      *reinterpret_cast<MinionType*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    int getSummonedTemplateID() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setSummonedTemplateID(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

};