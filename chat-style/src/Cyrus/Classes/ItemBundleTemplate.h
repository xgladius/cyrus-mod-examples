#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/GameObjectTemplate.h>
#include <Cyrus/Classes/ItemTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizItemTemplate.h>
#include <Cyrus/Enums/ItemBundleTemplate__AcquireConditionType.h>
#include <Cyrus/Enums/ItemBundleTemplate__BundleContentsType.h>

class ItemBundleTemplate : public WizItemTemplate {
public:
    List<gid> getBundleItems() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setBundleItems(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    List<gid> getBundleFreeItems() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setBundleFreeItems(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    List<gid> getBundleItemsToGrant() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x220);
    }

    void setBundleItemsToGrant(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x220) = val;
    }

    List<gid> getFeaturedRewards() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setFeaturedRewards(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    ItemBundleTemplate__AcquireConditionType getAcquireCondition() { // Property Generated Getter
      return *reinterpret_cast<ItemBundleTemplate__AcquireConditionType*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setAcquireCondition(ItemBundleTemplate__AcquireConditionType val) { // Property Generated Setter
      *reinterpret_cast<ItemBundleTemplate__AcquireConditionType*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

    ItemBundleTemplate__BundleContentsType getBundleContentsType() { // Property Generated Getter
      return *reinterpret_cast<ItemBundleTemplate__BundleContentsType*>(reinterpret_cast<uintptr_t>(this) + 0x214);
    }

    void setBundleContentsType(ItemBundleTemplate__BundleContentsType val) { // Property Generated Setter
      *reinterpret_cast<ItemBundleTemplate__BundleContentsType*>(reinterpret_cast<uintptr_t>(this) + 0x214) = val;
    }

    int getBundleSavings() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setBundleSavings(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

};