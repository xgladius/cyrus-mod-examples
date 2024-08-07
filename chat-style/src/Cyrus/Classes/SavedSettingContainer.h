#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SavedSetting.h>

class SavedSettingContainer : public PropertyClass {
public:
    List<SharedPointer<SavedSetting>> * getSavedSettingList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SavedSetting>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSavedSettingList(List<SharedPointer<SavedSetting>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SavedSetting>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};