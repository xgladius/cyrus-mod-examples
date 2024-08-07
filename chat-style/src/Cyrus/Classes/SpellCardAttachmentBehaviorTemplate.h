#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class SpellCardAttachmentBehaviorTemplate : public BehaviorTemplate {
public:
    List<std::string> getSpellNames() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setSpellNames(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getTargetNode() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setTargetNode(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    Vector3D getOffset() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setOffset(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    Vector3D getRotate() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xB4);
    }

    void setRotate(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xB4) = val;
    }

    float getHeight() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setHeight(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    float getAlpha() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC4);
    }

    void setAlpha(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC4) = val;
    }

    float getCycleRate() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setCycleRate(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

};