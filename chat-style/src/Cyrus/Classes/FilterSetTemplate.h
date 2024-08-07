#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoundFilterSetting.h>

class FilterSetTemplate : public CoreTemplate {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    unsigned int getUid() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setUid(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    Vector<SharedPointer<SoundFilterSetting>> * getFilters() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<SoundFilterSetting>> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setFilters(Vector<SharedPointer<SoundFilterSetting>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<SoundFilterSetting>> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};