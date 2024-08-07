#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class AnimationSetManager : public PropertyClass {
public:
    List<AnimationSet*> * getSets() { // Property Generated Getter
      return reinterpret_cast<List<AnimationSet*> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setSets(List<AnimationSet*> * val) { // Property Generated Setter
      *reinterpret_cast<List<AnimationSet*> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};