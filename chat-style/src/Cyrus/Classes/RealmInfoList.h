#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RealmInfo.h>

class RealmInfoList : public PropertyClass {
public:
    List<SharedPointer<RealmInfo>> * getInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<RealmInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setInfoList(List<SharedPointer<RealmInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<RealmInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};