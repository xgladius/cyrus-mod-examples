#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClientQuantityBehavior : public BehaviorInstance {
public:
    int getQuantity() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setQuantity(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    int GetQuantity() { // Function Generated
        using FunctionPointerType = int (*)(ClientQuantityBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x153EE70);
        return inner(this);
    }

    void Divide(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ClientQuantityBehavior *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x155E840);
        return inner(this, a0);
    }

    int GetMaximumQuantity() { // Function Generated
        using FunctionPointerType = int (*)(ClientQuantityBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x155E7E0);
        return inner(this);
    }

};