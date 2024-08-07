#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class CoreInfoTable : public PropertyClass {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::wstring getValue() { // Property Generated Getter
      return *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setValue(std::wstring val) { // Property Generated Setter
      *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<SharedPointer<CoreInfoTable>> * getNodes() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CoreInfoTable>> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setNodes(List<SharedPointer<CoreInfoTable>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CoreInfoTable>> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};