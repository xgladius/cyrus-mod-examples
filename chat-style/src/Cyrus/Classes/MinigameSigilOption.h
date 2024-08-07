#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MinigameSigilOptionAdvancedModeFields.h>
#include <Cyrus/Classes/MinigameSigilOptionMonthlyGauntletFields.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ServiceOptionBase.h>

class MinigameSigilOption : public ServiceOptionBase {
public:
    int getTeamUpAllowed() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setTeamUpAllowed(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    std::string getSuccessZone() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setSuccessZone(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    bool getIsCluster() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setIsCluster(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    int getRequiresSkeletonKey() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC);
    }

    void setRequiresSkeletonKey(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC) = val;
    }

    SharedPointer<MinigameSigilOptionMonthlyGauntletFields> * getMonthlyGauntletFields() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MinigameSigilOptionMonthlyGauntletFields> *>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setMonthlyGauntletFields(SharedPointer<MinigameSigilOptionMonthlyGauntletFields> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MinigameSigilOptionMonthlyGauntletFields> **>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    SharedPointer<MinigameSigilOptionAdvancedModeFields> * getAdvancedModeFields() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MinigameSigilOptionAdvancedModeFields> *>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setAdvancedModeFields(SharedPointer<MinigameSigilOptionAdvancedModeFields> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MinigameSigilOptionAdvancedModeFields> **>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

};