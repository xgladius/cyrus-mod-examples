#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/ProxyType.h>

class GeomParams : public PropertyClass {
public:
    ProxyType getEType() { // Property Generated Getter
      return *reinterpret_cast<ProxyType*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEType(ProxyType val) { // Property Generated Setter
      *reinterpret_cast<ProxyType*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};