#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BattleCardPurchaseInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellData.h>

class BattleCardShopOffering : public PropertyClass {
public:
    List<SharedPointer<BattleCardPurchaseInfo>> * getBattleCardsForSale() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BattleCardPurchaseInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBattleCardsForSale(List<SharedPointer<BattleCardPurchaseInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BattleCardPurchaseInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<SpellData>> * getGivenSpells() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellData>> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setGivenSpells(List<SharedPointer<SpellData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellData>> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    int getMaxTotalBattleCards() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setMaxTotalBattleCards(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<std::string> getNextLevelBattleCards() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setNextLevelBattleCards(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};