#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClientObject : public CoreObject {
public:
    gid getCharacterId() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setCharacterId(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    Body* GetBodyRawPointer() { // Function Generated
        using FunctionPointerType = Body* (*)(ClientObject *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1538560);
        return inner(this);
    }

    bool CheckAdjective(std::string a0) { // Function Generated
        using FunctionPointerType = bool (*)(ClientObject *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1538950);
        return inner(this, a0);
    }

};