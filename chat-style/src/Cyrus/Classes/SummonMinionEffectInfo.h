#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/MinionType.h>

class SummonMinionEffectInfo : public GameEffectInfo {
public:
    MinionType getMinionType() { // Property Generated Getter
      return *reinterpret_cast<MinionType*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setMinionType(MinionType val) { // Property Generated Setter
      *reinterpret_cast<MinionType*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    int getSummonedTemplateID() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setSummonedTemplateID(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

};