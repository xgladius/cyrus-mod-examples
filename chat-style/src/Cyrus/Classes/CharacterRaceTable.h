#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CharacterElementTable.h>
#include <Cyrus/Classes/CommonElementTable.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RaceAnimationSoundData.h>
#include <Cyrus/Classes/UserAnimationEvent.h>
#include <Cyrus/Enums/eRace.h>

class CharacterRaceTable : public PropertyClass {
public:
    eRace getERace() { // Property Generated Getter
      return *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setERace(eRace val) { // Property Generated Setter
      *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<CharacterElementTable> getCharacterTables() { // Property Generated Getter
      return *reinterpret_cast<List<CharacterElementTable>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setCharacterTables(List<CharacterElementTable> val) { // Property Generated Setter
      *reinterpret_cast<List<CharacterElementTable>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    CharacterElementTable getDefaultTable() { // Property Generated Getter
      return *reinterpret_cast<CharacterElementTable*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setDefaultTable(CharacterElementTable val) { // Property Generated Setter
      *reinterpret_cast<CharacterElementTable*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    CommonElementTable getCommonTable() { // Property Generated Getter
      return *reinterpret_cast<CommonElementTable*>(reinterpret_cast<uintptr_t>(this) + 0x378);
    }

    void setCommonTable(CommonElementTable val) { // Property Generated Setter
      *reinterpret_cast<CommonElementTable*>(reinterpret_cast<uintptr_t>(this) + 0x378) = val;
    }

    SharedPointer<RaceAnimationSoundData> * getRaceAnimationSoundData() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<RaceAnimationSoundData> *>(reinterpret_cast<uintptr_t>(this) + 0x3D8);
    }

    void setRaceAnimationSoundData(SharedPointer<RaceAnimationSoundData> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<RaceAnimationSoundData> **>(reinterpret_cast<uintptr_t>(this) + 0x3D8) = val;
    }

    List<SharedPointer<UserAnimationEvent>> * getAnimationEventList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<UserAnimationEvent>> *>(reinterpret_cast<uintptr_t>(this) + 0x3E8);
    }

    void setAnimationEventList(List<SharedPointer<UserAnimationEvent>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<UserAnimationEvent>> **>(reinterpret_cast<uintptr_t>(this) + 0x3E8) = val;
    }

};