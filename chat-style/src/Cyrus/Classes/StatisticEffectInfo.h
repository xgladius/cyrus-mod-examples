#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class StatisticEffectInfo : public GameEffectInfo {
public:
    int getLookupIndex() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setLookupIndex(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};