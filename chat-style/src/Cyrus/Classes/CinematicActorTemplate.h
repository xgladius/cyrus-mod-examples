#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicDefTemplate.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class CinematicActorTemplate : public CinematicDefTemplate {
public:
    List<CinematicEventInfo*> * getCompleteEvents() { // Property Generated Getter
      return reinterpret_cast<List<CinematicEventInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setCompleteEvents(List<CinematicEventInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<CinematicEventInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    List<CinematicEventInfo*> * getStateChangeEvents() { // Property Generated Getter
      return reinterpret_cast<List<CinematicEventInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setStateChangeEvents(List<CinematicEventInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<CinematicEventInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    List<CinematicInteractInfo*> * getStateInteractions() { // Property Generated Getter
      return reinterpret_cast<List<CinematicInteractInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setStateInteractions(List<CinematicInteractInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<CinematicInteractInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    std::string getTargetGameState() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setTargetGameState(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    std::string getActorStateSet() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setActorStateSet(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    std::string getRootAsset() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setRootAsset(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

};