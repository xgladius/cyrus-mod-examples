#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/PetDerbyActions.h>

class PetDerbyObstacleBehaviorTemplate : public BehaviorTemplate {
public:
    PetDerbyActions getActionType() { // Property Generated Getter
      return *reinterpret_cast<PetDerbyActions*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setActionType(PetDerbyActions val) { // Property Generated Setter
      *reinterpret_cast<PetDerbyActions*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    bool getCanDestroy() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setCanDestroy(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    float getDecisionRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setDecisionRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    int getMoraleIncrease() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setMoraleIncrease(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    std::string getSpinEffect() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setSpinEffect(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    std::string getImpactSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setImpactSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    std::string getAddToWorldSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setAddToWorldSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    List<SharedPointer<DerbyEffect>> * getDerbyEffectList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DerbyEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setDerbyEffectList(List<SharedPointer<DerbyEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DerbyEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    List<SharedPointer<DerbyEffect>> * getOnActionSuccessEffectList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DerbyEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setOnActionSuccessEffectList(List<SharedPointer<DerbyEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DerbyEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    List<SharedPointer<DerbyEffect>> * getOnActionFailEffectList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DerbyEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setOnActionFailEffectList(List<SharedPointer<DerbyEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DerbyEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

};