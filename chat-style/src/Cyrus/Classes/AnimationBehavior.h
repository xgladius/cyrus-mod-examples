#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RenderBehavior.h>

class AnimationBehavior : public RenderBehavior {
public:
    GamebryoBody* GetGamebryoBody() { // Function Generated
        using FunctionPointerType = GamebryoBody* (*)(AnimationBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x9C6980);
        return inner(this);
    }

    bool PlayAnimation(std::string a0, bool a1, Delegate<ClientObject * __ptr64> a2, float a3) { // Function Generated
        using FunctionPointerType = bool (*)(AnimationBehavior *self, std::string a0, bool a1, Delegate<ClientObject * __ptr64> a2, float a3);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x756408);
        return inner(this, a0, a1, a2, a3);
    }

};