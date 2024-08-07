#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DaysSinceItemPurchased.h>
#include <Cyrus/Classes/NumCategoryInInventory.h>
#include <Cyrus/Classes/NumItemInInventory.h>
#include <Cyrus/Classes/PlayerHasBadge.h>
#include <Cyrus/Classes/PropertyClass.h>

class SegmentationInputData : public PropertyClass {
public:
    bool getBIsValidSegmentationData() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBIsValidSegmentationData(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getPlayerLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setPlayerLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    std::string getPlayerSchoolOfFocus() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPlayerSchoolOfFocus(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    int getAccountNDaysAged() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setAccountNDaysAged(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    int getAccountNDaysSinceLastLogin() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setAccountNDaysSinceLastLogin(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    int getAccountNDaysSinceLastPurchase() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setAccountNDaysSinceLastPurchase(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    int getAccountNDaysLastCrownsPurchase() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setAccountNDaysLastCrownsPurchase(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    int getAccountIsMember() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setAccountIsMember(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    int getAccountIsCSR() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setAccountIsCSR(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    int getAccountNCrownsSpent() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setAccountNCrownsSpent(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    int getAccountNCrownsInWallet() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setAccountNCrownsInWallet(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    List<SharedPointer<DaysSinceItemPurchased>> * getAccountNDaysSinceItemPurchased() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DaysSinceItemPurchased>> *>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setAccountNDaysSinceItemPurchased(List<SharedPointer<DaysSinceItemPurchased>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DaysSinceItemPurchased>> **>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    List<SharedPointer<NumItemInInventory>> * getNumOfParticularItemInInventory() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<NumItemInInventory>> *>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setNumOfParticularItemInInventory(List<SharedPointer<NumItemInInventory>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<NumItemInInventory>> **>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    List<SharedPointer<NumCategoryInInventory>> * getNumItemsOfCategoryInInventory() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<NumCategoryInInventory>> *>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setNumItemsOfCategoryInInventory(List<SharedPointer<NumCategoryInInventory>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<NumCategoryInInventory>> **>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    List<SharedPointer<PlayerHasBadge>> * getPlayerHasBadge() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PlayerHasBadge>> *>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setPlayerHasBadge(List<SharedPointer<PlayerHasBadge>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PlayerHasBadge>> **>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    int getAccountNHighestWorld() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setAccountNHighestWorld(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

};