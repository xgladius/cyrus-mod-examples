#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class WizPolymorphTemplate : public CoreTemplate {
public:
    unsigned int getTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    unsigned int getMobTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setMobTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    List<GameEffectInfo*> * getEffects() { // Property Generated Getter
      return reinterpret_cast<List<GameEffectInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setEffects(List<GameEffectInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<GameEffectInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};