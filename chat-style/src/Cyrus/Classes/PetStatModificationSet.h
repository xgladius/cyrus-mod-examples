#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PetStatModification.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetStatModificationSet : public PropertyClass {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Vector<SharedPointer<PetStatModification>> * getModifications() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<PetStatModification>> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setModifications(Vector<SharedPointer<PetStatModification>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<PetStatModification>> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getScene() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setScene(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    Vector<int> getGameScoreFactor() { // Property Generated Getter
      return *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setGameScoreFactor(Vector<int> val) { // Property Generated Setter
      *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};