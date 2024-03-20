/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IMouseEvent
*/

#pragma once

#include "AMouseEvent.hpp"

namespace shared::rendering::events
{
  template<EventType T>
  class AMouseButtonEvent;
}

template<shared::rendering::events::EventType T>
class shared::rendering::events::AMouseButtonEvent: public AMouseEvent<T>
{
  public:
    ~AMouseButtonEvent() = default;

    /**
     * @brief Mouse button released
     *
     */
    const MouseButton getButton(void) const noexcept {
      return this->_button;
    }

  protected:
    AMouseButtonEvent(
      MouseButton button,
      types::Vector2f position
    ): AMouseEvent<T>(position), _button(button) {}

    MouseButton     _button;
};
