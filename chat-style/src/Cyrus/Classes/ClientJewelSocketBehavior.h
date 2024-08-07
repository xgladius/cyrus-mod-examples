#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/JewelSocketBehaviorBase.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/PublicEquippedJewelInfo.h>

class ClientJewelSocketBehavior : public JewelSocketBehaviorBase {
public:
    SharedPointer<PublicEquippedJewelInfo> * getPublicJewelInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PublicEquippedJewelInfo> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setPublicJewelInfo(SharedPointer<PublicEquippedJewelInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PublicEquippedJewelInfo> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};