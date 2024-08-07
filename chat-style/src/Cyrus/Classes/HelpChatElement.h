#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class HelpChatElement : public PropertyClass {
public:
    std::string getLabelKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLabelKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    gid getTipID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setTipID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<HelpChatElement*> * getChildren() { // Property Generated Getter
      return reinterpret_cast<List<HelpChatElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setChildren(List<HelpChatElement*> * val) { // Property Generated Setter
      *reinterpret_cast<List<HelpChatElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};