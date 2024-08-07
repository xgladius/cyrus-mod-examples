#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class MapInfoManager__MapInfo__DoodleData : public PropertyClass {
public:
    std::string getImage() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setImage(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Rect<int> getRect() { // Property Generated Getter
      return *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setRect(Rect<int> val) { // Property Generated Setter
      *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    Vector<std::string> getOnTags() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setOnTags(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    std::string getLabel() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setLabel(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    std::string getDisplayText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setDisplayText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    Rect<int> getMargins() { // Property Generated Getter
      return *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setMargins(Rect<int> val) { // Property Generated Setter
      *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    List<unsigned int> getChildIds() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setChildIds(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    unsigned int getId() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setId(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    bool getBIgnoresMouse() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x124);
    }

    void setBIgnoresMouse(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x124) = val;
    }

    unsigned int getTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    std::string getChildDisplayText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setChildDisplayText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    std::string getChildImage() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setChildImage(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    Rect<int> getChildRect() { // Property Generated Getter
      return *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setChildRect(Rect<int> val) { // Property Generated Setter
      *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    Rect<int> getChildMargins() { // Property Generated Getter
      return *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setChildMargins(Rect<int> val) { // Property Generated Setter
      *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    RequirementList* * getDisplayRequirements() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setDisplayRequirements(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

};