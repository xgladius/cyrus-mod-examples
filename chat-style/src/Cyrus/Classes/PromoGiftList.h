#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PromoGift.h>
#include <Cyrus/Classes/PropertyClass.h>

class PromoGiftList : public PropertyClass {
public:
    List<SharedPointer<PromoGift>> * getPromoGifts() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PromoGift>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPromoGifts(List<SharedPointer<PromoGift>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PromoGift>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};