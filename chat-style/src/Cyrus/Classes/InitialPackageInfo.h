#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class InitialPackageInfo : public PropertyClass {
public:
    Vector<std::string> getPackageContents() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPackageContents(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};