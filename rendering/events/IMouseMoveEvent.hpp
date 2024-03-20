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
  class IMouseMoveEvent;
}

class shared::rendering::events::IMouseMoveEvent : public IMouseEvent
{
   public:
    virtual ~IMouseMoveEvent() = default;

    /**
     * @brief Event type
     *
     */
    const EventType type = MOUSE_MOVE;
};
