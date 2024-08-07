#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class LoyaltyPurchaseEntry : public PropertyClass {
public:
    int getTimeOfPurchase() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTimeOfPurchase(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    gid getCharID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setCharID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    std::string getPackedName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPackedName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    unsigned int getItemTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setItemTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    int getTokensAmount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setTokensAmount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    int getTokensBalance() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setTokensBalance(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};