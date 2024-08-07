#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class GameEffectContainer : public PropertyClass {
public:
    List<SharedPointer<GameEffectBase>> * getPublicEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GameEffectBase>> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPublicEffects(List<SharedPointer<GameEffectBase>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GameEffectBase>> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<SharedPointer<GameEffectBase>> * getMyEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GameEffectBase>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMyEffects(List<SharedPointer<GameEffectBase>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GameEffectBase>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};