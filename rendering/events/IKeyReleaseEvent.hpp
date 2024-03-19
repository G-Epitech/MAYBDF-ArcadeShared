/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IKeyEvent
*/

#pragma once

#include "IKeyEvent.hpp"

namespace shared::rendering::events {
  class IKeyReleaseEvent;
}

class shared::rendering::events::IKeyReleaseEvent: public IKeyEvent {
  public:
    virtual ~IKeyReleaseEvent() = default;

    /**
     * @brief Event type
     *
     */
    const EventType type = EventType::KEY_RELEASE;
};
