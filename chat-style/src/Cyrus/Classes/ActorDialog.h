#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActorDialogBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class ActorDialog : public ActorDialogBase {
public:
    std::string getDialogTag() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDialogTag(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Vector<ActorDialogEntry*> * getDialogEntries() { // Property Generated Getter
      return reinterpret_cast<Vector<ActorDialogEntry*> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setDialogEntries(Vector<ActorDialogEntry*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<ActorDialogEntry*> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<ActorMadlib*> * getMadlibs() { // Property Generated Getter
      return reinterpret_cast<List<ActorMadlib*> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setMadlibs(List<ActorMadlib*> * val) { // Property Generated Setter
      *reinterpret_cast<List<ActorMadlib*> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    List<std::string> getDialogEvents() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setDialogEvents(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    bool getNoAggroWhileDialogIsUp() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setNoAggroWhileDialogIsUp(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    bool getNoAggroNoDelay() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA9);
    }

    void setNoAggroNoDelay(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA9) = val;
    }

};