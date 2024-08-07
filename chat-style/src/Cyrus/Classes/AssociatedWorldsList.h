#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class AssociatedWorldsList : public PropertyClass {
public:
    List<std::string> getAssociatedWorlds() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAssociatedWorlds(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};