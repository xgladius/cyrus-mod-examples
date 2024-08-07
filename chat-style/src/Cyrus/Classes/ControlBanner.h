#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlSprite.h>
#include <Cyrus/Classes/Font.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlBanner : public ControlSprite {
public:
    void AddScalingText(std::wstring a0, Color a1, Font a2) { // Function Generated
        using FunctionPointerType = void (*)(ControlBanner *self, std::wstring a0, Color a1, Font a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16B6610);
        return inner(this, a0, a1, a2);
    }

};