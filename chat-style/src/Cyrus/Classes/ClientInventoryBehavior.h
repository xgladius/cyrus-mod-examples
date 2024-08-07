#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/CoreObject.h>
#include <Cyrus/Classes/InventoryBehaviorBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClientInventoryBehavior : public InventoryBehaviorBase {
public:
    int GetItemCount() { // Function Generated
        using FunctionPointerType = int (*)(ClientInventoryBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154C0D0);
        return inner(this);
    }

    CoreObject* GetItem(int a0) { // Function Generated
        using FunctionPointerType = CoreObject* (*)(ClientInventoryBehavior *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154D4A0);
        return inner(this, a0);
    }

    CoreObject* FindItemWithGid(gid a0) { // Function Generated
        using FunctionPointerType = CoreObject* (*)(ClientInventoryBehavior *self, gid a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154C620);
        return inner(this, a0);
    }

    void TrashItemWithGid(gid a0) { // Function Generated
        using FunctionPointerType = void (*)(ClientInventoryBehavior *self, gid a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154D4D0);
        return inner(this, a0);
    }

    void UseItemWithGid(gid a0) { // Function Generated
        using FunctionPointerType = void (*)(ClientInventoryBehavior *self, gid a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154D720);
        return inner(this, a0);
    }

    CoreTemplate* GetTemplate(CoreObject a0) { // Function Generated
        using FunctionPointerType = CoreTemplate* (*)(ClientInventoryBehavior *self, CoreObject a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154E060);
        return inner(this, a0);
    }

    int IsItemWithGidInTrade(gid a0) { // Function Generated
        using FunctionPointerType = int (*)(ClientInventoryBehavior *self, gid a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154D850);
        return inner(this, a0);
    }

    void RequestAddItemWithGIDToTrade(gid a0) { // Function Generated
        using FunctionPointerType = void (*)(ClientInventoryBehavior *self, gid a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154D970);
        return inner(this, a0);
    }

    void RequestAddMoneyToTrade(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ClientInventoryBehavior *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154DBF0);
        return inner(this, a0);
    }

    void RequestRemoveItemWithGIDFromTrade(gid a0) { // Function Generated
        using FunctionPointerType = void (*)(ClientInventoryBehavior *self, gid a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154DAB0);
        return inner(this, a0);
    }

    CoreTemplate* GetTemplateFromTemplateGID(gid a0) { // Function Generated
        using FunctionPointerType = CoreTemplate* (*)(ClientInventoryBehavior *self, gid a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154E070);
        return inner(this, a0);
    }

    bool IsCombinable(CoreObject a0, CoreObject a1) { // Function Generated
        using FunctionPointerType = bool (*)(ClientInventoryBehavior *self, CoreObject a0, CoreObject a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154DD10);
        return inner(this, a0, a1);
    }

    void Combine(CoreObject a0, CoreObject a1) { // Function Generated
        using FunctionPointerType = void (*)(ClientInventoryBehavior *self, CoreObject a0, CoreObject a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154DE40);
        return inner(this, a0, a1);
    }

    int GetTotalQuantity(unsigned __int64 a0) { // Function Generated
        using FunctionPointerType = int (*)(ClientInventoryBehavior *self, unsigned __int64 a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x154BF50);
        return inner(this, a0);
    }

};