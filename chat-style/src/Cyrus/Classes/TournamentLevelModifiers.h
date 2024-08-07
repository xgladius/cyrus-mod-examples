#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class TournamentLevelModifiers : public CoreTemplate {
public:
    List<Point<float>> getLevelToRankMod() { // Property Generated Getter
      return *reinterpret_cast<List<Point<float>>*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setLevelToRankMod(List<Point<float>> val) { // Property Generated Setter
      *reinterpret_cast<List<Point<float>>*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    unsigned int getTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};