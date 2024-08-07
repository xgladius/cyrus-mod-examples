#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ServiceOptionBase.h>

class ConfirmOption : public ServiceOptionBase {
public:
    std::string getConfirmMessageTitleKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setConfirmMessageTitleKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    std::string getConfirmMessageTitleKeyAdvancedMode() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setConfirmMessageTitleKeyAdvancedMode(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    std::string getConfirmMessageKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setConfirmMessageKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    std::string getConfirmMessageKeyAdvancedMode() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setConfirmMessageKeyAdvancedMode(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    std::string getPromptSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setPromptSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    std::string getPromptSoundAdvancedMode() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setPromptSoundAdvancedMode(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

    std::string getAcceptKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setAcceptKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    std::string getDeclineKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1F8);
    }

    void setDeclineKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1F8) = val;
    }

    SharedPointer<ServiceOptionBase> * getOptionToConfirm() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ServiceOptionBase> *>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setOptionToConfirm(SharedPointer<ServiceOptionBase> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ServiceOptionBase> **>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

    std::string getIgnoreOption() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setIgnoreOption(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    std::string getIgnoreAdvancedModeOption() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setIgnoreAdvancedModeOption(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

};