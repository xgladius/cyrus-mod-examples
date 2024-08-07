#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlTab::Button.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlTab__Page : public PropertyClass {
public:
    std::string getTabName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTabName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<Window> * getTabWindow() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Window> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setTabWindow(SharedPointer<Window> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Window> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    SharedPointer<ControlTab__Button> * getTabButton() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ControlTab__Button> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setTabButton(SharedPointer<ControlTab__Button> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ControlTab__Button> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};