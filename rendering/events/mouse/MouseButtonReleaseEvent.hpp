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
  class MouseButtonReleaseEvent;
}

class shared::rendering::events::MouseButtonReleaseEvent : public AMouseButtonEvent
{
  public:
    MouseButtonReleaseEvent(
      shared::types::Vector2f position,
      MouseButton button
    );
    ~MouseButtonReleaseEvent() = default;
};
