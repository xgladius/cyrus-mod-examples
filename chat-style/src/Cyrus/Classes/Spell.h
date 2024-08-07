#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellEffectParamOverride.h>
#include <Cyrus/Classes/SpellRank.h>
#include <Cyrus/Classes/SpellSubEffectMetadata.h>
#include <Cyrus/Enums/SpellEffect__kDelayOrder.h>

class Spell : public PropertyClass {
public:
    unsigned int getTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    unsigned int getEnchantment() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setEnchantment(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    SharedPointer<SpellRank> * getPipCost() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<SpellRank> *>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setPipCost(SharedPointer<SpellRank> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<SpellRank> **>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    int getRegularAdjust() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setRegularAdjust(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    unsigned int getMagicSchoolID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setMagicSchoolID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    unsigned char getAccuracy() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setAccuracy(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    bool getTreasureCard() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC5);
    }

    void setTreasureCard(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC5) = val;
    }

    bool getBattleCard() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC6);
    }

    void setBattleCard(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC6) = val;
    }

    bool getItemCard() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC7);
    }

    void setItemCard(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC7) = val;
    }

    bool getSideBoard() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setSideBoard(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    unsigned int getSpellID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xCC);
    }

    void setSpellID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xCC) = val;
    }

    bool getLeavesPlayWhenCastOverride() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setLeavesPlayWhenCastOverride(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    bool getCloaked() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC4);
    }

    void setCloaked(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC4) = val;
    }

    bool getEnchantmentSpellIsItemCard() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setEnchantmentSpellIsItemCard(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    unsigned int getPremutationSpellID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setPremutationSpellID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    bool getEnchantedThisCombat() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x4D);
    }

    void setEnchantedThisCombat(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x4D) = val;
    }

    List<SharedPointer<SpellEffectParamOverride>> * getParamOverrides() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellEffectParamOverride>> *>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setParamOverrides(List<SharedPointer<SpellEffectParamOverride>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellEffectParamOverride>> **>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    List<SharedPointer<SpellSubEffectMetadata>> * getSubEffectMeta() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellSubEffectMetadata>> *>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setSubEffectMeta(List<SharedPointer<SpellSubEffectMetadata>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellSubEffectMetadata>> **>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    bool getDelayEnchantment() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x101);
    }

    void setDelayEnchantment(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x101) = val;
    }

    bool getPvE() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setPvE(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    SpellEffect__kDelayOrder getDelayEnchantmentOrder() { // Property Generated Getter
      return *reinterpret_cast<SpellEffect__kDelayOrder*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDelayEnchantmentOrder(SpellEffect__kDelayOrder val) { // Property Generated Setter
      *reinterpret_cast<SpellEffect__kDelayOrder*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getRoundAddedTC() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x104);
    }

    void setRoundAddedTC(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x104) = val;
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetName() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(Spell *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1872BA0);
        return inner(this);
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetDisplayName() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(Spell *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1872CC0);
        return inner(this);
    }

    bool IsDamageSpell() { // Function Generated
        using FunctionPointerType = bool (*)(Spell *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18730D0);
        return inner(this);
    }

};