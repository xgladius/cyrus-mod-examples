#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/VisualAttributeType.h>

class VisualAttributeBehaviorTemplate : public BehaviorTemplate {
public:
    VisualAttributeType getVisualAttributeType() { // Property Generated Getter
      return *reinterpret_cast<VisualAttributeType*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setVisualAttributeType(VisualAttributeType val) { // Property Generated Setter
      *reinterpret_cast<VisualAttributeType*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getSourceFile() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setSourceFile(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    std::string getReferenceFile() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setReferenceFile(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    Color getColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    std::string getEquipmentIcon() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setEquipmentIcon(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

};