#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectTimerTrigger.h>
#include <Cyrus/Classes/PropertyClass.h>

class GameEffectTimerSoundTrigger : public GameEffectTimerTrigger {
public:
    List<std::string> getSoundFiles() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setSoundFiles(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};