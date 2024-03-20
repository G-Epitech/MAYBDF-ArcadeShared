/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** MouseButtonReleaseEvent
*/

#include "MouseButtonReleaseEvent.hpp"

using namespace shared::rendering::events;

MouseButtonReleaseEvent::MouseButtonReleaseEvent(
  shared::types::Vector2f position,
  MouseButton button
): AMouseButtonEvent(EventType::MOUSE_BTN_RELEASE, position, button)
{
}

MouseButtonReleaseEvent::~MouseButtonReleaseEvent()
{
}
