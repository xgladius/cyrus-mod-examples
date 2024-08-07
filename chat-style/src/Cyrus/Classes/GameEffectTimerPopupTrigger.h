#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectTimerTrigger.h>
#include <Cyrus/Classes/PropertyClass.h>

class GameEffectTimerPopupTrigger : public GameEffectTimerTrigger {
public:
    std::string getPopupKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPopupKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};