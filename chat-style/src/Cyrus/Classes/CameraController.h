#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class CameraController : public PropertyClass {
public:
    void SetTargetClientObject(ClientObject a0) { // Function Generated
        using FunctionPointerType = void (*)(CameraController *self, ClientObject a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x17765F8);
        return inner(this, a0);
    }

};