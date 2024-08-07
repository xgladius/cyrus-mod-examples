#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/DynamicSigilSymbol.h>

class DynamicSigilSubcircle : public PropertyClass {
public:
    int getId() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setId(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getTeamIndex() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setTeamIndex(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    float getRotation() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setRotation(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    float getRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    std::string getLocationPreference() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setLocationPreference(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    DynamicSigilSymbol getSymbol() { // Property Generated Getter
      return *reinterpret_cast<DynamicSigilSymbol*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setSymbol(DynamicSigilSymbol val) { // Property Generated Setter
      *reinterpret_cast<DynamicSigilSymbol*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};