/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IWindowResizeEvent
*/

#pragma once

#include "../IEvent.hpp"
#include "../../../types/types.hpp"

namespace shared::rendering::events {
  class WindowResizeEvent;
}

class shared::rendering::events::WindowResizeEvent: public IEvent {
  public:
    WindowResizeEvent(types::Vector2u size) : _size(size) {}
    ~WindowResizeEvent() = default;

    /**
     * @brief Event type
     *
     */
    const EventType getType() const noexcept
    {
      return WINDOW_RESIZE;
    }

    /**
     * @brief Get the new window size
     *
     * @return New window size
     */
    const types::Vector2u &getSize() const noexcept
    {
      return this->_size;
    }

    protected:
      types::Vector2u _size;
};
