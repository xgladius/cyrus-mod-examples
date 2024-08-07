#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/eGender.h>
#include <Cyrus/Enums/eRace.h>

class WizardCharacterBehavior : public BehaviorInstance {
public:
    bui2 getNHeadHandsModel() { // Property Generated Getter
      return *reinterpret_cast<bui2*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setNHeadHandsModel(bui2 val) { // Property Generated Setter
      *reinterpret_cast<bui2*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    bui4 getNHairModel() { // Property Generated Getter
      return *reinterpret_cast<bui4*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setNHairModel(bui4 val) { // Property Generated Setter
      *reinterpret_cast<bui4*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    bui2 getNHatModel() { // Property Generated Getter
      return *reinterpret_cast<bui2*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setNHatModel(bui2 val) { // Property Generated Setter
      *reinterpret_cast<bui2*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    bui2 getNTorsoModel() { // Property Generated Getter
      return *reinterpret_cast<bui2*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setNTorsoModel(bui2 val) { // Property Generated Setter
      *reinterpret_cast<bui2*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    bui2 getNFeetModel() { // Property Generated Getter
      return *reinterpret_cast<bui2*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setNFeetModel(bui2 val) { // Property Generated Setter
      *reinterpret_cast<bui2*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    bui2 getNWandModel() { // Property Generated Getter
      return *reinterpret_cast<bui2*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setNWandModel(bui2 val) { // Property Generated Setter
      *reinterpret_cast<bui2*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    bui4 getNSkinColor() { // Property Generated Getter
      return *reinterpret_cast<bui4*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setNSkinColor(bui4 val) { // Property Generated Setter
      *reinterpret_cast<bui4*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    bui4 getNSkinDecal() { // Property Generated Getter
      return *reinterpret_cast<bui4*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setNSkinDecal(bui4 val) { // Property Generated Setter
      *reinterpret_cast<bui4*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    bui7 getNHairColor() { // Property Generated Getter
      return *reinterpret_cast<bui7*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setNHairColor(bui7 val) { // Property Generated Setter
      *reinterpret_cast<bui7*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    bui5 getNHatColor() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x94);
    }

    void setNHatColor(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x94) = val;
    }

    bui5 getNHatDecal() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setNHatDecal(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    bui5 getNTorsoColor() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x9C);
    }

    void setNTorsoColor(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0x9C) = val;
    }

    bui5 getNTorsoDecal() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setNTorsoDecal(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    bui5 getNTorsoDecal2() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setNTorsoDecal2(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

    bui5 getNFeetColor() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setNFeetColor(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    bui5 getNFeetDecal() { // Property Generated Getter
      return *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0xAC);
    }

    void setNFeetDecal(bui5 val) { // Property Generated Setter
      *reinterpret_cast<bui5*>(reinterpret_cast<uintptr_t>(this) + 0xAC) = val;
    }

    eGender getEGender() { // Property Generated Getter
      return *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setEGender(eGender val) { // Property Generated Setter
      *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    eRace getERace() { // Property Generated Getter
      return *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0xB4);
    }

    void setERace(eRace val) { // Property Generated Setter
      *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0xB4) = val;
    }

    unsigned char getAfterCombatDance() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setAfterCombatDance(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    unsigned short getNSkinDecal2() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setNSkinDecal2(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    unsigned char getExtendedHairColor() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xC2);
    }

    void setExtendedHairColor(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xC2) = val;
    }

    unsigned short getExtendedSkinDecal() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0xC4);
    }

    void setExtendedSkinDecal(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0xC4) = val;
    }

    unsigned int getNewPlayerOptions() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setNewPlayerOptions(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    unsigned int getNewPlayerOptions2() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xCC);
    }

    void setNewPlayerOptions2(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xCC) = val;
    }

    unsigned int getAfterCombatVictoryDance() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xBC);
    }

    void setAfterCombatVictoryDance(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xBC) = val;
    }

};