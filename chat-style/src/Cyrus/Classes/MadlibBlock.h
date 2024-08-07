#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MadlibArg.h>
#include <Cyrus/Classes/PropertyClass.h>

class MadlibBlock : public PropertyClass {
public:
    List<SharedPointer<MadlibArg>> * getMadlibs() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MadlibArg>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMadlibs(List<SharedPointer<MadlibArg>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MadlibArg>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getBlockToken() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setBlockToken(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};