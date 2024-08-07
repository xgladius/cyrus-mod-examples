#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/JewelSocketWrenchElements.h>
#include <Cyrus/Classes/PropertyClass.h>

class JewelSocketWrenchRules : public PropertyClass {
public:
    List<JewelSocketWrenchElements> getRules() { // Property Generated Getter
      return *reinterpret_cast<List<JewelSocketWrenchElements>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setRules(List<JewelSocketWrenchElements> val) { // Property Generated Setter
      *reinterpret_cast<List<JewelSocketWrenchElements>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};