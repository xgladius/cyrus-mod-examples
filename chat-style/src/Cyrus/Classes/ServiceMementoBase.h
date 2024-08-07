#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MadlibBlock.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ServiceOptionBase.h>

class ServiceMementoBase : public PropertyClass {
public:
    List<SharedPointer<ServiceOptionBase>> * getServiceOptions() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ServiceOptionBase>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setServiceOptions(List<SharedPointer<ServiceOptionBase>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ServiceOptionBase>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<MadlibBlock> * getPersonaMadlibs() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MadlibBlock> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setPersonaMadlibs(SharedPointer<MadlibBlock> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MadlibBlock> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    std::string getNpcNameKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setNpcNameKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    std::string getNpcTextKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setNpcTextKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    std::string getNpcIcon() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setNpcIcon(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    std::string getNpcGreetingSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setNpcGreetingSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    std::string getNpcFarewellSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setNpcFarewellSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    bool getBTurnPlayerToFace() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setBTurnPlayerToFace(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    bool getClickToInteractOnly() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x111);
    }

    void setClickToInteractOnly(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x111) = val;
    }

};