#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TemplateLocation.h>

class TemplateManifest : public PropertyClass {
public:
    Vector<TemplateLocation> getSerializedTemplates() { // Property Generated Getter
      return *reinterpret_cast<Vector<TemplateLocation>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSerializedTemplates(Vector<TemplateLocation> val) { // Property Generated Setter
      *reinterpret_cast<Vector<TemplateLocation>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};