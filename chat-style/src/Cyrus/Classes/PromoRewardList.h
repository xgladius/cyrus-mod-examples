#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PromoReward.h>
#include <Cyrus/Classes/PropertyClass.h>

class PromoRewardList : public PropertyClass {
public:
    List<SharedPointer<PromoReward>> * getPromoRewards() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PromoReward>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPromoRewards(List<SharedPointer<PromoReward>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PromoReward>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};