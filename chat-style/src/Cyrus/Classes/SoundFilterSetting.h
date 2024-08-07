#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class SoundFilterSetting : public PropertyClass {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Vector<SoundFilterParam*> * getParams() { // Property Generated Getter
      return reinterpret_cast<Vector<SoundFilterParam*> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setParams(Vector<SoundFilterParam*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SoundFilterParam*> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    bool getNeedsUpdate() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setNeedsUpdate(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};