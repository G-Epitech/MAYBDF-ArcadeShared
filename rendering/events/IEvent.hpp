/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEvent
*/

#pragma once

#include "../types/Events.hpp"

namespace shared::rendering::events
{
  class IEvent;
}

class shared::rendering::events::IEvent {
  public:
    virtual ~IEvent() = default;

    /**
     * @brief Event type
     */
    const events::EventType type;
};
