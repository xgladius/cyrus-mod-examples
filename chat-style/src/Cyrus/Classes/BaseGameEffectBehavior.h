#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/GameEffectContainer.h>
#include <Cyrus/Classes/PropertyClass.h>

class BaseGameEffectBehavior : public BehaviorInstance {
public:
    SharedPointer<GameEffectContainer> * getGameEffects() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<GameEffectContainer> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setGameEffects(SharedPointer<GameEffectContainer> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<GameEffectContainer> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};