#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PetStat.h>
#include <Cyrus/Classes/PropertyClass.h>

class BasePetItemBehavior : public BehaviorInstance {
public:
    unsigned char getLevel() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setLevel(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    unsigned int getXP() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setXP(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    int getFirstName() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setFirstName(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    int getMiddleName() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x10C);
    }

    void setMiddleName(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x10C) = val;
    }

    int getLastName() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setLastName(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    List<PetStat> getCurrentStats() { // Property Generated Getter
      return *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setCurrentStats(List<PetStat> val) { // Property Generated Setter
      *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    List<PetStat> getMaxStats() { // Property Generated Getter
      return *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setMaxStats(List<PetStat> val) { // Property Generated Setter
      *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    unsigned int getHatchedTimeSecs() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setHatchedTimeSecs(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    List<unsigned int> getExpressedTalents() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setExpressedTalents(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    List<unsigned int> getExpressedDerbyTalents() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setExpressedDerbyTalents(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    List<std::string> getTalentRatings() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setTalentRatings(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    List<std::string> getPowerRatings() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setPowerRatings(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    unsigned int getOverallRating() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setOverallRating(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    unsigned int getActiveRating() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xFC);
    }

    void setActiveRating(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xFC) = val;
    }

    unsigned int getCostToMorph() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setCostToMorph(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    unsigned int getRarity() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x104);
    }

    void setRarity(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x104) = val;
    }

    unsigned int getRequiredXP() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setRequiredXP(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    int getHousingPetPrimaryColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x114);
    }

    void setHousingPetPrimaryColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x114) = val;
    }

    int getHousingPetPattern() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setHousingPetPattern(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    int getHousingPetSecondaryColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x11C);
    }

    void setHousingPetSecondaryColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x11C) = val;
    }

    gid getHousingPetOriginalGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setHousingPetOriginalGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    unsigned int getHousingPetJewelTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setHousingPetJewelTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    unsigned int getHappiness() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x12C);
    }

    void setHappiness(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x12C) = val;
    }

    unsigned int getMaximumHappiness() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setMaximumHappiness(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

};