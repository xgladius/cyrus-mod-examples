#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/GameObjectTemplate.h>
#include <Cyrus/Classes/ItemTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizItemTemplate.h>
#include <Cyrus/Enums/CurrencyTemplate__CurrencyTypes.h>

class CurrencyTemplate : public WizItemTemplate {
public:
    CurrencyTemplate__CurrencyTypes getCurrencyType() { // Property Generated Getter
      return *reinterpret_cast<CurrencyTemplate__CurrencyTypes*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setCurrencyType(CurrencyTemplate__CurrencyTypes val) { // Property Generated Setter
      *reinterpret_cast<CurrencyTemplate__CurrencyTypes*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

};