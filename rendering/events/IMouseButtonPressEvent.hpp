/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IMouseEvent
*/

#pragma once

#include "IMouseButtonEvent.hpp"

namespace shared::rendering::events
{
  class IMouseButtonPressEvent;
}

class shared::rendering::events::IMouseButtonPressEvent : public IMouseButtonEvent
{
  public:
    virtual ~IMouseButtonPressEvent() = default;

    /**
     * @brief Event type
     *
     */
    const EventType type = MOUSE_BTN_PRESS;
};
