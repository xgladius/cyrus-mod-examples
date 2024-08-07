#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientObject.h>
#include <Cyrus/Classes/CoreObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class WizClientObject : public ClientObject {
public:
    WizGameStats* * getGameStats() { // Property Generated Getter
      return reinterpret_cast<WizGameStats* *>(reinterpret_cast<uintptr_t>(this) + 0x220);
    }

    void setGameStats(WizGameStats* * val) { // Property Generated Setter
      *reinterpret_cast<WizGameStats* **>(reinterpret_cast<uintptr_t>(this) + 0x220) = val;
    }

    WizGameStats* GetGameStats() { // Function Generated
        using FunctionPointerType = WizGameStats* (*)(WizClientObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1E69EC0);
        return inner(this);
    }

};