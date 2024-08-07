#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/CastleMagicItemType.h>

class CastleMagicBehaviorTemplate : public BehaviorTemplate {
public:
    CastleMagicItemType getCastleMagicItemType() { // Property Generated Getter
      return *reinterpret_cast<CastleMagicItemType*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setCastleMagicItemType(CastleMagicItemType val) { // Property Generated Setter
      *reinterpret_cast<CastleMagicItemType*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    int getNumberOfActions() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setNumberOfActions(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    List<std::string> getActionStringKeys() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setActionStringKeys(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};