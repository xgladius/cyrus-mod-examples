#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/LocaleMapping.h>
#include <Cyrus/Classes/PropertyClass.h>

class LocaleManager : public PropertyClass {
public:
    List<LocaleMapping> getLocaleMappingList() { // Property Generated Getter
      return *reinterpret_cast<List<LocaleMapping>*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setLocaleMappingList(List<LocaleMapping> val) { // Property Generated Setter
      *reinterpret_cast<List<LocaleMapping>*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};