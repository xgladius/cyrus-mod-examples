#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellTemplate.h>
#include <Cyrus/Enums/CastleMagicSpellTemplate__CastleMagicSpellEffect.h>
#include <Cyrus/Enums/CastleMagicSpellTemplate__CastleMagicSpellType.h>

class CastleMagicSpellTemplate : public SpellTemplate {
public:
    CastleMagicSpellTemplate__CastleMagicSpellType getCastleMagicSpellType() { // Property Generated Getter
      return *reinterpret_cast<CastleMagicSpellTemplate__CastleMagicSpellType*>(reinterpret_cast<uintptr_t>(this) + 0x320);
    }

    void setCastleMagicSpellType(CastleMagicSpellTemplate__CastleMagicSpellType val) { // Property Generated Setter
      *reinterpret_cast<CastleMagicSpellTemplate__CastleMagicSpellType*>(reinterpret_cast<uintptr_t>(this) + 0x320) = val;
    }

    CastleMagicSpellTemplate__CastleMagicSpellEffect getCastleMagicSpellEffect() { // Property Generated Getter
      return *reinterpret_cast<CastleMagicSpellTemplate__CastleMagicSpellEffect*>(reinterpret_cast<uintptr_t>(this) + 0x324);
    }

    void setCastleMagicSpellEffect(CastleMagicSpellTemplate__CastleMagicSpellEffect val) { // Property Generated Setter
      *reinterpret_cast<CastleMagicSpellTemplate__CastleMagicSpellEffect*>(reinterpret_cast<uintptr_t>(this) + 0x324) = val;
    }

    std::string getAnimationKFM() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x328);
    }

    void setAnimationKFM(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x328) = val;
    }

    std::string getAnimationSequence() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x348);
    }

    void setAnimationSequence(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x348) = val;
    }

    std::string getEffectSchool() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x368);
    }

    void setEffectSchool(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x368) = val;
    }

};