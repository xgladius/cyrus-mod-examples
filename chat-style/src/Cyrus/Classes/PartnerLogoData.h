#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/LogoData.h>
#include <Cyrus/Classes/PropertyClass.h>

class PartnerLogoData : public PropertyClass {
public:
    List<SharedPointer<LogoData>> * getLogoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<LogoData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLogoList(List<SharedPointer<LogoData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<LogoData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};