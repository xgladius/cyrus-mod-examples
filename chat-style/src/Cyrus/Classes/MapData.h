#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class MapData : public PropertyClass {
public:
    std::string getMapStringKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMapStringKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getMapImageFile() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setMapImageFile(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getPlayerGlyphFile() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setPlayerGlyphFile(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    std::string getMapIconsFile() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setMapIconsFile(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    std::string getNamePlateFile() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setNamePlateFile(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    Point<float> getTopLeft() { // Property Generated Getter
      return *reinterpret_cast<Point<float>*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setTopLeft(Point<float> val) { // Property Generated Setter
      *reinterpret_cast<Point<float>*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    Point<float> getTopRight() { // Property Generated Getter
      return *reinterpret_cast<Point<float>*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setTopRight(Point<float> val) { // Property Generated Setter
      *reinterpret_cast<Point<float>*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    Point<float> getBottomRight() { // Property Generated Getter
      return *reinterpret_cast<Point<float>*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setBottomRight(Point<float> val) { // Property Generated Setter
      *reinterpret_cast<Point<float>*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    Point<float> getBottomLeft() { // Property Generated Getter
      return *reinterpret_cast<Point<float>*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setBottomLeft(Point<float> val) { // Property Generated Setter
      *reinterpret_cast<Point<float>*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetMapStringKey() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(MapData *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31C10);
        return inner(this);
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetMapImageFile() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(MapData *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31C20);
        return inner(this);
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetPlayerGlyphFile() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(MapData *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31C30);
        return inner(this);
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetMapIconsFile() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(MapData *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31C40);
        return inner(this);
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetNamePlateFile() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(MapData *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31C50);
        return inner(this);
    }

    Point<float> GetTopLeft() { // Function Generated
        using FunctionPointerType = Point<float> (*)(MapData *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31C60);
        return inner(this);
    }

    Point<float> GetTopRight() { // Function Generated
        using FunctionPointerType = Point<float> (*)(MapData *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31C80);
        return inner(this);
    }

    Point<float> GetBottomRight() { // Function Generated
        using FunctionPointerType = Point<float> (*)(MapData *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31CA0);
        return inner(this);
    }

    Point<float> GetBottomLeft() { // Function Generated
        using FunctionPointerType = Point<float> (*)(MapData *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31CC0);
        return inner(this);
    }

    void SetMapStringKey(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(MapData *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31CE0);
        return inner(this, a0);
    }

    void SetMapImageFile(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(MapData *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31D10);
        return inner(this, a0);
    }

    void SetPlayerGlyphFile(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(MapData *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31D40);
        return inner(this, a0);
    }

    void SetMapIconsFile(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(MapData *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31D70);
        return inner(this, a0);
    }

    void SetNamePlateFile(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(MapData *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31DA0);
        return inner(this, a0);
    }

    void SetTopLeft(Point<float> a0) { // Function Generated
        using FunctionPointerType = void (*)(MapData *self, Point<float> a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31DD0);
        return inner(this, a0);
    }

    void SetTopRight(Point<float> a0) { // Function Generated
        using FunctionPointerType = void (*)(MapData *self, Point<float> a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31DF0);
        return inner(this, a0);
    }

    void SetBottomRight(Point<float> a0) { // Function Generated
        using FunctionPointerType = void (*)(MapData *self, Point<float> a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31E10);
        return inner(this, a0);
    }

    void SetBottomLeft(Point<float> a0) { // Function Generated
        using FunctionPointerType = void (*)(MapData *self, Point<float> a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F31E30);
        return inner(this, a0);
    }

    void SaveToXML(std::string a0, std::string a1) { // Function Generated
        using FunctionPointerType = void (*)(MapData *self, std::string a0, std::string a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1F319F0);
        return inner(this, a0, a1);
    }

};