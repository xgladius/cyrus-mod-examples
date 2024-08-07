#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/LootInfoBase.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/LootInfo__LOOT_TYPE.h>

class LootInfo : public LootInfoBase {
public:
    LootInfo__LOOT_TYPE getLootType() { // Property Generated Getter
      return *reinterpret_cast<LootInfo__LOOT_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLootType(LootInfo__LOOT_TYPE val) { // Property Generated Setter
      *reinterpret_cast<LootInfo__LOOT_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};