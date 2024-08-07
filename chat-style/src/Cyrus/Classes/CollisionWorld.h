#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ProxyGeometry.h>

class CollisionWorld : public PropertyClass {
public:
    List<SharedPointer<ProxyGeometry>> * getWorld() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ProxyGeometry>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setWorld(List<SharedPointer<ProxyGeometry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ProxyGeometry>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};