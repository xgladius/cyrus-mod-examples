#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class InventoryPageWindow : public Window {
public:
    bool ChangeTab(std::string a0) { // Function Generated
        using FunctionPointerType = bool (*)(InventoryPageWindow *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x857440);
        return inner(this, a0);
    }

    bool SelectFirstItem() { // Function Generated
        using FunctionPointerType = bool (*)(InventoryPageWindow *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x857620);
        return inner(this);
    }

};