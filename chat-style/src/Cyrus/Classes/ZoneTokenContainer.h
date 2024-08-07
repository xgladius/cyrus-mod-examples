#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ZoneTokenBase.h>

class ZoneTokenContainer : public PropertyClass {
public:
    List<SharedPointer<ZoneTokenBase>> * getTokens() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ZoneTokenBase>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTokens(List<SharedPointer<ZoneTokenBase>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ZoneTokenBase>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};