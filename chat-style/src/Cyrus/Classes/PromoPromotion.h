#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PromoRewardList.h>
#include <Cyrus/Classes/PropertyClass.h>

class PromoPromotion : public PropertyClass {
public:
    std::string getPromoID() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPromoID(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getPromoTitle() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setPromoTitle(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getPromoDesc() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setPromoDesc(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    PromoRewardList getInviterRewards() { // Property Generated Getter
      return *reinterpret_cast<PromoRewardList*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setInviterRewards(PromoRewardList val) { // Property Generated Setter
      *reinterpret_cast<PromoRewardList*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    PromoRewardList getInviteeRewards() { // Property Generated Getter
      return *reinterpret_cast<PromoRewardList*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setInviteeRewards(PromoRewardList val) { // Property Generated Setter
      *reinterpret_cast<PromoRewardList*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

};