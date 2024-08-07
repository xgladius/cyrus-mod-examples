#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CombatTriggerDescription.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class ProvideCombatTriggerInfo : public GameEffectInfo {
public:
    std::string getTriggerName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setTriggerName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    SharedPointer<CombatTriggerDescription> * getTriggerDescription() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<CombatTriggerDescription> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setTriggerDescription(SharedPointer<CombatTriggerDescription> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<CombatTriggerDescription> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};