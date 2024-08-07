#pragma once
#include <Cyrus/shared.h>
#include <cstdint>

struct WindowStyle_internal {
  uint32_t HAS_BACK : 1;
  uint32_t SCALE_CHILDREN : 1;
  uint32_t CAN_MOVE : 1;
  uint32_t CAN_SIZE : 1;
  uint32_t CAN_SCROLL : 1;
  uint32_t FOCUS_LOCKED : 1;
  uint32_t CAN_FOCUS : 1;
  uint32_t CAN_DOCK : 1;
  uint32_t DO_NOT_CAPTURE_MOUSE : 1;
  uint32_t IS_TRANSPARENT : 1;
  uint32_t EFFECT_FADEIN : 1;
  uint32_t EFFECT_HIGHLIGHT : 1;
  uint32_t HAS_NO_BORDER : 1;
  uint32_t IGNORE_PARENT_SCALE : 1;
  uint32_t USE_ALPHA_BOUNDS : 1;
  uint32_t AUTO_GROW : 1;
  uint32_t AUTO_SHRINK : 1;
  uint32_t AUTO_RESIZE : 1;
  uint32_t RESERVED : 14; // ensure 32-bit
};
STATIC_ASSERT(sizeof(WindowStyle_internal) == 4,
              "WindowFlags size is not correct");

/**
 * @namespace WindowStyle
 * @brief Contains constants for defining window styles.
 */
namespace WindowStyle {
/**
 * @brief Window style flag indicating that the window has a backing texture.
 */
constexpr uint32_t HAS_BACK = 1 << 0;

/**
 * @brief Window style flag indicating that the children of the window should be
 * scaled.
 */
constexpr uint32_t SCALE_CHILDREN = 1 << 1;

/**
 * @brief Window style flag indicating that the window can be moved.
 */
constexpr uint32_t CAN_MOVE = 1 << 2;

/**
 * @brief Window style flag indicating that the window can be resized.
 */
constexpr uint32_t CAN_SIZE = 1 << 3;

/**
 * @brief Window style flag indicating that the window can be scrolled.
 */
constexpr uint32_t CAN_SCROLL = 1 << 4;

/**
 * @brief Window style flag indicating that the window's focus is locked.
 */
constexpr uint32_t FOCUS_LOCKED = 1 << 5;

/**
 * @brief Window style flag indicating that the window can receive focus.
 */
constexpr uint32_t CAN_FOCUS = 1 << 6;

/**
 * @brief Window style flag indicating that the window can be docked.
 */
constexpr uint32_t CAN_DOCK = 1 << 7;

/**
 * @brief Window style flag indicating that the window should not capture mouse
 * events.
 */
constexpr uint32_t DO_NOT_CAPTURE_MOUSE = 1 << 8;

/**
 * @brief Window style flag indicating that the window is transparent.
 */
constexpr uint32_t IS_TRANSPARENT = 1 << 9;

/**
 * @brief Window style flag indicating that the window should fade in.
 */
constexpr uint32_t EFFECT_FADEIN = 1 << 10;

/**
 * @brief Window style flag indicating that the window should be highlighted.
 */
constexpr uint32_t EFFECT_HIGHLIGHT = 1 << 11;

/**
 * @brief Window style flag indicating that the window has no border.
 */
constexpr uint32_t HAS_NO_BORDER = 1 << 12;

/**
 * @brief Window style flag indicating that the window should ignore parent
 * scaling.
 */
constexpr uint32_t IGNORE_PARENT_SCALE = 1 << 13;

/**
 * @brief Window style flag indicating that the window should use alpha bounds.
 */
constexpr uint32_t USE_ALPHA_BOUNDS = 1 << 14;

/**
 * @brief Window style flag indicating that the window should automatically
 * grow.
 */
constexpr uint32_t AUTO_GROW = 1 << 15;

/**
 * @brief Window style flag indicating that the window should automatically
 * shrink.
 */
constexpr uint32_t AUTO_SHRINK = 1 << 16;

/**
 * @brief Window style flag indicating that the window should automatically
 * resize.
 */
constexpr uint32_t AUTO_RESIZE = 1 << 17;
} // namespace WindowStyle