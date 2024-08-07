#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientWizEquipmentBehavior.h>
#include <Cyrus/Classes/ClientWizInventoryBehavior.h>
#include <Cyrus/Classes/CrownShopLayout.h>
#include <Cyrus/Classes/PermShopItemData.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class PermanentShop : public Window {
public:
    int getCurrentTab() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3B0);
    }

    void setCurrentTab(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3B0) = val;
    }

    int getTotalCrowns() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x300);
    }

    void setTotalCrowns(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x300) = val;
    }

    SharedPointer<ClientWizInventoryBehavior> * getPInventory() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ClientWizInventoryBehavior> *>(reinterpret_cast<uintptr_t>(this) + 0x5A8);
    }

    void setPInventory(SharedPointer<ClientWizInventoryBehavior> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ClientWizInventoryBehavior> **>(reinterpret_cast<uintptr_t>(this) + 0x5A8) = val;
    }

    SharedPointer<ClientWizEquipmentBehavior> * getPEquipment() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ClientWizEquipmentBehavior> *>(reinterpret_cast<uintptr_t>(this) + 0x5B8);
    }

    void setPEquipment(SharedPointer<ClientWizEquipmentBehavior> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ClientWizEquipmentBehavior> **>(reinterpret_cast<uintptr_t>(this) + 0x5B8) = val;
    }

    std::string getBuyBtnDisableReason() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x588);
    }

    void setBuyBtnDisableReason(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x588) = val;
    }

    SharedPointer<PermShopItemData> LuaGetSelectedCurrentDisplayedListItem(int a0) { // Function Generated
        using FunctionPointerType = SharedPointer<PermShopItemData> (*)(PermanentShop *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x987610);
        return inner(this, a0);
    }

    SharedPointer<PermShopItemData> LuaGetSelectedCurrentRecoListItem(int a0) { // Function Generated
        using FunctionPointerType = SharedPointer<PermShopItemData> (*)(PermanentShop *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x9876F0);
        return inner(this, a0);
    }

    int LuaGetCurrentDisplayedListItemSize() { // Function Generated
        using FunctionPointerType = int (*)(PermanentShop *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x9877D0);
        return inner(this);
    }

    int LuaGetCurrentRecoListItemSize() { // Function Generated
        using FunctionPointerType = int (*)(PermanentShop *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x9877F0);
        return inner(this);
    }

    void HandleCategoryChange(int a0) { // Function Generated
        using FunctionPointerType = void (*)(PermanentShop *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x97E950);
        return inner(this, a0);
    }

    void HandleMenuChange(int a0) { // Function Generated
        using FunctionPointerType = void (*)(PermanentShop *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x97E940);
        return inner(this, a0);
    }

    int LuaGetLayoutCategoryListSize() { // Function Generated
        using FunctionPointerType = int (*)(PermanentShop *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x987810);
        return inner(this);
    }

    SharedPointer<CrownShopLayout> LuaGetLayout() { // Function Generated
        using FunctionPointerType = SharedPointer<CrownShopLayout> (*)(PermanentShop *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x987A80);
        return inner(this);
    }

    void ChangeCurrencyTab(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(PermanentShop *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x97BA50);
        return inner(this, a0);
    }

    void ClickBuyButton(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(PermanentShop *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x97A6F0);
        return inner(this, a0);
    }

    void OnSelect(struct CrownShopViews::OnSelectCallbackArg a0) { // Function Generated
        using FunctionPointerType = void (*)(PermanentShop *self, struct CrownShopViews::OnSelectCallbackArg a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x9850C0);
        return inner(this, a0);
    }

};