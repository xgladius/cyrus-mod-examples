#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>

class NameOverrideBehavior : public BehaviorInstance {
public:
    std::wstring getWsNameOverride() { // Property Generated Getter
      return *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setWsNameOverride(std::wstring val) { // Property Generated Setter
      *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};