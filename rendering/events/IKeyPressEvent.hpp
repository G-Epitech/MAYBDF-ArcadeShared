/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IKeyEvent
*/

#pragma once

#include "IKeyEvent.hpp"

namespace shared::rendering::events {
  class IKeyPressEvent;
}

class shared::rendering::events::IKeyPressEvent: public IKeyEvent {
  public:
    virtual ~IKeyPressEvent() = default;

    /**
     * @brief Event type
     *
     */
    const EventType type = EventType::KEY_PRESS;
};
