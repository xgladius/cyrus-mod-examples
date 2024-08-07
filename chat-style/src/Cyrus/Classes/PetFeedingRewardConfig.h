#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetFeedingRewardConfig : public PropertyClass {
public:
    Vector<PetFeedingRewardInfo*> * getStandardItemFeedingRewards() { // Property Generated Getter
      return reinterpret_cast<Vector<PetFeedingRewardInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setStandardItemFeedingRewards(Vector<PetFeedingRewardInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<PetFeedingRewardInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Vector<PetFeedingRewardInfo*> * getCrownsFeedingRewards() { // Property Generated Getter
      return reinterpret_cast<Vector<PetFeedingRewardInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setCrownsFeedingRewards(Vector<PetFeedingRewardInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<PetFeedingRewardInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    float getFGoldScalingFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setFGoldScalingFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};