#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PassInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class PassInfoList : public PropertyClass {
public:
    List<PassInfo> getInfo() { // Property Generated Getter
      return *reinterpret_cast<List<PassInfo>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setInfo(List<PassInfo> val) { // Property Generated Setter
      *reinterpret_cast<List<PassInfo>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};