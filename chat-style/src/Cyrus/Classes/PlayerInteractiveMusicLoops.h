#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/InteractiveMusicLoop.h>
#include <Cyrus/Classes/PropertyClass.h>

class PlayerInteractiveMusicLoops : public PropertyClass {
public:
    List<SharedPointer<InteractiveMusicLoop>> * getPlayerRecordedMusicLoopList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<InteractiveMusicLoop>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPlayerRecordedMusicLoopList(List<SharedPointer<InteractiveMusicLoop>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<InteractiveMusicLoop>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};