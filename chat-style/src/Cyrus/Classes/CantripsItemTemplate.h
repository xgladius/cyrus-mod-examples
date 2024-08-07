#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/GameObjectTemplate.h>
#include <Cyrus/Classes/ItemTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizItemTemplate.h>

class CantripsItemTemplate : public WizItemTemplate {
public:
    std::string getCantripName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setCantripName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

};