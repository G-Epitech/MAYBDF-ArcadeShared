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
  class IMouseButtonEvent;
}

class shared::rendering::events::IMouseButtonEvent : public IMouseEvent
{
  public:
    virtual ~IMouseButtonEvent() = default;

    /**
     * @brief Mouse position
     *
     */
    const shared::types::Vector2f position;

    /**
     * @brief Mouse button clicked
     *
     */
    const MouseButton button;
};
