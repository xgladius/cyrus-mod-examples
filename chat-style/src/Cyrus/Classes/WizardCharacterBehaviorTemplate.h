#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/eGender.h>
#include <Cyrus/Enums/eRace.h>

class WizardCharacterBehaviorTemplate : public BehaviorTemplate {
public:
    int getNHeadHandsModel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setNHeadHandsModel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    int getNHairModel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setNHairModel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    int getNHatModel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setNHatModel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    int getNTorsoModel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setNTorsoModel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    int getNFeetModel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setNFeetModel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    int getNWandModel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setNWandModel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    int getNSkinColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setNSkinColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    int getNSkinDecal() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x94);
    }

    void setNSkinDecal(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x94) = val;
    }

    int getNHairColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setNHairColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    int getNHatColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x9C);
    }

    void setNHatColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x9C) = val;
    }

    int getNHatDecal() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setNHatDecal(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    int getNTorsoColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setNTorsoColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

    int getNTorsoDecal() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setNTorsoDecal(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    int getNTorsoDecal2() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xAC);
    }

    void setNTorsoDecal2(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xAC) = val;
    }

    int getNFeetColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setNFeetColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    int getNFeetDecal() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB4);
    }

    void setNFeetDecal(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB4) = val;
    }

    eGender getEGender() { // Property Generated Getter
      return *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setEGender(eGender val) { // Property Generated Setter
      *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    eRace getERace() { // Property Generated Getter
      return *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0xBC);
    }

    void setERace(eRace val) { // Property Generated Setter
      *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0xBC) = val;
    }

};