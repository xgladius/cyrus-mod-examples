#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/DerbyTerrainEffect.h>
#include <Cyrus/Classes/PetDerbyTrackInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetDerbyTrackManager : public PropertyClass {
public:
    int getMoraleBase() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setMoraleBase(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    int getRateBase() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setRateBase(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    int getSpeedBoostBase() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setSpeedBoostBase(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    unsigned int getSpeedometerMin() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setSpeedometerMin(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    unsigned int getSpeedometerMax() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setSpeedometerMax(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    float getWillTerrainFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setWillTerrainFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    float getIntelligenceTerrainFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setIntelligenceTerrainFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    float getAgilityTerrainFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setAgilityTerrainFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    float getStrengthTerrainFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setStrengthTerrainFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

    int getMoraleBaseChance() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setMoraleBaseChance(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    int getStartingSpeed() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setStartingSpeed(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    int getCheerCostBase() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setCheerCostBase(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    float getFMoraleFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setFMoraleFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    float getFTerrainCostFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setFTerrainCostFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    float getFSpeedBoostFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setFSpeedBoostFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    int getCheerTimerInMS() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setCheerTimerInMS(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    int getSlowTimerInMS() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setSlowTimerInMS(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    int getCobblestoneCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setCobblestoneCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    List<SharedPointer<DerbyTerrainEffect>> * getTerrainEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DerbyTerrainEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setTerrainEffects(List<SharedPointer<DerbyTerrainEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DerbyTerrainEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    List<SharedPointer<DerbyEffect>> * getCheerEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DerbyEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setCheerEffects(List<SharedPointer<DerbyEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DerbyEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    List<SharedPointer<DerbyEffect>> * getSlowEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DerbyEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setSlowEffects(List<SharedPointer<DerbyEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DerbyEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    Vector<SharedPointer<PetDerbyTrackInfo>> * getTracks() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<PetDerbyTrackInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setTracks(Vector<SharedPointer<PetDerbyTrackInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<PetDerbyTrackInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

};