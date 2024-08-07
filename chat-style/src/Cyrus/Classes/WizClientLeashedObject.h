#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientObject.h>
#include <Cyrus/Classes/CoreObject.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizClientObject.h>

class WizClientLeashedObject : public WizClientObject {
public:
    bool getLeashed() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x240);
    }

    void setLeashed(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x240) = val;
    }

};