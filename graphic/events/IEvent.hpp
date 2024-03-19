/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEvent
*/

#pragma once

#include "../types/Events.hpp"

namespace shared::graphics
{
  class IEvent;
}

class shared::graphics::IEvent {
  public:
    virtual ~IEvent() = default;

    const events::EventType type;
};
