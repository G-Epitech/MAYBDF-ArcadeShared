/*
** EPITECH PROJECT, 2024
** arcade-shared [WSL: Ubuntu-22.04]
** File description:
** IMouseEvent
*/

#pragma once

#include "IMouseEvent.hpp"

namespace shared::rendering::events
{
  class MouseMoveEvent;
}

class shared::rendering::events::MouseMoveEvent : public IMouseEvent
{
   public:
    MouseMoveEvent(types::Vector2f position);
    ~MouseMoveEvent();

    /**
     * @brief Event type
     *
     */
    const EventType getType(void) const noexcept;

    /**
     * @brief Mouse position
     *
     */
    const types::Vector2f getPosition(void) const noexcept;

  protected:
    types::Vector2f _position;
};
