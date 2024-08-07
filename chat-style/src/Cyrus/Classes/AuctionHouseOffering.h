#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AuctionHouseEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class AuctionHouseOffering : public PropertyClass {
public:
    List<SharedPointer<AuctionHouseEntry>> * getAuctionList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<AuctionHouseEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAuctionList(List<SharedPointer<AuctionHouseEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<AuctionHouseEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getAuctionHousePurchaseKey() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setAuctionHousePurchaseKey(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};