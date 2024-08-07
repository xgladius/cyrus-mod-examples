#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AreaBehaviorTemplate.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/AccousticSignature.h>

class AcousticAreaBehaviorTemplate : public AreaBehaviorTemplate {
public:
    AccousticSignature getAccousticSignature() { // Property Generated Getter
      return *reinterpret_cast<AccousticSignature*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setAccousticSignature(AccousticSignature val) { // Property Generated Setter
      *reinterpret_cast<AccousticSignature*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

};