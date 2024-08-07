#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AreaBehavior.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PlayList.h>
#include <Cyrus/Classes/PropertyClass.h>

class SoundBehavior : public AreaBehavior {
public:
    PlayList getPlayList() { // Property Generated Getter
      return *reinterpret_cast<PlayList*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setPlayList(PlayList val) { // Property Generated Setter
      *reinterpret_cast<PlayList*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    float getVolume() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setVolume(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    int getLoopCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x134);
    }

    void setLoopCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x134) = val;
    }

};