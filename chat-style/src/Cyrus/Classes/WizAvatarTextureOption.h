#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AvatarOptionBase.h>
#include <Cyrus/Classes/AvatarTextureOption.h>
#include <Cyrus/Classes/PropertyClass.h>

class WizAvatarTextureOption : public AvatarTextureOption {
public:
    std::string getTexture() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setTexture(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    std::string getDecal() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setDecal(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    std::string getDecal2() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setDecal2(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    Vector3D getTintColor() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setTintColor(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

};