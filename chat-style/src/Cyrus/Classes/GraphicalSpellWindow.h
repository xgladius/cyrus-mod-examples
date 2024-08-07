#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GraphicalSpell.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class GraphicalSpellWindow : public Window {
public:
    SharedPointer<GraphicalSpell> * getSpell() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<GraphicalSpell> *>(reinterpret_cast<uintptr_t>(this) + 0x248);
    }

    void setSpell(SharedPointer<GraphicalSpell> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<GraphicalSpell> **>(reinterpret_cast<uintptr_t>(this) + 0x248) = val;
    }

    std::string getSpellName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x258);
    }

    void setSpellName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x258) = val;
    }

    bool getGrayscale() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x27C);
    }

    void setGrayscale(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x27C) = val;
    }

};