#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/PetTalentBaseTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/DerbyTalentBuffType.h>

class PetDerbyTalentTemplate : public PetTalentBaseTemplate {
public:
    DerbyTalentBuffType getIsBuff() { // Property Generated Getter
      return *reinterpret_cast<DerbyTalentBuffType*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setIsBuff(DerbyTalentBuffType val) { // Property Generated Setter
      *reinterpret_cast<DerbyTalentBuffType*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    float getFCooldown() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x124);
    }

    void setFCooldown(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x124) = val;
    }

    List<SharedPointer<DerbyEffect>> * getDerbyEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DerbyEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setDerbyEffects(List<SharedPointer<DerbyEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DerbyEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

};