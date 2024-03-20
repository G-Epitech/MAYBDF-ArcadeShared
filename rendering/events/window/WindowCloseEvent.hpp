/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IWindowCloseEvent
*/

#pragma once

#include "IEvent.hpp"

namespace shared::rendering::events {
  class WindowCloseEvent;
}

class shared::rendering::events::WindowCloseEvent: public IEvent {
  public:
    WindowCloseEvent() = default;
    ~WindowCloseEvent() = default;

    /**
     * @brief Event type
     *
     */
    const EventType getType() const noexcept
    {
      return WINDOW_CLOSE;
    }
};
