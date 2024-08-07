#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WindowStyle.h>

class ControlList__ListWindowStyle : public WindowStyle {
public:
    std::string getSHighlightSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setSHighlightSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

};