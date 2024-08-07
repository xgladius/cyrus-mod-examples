#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MapInfoManager::MapInfo::DoodleData.h>
#include <Cyrus/Classes/PropertyClass.h>

class MapInfoManager__MapInfo : public PropertyClass {
public:
    std::string getZoneName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setZoneName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    std::string getMapImage() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setMapImage(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    Size<int> getImageSize() { // Property Generated Getter
      return *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setImageSize(Size<int> val) { // Property Generated Setter
      *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    List<SharedPointer<MapInfoManager__MapInfo__DoodleData>> * getDoodleData() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MapInfoManager__MapInfo__DoodleData>> *>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setDoodleData(List<SharedPointer<MapInfoManager__MapInfo__DoodleData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MapInfoManager__MapInfo__DoodleData>> **>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    int getMapRotation() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setMapRotation(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

};