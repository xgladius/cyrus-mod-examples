#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/QuickSellItem.h>

class QuickSellItemList : public PropertyClass {
public:
    List<SharedPointer<QuickSellItem>> * getQuickSellItemList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<QuickSellItem>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setQuickSellItemList(List<SharedPointer<QuickSellItem>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<QuickSellItem>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    gid getSellingCharacterGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setSellingCharacterGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};