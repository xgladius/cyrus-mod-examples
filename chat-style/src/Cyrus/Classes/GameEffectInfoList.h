#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class GameEffectInfoList : public PropertyClass {
public:
    List<SharedPointer<GameEffectInfo>> * getGameEffectInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GameEffectInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setGameEffectInfoList(List<SharedPointer<GameEffectInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GameEffectInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};