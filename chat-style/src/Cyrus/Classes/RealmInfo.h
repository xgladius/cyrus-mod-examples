#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class RealmInfo : public PropertyClass {
public:
    std::string getRealmName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setRealmName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::wstring getDisplayName() { // Property Generated Getter
      return *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setDisplayName(std::wstring val) { // Property Generated Setter
      *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    int getRealmPopulation() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setRealmPopulation(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};