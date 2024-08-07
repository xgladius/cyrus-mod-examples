#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicActorAnimationContainer.h>
#include <Cyrus/Classes/CinematicStageTemplate.h>
#include <Cyrus/Classes/CinematicTemplateAnimationData.h>
#include <Cyrus/Classes/PropertyClass.h>

class CinematicTemplate : public PropertyClass {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    List<SharedPointer<CinematicStageTemplate>> * getStages() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CinematicStageTemplate>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setStages(List<SharedPointer<CinematicStageTemplate>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CinematicStageTemplate>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<CinematicActorAnimationContainer>> * getActors() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CinematicActorAnimationContainer>> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setActors(List<SharedPointer<CinematicActorAnimationContainer>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CinematicActorAnimationContainer>> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<SharedPointer<CinematicTemplateAnimationData>> * getSharedAnimations() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CinematicTemplateAnimationData>> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setSharedAnimations(List<SharedPointer<CinematicTemplateAnimationData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CinematicTemplateAnimationData>> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};