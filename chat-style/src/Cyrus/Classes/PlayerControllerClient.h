#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MoveBehavior::Controller.h>
#include <Cyrus/Classes/PlayerController.h>
#include <Cyrus/Classes/PropertyClass.h>

class PlayerControllerClient : public PlayerController {
public:
    void SetDisabled(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(PlayerControllerClient *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1864430);
        return inner(this, a0);
    }

};