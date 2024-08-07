#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/GameEffectTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RequirementList.h>

class ContainerEffectTemplate : public GameEffectTemplate {
public:
    SharedPointer<RequirementList> * getStartReqs() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<RequirementList> *>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setStartReqs(SharedPointer<RequirementList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<RequirementList> **>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    List<SharedPointer<GameEffectInfo>> * getContainerEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GameEffectInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setContainerEffects(List<SharedPointer<GameEffectInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GameEffectInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

    unsigned int getAccompanyID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setAccompanyID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

};