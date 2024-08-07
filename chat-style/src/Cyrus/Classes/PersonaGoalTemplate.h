#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/GoalTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class PersonaGoalTemplate : public GoalTemplate {
public:
    std::string getPersonaName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setPersonaName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

    bool getUsePatron() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x228);
    }

    void setUsePatron(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x228) = val;
    }

};