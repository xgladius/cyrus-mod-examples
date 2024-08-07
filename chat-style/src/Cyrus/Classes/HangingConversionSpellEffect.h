#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellEffect.h>
#include <Cyrus/Enums/HangingConversionSpellEffect__HangingEffectType.h>
#include <Cyrus/Enums/HangingConversionSpellEffect__OutputEffectSelector.h>
#include <Cyrus/Enums/SpellEffect__kSpellEffects.h>

class HangingConversionSpellEffect : public SpellEffect {
public:
    HangingConversionSpellEffect__HangingEffectType getHangingEffectType() { // Property Generated Getter
      return *reinterpret_cast<HangingConversionSpellEffect__HangingEffectType*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setHangingEffectType(HangingConversionSpellEffect__HangingEffectType val) { // Property Generated Setter
      *reinterpret_cast<HangingConversionSpellEffect__HangingEffectType*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    List<SpellEffect__kSpellEffects> getSpecificEffectTypes() { // Property Generated Getter
      return *reinterpret_cast<List<SpellEffect__kSpellEffects>*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setSpecificEffectTypes(List<SpellEffect__kSpellEffects> val) { // Property Generated Setter
      *reinterpret_cast<List<SpellEffect__kSpellEffects>*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    int getMinEffectValue() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setMinEffectValue(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    int getMaxEffectValue() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xFC);
    }

    void setMaxEffectValue(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xFC) = val;
    }

    bool getNotDamageType() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setNotDamageType(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    int getMinEffectCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x104);
    }

    void setMinEffectCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x104) = val;
    }

    int getMaxEffectCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setMaxEffectCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    HangingConversionSpellEffect__OutputEffectSelector getOutputSelector() { // Property Generated Getter
      return *reinterpret_cast<HangingConversionSpellEffect__OutputEffectSelector*>(reinterpret_cast<uintptr_t>(this) + 0x10C);
    }

    void setOutputSelector(HangingConversionSpellEffect__OutputEffectSelector val) { // Property Generated Setter
      *reinterpret_cast<HangingConversionSpellEffect__OutputEffectSelector*>(reinterpret_cast<uintptr_t>(this) + 0x10C) = val;
    }

    bool getScaleSourceEffectValue() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setScaleSourceEffectValue(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    float getSourceEffectValuePercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x114);
    }

    void setSourceEffectValuePercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x114) = val;
    }

    bool getApplyToEffectSource() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setApplyToEffectSource(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    List<SharedPointer<SpellEffect>> * getOutputEffect() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setOutputEffect(List<SharedPointer<SpellEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

};