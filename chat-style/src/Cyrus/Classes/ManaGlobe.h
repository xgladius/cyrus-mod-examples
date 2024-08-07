#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlSprite.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/StatGlobe.h>
#include <Cyrus/Classes/Window.h>

class ManaGlobe : public StatGlobe {
public:
    Point<int> GetRelocationPosition() { // Function Generated
        using FunctionPointerType = Point<int> (*)(ManaGlobe *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x8E2770);
        return inner(this);
    }

};