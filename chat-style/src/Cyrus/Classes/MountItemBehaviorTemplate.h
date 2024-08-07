#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/MountDyeToTexture.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/UserAnimationEvent.h>
#include <Cyrus/Enums/eGender.h>
#include <Cyrus/Enums/eMountType.h>
#include <Cyrus/Enums/eRace.h>

class MountItemBehaviorTemplate : public BehaviorTemplate {
public:
    eGender getEGender() { // Property Generated Getter
      return *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setEGender(eGender val) { // Property Generated Setter
      *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    eRace getERace() { // Property Generated Getter
      return *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0xAC);
    }

    void setERace(eRace val) { // Property Generated Setter
      *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0xAC) = val;
    }

    eMountType getEMountType() { // Property Generated Getter
      return *reinterpret_cast<eMountType*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setEMountType(eMountType val) { // Property Generated Setter
      *reinterpret_cast<eMountType*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    bool getAdjustableAnimationRate() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB4);
    }

    void setAdjustableAnimationRate(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB4) = val;
    }

    List<MountDyeToTexture> getPrimaryDyeToTexture() { // Property Generated Getter
      return *reinterpret_cast<List<MountDyeToTexture>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setPrimaryDyeToTexture(List<MountDyeToTexture> val) { // Property Generated Setter
      *reinterpret_cast<List<MountDyeToTexture>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    List<MountDyeToTexture> getSecondaryDyeToTexture() { // Property Generated Getter
      return *reinterpret_cast<List<MountDyeToTexture>*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setSecondaryDyeToTexture(List<MountDyeToTexture> val) { // Property Generated Setter
      *reinterpret_cast<List<MountDyeToTexture>*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    List<MountDyeToTexture> getPatternToTexture() { // Property Generated Getter
      return *reinterpret_cast<List<MountDyeToTexture>*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setPatternToTexture(List<MountDyeToTexture> val) { // Property Generated Setter
      *reinterpret_cast<List<MountDyeToTexture>*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    std::string getSoundMountEquip() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setSoundMountEquip(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    int getGeometryOption() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setGeometryOption(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    int getNumSeats() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC);
    }

    void setNumSeats(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC) = val;
    }

    std::string getDriverKFM() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setDriverKFM(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    float getAdjustedFocusHeight() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setAdjustedFocusHeight(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    List<SharedPointer<UserAnimationEvent>> * getAnimationEventList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<UserAnimationEvent>> *>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setAnimationEventList(List<SharedPointer<UserAnimationEvent>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<UserAnimationEvent>> **>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

};