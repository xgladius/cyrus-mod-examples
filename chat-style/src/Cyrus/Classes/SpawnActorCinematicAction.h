#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActorCinematicAction.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>

class SpawnActorCinematicAction : public ActorCinematicAction {
public:
    CoreObjectInfo* * getObjectInfo() { // Property Generated Getter
      return reinterpret_cast<CoreObjectInfo* *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setObjectInfo(CoreObjectInfo* * val) { // Property Generated Setter
      *reinterpret_cast<CoreObjectInfo* **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    bool getBStartHidden() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setBStartHidden(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};