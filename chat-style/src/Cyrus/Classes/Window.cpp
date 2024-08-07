#include "Window.h"

int32_t Window::getWindowID() const { return windowID; }

std::string Window::getName() { return m_sName; }

std::vector<std::shared_ptr<Window>> Window::getChildren() { return children; }

Window *Window::getParent() { return parent; }

std::string Window::getFlags() {
  std::vector<std::string> setFlags;

  if (m_Flags.VISIBLE)
    setFlags.push_back("VISIBLE");
  if (m_Flags.NOCLIP)
    setFlags.push_back("NOCLIP");
  if (m_Flags.DOCK_OUTSIDE)
    setFlags.push_back("DOCK_OUTSIDE");
  if (m_Flags.DOCK_LEFT)
    setFlags.push_back("DOCK_LEFT");
  if (m_Flags.DOCK_TOP)
    setFlags.push_back("DOCK_TOP");
  if (m_Flags.DOCK_RIGHT)
    setFlags.push_back("DOCK_RIGHT");
  if (m_Flags.DOCK_BOTTOM)
    setFlags.push_back("DOCK_BOTTOM");
  if (m_Flags.PARENT_SIZE)
    setFlags.push_back("PARENT_SIZE");
  if (m_Flags.PARENT_WIDTH)
    setFlags.push_back("PARENT_WIDTH");
  if (m_Flags.PARENT_HEIGHT)
    setFlags.push_back("PARENT_HEIGHT");
  if (m_Flags.HCENTER)
    setFlags.push_back("HCENTER");
  if (m_Flags.VCENTER)
    setFlags.push_back("VCENTER");
  if (m_Flags.DISABLED)
    setFlags.push_back("DISABLED");

  std::string result;
  for (size_t i = 0; i < setFlags.size(); ++i) {
    result += setFlags[i];
    if (i < setFlags.size() - 1) {
      result += ", ";
    }
  }
  return result;
}

std::string Window::getStyles() {
  std::vector<std::string> setStyles;

  if (m_Style.HAS_BACK)
    setStyles.push_back("HAS_BACK");
  if (m_Style.SCALE_CHILDREN)
    setStyles.push_back("SCALE_CHILDREN");
  if (m_Style.CAN_MOVE)
    setStyles.push_back("CAN_MOVE");
  if (m_Style.CAN_SIZE)
    setStyles.push_back("CAN_SIZE");
  if (m_Style.CAN_SCROLL)
    setStyles.push_back("CAN_SCROLL");
  if (m_Style.FOCUS_LOCKED)
    setStyles.push_back("FOCUS_LOCKED");
  if (m_Style.CAN_FOCUS)
    setStyles.push_back("CAN_FOCUS");
  if (m_Style.CAN_DOCK)
    setStyles.push_back("CAN_DOCK");
  if (m_Style.DO_NOT_CAPTURE_MOUSE)
    setStyles.push_back("DO_NOT_CAPTURE_MOUSE");
  if (m_Style.IS_TRANSPARENT)
    setStyles.push_back("IS_TRANSPARENT");
  if (m_Style.EFFECT_FADEIN)
    setStyles.push_back("EFFECT_FADEIN");
  if (m_Style.EFFECT_HIGHLIGHT)
    setStyles.push_back("EFFECT_HIGHLIGHT");
  if (m_Style.HAS_NO_BORDER)
    setStyles.push_back("HAS_NO_BORDER");
  if (m_Style.IGNORE_PARENT_SCALE)
    setStyles.push_back("IGNORE_PARENT_SCALE");
  if (m_Style.USE_ALPHA_BOUNDS)
    setStyles.push_back("USE_ALPHA_BOUNDS");
  if (m_Style.AUTO_GROW)
    setStyles.push_back("AUTO_GROW");
  if (m_Style.AUTO_SHRINK)
    setStyles.push_back("AUTO_SHRINK");
  if (m_Style.AUTO_RESIZE)
    setStyles.push_back("AUTO_RESIZE");

  std::string result;
  for (size_t i = 0; i < setStyles.size(); ++i) {
    result += setStyles[i];
    if (i < setStyles.size() - 1) {
      result += ", ";
    }
  }
  return result;
}

void Window::addFlag(uint32_t flag) { *(uint32_t *)&m_Flags |= flag; }

void Window::addStyle(uint32_t style) { *(uint32_t *)&m_Style |= style; }

void Window::toggleFlag(uint32_t flag) { *(uint32_t *)&m_Flags ^= flag; }

void Window::toggleStyle(uint32_t style) { *(uint32_t *)&m_Style ^= style; }

void Window::removeFlag(uint32_t flag) { *(uint32_t *)&m_Flags &= ~flag; }

void Window::removeStyle(uint32_t style) { *(uint32_t *)&m_Style &= ~style; }

Rect *Window::getTransform() { return &transform; }

void Window::setTransform(Rect in) { transform = in; }

VectorI2D Window::getParentOffset() const { return parentOffset; }

float Window::getTimeOnScreen() const { return screen_time; }

void Window::setTimeOnScreen(float screenTime) { screen_time = screenTime; }

float Window::getDisabledAlpha() const { return m_fDisabledAlpha; }

void Window::setFDisabledAlpha(float fDisabledAlpha) {
  m_fDisabledAlpha = fDisabledAlpha;
}

float Window::getTargetAlpha() const { return m_fTargetAlpha; }

void Window::setFTargetAlpha(float fTargetAlpha) {
  m_fTargetAlpha = fTargetAlpha;
}

Vector2D Window::getScale() const { return scale; }

void Window::setScale(float x, float y) { scale = {x, y}; }

VectorI2D Window::getOffset() const { return offset; }

void Window::performScale(float factor) {
  if (getChildren().empty()) {
    transform.bottom = (int)((float)transform.bottom * factor);
    transform.left = (int)((float)transform.left * factor);
    transform.right = (int)((float)transform.right * factor);
    transform.top = (int)((float)transform.top * factor);

    scale.x *= factor;
    scale.y *= factor;
  }

  for (auto child : getChildren()) {
    child->performScale(factor);
  }
}