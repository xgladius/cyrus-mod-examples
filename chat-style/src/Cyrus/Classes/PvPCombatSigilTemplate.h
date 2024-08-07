#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CombatSigilTemplate.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SigilTemplate.h>

class PvPCombatSigilTemplate : public CombatSigilTemplate {
public:
    int getMinimumOnSide() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x228);
    }

    void setMinimumOnSide(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x228) = val;
    }

    std::string getMinimumError() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x230);
    }

    void setMinimumError(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x230) = val;
    }

};