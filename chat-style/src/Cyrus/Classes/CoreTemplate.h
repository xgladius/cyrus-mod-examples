#pragma once
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/shared.h>
#include <memory>
#include <vector>

struct CoreTemplateLayout;

#pragma pack(push, 1)
/**
 * @class CoreTemplate
 * @brief
 *
 */
class CoreTemplate : public PropertyClass {
public:
  std::vector<BehaviorTemplate *> behaviors; // 0x48;
  // TODO: reverse GetTemplateID
private:
  friend class CoreTemplateLayout;
};

struct CoreTemplateLayout {
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreTemplate, behaviors, 0x48);
};

#pragma pack(pop)