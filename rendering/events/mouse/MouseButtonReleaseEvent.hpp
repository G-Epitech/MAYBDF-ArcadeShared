/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IMouseEvent
*/

#pragma once

#include "AMouseButtonEvent.hpp"

namespace shared::rendering::events
{
  class MouseButtonReleaseEvent;
}

class shared::rendering::events::MouseButtonReleaseEvent :
  public AMouseButtonEvent<EventType::MOUSE_BTN_RELEASE>
{
  public:
    MouseButtonReleaseEvent(MouseButton button, types::Vector2f position)
      : AMouseButtonEvent(button, position) {}
    ~MouseButtonReleaseEvent() = default;
};
