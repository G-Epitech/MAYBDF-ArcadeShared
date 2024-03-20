/*
** EPITECH PROJECT, 2024
** arcade-shared [WSL: Ubuntu-22.04]
** File description:
** IMouseEvent
*/

#pragma once

#include "../../types/types.hpp"
#include "IEvent.hpp"

namespace shared::rendering::events
{
  class IMouseEvent;
  typedef enum {
    LEFT,
    RIGHT
  } MouseButton;
}

class shared::rendering::events::IMouseEvent : public IEvent
{
   public:
    virtual ~IMouseEvent() = default;

    /**
     * @brief Mouse position
     *
     */
    virtual const shared::types::Vector2f getPosition(void) const noexcept = 0;
};
