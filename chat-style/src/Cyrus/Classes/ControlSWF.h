#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlSWF : public Window {
public:
    std::string getSMovieFilename() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x248);
    }

    void setSMovieFilename(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x248) = val;
    }

    void SetMovie(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlSWF *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1647680);
        return inner(this, a0);
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetMovie() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(ControlSWF *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x725B60);
        return inner(this);
    }

};