#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ContainerEffect.h>
#include <Cyrus/Classes/GameEffectBase.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/QuestEffectDisplayInfo.h>

class QuestEffect2 : public ContainerEffect {
public:
    List<SharedPointer<QuestEffectDisplayInfo>> * getDisplayInfo() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<QuestEffectDisplayInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setDisplayInfo(List<SharedPointer<QuestEffectDisplayInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<QuestEffectDisplayInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};