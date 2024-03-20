/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IMouseEvent
*/

#pragma once

#include "../../types/types.hpp"
#include "AMouseButtonEvent.hpp"

namespace shared::rendering::events
{
  class MouseButtonPressEvent;
}

class shared::rendering::events::MouseButtonPressEvent : public AMouseButtonEvent
{
  public:
    MouseButtonPressEvent(
      shared::types::Vector2f position,
      MouseButton button
    );
    ~MouseButtonPressEvent() = default;
};
