#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/NamedCharacterElement.h>
#include <Cyrus/Classes/PropertyClass.h>

class CharacterElementTable : public PropertyClass {
public:
    std::string getSGender() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSGender(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getSBodySource() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setSBodySource(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getSSkeletonSource() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setSSkeletonSource(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    int getIdleAnimation() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setIdleAnimation(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    Vector<CharacterElement*> * getHeadElementList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setHeadElementList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    Vector<CharacterElement*> * getHatElementList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setHatElementList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    Vector<CharacterElement*> * getHairElementList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setHairElementList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    Vector<CharacterElement*> * getTorsoElementList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setTorsoElementList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    Vector<CharacterElement*> * getFeetElementList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setFeetElementList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    Vector<CharacterElement*> * getHairTextureList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setHairTextureList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    Vector<CharacterElement*> * getTorsoTextureList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setTorsoTextureList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    Vector<CharacterElement*> * getTorsoDecalList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setTorsoDecalList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    Vector<CharacterElement*> * getSkinTextureList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setSkinTextureList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    Vector<CharacterElement*> * getSkinDecalList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setSkinDecalList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    Vector<CharacterElement*> * getHatTextureList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x1A0);
    }

    void setHatTextureList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x1A0) = val;
    }

    Vector<CharacterElement*> * getHatDecalList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setHatDecalList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    Vector<CharacterElement*> * getFeetTextureList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x1D0);
    }

    void setFeetTextureList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x1D0) = val;
    }

    Vector<CharacterElement*> * getFeetDecalList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setFeetDecalList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    Vector<CharacterElement*> * getAttachSlotList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setAttachSlotList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    Vector<NamedCharacterElement> getAttachableList() { // Property Generated Getter
      return *reinterpret_cast<Vector<NamedCharacterElement>*>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setAttachableList(Vector<NamedCharacterElement> val) { // Property Generated Setter
      *reinterpret_cast<Vector<NamedCharacterElement>*>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

    Vector<CharacterElement*> * getSkinDecalList2() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x230);
    }

    void setSkinDecalList2(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x230) = val;
    }

    Vector<CharacterElement*> * getFaceElementList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x248);
    }

    void setFaceElementList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x248) = val;
    }

    Vector<CharacterElement*> * getEyeElementList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setEyeElementList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    Vector<CharacterElement*> * getMouthElementList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x278);
    }

    void setMouthElementList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x278) = val;
    }

    Vector<CharacterElement*> * getNoseElementList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x290);
    }

    void setNoseElementList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x290) = val;
    }

    Vector<CharacterElement*> * getAccessoryElementList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x2A8);
    }

    void setAccessoryElementList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x2A8) = val;
    }

    Vector<CharacterElement*> * getEyeColorTextureList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x2C0);
    }

    void setEyeColorTextureList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x2C0) = val;
    }

    Vector<CharacterElement*> * getFaceDecalTextureList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x2D8);
    }

    void setFaceDecalTextureList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x2D8) = val;
    }

    Vector<CharacterElement*> * getMouthDecalTextureList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x2F0);
    }

    void setMouthDecalTextureList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x2F0) = val;
    }

};