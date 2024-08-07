#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreObjectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ZoneTokenContainer.h>

class ZoneTokenInfo : public CoreObjectInfo {
public:
    SharedPointer<ZoneTokenContainer> * getPContainer() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ZoneTokenContainer> *>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setPContainer(SharedPointer<ZoneTokenContainer> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ZoneTokenContainer> **>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

};