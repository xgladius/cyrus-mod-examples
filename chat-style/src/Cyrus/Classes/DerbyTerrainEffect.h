#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/PetDerbyTrackTerrain.h>

class DerbyTerrainEffect : public DerbyEffect {
public:
    PetDerbyTrackTerrain getTerrainType() { // Property Generated Getter
      return *reinterpret_cast<PetDerbyTrackTerrain*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setTerrainType(PetDerbyTrackTerrain val) { // Property Generated Setter
      *reinterpret_cast<PetDerbyTrackTerrain*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

    float getFEffectReapplyTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x17C);
    }

    void setFEffectReapplyTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x17C) = val;
    }

    List<SharedPointer<DerbyEffect>> * getEffectsToApply() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DerbyEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setEffectsToApply(List<SharedPointer<DerbyEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DerbyEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    List<SharedPointer<DerbyEffect>> * getPermanentEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DerbyEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setPermanentEffects(List<SharedPointer<DerbyEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DerbyEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

};