#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class MagicXPConfig : public PropertyClass {
public:
    Vector<float> getEncounterXPFactors() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEncounterXPFactors(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<MagicLevelInfo*> * getLevelInfo() { // Property Generated Getter
      return reinterpret_cast<List<MagicLevelInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setLevelInfo(List<MagicLevelInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<MagicLevelInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    List<ClassInfo*> * getClassInfo() { // Property Generated Getter
      return reinterpret_cast<List<ClassInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setClassInfo(List<ClassInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<ClassInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    int getMaxSchoolLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setMaxSchoolLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    float getExperienceBonus() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x94);
    }

    void setExperienceBonus(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x94) = val;
    }

    float getSchoolOfFocusBonus() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setSchoolOfFocusBonus(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    List<MobRankLevel*> * getLevelsConfig() { // Property Generated Getter
      return reinterpret_cast<List<MobRankLevel*> *>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setLevelsConfig(List<MobRankLevel*> * val) { // Property Generated Setter
      *reinterpret_cast<List<MobRankLevel*> **>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

};