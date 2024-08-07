#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AvatarOptionBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class AvatarTextureOption : public AvatarOptionBase {
public:
    std::string getMaterialName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setMaterialName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    Vector<std::string> getTextures() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setTextures(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    Vector<std::string> getDecals() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setDecals(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    Vector<std::string> getDecals2() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setDecals2(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    Vector<Vector3D> getTintColors() { // Property Generated Getter
      return *reinterpret_cast<Vector<Vector3D>*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setTintColors(Vector<Vector3D> val) { // Property Generated Setter
      *reinterpret_cast<Vector<Vector3D>*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    Vector<std::string> getTintColorNames() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setTintColorNames(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    bool getUseTintColor() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setUseTintColor(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

};