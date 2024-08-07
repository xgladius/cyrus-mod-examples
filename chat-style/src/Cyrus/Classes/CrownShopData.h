#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CrownShopItem.h>
#include <Cyrus/Classes/CrownShopLayout.h>
#include <Cyrus/Classes/CrownShopSegReqsSummary.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Reco::LevelData.h>

class CrownShopData : public PropertyClass {
public:
    List<SharedPointer<CrownShopItem>> * getItems() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CrownShopItem>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setItems(List<SharedPointer<CrownShopItem>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CrownShopItem>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<CrownShopLayout> * getCrownShopLayout() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<CrownShopLayout> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setCrownShopLayout(SharedPointer<CrownShopLayout> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<CrownShopLayout> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    SharedPointer<Reco__LevelData> * getRecomendedItems() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Reco__LevelData> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setRecomendedItems(SharedPointer<Reco__LevelData> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Reco__LevelData> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    SharedPointer<CrownShopSegReqsSummary> * getCrownShopSegReqsSummary() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<CrownShopSegReqsSummary> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setCrownShopSegReqsSummary(SharedPointer<CrownShopSegReqsSummary> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<CrownShopSegReqsSummary> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    int getWishlistMaxSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setWishlistMaxSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    int getWishlistSBExpansionSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setWishlistSBExpansionSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

};