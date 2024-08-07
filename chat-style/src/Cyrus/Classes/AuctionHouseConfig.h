#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class AuctionHouseConfig : public PropertyClass {
public:
    int getMaxCopiesEachTemplate() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMaxCopiesEachTemplate(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    float getItemDegradationTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setItemDegradationTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    Vector<AuctionPriceMods*> * getPriceMods() { // Property Generated Getter
      return reinterpret_cast<Vector<AuctionPriceMods*> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPriceMods(Vector<AuctionPriceMods*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<AuctionPriceMods*> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    Vector<AuctionPriceMods*> * getCraftedPriceMods() { // Property Generated Getter
      return reinterpret_cast<Vector<AuctionPriceMods*> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setCraftedPriceMods(Vector<AuctionPriceMods*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<AuctionPriceMods*> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    int getObserverTimeout() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setObserverTimeout(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    int getMaxReagentTemplateCopies() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setMaxReagentTemplateCopies(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    Vector<AuctionPriceMods*> * getReagentPriceMods() { // Property Generated Getter
      return reinterpret_cast<Vector<AuctionPriceMods*> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setReagentPriceMods(Vector<AuctionPriceMods*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<AuctionPriceMods*> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};