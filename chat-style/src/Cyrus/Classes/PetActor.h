#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MatchActor.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetActor : public MatchActor {
public:
    unsigned __int64 getNTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x1C0);
    }

    void setNTemplateID(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x1C0) = val;
    }

    unsigned char getNRank() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x1C8);
    }

    void setNRank(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x1C8) = val;
    }

    gid getPetID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x1B0);
    }

    void setPetID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x1B0) = val;
    }

    gid getPetPermanentID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setPetPermanentID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    std::string getNameBlob() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1D0);
    }

    void setNameBlob(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1D0) = val;
    }

};