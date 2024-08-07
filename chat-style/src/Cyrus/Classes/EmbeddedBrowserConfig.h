#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/EmbeddedBrowserConfigEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class EmbeddedBrowserConfig : public PropertyClass {
public:
    std::string getSFallbackPage() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setSFallbackPage(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    List<SharedPointer<EmbeddedBrowserConfigEntry>> * getEntries() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<EmbeddedBrowserConfigEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setEntries(List<SharedPointer<EmbeddedBrowserConfigEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<EmbeddedBrowserConfigEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};