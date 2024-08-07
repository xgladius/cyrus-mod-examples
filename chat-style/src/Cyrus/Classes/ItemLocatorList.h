#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizItemLocations.h>

class ItemLocatorList : public PropertyClass {
public:
    List<SharedPointer<WizItemLocations>> * getLocations() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<WizItemLocations>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLocations(List<SharedPointer<WizItemLocations>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<WizItemLocations>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    bool getBIsMinigameLoot() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setBIsMinigameLoot(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    bool getBIsFishingLoot() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x59);
    }

    void setBIsFishingLoot(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x59) = val;
    }

    bool getBIsMonstrologyHouseGuest() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x5A);
    }

    void setBIsMonstrologyHouseGuest(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x5A) = val;
    }

    std::string getSUrl() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setSUrl(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};