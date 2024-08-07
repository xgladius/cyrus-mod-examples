#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class AnimationSet : public PropertyClass {
public:
    std::string getSetName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSetName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<AnimationPair*> * getPairs() { // Property Generated Getter
      return reinterpret_cast<List<AnimationPair*> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setPairs(List<AnimationPair*> * val) { // Property Generated Setter
      *reinterpret_cast<List<AnimationPair*> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};