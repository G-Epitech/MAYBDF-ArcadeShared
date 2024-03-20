/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** MouseButtonPressEvent
*/

#include "MouseButtonPressEvent.hpp"

using namespace shared::rendering::events;

MouseButtonPressEvent::MouseButtonPressEvent(
  shared::types::Vector2f position,
  MouseButton button
): AMouseButtonEvent(EventType::MOUSE_BTN_PRESS, position, button)
{
}

MouseButtonPressEvent::~MouseButtonPressEvent()
{
}
