#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class GameEffectTemplateList : public PropertyClass {
public:
    List<GameEffectTemplate*> * getEffectTemplates() { // Property Generated Getter
      return reinterpret_cast<List<GameEffectTemplate*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEffectTemplates(List<GameEffectTemplate*> * val) { // Property Generated Setter
      *reinterpret_cast<List<GameEffectTemplate*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};