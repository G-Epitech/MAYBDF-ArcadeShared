/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** AMouseButtonEvent
*/

#include "AMouseButtonEvent.hpp"

using namespace shared::rendering::events;

AMouseButtonEvent::AMouseButtonEvent(
  EventType type,
  shared::types::Vector2f position,
  MouseButton button
): _type(type), _position(position), _button(button)
{
}

AMouseButtonEvent::~AMouseButtonEvent()
{
}

const EventType AMouseButtonEvent::getType(void) const noexcept
{
  return this->_type;
}

const shared::types::Vector2f AMouseButtonEvent::getPosition(void) const noexcept
{
  return this->_position;
}

const MouseButton AMouseButtonEvent::getButton(void) const noexcept
{
  return this->_button;
}
