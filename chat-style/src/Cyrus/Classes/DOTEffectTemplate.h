#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/PulseEffectTemplate.h>

class DOTEffectTemplate : public PulseEffectTemplate {
public:
    std::string getStatName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setStatName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    std::string getStatMaxName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setStatMaxName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    int getDamage() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setDamage(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

};