#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AreaBehavior.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/AccousticSignature.h>

class AccousticAreaBehavior : public AreaBehavior {
public:
    AccousticSignature getAccousticSignature() { // Property Generated Getter
      return *reinterpret_cast<AccousticSignature*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setAccousticSignature(AccousticSignature val) { // Property Generated Setter
      *reinterpret_cast<AccousticSignature*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

};