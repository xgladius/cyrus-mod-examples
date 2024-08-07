#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/LootInfo__LOOT_TYPE.h>

class BoosterPackLootTypeMaxes : public PropertyClass {
public:
    LootInfo__LOOT_TYPE getLootType() { // Property Generated Getter
      return *reinterpret_cast<LootInfo__LOOT_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLootType(LootInfo__LOOT_TYPE val) { // Property Generated Setter
      *reinterpret_cast<LootInfo__LOOT_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getMax() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setMax(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

};