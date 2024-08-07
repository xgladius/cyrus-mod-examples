#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/LootInfo.h>
#include <Cyrus/Classes/LootInfoBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class PvPCurrencyBonusLootInfo : public LootInfo {
public:
    int getPvpCurrencyBonusAmount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPvpCurrencyBonusAmount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};