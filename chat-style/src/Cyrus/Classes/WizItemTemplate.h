#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/GameObjectTemplate.h>
#include <Cyrus/Classes/ItemTemplate.h>
#include <Cyrus/Classes/LeashOffsetOverride.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/RarityType.h>

class WizItemTemplate : public ItemTemplate {
public:
    int getNumPrimaryColors() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1AC);
    }

    void setNumPrimaryColors(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1AC) = val;
    }

    int getNumSecondaryColors() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B0);
    }

    void setNumSecondaryColors(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B0) = val;
    }

    int getNumPatterns() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B4);
    }

    void setNumPatterns(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B4) = val;
    }

    std::string getSchool() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setSchool(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    int getArenaPointCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setArenaPointCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    int getPvpCurrencyCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1BC);
    }

    void setPvpCurrencyCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1BC) = val;
    }

    int getPvpTourneyCurrencyCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1C0);
    }

    void setPvpTourneyCurrencyCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1C0) = val;
    }

    int getRank() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setRank(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

    int getBoyIconIndex() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1C4);
    }

    void setBoyIconIndex(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1C4) = val;
    }

    int getGirlIconIndex() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1C8);
    }

    void setGirlIconIndex(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1C8) = val;
    }

    SharedPointer<LeashOffsetOverride> * getLeashOffsetOverride() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<LeashOffsetOverride> *>(reinterpret_cast<uintptr_t>(this) + 0x1D0);
    }

    void setLeashOffsetOverride(SharedPointer<LeashOffsetOverride> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<LeashOffsetOverride> **>(reinterpret_cast<uintptr_t>(this) + 0x1D0) = val;
    }

    RarityType getRarity() { // Property Generated Getter
      return *reinterpret_cast<RarityType*>(reinterpret_cast<uintptr_t>(this) + 0x1CC);
    }

    void setRarity(RarityType val) { // Property Generated Setter
      *reinterpret_cast<RarityType*>(reinterpret_cast<uintptr_t>(this) + 0x1CC) = val;
    }

};