#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BGPlayerInfo.h>
#include <Cyrus/Classes/BGSigilTimer.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>

class BGSigilProxyBehavior : public BehaviorInstance {
public:
    BGSigilTimer getAutoCapTimer() { // Property Generated Getter
      return *reinterpret_cast<BGSigilTimer*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setAutoCapTimer(BGSigilTimer val) { // Property Generated Setter
      *reinterpret_cast<BGSigilTimer*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    std::string getTimerTeam() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setTimerTeam(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    std::string getTeamOwner() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setTeamOwner(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    bool getCombatActive() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setCombatActive(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    bool getCaptureable() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x119);
    }

    void setCaptureable(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x119) = val;
    }

    bool getAllowAutoCap() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x11A);
    }

    void setAllowAutoCap(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x11A) = val;
    }

    float getSigilAggroRange() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x11C);
    }

    void setSigilAggroRange(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x11C) = val;
    }

    float getPlayerAggroRange() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setPlayerAggroRange(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    Vector3D getTriggerOrientation() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x124);
    }

    void setTriggerOrientation(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x124) = val;
    }

    Vector3D getTriggerLocation() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setTriggerLocation(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    bool getTriggerBox() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x13C);
    }

    void setTriggerBox(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x13C) = val;
    }

    float getWidth() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setWidth(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    float getLength() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x144);
    }

    void setLength(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x144) = val;
    }

    bool getTriggerSphere() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setTriggerSphere(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    float getRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x14C);
    }

    void setRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x14C) = val;
    }

    List<SharedPointer<BGPlayerInfo>> * getInRange() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BGPlayerInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setInRange(List<SharedPointer<BGPlayerInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BGPlayerInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

};