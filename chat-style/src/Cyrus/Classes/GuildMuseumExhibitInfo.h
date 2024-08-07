#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GuildMuseumArtifactInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class GuildMuseumExhibitInfo : public PropertyClass {
public:
    std::string getDisplayName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDisplayName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getTagName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setTagName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<SharedPointer<GuildMuseumArtifactInfo>> * getArtifactList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GuildMuseumArtifactInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setArtifactList(List<SharedPointer<GuildMuseumArtifactInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GuildMuseumArtifactInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};