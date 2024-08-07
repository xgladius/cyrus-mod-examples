#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActorCinematicAction.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/CreateActorCinematicAction__kCreateOrientation.h>

class CreateActorCinematicAction : public ActorCinematicAction {
public:
    std::string getAnimations() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setAnimations(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getModel() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setModel(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    CreateActorCinematicAction__kCreateOrientation getCreateOrientation() { // Property Generated Getter
      return *reinterpret_cast<CreateActorCinematicAction__kCreateOrientation*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setCreateOrientation(CreateActorCinematicAction__kCreateOrientation val) { // Property Generated Setter
      *reinterpret_cast<CreateActorCinematicAction__kCreateOrientation*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    bool getHidePolymorphFloatyText() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xBC);
    }

    void setHidePolymorphFloatyText(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xBC) = val;
    }

    float getForwardOffset() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setForwardOffset(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    bool getAbsoluteTarget() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC4);
    }

    void setAbsoluteTarget(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC4) = val;
    }

};