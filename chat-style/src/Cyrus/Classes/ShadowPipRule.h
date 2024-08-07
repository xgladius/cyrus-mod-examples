#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ShadowPipRule::RoundPercent.h>

class ShadowPipRule : public PropertyClass {
public:
    Vector<ShadowPipRule__RoundPercent> getRoundList() { // Property Generated Getter
      return *reinterpret_cast<Vector<ShadowPipRule__RoundPercent>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setRoundList(Vector<ShadowPipRule__RoundPercent> val) { // Property Generated Setter
      *reinterpret_cast<Vector<ShadowPipRule__RoundPercent>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};