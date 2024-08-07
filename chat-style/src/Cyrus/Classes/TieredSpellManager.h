#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TieredSpellConfig.h>

class TieredSpellManager : public PropertyClass {
public:
    SharedPointer<TieredSpellConfig> * getTieredSpellConfig() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<TieredSpellConfig> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setTieredSpellConfig(SharedPointer<TieredSpellConfig> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<TieredSpellConfig> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};