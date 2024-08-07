#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/HelpChatElement.h>
#include <Cyrus/Classes/PropertyClass.h>

class HelpChatOperator : public PropertyClass {
public:
    HelpChatElement getRootElement() { // Property Generated Getter
      return *reinterpret_cast<HelpChatElement*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setRootElement(HelpChatElement val) { // Property Generated Setter
      *reinterpret_cast<HelpChatElement*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};