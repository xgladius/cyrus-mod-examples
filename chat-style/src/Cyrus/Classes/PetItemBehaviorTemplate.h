#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/MorphingException.h>
#include <Cyrus/Classes/PetDyeToTexture.h>
#include <Cyrus/Classes/PetLevelInfo.h>
#include <Cyrus/Classes/PetStat.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/UserAnimationEvent.h>
#include <Cyrus/Enums/eGender.h>
#include <Cyrus/Enums/eRace.h>

class PetItemBehaviorTemplate : public BehaviorTemplate {
public:
    List<PetDyeToTexture> getPrimaryDyeToTexture() { // Property Generated Getter
      return *reinterpret_cast<List<PetDyeToTexture>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setPrimaryDyeToTexture(List<PetDyeToTexture> val) { // Property Generated Setter
      *reinterpret_cast<List<PetDyeToTexture>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    List<PetDyeToTexture> getSecondaryDyeToTexture() { // Property Generated Getter
      return *reinterpret_cast<List<PetDyeToTexture>*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setSecondaryDyeToTexture(List<PetDyeToTexture> val) { // Property Generated Setter
      *reinterpret_cast<List<PetDyeToTexture>*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    List<PetDyeToTexture> getPatternToTexture() { // Property Generated Getter
      return *reinterpret_cast<List<PetDyeToTexture>*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setPatternToTexture(List<PetDyeToTexture> val) { // Property Generated Setter
      *reinterpret_cast<List<PetDyeToTexture>*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    eGender getEGender() { // Property Generated Getter
      return *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setEGender(eGender val) { // Property Generated Setter
      *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    eRace getERace() { // Property Generated Getter
      return *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0xAC);
    }

    void setERace(eRace val) { // Property Generated Setter
      *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0xAC) = val;
    }

    std::string getEggName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setEggName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    int getEggColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setEggColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    float getFScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xD4);
    }

    void setFScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xD4) = val;
    }

    std::string getSHatchRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setSHatchRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    unsigned int getWowFactor() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setWowFactor(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    float getFlyingOffset() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xFC);
    }

    void setFlyingOffset(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xFC) = val;
    }

    List<PetStat> getMaxStats() { // Property Generated Getter
      return *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setMaxStats(List<PetStat> val) { // Property Generated Setter
      *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    List<PetStat> getStartStats() { // Property Generated Getter
      return *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setStartStats(List<PetStat> val) { // Property Generated Setter
      *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    List<std::string> getTalents() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setTalents(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    List<std::string> getDerbyTalents() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setDerbyTalents(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    List<PetLevelInfo> getLevels() { // Property Generated Getter
      return *reinterpret_cast<List<PetLevelInfo>*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setLevels(List<PetLevelInfo> val) { // Property Generated Setter
      *reinterpret_cast<List<PetLevelInfo>*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    List<PetStat> getConversionStats() { // Property Generated Getter
      return *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setConversionStats(List<PetStat> val) { // Property Generated Setter
      *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    List<std::string> getConversionTalents() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setConversionTalents(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    unsigned char getConversionLevel() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setConversionLevel(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    unsigned int getConversionXP() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x174);
    }

    void setConversionXP(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x174) = val;
    }

    List<std::string> getFavoriteSnackCategories() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setFavoriteSnackCategories(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

    std::string getJumpSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setJumpSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    std::string getDuckSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setDuckSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

    List<MorphingException> getMorphingExceptions() { // Property Generated Getter
      return *reinterpret_cast<List<MorphingException>*>(reinterpret_cast<uintptr_t>(this) + 0x1C8);
    }

    void setMorphingExceptions(List<MorphingException> val) { // Property Generated Setter
      *reinterpret_cast<List<MorphingException>*>(reinterpret_cast<uintptr_t>(this) + 0x1C8) = val;
    }

    gid getHatchesAsID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setHatchesAsID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    List<std::string> getGuaranteedTalents() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setGuaranteedTalents(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    List<std::string> getGuaranteedDerbyTalents() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setGuaranteedDerbyTalents(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    bool getHideName() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x204);
    }

    void setHideName(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x204) = val;
    }

    float getHouseGuestOpacity() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setHouseGuestOpacity(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

    unsigned int getHatchmakingInitalCooldownTime() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x20C);
    }

    void setHatchmakingInitalCooldownTime(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x20C) = val;
    }

    unsigned int getHatchmakingMaximumHatches() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setHatchmakingMaximumHatches(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

    bool getExcludeFromHatchOfTheDay() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x214);
    }

    void setExcludeFromHatchOfTheDay(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x214) = val;
    }

    bool getExclusivePet() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x215);
    }

    void setExclusivePet(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x215) = val;
    }

    List<SharedPointer<UserAnimationEvent>> * getAnimationEventList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<UserAnimationEvent>> *>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setAnimationEventList(List<SharedPointer<UserAnimationEvent>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<UserAnimationEvent>> **>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

};