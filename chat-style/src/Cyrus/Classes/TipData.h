#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActorDialog.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RequirementList.h>
#include <Cyrus/Enums/TutorialTipType.h>

class TipData : public PropertyClass {
public:
    gid getId() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setId(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    RequirementList getRequirements() { // Property Generated Getter
      return *reinterpret_cast<RequirementList*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setRequirements(RequirementList val) { // Property Generated Setter
      *reinterpret_cast<RequirementList*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    std::string getActorImage() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setActorImage(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    std::string getActorName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setActorName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    SharedPointer<ActorDialog> * getDialog() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ActorDialog> *>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setDialog(SharedPointer<ActorDialog> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ActorDialog> **>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    bool getRepeatable() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setRepeatable(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    bool getCriticalTip() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x171);
    }

    void setCriticalTip(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x171) = val;
    }

    std::string getBackgroundMusic() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setBackgroundMusic(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    bool getMusicAtSFXVolume() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setMusicAtSFXVolume(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    List<std::string> getEventName() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEventName(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    TutorialTipType getTutorialTipType() { // Property Generated Getter
      return *reinterpret_cast<TutorialTipType*>(reinterpret_cast<uintptr_t>(this) + 0x174);
    }

    void setTutorialTipType(TutorialTipType val) { // Property Generated Setter
      *reinterpret_cast<TutorialTipType*>(reinterpret_cast<uintptr_t>(this) + 0x174) = val;
    }

};