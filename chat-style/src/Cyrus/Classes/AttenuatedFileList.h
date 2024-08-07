#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AttenuatedFileDescription.h>
#include <Cyrus/Classes/PropertyClass.h>

class AttenuatedFileList : public PropertyClass {
public:
    List<SharedPointer<AttenuatedFileDescription>> * getAttenuatedFileDescriptionList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<AttenuatedFileDescription>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAttenuatedFileDescriptionList(List<SharedPointer<AttenuatedFileDescription>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<AttenuatedFileDescription>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};