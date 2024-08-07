#pragma once
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/shared.h>
#include <list>
#include <memory>
#include <vector>

#pragma pack(push, 1)
/**
 * @class GameObjectType
 * @brief
 *
 */
enum GameObjectType : uint32_t {
  UNDEFINED,
  PLAYER,
  NPC,
  PROP,
  OBJECT,
  HOUSE,
  KEY,
  OLD_KEY,
  DEED,
  MAIL,
  EQUIP_HEAD,
  EQUIP_CHEST,
  EQUIP_LEGS,
  EQUIP_HANDS,
  EQUIP_FINGER,
  EQUIP_FEET,
  EQUIP_EAR,
  RECIPE,
  BUILDING_BLOCK,
  BUILDING_BLOCK_SOLID,
  GOLF,
  DOOR,
  PET,
  FABRIC,
  WINDOW,
  ROOF,
  HORSE,
  STRUCTURE,
  HOUSING_TEXTURE,
  PLANT
};

struct GameObjectLayout;

class GameObjectTemplate : public CoreTemplate {
public:
  std::string objectName;               // 0x60
  uint32_t templateID;                  // 0x80
  uint32_t visualID;                    // 0x84
  std::string description;              // 0x88
  std::string displayName;              // 0xA8
  GameObjectType objectType;            // 0xC8
  uint32_t pad2;                        // 0xCC
  std::string icon;                     // 0xD0
  bool exemptFromAOI;                   // 0xF0
  uint8_t pad[0x7];                     // 0xF1
  std::list<std::string> adjectiveList; // 0xF8
  uint8_t pad1[0x10];                   // 0x108
private:
  friend class GameObjectLayout;
};

struct GameObjectLayout {
  DEFINE_OFFSET_AND_STATIC_ASSERT(GameObjectTemplate, objectName, 0x60);
  DEFINE_OFFSET_AND_STATIC_ASSERT(GameObjectTemplate, templateID, 0x80);
  DEFINE_OFFSET_AND_STATIC_ASSERT(GameObjectTemplate, visualID, 0x84);
  DEFINE_OFFSET_AND_STATIC_ASSERT(GameObjectTemplate, description, 0x88);
  DEFINE_OFFSET_AND_STATIC_ASSERT(GameObjectTemplate, displayName, 0xA8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(GameObjectTemplate, objectType, 0xC8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(GameObjectTemplate, icon, 0xD0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(GameObjectTemplate, exemptFromAOI, 0xF0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(GameObjectTemplate, pad, 0xF1);
  DEFINE_OFFSET_AND_STATIC_ASSERT(GameObjectTemplate, adjectiveList, 0xF8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(GameObjectTemplate, pad1, 0x108);
};
#pragma pack(pop)