#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class SoundFilterParam : public PropertyClass {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Vector<float> getDistanceRatio() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setDistanceRatio(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    Vector<float> getValue() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setValue(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    bool getNeedsUpdate() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setNeedsUpdate(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

};