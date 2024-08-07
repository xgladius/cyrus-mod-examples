#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class WishlistItemInfo : public PropertyClass {
public:
    unsigned int getTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned short getKeepOnWishlistAfterPurchase() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setKeepOnWishlistAfterPurchase(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

};