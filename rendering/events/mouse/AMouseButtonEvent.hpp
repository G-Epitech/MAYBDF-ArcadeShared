/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IMouseEvent
*/

#pragma once

#include "IMouseEvent.hpp"

namespace shared::rendering::events
{
  class AMouseButtonEvent;
}

class shared::rendering::events::AMouseButtonEvent : public IMouseEvent
{
  public:
    ~AMouseButtonEvent() = default;

    /**
     * @brief Event type
     *
     */
    const EventType getType(void) const noexcept;

    /**
     * @brief Mouse position
     *
     */
    const shared::types::Vector2f getPosition(void) const noexcept;

    /**
     * @brief Mouse button released
     *
     */
    const MouseButton getButton(void) const noexcept;

  protected:
    AMouseButtonEvent(
      EventType type,
      shared::types::Vector2f position,
      MouseButton button
    );

    EventType       _type;
    types::Vector2f _position;
    MouseButton     _button;
};
