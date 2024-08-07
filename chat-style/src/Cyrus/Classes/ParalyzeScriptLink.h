#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ParalyzeScriptLink : public PropertyClass {
public:
    void Release() { // Function Generated
        using FunctionPointerType = void (*)(ParalyzeScriptLink *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15C7440);
        return inner(this);
    }

};