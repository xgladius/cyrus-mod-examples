#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicActorAnimationData.h>
#include <Cyrus/Classes/PropertyClass.h>

class CinematicActorAnimationContainer : public PropertyClass {
public:
    unsigned int getTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getActorName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setActorName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    List<SharedPointer<CinematicActorAnimationData>> * getAnimations() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CinematicActorAnimationData>> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setAnimations(List<SharedPointer<CinematicActorAnimationData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CinematicActorAnimationData>> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    List<unsigned int> getTemplateIDs() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setTemplateIDs(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};