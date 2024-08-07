#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BattleCardPurchaseInfo.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PolymorphRatingInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class PolymorphBattlegroundsBehaviorTemplate : public BehaviorTemplate {
public:
    int getMaxTempStartingPips() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setMaxTempStartingPips(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    int getMaxTempStartingPowerPips() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setMaxTempStartingPowerPips(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    int getMaxHandSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setMaxHandSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    int getPointValue() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setPointValue(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    List<SharedPointer<BattleCardPurchaseInfo>> * getBattleCardsForSale() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BattleCardPurchaseInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setBattleCardsForSale(List<SharedPointer<BattleCardPurchaseInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BattleCardPurchaseInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    Vector<SharedPointer<PolymorphRatingInfo>> * getRatingInfo() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<PolymorphRatingInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setRatingInfo(Vector<SharedPointer<PolymorphRatingInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<PolymorphRatingInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    List<Ingredient*> * getLevelUpIngredients() { // Property Generated Getter
      return reinterpret_cast<List<Ingredient*> *>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setLevelUpIngredients(List<Ingredient*> * val) { // Property Generated Setter
      *reinterpret_cast<List<Ingredient*> **>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    int getLevelUpCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setLevelUpCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

};