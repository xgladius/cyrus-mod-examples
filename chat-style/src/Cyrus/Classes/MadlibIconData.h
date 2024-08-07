#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/MadlibIconUseCase.h>

class MadlibIconData : public PropertyClass {
public:
    std::string getToken() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setToken(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::wstring getIcon() { // Property Generated Getter
      return *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setIcon(std::wstring val) { // Property Generated Setter
      *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::wstring getText() { // Property Generated Getter
      return *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setText(std::wstring val) { // Property Generated Setter
      *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    std::wstring getTooltip() { // Property Generated Getter
      return *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setTooltip(std::wstring val) { // Property Generated Setter
      *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    std::wstring getColor() { // Property Generated Getter
      return *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setColor(std::wstring val) { // Property Generated Setter
      *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    bool getColorOverride() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setColorOverride(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    int getWide() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xEC);
    }

    void setWide(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xEC) = val;
    }

    MadlibIconUseCase getUseCase() { // Property Generated Getter
      return *reinterpret_cast<MadlibIconUseCase*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setUseCase(MadlibIconUseCase val) { // Property Generated Setter
      *reinterpret_cast<MadlibIconUseCase*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

};