#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/CinematicStageRelationship.h>
#include <Cyrus/Classes/PropertyClass.h>

class CinematicStageTemplate : public PropertyClass {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    float getDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<SharedPointer<CinematicAction>> * getActions() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CinematicAction>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setActions(List<SharedPointer<CinematicAction>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CinematicAction>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<SharedPointer<CinematicStageRelationship>> * getStageRelationships() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CinematicStageRelationship>> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setStageRelationships(List<SharedPointer<CinematicStageRelationship>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CinematicStageRelationship>> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};