#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/JewelSocket.h>
#include <Cyrus/Classes/PropertyClass.h>

class JewelSocketBehaviorTemplate : public BehaviorTemplate {
public:
    List<JewelSocket> getJewelSockets() { // Property Generated Getter
      return *reinterpret_cast<List<JewelSocket>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setJewelSockets(List<JewelSocket> val) { // Property Generated Setter
      *reinterpret_cast<List<JewelSocket>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    bool getSocketDeleted() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setSocketDeleted(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};