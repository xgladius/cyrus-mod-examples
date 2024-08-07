#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/CoreObject.h>
#include <Cyrus/Classes/EquippedItemInfo.h>
#include <Cyrus/Classes/EquippedSlotInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClientEquipmentBehavior : public BehaviorInstance {
public:
    List<SharedPointer<CoreObject>> * getItemList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CoreObject>> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setItemList(List<SharedPointer<CoreObject>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CoreObject>> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    List<SharedPointer<EquippedSlotInfo>> * getSlotList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<EquippedSlotInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setSlotList(List<SharedPointer<EquippedSlotInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<EquippedSlotInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    List<SharedPointer<EquippedItemInfo>> * getPublicItemList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<EquippedItemInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setPublicItemList(List<SharedPointer<EquippedItemInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<EquippedItemInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    int GetItemCount() { // Function Generated
        using FunctionPointerType = int (*)(ClientEquipmentBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x152FFD0);
        return inner(this);
    }

    CoreObject* GetItem(int a0) { // Function Generated
        using FunctionPointerType = CoreObject* (*)(ClientEquipmentBehavior *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15301C0);
        return inner(this, a0);
    }

    CoreObject* FindItemWithGid(gid a0) { // Function Generated
        using FunctionPointerType = CoreObject* (*)(ClientEquipmentBehavior *self, gid a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15301F0);
        return inner(this, a0);
    }

    void RequestEquipItemViaGID(gid a0, std::string a1) { // Function Generated
        using FunctionPointerType = void (*)(ClientEquipmentBehavior *self, gid a0, std::string a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x152F000);
        return inner(this, a0, a1);
    }

    void RequestUnEquipItem(gid a0) { // Function Generated
        using FunctionPointerType = void (*)(ClientEquipmentBehavior *self, gid a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x152F1F0);
        return inner(this, a0);
    }

    CoreTemplate* GetTemplate(CoreObject a0) { // Function Generated
        using FunctionPointerType = CoreTemplate* (*)(ClientEquipmentBehavior *self, CoreObject a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1530300);
        return inner(this, a0);
    }

};