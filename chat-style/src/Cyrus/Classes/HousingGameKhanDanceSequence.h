#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingGameKhanDanceSequence : public PropertyClass {
public:
    List<unsigned char> getDanceSequenceList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned char>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDanceSequenceList(List<unsigned char> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned char>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};