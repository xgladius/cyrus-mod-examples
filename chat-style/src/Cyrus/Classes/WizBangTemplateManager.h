#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizBangTemplate.h>

class WizBangTemplateManager : public PropertyClass {
public:
    List<WizBangTemplate> getTemplates() { // Property Generated Getter
      return *reinterpret_cast<List<WizBangTemplate>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setTemplates(List<WizBangTemplate> val) { // Property Generated Setter
      *reinterpret_cast<List<WizBangTemplate>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};