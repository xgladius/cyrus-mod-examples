#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RequirementList.h>
#include <Cyrus/Enums/DerbyTalentBuffType.h>
#include <Cyrus/Enums/DerbyTargetType.h>

class DerbyEffect : public PropertyClass {
public:
    DerbyTalentBuffType getBuffType() { // Property Generated Getter
      return *reinterpret_cast<DerbyTalentBuffType*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setBuffType(DerbyTalentBuffType val) { // Property Generated Setter
      *reinterpret_cast<DerbyTalentBuffType*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    DerbyTargetType getKTarget() { // Property Generated Getter
      return *reinterpret_cast<DerbyTargetType*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setKTarget(DerbyTargetType val) { // Property Generated Setter
      *reinterpret_cast<DerbyTargetType*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    int getNDuration() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setNDuration(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    unsigned int getEffectID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setEffectID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    std::string getImageFilename() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setImageFilename(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    unsigned int getIconIndex() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setIconIndex(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    std::string getSoundOnActivate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setSoundOnActivate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    std::string getSoundOnTarget() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setSoundOnTarget(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    std::string getTargetParticleEffect() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setTargetParticleEffect(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    std::string getOverheadMessage() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setOverheadMessage(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    RequirementList getRequirements() { // Property Generated Getter
      return *reinterpret_cast<RequirementList*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setRequirements(RequirementList val) { // Property Generated Setter
      *reinterpret_cast<RequirementList*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

};