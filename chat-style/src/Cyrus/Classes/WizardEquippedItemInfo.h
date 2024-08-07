#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/EquippedItemInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/PublicEquippedJewelInfo.h>

class WizardEquippedItemInfo : public EquippedItemInfo {
public:
    bui5 getBaseColor() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setBaseColor(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    bui5 getTrimColor() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setTrimColor(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    bui5 getPattern() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setPattern(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    unsigned int getDisplayID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setDisplayID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    SharedPointer<PublicEquippedJewelInfo> * getPJewelInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PublicEquippedJewelInfo> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setPJewelInfo(SharedPointer<PublicEquippedJewelInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PublicEquippedJewelInfo> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    u24 getFullColor() { // Property Generated Getter
      return *reinterpret_cast<u24*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setFullColor(u24 val) { // Property Generated Setter
      *reinterpret_cast<u24*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};