#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/InstanceInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class InstanceInfoList : public PropertyClass {
public:
    List<SharedPointer<InstanceInfo>> * getInstanceList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<InstanceInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setInstanceList(List<SharedPointer<InstanceInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<InstanceInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};