#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClientTutorial : public PropertyClass {
public:
    unsigned short getStage() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x4A);
    }

    void setStage(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x4A) = val;
    }

    void RequestGoalCompletion(std::string a0, std::string a1) { // Function Generated
        using FunctionPointerType = void (*)(ClientTutorial *self, std::string a0, std::string a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x157F710);
        return inner(this, a0, a1);
    }

    void RequestAddQuest(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(ClientTutorial *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x157F8E0);
        return inner(this, a0);
    }

    void RequestRemoveQuest(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(ClientTutorial *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x157FA70);
        return inner(this, a0);
    }

    void RequestAdvanceStage(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ClientTutorial *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x157FC00);
        return inner(this, a0);
    }

    void FreezePlayer() { // Function Generated
        using FunctionPointerType = void (*)(ClientTutorial *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x157FDC0);
        return inner(this);
    }

    void UnfreezePlayer() { // Function Generated
        using FunctionPointerType = void (*)(ClientTutorial *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1580110);
        return inner(this);
    }

    void FaceClientObject(gid a0, gid a1, float a2) { // Function Generated
        using FunctionPointerType = void (*)(ClientTutorial *self, gid a0, gid a1, float a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1580460);
        return inner(this, a0, a1, a2);
    }

};