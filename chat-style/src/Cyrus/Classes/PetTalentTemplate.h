#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PetStat.h>
#include <Cyrus/Classes/PetTalentBaseTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetTalentTemplate : public PetTalentBaseTemplate {
public:
    List<GameEffectInfo*> * getEffectList() { // Property Generated Getter
      return reinterpret_cast<List<GameEffectInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setEffectList(List<GameEffectInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<GameEffectInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    List<PetStat> getMaxStatList() { // Property Generated Getter
      return *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setMaxStatList(List<PetStat> val) { // Property Generated Setter
      *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

};