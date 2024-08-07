
#include <Cyrus/shared.h>
#include <cstdint>

struct WindowFlags_internal {
  uint32_t VISIBLE : 1;
  uint32_t NOCLIP : 1;
  uint32_t DOCK_OUTSIDE : 1;
  uint32_t DOCK_LEFT : 1;
  uint32_t DOCK_TOP : 1;
  uint32_t DOCK_RIGHT : 1;
  uint32_t DOCK_BOTTOM : 1;
  uint32_t PARENT_SIZE : 1;
  uint32_t PARENT_WIDTH : 1;
  uint32_t PARENT_HEIGHT : 1;
  uint32_t HCENTER : 1;
  uint32_t VCENTER : 1;
  uint32_t DISABLED : 1;
  uint32_t RESERVED : 19; // ensure 32-bit
};

STATIC_ASSERT(sizeof(WindowFlags_internal) == 4,
              "WindowFlags size is not correct");

/**
 * @brief Namespace containing flags for window properties.
 */
namespace WindowFlags {
/**
 * @brief Flag indicating that the window is visible.
 */
constexpr uint32_t VISIBLE = 1 << 0;

/**
 * @brief Flag indicating that the window does not have clipping.
 */
constexpr uint32_t NOCLIP = 1 << 1;

/**
 * @brief Flag indicating that the window is docked outside.
 */
constexpr uint32_t DOCK_OUTSIDE = 1 << 2;

/**
 * @brief Flag indicating that the window is docked to the left.
 */
constexpr uint32_t DOCK_LEFT = 1 << 3;

/**
 * @brief Flag indicating that the window is docked to the top.
 */
constexpr uint32_t DOCK_TOP = 1 << 4;

/**
 * @brief Flag indicating that the window is docked to the right.
 */
constexpr uint32_t DOCK_RIGHT = 1 << 5;

/**
 * @brief Flag indicating that the window is docked to the bottom.
 */
constexpr uint32_t DOCK_BOTTOM = 1 << 6;

/**
 * @brief Flag indicating that the window size is the same size as its parent.
 */
constexpr uint32_t PARENT_SIZE = 1 << 7;

/**
 * @brief Flag indicating that the window width is the same width as its parent.
 */
constexpr uint32_t PARENT_WIDTH = 1 << 8;

/**
 * @brief Flag indicating that the window height is the same height as its
 * parent.
 */
constexpr uint32_t PARENT_HEIGHT = 1 << 9;

/**
 * @brief Flag indicating that the window is horizontally centered.
 */
constexpr uint32_t HCENTER = 1 << 10;

/**
 * @brief Flag indicating that the window is vertically centered.
 */
constexpr uint32_t VCENTER = 1 << 11;

/**
 * @brief Flag indicating that the window is disabled.
 */
constexpr uint32_t DISABLED = 1 << 12;
} // namespace WindowFlags