#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/LoyaltyPurchaseEntry.h>
#include <Cyrus/Classes/LoyaltyPurchaseLimitCounterEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class LoyaltyInfoUpdateData : public PropertyClass {
public:
    int getLoyaltyNumTokens() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLoyaltyNumTokens(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getLoyaltyTier() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setLoyaltyTier(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    int getLoyaltyLastTier() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setLoyaltyLastTier(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    int getLoyaltyNumTokensCanClaim() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setLoyaltyNumTokensCanClaim(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    unsigned int getLoyaltyPurchaseHistoryLimit() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setLoyaltyPurchaseHistoryLimit(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<SharedPointer<LoyaltyPurchaseEntry>> * getLoyaltyPurchaseHistoryData() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<LoyaltyPurchaseEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setLoyaltyPurchaseHistoryData(List<SharedPointer<LoyaltyPurchaseEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<LoyaltyPurchaseEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    List<SharedPointer<LoyaltyPurchaseLimitCounterEntry>> * getLoyaltyPurchaseLimitCountersData() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<LoyaltyPurchaseLimitCounterEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setLoyaltyPurchaseLimitCountersData(List<SharedPointer<LoyaltyPurchaseLimitCounterEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<LoyaltyPurchaseLimitCounterEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};