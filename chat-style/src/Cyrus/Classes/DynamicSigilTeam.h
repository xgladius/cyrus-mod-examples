#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DynamicSigilSubcircle.h>
#include <Cyrus/Classes/PropertyClass.h>

class DynamicSigilTeam : public PropertyClass {
public:
    std::string getTeamName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTeamName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getTeamIndex() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setTeamIndex(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    unsigned int getFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setFlags(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

    List<SharedPointer<DynamicSigilSubcircle>> * getSubcircles() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DynamicSigilSubcircle>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setSubcircles(List<SharedPointer<DynamicSigilSubcircle>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DynamicSigilSubcircle>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};