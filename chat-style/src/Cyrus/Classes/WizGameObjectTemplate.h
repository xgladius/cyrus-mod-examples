#pragma once
#include <Cyrus/Classes/GameObjectTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/shared.h>
#include <list>
#include <memory>
#include <vector>

#pragma pack(push, 1)
/**
 * @class CoreTemplate
 * @brief
 *
 */
struct WizGameObjectLayout;

class WizGameObjectTemplate : public GameObjectTemplate {
public:
  std::list<std::string> lootTable; // 0x118
  std::string deathParticles;       // 0x128
  std::string deathSound;           // 0x148
  std::string hitSound;             // 0x168
  std::string castSound;            // 0x188
  std::string aggroSound;           // 0x1A8
  std::string primarySchoolName;    // 0x1C8
  std::string locationPreference;   // 0x1E8
private:
  friend class WizGameObjectLayout;
};

struct WizGameObjectLayout {
  DEFINE_OFFSET_AND_STATIC_ASSERT(WizGameObjectTemplate, lootTable, 0x118);
  DEFINE_OFFSET_AND_STATIC_ASSERT(WizGameObjectTemplate, deathParticles, 0x128);
  DEFINE_OFFSET_AND_STATIC_ASSERT(WizGameObjectTemplate, deathSound, 0x148);
  DEFINE_OFFSET_AND_STATIC_ASSERT(WizGameObjectTemplate, hitSound, 0x168);
  DEFINE_OFFSET_AND_STATIC_ASSERT(WizGameObjectTemplate, castSound, 0x188);
  DEFINE_OFFSET_AND_STATIC_ASSERT(WizGameObjectTemplate, aggroSound, 0x1A8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(WizGameObjectTemplate, primarySchoolName,
                                  0x1C8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(WizGameObjectTemplate, locationPreference,
                                  0x1E8);
};
#pragma pack(pop)