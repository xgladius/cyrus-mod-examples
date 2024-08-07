#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Search::ResultItem.h>

class Search__ResultList : public PropertyClass {
public:
    List<SharedPointer<Search__ResultItem>> * getItems() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<Search__ResultItem>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setItems(List<SharedPointer<Search__ResultItem>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<Search__ResultItem>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    gid getRequestHandle() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setRequestHandle(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};