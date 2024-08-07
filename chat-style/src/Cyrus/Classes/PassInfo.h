#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/PassInfo__AccessPassType.h>
#include <Cyrus/Enums/PassInfo__ZoneAccessMode.h>

class PassInfo : public PropertyClass {
public:
    std::string getAccessPassName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAccessPassName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Vector<std::string> getZoneDisplayNames() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setZoneDisplayNames(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    int getCrownsCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setCrownsCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    int getMsrpCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setMsrpCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    Vector<std::string> getOptions() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setOptions(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    PassInfo__ZoneAccessMode getAccessMode() { // Property Generated Getter
      return *reinterpret_cast<PassInfo__ZoneAccessMode*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setAccessMode(PassInfo__ZoneAccessMode val) { // Property Generated Setter
      *reinterpret_cast<PassInfo__ZoneAccessMode*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    PassInfo__AccessPassType getPassType() { // Property Generated Getter
      return *reinterpret_cast<PassInfo__AccessPassType*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setPassType(PassInfo__AccessPassType val) { // Property Generated Setter
      *reinterpret_cast<PassInfo__AccessPassType*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

};