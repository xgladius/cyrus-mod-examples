#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/InteractiveMusicButtonSample.h>
#include <Cyrus/Classes/InteractiveMusicLoop.h>
#include <Cyrus/Classes/PropertyClass.h>

class InteractiveMusicBehaviorTemplate : public BehaviorTemplate {
public:
    std::string getTitleText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setTitleText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getInstrumentGUI() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setInstrumentGUI(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    int getUseAlternateHighlighting() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setUseAlternateHighlighting(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    List<SharedPointer<InteractiveMusicButtonSample>> * getButtonSampleList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<InteractiveMusicButtonSample>> *>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setButtonSampleList(List<SharedPointer<InteractiveMusicButtonSample>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<InteractiveMusicButtonSample>> **>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    List<SharedPointer<InteractiveMusicLoop>> * getMusicLoopList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<InteractiveMusicLoop>> *>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setMusicLoopList(List<SharedPointer<InteractiveMusicLoop>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<InteractiveMusicLoop>> **>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

};