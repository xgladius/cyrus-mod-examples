#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/FontMapping.h>
#include <Cyrus/Classes/PropertyClass.h>

class FontMapSWF : public PropertyClass {
public:
    List<FontMapping> getMappings() { // Property Generated Getter
      return *reinterpret_cast<List<FontMapping>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMappings(List<FontMapping> val) { // Property Generated Setter
      *reinterpret_cast<List<FontMapping>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getDefaultFont() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setDefaultFont(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};