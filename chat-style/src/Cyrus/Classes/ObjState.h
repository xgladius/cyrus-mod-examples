#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ObjState : public PropertyClass {
public:
    std::string getStateType() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setStateType(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    std::string getStateName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setStateName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<ObjStateTransition*> * getTransitions() { // Property Generated Getter
      return reinterpret_cast<List<ObjStateTransition*> *>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setTransitions(List<ObjStateTransition*> * val) { // Property Generated Setter
      *reinterpret_cast<List<ObjStateTransition*> **>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    List<ForcedStateInfo*> * getForcedStates() { // Property Generated Getter
      return reinterpret_cast<List<ForcedStateInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setForcedStates(List<ForcedStateInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<ForcedStateInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    bool getAutoTransition() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xBC);
    }

    void setAutoTransition(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xBC) = val;
    }

    float getTransitionTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setTransitionTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    std::string getAutoState() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setAutoState(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    List<std::string> getAllowedActions() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setAllowedActions(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    List<std::string> getDisallowedActions() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setDisallowedActions(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    List<std::string> getBlockedStates() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setBlockedStates(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    bool getPrivateState() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setPrivateState(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    bool getFallbackPrevious() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setFallbackPrevious(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    bool getPostStateEvents() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE9);
    }

    void setPostStateEvents(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE9) = val;
    }

    bool getBlockMovement() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB1);
    }

    void setBlockMovement(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB1) = val;
    }

    bool getBlockMoveControl() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB2);
    }

    void setBlockMoveControl(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB2) = val;
    }

    bool getHaltMovement() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB3);
    }

    void setHaltMovement(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB3) = val;
    }

    bool getCheckProximity() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB5);
    }

    void setCheckProximity(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB5) = val;
    }

    float getProximityOverride() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setProximityOverride(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    bool getShowDebug() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB4);
    }

    void setShowDebug(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB4) = val;
    }

    List<StateAssetInfo*> * getParticles() { // Property Generated Getter
      return reinterpret_cast<List<StateAssetInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setParticles(List<StateAssetInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<StateAssetInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    List<StateAssetInfo*> * getSounds() { // Property Generated Getter
      return reinterpret_cast<List<StateAssetInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setSounds(List<StateAssetInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<StateAssetInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    List<StateAssetInfo*> * getAnimations() { // Property Generated Getter
      return reinterpret_cast<List<StateAssetInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setAnimations(List<StateAssetInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<StateAssetInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    bool getReinteract() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setReinteract(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    bool getMuteMusic() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x189);
    }

    void setMuteMusic(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x189) = val;
    }

};