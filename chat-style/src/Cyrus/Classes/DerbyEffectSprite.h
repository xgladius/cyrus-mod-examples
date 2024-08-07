#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlSprite.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class DerbyEffectSprite : public ControlSprite {
public:
    std::string getEffectID() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2E0);
    }

    void setEffectID(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2E0) = val;
    }

};