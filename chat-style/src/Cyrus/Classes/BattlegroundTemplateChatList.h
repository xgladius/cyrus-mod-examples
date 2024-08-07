#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BattlegroundTemplateChat.h>
#include <Cyrus/Classes/PropertyClass.h>

class BattlegroundTemplateChatList : public PropertyClass {
public:
    List<SharedPointer<BattlegroundTemplateChat>> * getTemplates() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BattlegroundTemplateChat>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTemplates(List<SharedPointer<BattlegroundTemplateChat>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BattlegroundTemplateChat>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};