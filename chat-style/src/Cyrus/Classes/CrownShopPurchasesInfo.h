#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CrownShopPurchase.h>
#include <Cyrus/Classes/PropertyClass.h>

class CrownShopPurchasesInfo : public PropertyClass {
public:
    List<SharedPointer<CrownShopPurchase>> * getCrownShopPurchases() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CrownShopPurchase>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setCrownShopPurchases(List<SharedPointer<CrownShopPurchase>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CrownShopPurchase>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};