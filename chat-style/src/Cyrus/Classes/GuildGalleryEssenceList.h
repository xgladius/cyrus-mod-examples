#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class GuildGalleryEssenceList : public PropertyClass {
public:
    List<unsigned int> getTemplateList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTemplateList(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<int> getEssenceList() { // Property Generated Getter
      return *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setEssenceList(List<int> val) { // Property Generated Setter
      *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};