#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AreaBehavior.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/LinearSoundBehavior.h>
#include <Cyrus/Classes/PositionalSoundBehavior.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoundBehavior.h>

class LinearStateSoundBehavior : public LinearSoundBehavior {
public:
    std::string getAnimationName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2B0);
    }

    void setAnimationName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2B0) = val;
    }

};