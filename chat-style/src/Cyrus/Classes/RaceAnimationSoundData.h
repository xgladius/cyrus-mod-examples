#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AnimationSoundData.h>
#include <Cyrus/Classes/PropertyClass.h>

class RaceAnimationSoundData : public PropertyClass {
public:
    List<SharedPointer<AnimationSoundData>> * getAllAnimationSounds() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<AnimationSoundData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAllAnimationSounds(List<SharedPointer<AnimationSoundData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<AnimationSoundData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};