#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/MatchTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class BracketTemplate : public MatchTemplate {
public:
    unsigned int getNumberOfRounds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setNumberOfRounds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    bool getRemoveBracketWhenEmpty() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1EC);
    }

    void setRemoveBracketWhenEmpty(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1EC) = val;
    }

    unsigned int getPrepareForMatchTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setPrepareForMatchTimeSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    bool getPrecreateTeams() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1F4);
    }

    void setPrecreateTeams(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1F4) = val;
    }

    std::string getBracketTypeClassName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1F8);
    }

    void setBracketTypeClassName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1F8) = val;
    }

};