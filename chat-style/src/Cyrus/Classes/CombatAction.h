#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Spell.h>
#include <Cyrus/Classes/TargetCritHit.h>

class CombatAction : public PropertyClass {
public:
    int getSpellCaster() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSpellCaster(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<Spell> * getSpell() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Spell> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setSpell(SharedPointer<Spell> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Spell> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    char getSpellHits() { // Property Generated Getter
      return *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setSpellHits(char val) { // Property Generated Setter
      *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    unsigned int getEffectChosen() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xD4);
    }

    void setEffectChosen(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xD4) = val;
    }

    bool getInterrupt() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x71);
    }

    void setInterrupt(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x71) = val;
    }

    bool getSigilSpell() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x72);
    }

    void setSigilSpell(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x72) = val;
    }

    bool getShowCast() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x73);
    }

    void setShowCast(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x73) = val;
    }

    unsigned char getCriticalHitRoll() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setCriticalHitRoll(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    unsigned char getStunResistRoll() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x75);
    }

    void setStunResistRoll(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x75) = val;
    }

    bool getBlocksCalculated() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setBlocksCalculated(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    std::string getSerializedBlocks() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setSerializedBlocks(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    std::string getStringKeyMessage() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setStringKeyMessage(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    std::string getSoundFileName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setSoundFileName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    float getDurationModifier() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setDurationModifier(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    std::string getSerializedTargetsAffected() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setSerializedTargetsAffected(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    List<int> getTargetSubcircleList() { // Property Generated Getter
      return *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setTargetSubcircleList(List<int> val) { // Property Generated Setter
      *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    int getPipConversionRoll() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setPipConversionRoll(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    Vector<int> getRandomSpellEffectPerTargetRolls() { // Property Generated Getter
      return *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setRandomSpellEffectPerTargetRolls(Vector<int> val) { // Property Generated Setter
      *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    bool getHandledRandomSpellPerTarget() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setHandledRandomSpellPerTarget(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    bool getConfusedTarget() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setConfusedTarget(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    bool getForceSpell() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setForceSpell(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    bool getAfterDied() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD1);
    }

    void setAfterDied(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD1) = val;
    }

    bool getDelayed() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x151);
    }

    void setDelayed(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x151) = val;
    }

    bool getDelayedEnchanted() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x152);
    }

    void setDelayedEnchanted(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x152) = val;
    }

    bool getPetCast() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x153);
    }

    void setPetCast(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x153) = val;
    }

    bool getPetCasted() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x154);
    }

    void setPetCasted(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x154) = val;
    }

    int getPetCastTarget() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setPetCastTarget(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    List<TargetCritHit> getCritHitList() { // Property Generated Getter
      return *reinterpret_cast<List<TargetCritHit>*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setCritHitList(List<TargetCritHit> val) { // Property Generated Setter
      *reinterpret_cast<List<TargetCritHit>*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    unsigned char getXPipCost() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x15C);
    }

    void setXPipCost(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x15C) = val;
    }

};