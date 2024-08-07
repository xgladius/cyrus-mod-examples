#pragma once
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/UIScaleConfigEntry.h>

#include <list>
#include <memory>
#include <string>
#include <vector>
#define Vector std::vector
#define SharedPointer std::shared_ptr
template <typename T> using List = std::list<T>;

class UIScaleConfig : public PropertyClass {
public:
  List<SharedPointer<UIScaleConfigEntry>> *
  getEntries() { // Property Generated Getter
    return reinterpret_cast<List<SharedPointer<UIScaleConfigEntry>> *>(
        reinterpret_cast<uintptr_t>(this) + 0x48);
  }

  void setEntries(List<SharedPointer<UIScaleConfigEntry>>
                      *val) { // Property Generated Setter
    *reinterpret_cast<List<SharedPointer<UIScaleConfigEntry>> **>(
        reinterpret_cast<uintptr_t>(this) + 0x48) = val;
  }
};