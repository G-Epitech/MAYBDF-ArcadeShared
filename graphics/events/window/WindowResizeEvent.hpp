/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IWindowResizeEvent
*/

#pragma once

#include "../Event.hpp"
#include "../../../types/types.hpp"

namespace shared::graphics::events {
  class WindowResizeEvent;
}

class shared::graphics::events::WindowResizeEvent: public Event {
  public:
    WindowResizeEvent(types::Vector2u newSize) : Event(WINDOW_RESIZE), _newSize(newSize) {}
    ~WindowResizeEvent() = default;

    /**
     * @brief Get the new window size
     *
     * @return New window size
     */
    const types::Vector2u &getNewSize() const noexcept
    {
      return this->_newSize;
    }

    protected:
      types::Vector2u _newSize;
};
