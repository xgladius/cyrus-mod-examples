#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/ItemSetBonusData.h>
#include <Cyrus/Classes/PropertyClass.h>

class ItemSetBonusTemplate : public CoreTemplate {
public:
    std::string getObjectName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setObjectName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    unsigned int getTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    std::string getDisplayName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setDisplayName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    bool getNoStacking() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setNoStacking(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    List<ItemSetBonusData> getItemSetBonusDataList() { // Property Generated Getter
      return *reinterpret_cast<List<ItemSetBonusData>*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setItemSetBonusDataList(List<ItemSetBonusData> val) { // Property Generated Setter
      *reinterpret_cast<List<ItemSetBonusData>*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

};