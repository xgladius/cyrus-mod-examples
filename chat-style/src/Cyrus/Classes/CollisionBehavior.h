#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>

class CollisionBehavior : public BehaviorInstance {
public:
    void Enable(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(CollisionBehavior *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1444580);
        return inner(this, a0);
    }

    void SetSolidCollision(char a0) { // Function Generated
        using FunctionPointerType = void (*)(CollisionBehavior *self, char a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1446180);
        return inner(this, a0);
    }

    bool LoadCollision(char a0, bool a1, int a2) { // Function Generated
        using FunctionPointerType = bool (*)(CollisionBehavior *self, char a0, bool a1, int a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1444670);
        return inner(this, a0, a1, a2);
    }

    bool LoadCollisionFromTemplate() { // Function Generated
        using FunctionPointerType = bool (*)(CollisionBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1444CC0);
        return inner(this);
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetWalkableSurfaceName() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(CollisionBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1444360);
        return inner(this);
    }

};