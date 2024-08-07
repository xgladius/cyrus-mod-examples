#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class PromoGift : public PropertyClass {
public:
    unsigned __int64 getRewardID() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setRewardID(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned __int64 getRewardModifier() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setRewardModifier(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    std::string getGiftID() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setGiftID(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};