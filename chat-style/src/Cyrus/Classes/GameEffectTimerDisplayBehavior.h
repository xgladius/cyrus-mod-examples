#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/GameEffectTimerTrigger.h>
#include <Cyrus/Classes/PropertyClass.h>

class GameEffectTimerDisplayBehavior : public BehaviorInstance {
public:
    std::string getEffectName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setEffectName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    std::string getTextKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setTextKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    float getHeight() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setHeight(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    float getZOffset() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB4);
    }

    void setZOffset(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB4) = val;
    }

    unsigned char getRed() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setRed(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    unsigned char getGreen() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xB9);
    }

    void setGreen(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xB9) = val;
    }

    unsigned char getBlue() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xBA);
    }

    void setBlue(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xBA) = val;
    }

    List<SharedPointer<GameEffectTimerTrigger>> * getTriggers() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GameEffectTimerTrigger>> *>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setTriggers(List<SharedPointer<GameEffectTimerTrigger>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GameEffectTimerTrigger>> **>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

};