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
}

class shared::rendering::events::IMouseEvent : public IEvent
{
   public:
    virtual ~IMouseEvent() = default;

    /**
     * @brief Mouse position
     */
    const shared::types::Vector2f position;
};
