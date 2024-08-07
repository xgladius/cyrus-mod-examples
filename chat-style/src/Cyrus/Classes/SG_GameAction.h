#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/SG_GameAction__SG_Target.h>

class SG_GameAction : public PropertyClass {
public:
    SG_GameAction__SG_Target getTarget() { // Property Generated Getter
      return *reinterpret_cast<SG_GameAction__SG_Target*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTarget(SG_GameAction__SG_Target val) { // Property Generated Setter
      *reinterpret_cast<SG_GameAction__SG_Target*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};