#pragma once
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/shared.h>

struct BehaviorTemplateLayout;

#pragma pack(push, 1)
/**
 * @class BehaviorTemplate
 * @brief
 *
 */
class BehaviorTemplate : public PropertyClass {
public:
  std::string name; // 0x48

private:
  friend class BehaviorTemplateLayout;
};

struct BehaviorTemplateLayout {
  DEFINE_OFFSET_AND_STATIC_ASSERT(BehaviorTemplate, name, 0x48);
};
#pragma pack(pop)