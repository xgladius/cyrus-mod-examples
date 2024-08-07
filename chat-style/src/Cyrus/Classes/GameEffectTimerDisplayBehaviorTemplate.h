#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/GameEffectTimerTrigger.h>
#include <Cyrus/Classes/PropertyClass.h>

class GameEffectTimerDisplayBehaviorTemplate : public BehaviorTemplate {
public:
    std::string getEffectName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setEffectName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getTextKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setTextKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    float getHeight() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setHeight(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    float getZOffset() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xBC);
    }

    void setZOffset(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xBC) = val;
    }

    unsigned char getRed() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setRed(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    unsigned char getGreen() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xC1);
    }

    void setGreen(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xC1) = val;
    }

    unsigned char getBlue() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xC2);
    }

    void setBlue(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xC2) = val;
    }

    List<SharedPointer<GameEffectTimerTrigger>> * getTriggers() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GameEffectTimerTrigger>> *>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setTriggers(List<SharedPointer<GameEffectTimerTrigger>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GameEffectTimerTrigger>> **>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

};