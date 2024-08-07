#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class SkyboxInfo : public PropertyClass {
public:
    int getSkyLayerCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSkyLayerCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Vector<std::string> getSkyLayerName() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setSkyLayerName(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    std::string getClientTag() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setClientTag(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};