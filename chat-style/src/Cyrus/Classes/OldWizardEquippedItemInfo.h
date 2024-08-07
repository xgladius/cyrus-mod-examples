#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/EquippedItemInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class OldWizardEquippedItemInfo : public EquippedItemInfo {
public:
    bui5 getBaseColor() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setBaseColor(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    bui5 getTrimColor() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setTrimColor(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    bui5 getPattern() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setPattern(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};