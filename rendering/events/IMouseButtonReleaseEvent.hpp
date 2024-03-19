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
  class IMouseButtonReleaseEvent;
}

class shared::rendering::events::IMouseButtonReleaseEvent : public IMouseButtonEvent
{
  public:
    virtual ~IMouseButtonReleaseEvent() = default;

    /**
     * @brief Event type
     *
     */
    const EventType type = MOUSE_BTN_RELEASE;
};
