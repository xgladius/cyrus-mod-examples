#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>
#include <Cyrus/Classes/WindowLayout.h>

class BalloonWindow : public WindowLayout {
public:
    void Inflate(int a0) { // Function Generated
        using FunctionPointerType = void (*)(BalloonWindow *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x600190);
        return inner(this, a0);
    }

    void Deflate(int a0) { // Function Generated
        using FunctionPointerType = void (*)(BalloonWindow *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x6002B0);
        return inner(this, a0);
    }

};