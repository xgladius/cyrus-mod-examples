#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ZoneTokenBase.h>

class ZoneTokenBehavior : public BehaviorInstance {
public:
    List<SharedPointer<ZoneTokenBase>> * getTokens() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ZoneTokenBase>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setTokens(List<SharedPointer<ZoneTokenBase>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ZoneTokenBase>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};