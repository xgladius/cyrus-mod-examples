#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class WindowBubble : public PropertyClass {
public:
    std::string getSFilename() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSFilename(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setFlags(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    Point<int> getDockToPoint() { // Property Generated Getter
      return *reinterpret_cast<Point<int>*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setDockToPoint(Point<int> val) { // Property Generated Setter
      *reinterpret_cast<Point<int>*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

};