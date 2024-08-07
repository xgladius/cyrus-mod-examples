#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DyeShopModifiers.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ShoppingColorModifiers.h>
#include <Cyrus/Classes/ShoppingSellModifiers.h>
#include <Cyrus/Classes/TreasureShopModifiers.h>

class PriceModifiers : public PropertyClass {
public:
    SharedPointer<ShoppingColorModifiers> * getShoppingColors() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ShoppingColorModifiers> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setShoppingColors(SharedPointer<ShoppingColorModifiers> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ShoppingColorModifiers> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<DyeShopModifiers> * getDyeShopMods() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<DyeShopModifiers> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setDyeShopMods(SharedPointer<DyeShopModifiers> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<DyeShopModifiers> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    SharedPointer<ShoppingSellModifiers> * getSellMods() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ShoppingSellModifiers> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setSellMods(SharedPointer<ShoppingSellModifiers> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ShoppingSellModifiers> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    SharedPointer<TreasureShopModifiers> * getTreasureMods() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<TreasureShopModifiers> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setTreasureMods(SharedPointer<TreasureShopModifiers> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<TreasureShopModifiers> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};