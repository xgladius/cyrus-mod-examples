#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/GameObjectTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class ItemTemplate : public GameObjectTemplate {
public:
    RequirementList* * getEquipRequirements() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setEquipRequirements(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    RequirementList* * getPurchaseRequirements() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setPurchaseRequirements(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    List<GameEffectInfo*> * getEquipEffects() { // Property Generated Getter
      return reinterpret_cast<List<GameEffectInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setEquipEffects(List<GameEffectInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<GameEffectInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    float getBaseCost() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setBaseCost(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    float getCreditsCost() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setCreditsCost(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    AvatarItemInfoBase* * getAvatarInfo() { // Property Generated Getter
      return reinterpret_cast<AvatarItemInfoBase* *>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setAvatarInfo(AvatarItemInfoBase* * val) { // Property Generated Setter
      *reinterpret_cast<AvatarItemInfoBase* **>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    List<std::string> getAvatarFlags() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setAvatarFlags(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    int getItemLimit() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x13C);
    }

    void setItemLimit(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x13C) = val;
    }

    std::string getHolidayFlag() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setHolidayFlag(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    unsigned int getItemSetBonusTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setItemSetBonusTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    float GetBaseCost() { // Function Generated
        using FunctionPointerType = float (*)(ItemTemplate *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1334800);
        return inner(this);
    }

    float GetCreditsCost() { // Function Generated
        using FunctionPointerType = float (*)(ItemTemplate *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1334810);
        return inner(this);
    }

};