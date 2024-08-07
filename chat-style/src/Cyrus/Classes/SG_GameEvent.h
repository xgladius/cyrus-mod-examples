#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SG_GameAction.h>

class SG_GameEvent : public PropertyClass {
public:
    std::string getEventName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEventName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<SG_GameAction>> * getActions() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SG_GameAction>> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setActions(List<SharedPointer<SG_GameAction>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SG_GameAction>> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};