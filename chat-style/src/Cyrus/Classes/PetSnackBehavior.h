#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/ObjectBag.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetSnackBehavior : public BehaviorInstance {
public:
    ObjectBag getSnackBag() { // Property Generated Getter
      return *reinterpret_cast<ObjectBag*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setSnackBag(ObjectBag val) { // Property Generated Setter
      *reinterpret_cast<ObjectBag*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    int GetTotalPetSnackCount() { // Function Generated
        using FunctionPointerType = int (*)(PetSnackBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1B15060);
        return inner(this);
    }

    CoreObject* GetPetSnack(int a0) { // Function Generated
        using FunctionPointerType = CoreObject* (*)(PetSnackBehavior *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1B15880);
        return inner(this, a0);
    }

};