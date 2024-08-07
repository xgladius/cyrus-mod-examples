#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/GameObjectTemplate.h>
#include <Cyrus/Classes/ItemTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizItemTemplate.h>
#include <Cyrus/Enums/BoosterPackTemplate__BoosterPackType.h>

class BoosterPackTemplate : public WizItemTemplate {
public:
    List<std::string> getLootTables() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setLootTables(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    List<gid> getFeaturedRewards() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x1F8);
    }

    void setFeaturedRewards(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x1F8) = val;
    }

    std::string getNif() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setNif(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

    BoosterPackTemplate__BoosterPackType getBoosterPackType() { // Property Generated Getter
      return *reinterpret_cast<BoosterPackTemplate__BoosterPackType*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setBoosterPackType(BoosterPackTemplate__BoosterPackType val) { // Property Generated Setter
      *reinterpret_cast<BoosterPackTemplate__BoosterPackType*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

};