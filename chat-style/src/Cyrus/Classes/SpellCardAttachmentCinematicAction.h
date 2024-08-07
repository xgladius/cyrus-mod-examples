#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActorCinematicAction.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>

class SpellCardAttachmentCinematicAction : public ActorCinematicAction {
public:
    std::string getNodeName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setNodeName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    Vector3D getOffset() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setOffset(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    Vector3D getRotation() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setRotation(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

};