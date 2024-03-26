/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IWindowCloseEvent
*/

#pragma once

#include "../Event.hpp"

namespace shared::graphics::events {
  class WindowCloseEvent;
}

class shared::graphics::events::WindowCloseEvent: public Event {
  public:
    WindowCloseEvent() : Event(WINDOW_CLOSE) {};
    ~WindowCloseEvent() = default;
};
