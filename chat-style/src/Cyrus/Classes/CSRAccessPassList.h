#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CSRAccessPassInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class CSRAccessPassList : public PropertyClass {
public:
    List<CSRAccessPassInfo> getPassList() { // Property Generated Getter
      return *reinterpret_cast<List<CSRAccessPassInfo>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPassList(List<CSRAccessPassInfo> val) { // Property Generated Setter
      *reinterpret_cast<List<CSRAccessPassInfo>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};