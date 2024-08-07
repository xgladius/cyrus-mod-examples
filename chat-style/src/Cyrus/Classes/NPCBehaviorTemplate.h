#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/NPCBehaviorTemplate__TITLE_TYPE.h>

class NPCBehaviorTemplate : public BehaviorTemplate {
public:
    int getNStartingHealth() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setNStartingHealth(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    bool getHideCurrentHP() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setHideCurrentHP(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    int getNLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setNLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    float getFIntelligence() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setFIntelligence(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    float getFSelfishFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setFSelfishFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    Color getNameColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setNameColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    bool getBossMob() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setBossMob(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    bool getTurnTowardsPlayer() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x91);
    }

    void setTurnTowardsPlayer(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x91) = val;
    }

    NPCBehaviorTemplate__TITLE_TYPE getMobTitle() { // Property Generated Getter
      return *reinterpret_cast<NPCBehaviorTemplate__TITLE_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x94);
    }

    void setMobTitle(NPCBehaviorTemplate__TITLE_TYPE val) { // Property Generated Setter
      *reinterpret_cast<NPCBehaviorTemplate__TITLE_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x94) = val;
    }

    std::string getSchoolOfFocus() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setSchoolOfFocus(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    int getNAggressiveFactor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setNAggressiveFactor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    std::string getTriggerList() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setTriggerList(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    float getCylinderScaleValue() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x10C);
    }

    void setCylinderScaleValue(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x10C) = val;
    }

    int getMaxShadowPips() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setMaxShadowPips(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    List<SharedPointer<GameEffectInfo>> * getBaseEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GameEffectInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setBaseEffects(List<SharedPointer<GameEffectInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GameEffectInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    std::string getSecondarySchoolOfFocus() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setSecondarySchoolOfFocus(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

};