#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PetGameEnergyCost.h>
#include <Cyrus/Classes/PetStatModificationSet.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetGameInfo : public PropertyClass {
public:
    bool getIsWebGame() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setIsWebGame(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    List<SharedPointer<PetGameEnergyCost>> * getEnergyCosts() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PetGameEnergyCost>> *>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setEnergyCosts(List<SharedPointer<PetGameEnergyCost>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PetGameEnergyCost>> **>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    Vector<SharedPointer<PetStatModificationSet>> * getTrackChoices() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<PetStatModificationSet>> *>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setTrackChoices(Vector<SharedPointer<PetStatModificationSet>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<PetStatModificationSet>> **>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    std::string getGameIcon() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setGameIcon(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    Vector<std::string> getTrackIcons() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setTrackIcons(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    Vector<std::string> getTrackToolTips() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setTrackToolTips(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};