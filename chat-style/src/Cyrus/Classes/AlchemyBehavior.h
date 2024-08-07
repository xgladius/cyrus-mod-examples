#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/ObjectBag.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RecipeBag.h>

class AlchemyBehavior : public BehaviorInstance {
public:
    RecipeBag getRecipeBag() { // Property Generated Getter
      return *reinterpret_cast<RecipeBag*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setRecipeBag(RecipeBag val) { // Property Generated Setter
      *reinterpret_cast<RecipeBag*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    ObjectBag getCraftingSlotsBag() { // Property Generated Getter
      return *reinterpret_cast<ObjectBag*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setCraftingSlotsBag(ObjectBag val) { // Property Generated Setter
      *reinterpret_cast<ObjectBag*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    ObjectBag getReagentBag() { // Property Generated Getter
      return *reinterpret_cast<ObjectBag*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setReagentBag(ObjectBag val) { // Property Generated Setter
      *reinterpret_cast<ObjectBag*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    int getBonusCrafting() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2C0);
    }

    void setBonusCrafting(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2C0) = val;
    }

    float getTimerMultiplier() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2C4);
    }

    void setTimerMultiplier(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2C4) = val;
    }

    int getMaxReagentStack() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2C8);
    }

    void setMaxReagentStack(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2C8) = val;
    }

    List<unsigned int> getEquippedRecipes() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x2D0);
    }

    void setEquippedRecipes(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x2D0) = val;
    }

    std::string getEquippedRecipeData() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2E0);
    }

    void setEquippedRecipeData(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2E0) = val;
    }

    int GetTotalReagentCount() { // Function Generated
        using FunctionPointerType = int (*)(AlchemyBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1B11300);
        return inner(this);
    }

    CoreObject* GetReagent(int a0) { // Function Generated
        using FunctionPointerType = CoreObject* (*)(AlchemyBehavior *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1B11E50);
        return inner(this, a0);
    }

};