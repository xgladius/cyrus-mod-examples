#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CrownShopCategory.h>
#include <Cyrus/Classes/CrownShopCategoryMenu.h>
#include <Cyrus/Classes/PropertyClass.h>

class CrownShopLayout : public PropertyClass {
public:
    List<SharedPointer<CrownShopCategory>> * getCategories() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CrownShopCategory>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setCategories(List<SharedPointer<CrownShopCategory>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CrownShopCategory>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<CrownShopCategoryMenu>> * getTabs() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CrownShopCategoryMenu>> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setTabs(List<SharedPointer<CrownShopCategoryMenu>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CrownShopCategoryMenu>> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    int LuaGetCategoryListSize() { // Function Generated
        using FunctionPointerType = int (*)(CrownShopLayout *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC41EC0);
        return inner(this);
    }

    SharedPointer<CrownShopCategory> GetCategory(int a0) { // Function Generated
        using FunctionPointerType = SharedPointer<CrownShopCategory> (*)(CrownShopLayout *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1B18450);
        return inner(this, a0);
    }

};