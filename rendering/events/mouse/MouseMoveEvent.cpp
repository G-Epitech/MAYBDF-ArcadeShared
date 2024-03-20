/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** MouseMoveEvent
*/

#include "MouseMoveEvent.hpp"

using namespace shared::rendering::events;
using namespace shared::types;

MouseMoveEvent::MouseMoveEvent(types::Vector2f position): _position(position)
{
}

MouseMoveEvent::~MouseMoveEvent()
{
}

const EventType MouseMoveEvent::getType(void) const noexcept
{
  return EventType::MOUSE_MOVE;
}

const Vector2f MouseMoveEvent::getPosition(void) const noexcept
{
  return this->_position;
}
