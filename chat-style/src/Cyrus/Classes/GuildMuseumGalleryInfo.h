#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GuildMuseumExhibitInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class GuildMuseumGalleryInfo : public PropertyClass {
public:
    std::string getWorldName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setWorldName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getWorldDoorTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setWorldDoorTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    int getLevelScaleLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setLevelScaleLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    std::string getGalleryZone() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setGalleryZone(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    List<SharedPointer<GuildMuseumExhibitInfo>> * getExhibitList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GuildMuseumExhibitInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setExhibitList(List<SharedPointer<GuildMuseumExhibitInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GuildMuseumExhibitInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    std::string getDisplayName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setDisplayName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    std::string getDebugName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setDebugName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

};