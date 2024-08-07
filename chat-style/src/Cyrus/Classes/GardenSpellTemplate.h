#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellTemplate.h>
#include <Cyrus/Enums/GardenSpellTemplate__GardenSpellType.h>
#include <Cyrus/Enums/GardenSpellTemplate__UtilitySpellType.h>

class GardenSpellTemplate : public SpellTemplate {
public:
    GardenSpellTemplate__GardenSpellType getGardenSpellType() { // Property Generated Getter
      return *reinterpret_cast<GardenSpellTemplate__GardenSpellType*>(reinterpret_cast<uintptr_t>(this) + 0x320);
    }

    void setGardenSpellType(GardenSpellTemplate__GardenSpellType val) { // Property Generated Setter
      *reinterpret_cast<GardenSpellTemplate__GardenSpellType*>(reinterpret_cast<uintptr_t>(this) + 0x320) = val;
    }

    std::string getAnimationKFM() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x328);
    }

    void setAnimationKFM(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x328) = val;
    }

    std::string getAnimationName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x348);
    }

    void setAnimationName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x348) = val;
    }

    std::string getSoundEffectName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x3A8);
    }

    void setSoundEffectName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x3A8) = val;
    }

    unsigned int getSoilTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3C8);
    }

    void setSoilTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3C8) = val;
    }

    bool getProvidesWater() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x3CC);
    }

    void setProvidesWater(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x3CC) = val;
    }

    bool getProvidesSun() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x3CD);
    }

    void setProvidesSun(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x3CD) = val;
    }

    bool getProvidesPollination() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x3CE);
    }

    void setProvidesPollination(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x3CE) = val;
    }

    bool getProvidesMagic() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x3CF);
    }

    void setProvidesMagic(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x3CF) = val;
    }

    bool getProvidesMusic() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x3D0);
    }

    void setProvidesMusic(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x3D0) = val;
    }

    int getBugZapLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3D4);
    }

    void setBugZapLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3D4) = val;
    }

    unsigned int getProtectionTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3D8);
    }

    void setProtectionTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3D8) = val;
    }

    float getSoundEffectGain() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3DC);
    }

    void setSoundEffectGain(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3DC) = val;
    }

    GardenSpellTemplate__UtilitySpellType getUtilitySpellType() { // Property Generated Getter
      return *reinterpret_cast<GardenSpellTemplate__UtilitySpellType*>(reinterpret_cast<uintptr_t>(this) + 0x3E0);
    }

    void setUtilitySpellType(GardenSpellTemplate__UtilitySpellType val) { // Property Generated Setter
      *reinterpret_cast<GardenSpellTemplate__UtilitySpellType*>(reinterpret_cast<uintptr_t>(this) + 0x3E0) = val;
    }

    int getAffectedRadius() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3E4);
    }

    void setAffectedRadius(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3E4) = val;
    }

    float getYOffset() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3E8);
    }

    void setYOffset(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3E8) = val;
    }

    int getEnergyCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3EC);
    }

    void setEnergyCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3EC) = val;
    }

    int getGardenSpellImageIndex() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3F0);
    }

    void setGardenSpellImageIndex(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3F0) = val;
    }

    std::string getGardenSpellImageName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x3F8);
    }

    void setGardenSpellImageName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x3F8) = val;
    }

    std::string getAnimationNameSmall() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x368);
    }

    void setAnimationNameSmall(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x368) = val;
    }

    std::string getAnimationNameLarge() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x388);
    }

    void setAnimationNameLarge(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x388) = val;
    }

};