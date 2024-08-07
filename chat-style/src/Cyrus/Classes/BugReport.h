#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/BugType.h>

class BugReport : public PropertyClass {
public:
    std::string getClientVersion() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setClientVersion(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    BugType getType() { // Property Generated Getter
      return *reinterpret_cast<BugType*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setType(BugType val) { // Property Generated Setter
      *reinterpret_cast<BugType*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    bool getCanReproduce() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setCanReproduce(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

    std::wstring getDescription() { // Property Generated Getter
      return *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setDescription(std::wstring val) { // Property Generated Setter
      *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};