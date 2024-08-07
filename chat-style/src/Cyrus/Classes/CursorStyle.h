#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/HardwareStyle.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoftwareStyle.h>
#include <Cyrus/Enums/CursorState.h>

class CursorStyle : public PropertyClass {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    CursorState getCursorState() { // Property Generated Getter
      return *reinterpret_cast<CursorState*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setCursorState(CursorState val) { // Property Generated Setter
      *reinterpret_cast<CursorState*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    bool getMoveable() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setMoveable(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    SoftwareStyle getSoftwareStyle() { // Property Generated Getter
      return *reinterpret_cast<SoftwareStyle*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setSoftwareStyle(SoftwareStyle val) { // Property Generated Setter
      *reinterpret_cast<SoftwareStyle*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    HardwareStyle getHardwareStyle() { // Property Generated Getter
      return *reinterpret_cast<HardwareStyle*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setHardwareStyle(HardwareStyle val) { // Property Generated Setter
      *reinterpret_cast<HardwareStyle*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

};