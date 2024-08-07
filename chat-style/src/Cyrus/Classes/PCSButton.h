#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlButton.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>
#include <Cyrus/Enums/PermanentShop__CurrencyTab.h>

class PCSButton : public ControlButton {
public:
    gid getItemID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x3E0);
    }

    void setItemID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x3E0) = val;
    }

    PermanentShop__CurrencyTab getCurrencyType() { // Property Generated Getter
      return *reinterpret_cast<PermanentShop__CurrencyTab*>(reinterpret_cast<uintptr_t>(this) + 0x3E8);
    }

    void setCurrencyType(PermanentShop__CurrencyTab val) { // Property Generated Setter
      *reinterpret_cast<PermanentShop__CurrencyTab*>(reinterpret_cast<uintptr_t>(this) + 0x3E8) = val;
    }

};