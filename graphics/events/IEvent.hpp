/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEvent
*/

#pragma once

#include <memory>

namespace shared::graphics::events
{
  class IEvent;

  typedef enum
  {
    KEY_PRESS,          // Key pressed
    KEY_RELEASE,        // Key released
    MOUSE_BTN_PRESS,    // Mouse button pressed
    MOUSE_BTN_RELEASE,  // Mouse button released
    MOUSE_MOVE,         // Mouse moved
    WINDOW_CLOSE,       // Window closed
    WINDOW_RESIZE,      // Window resized
  } EventType;

  typedef std::shared_ptr<IEvent> EventPtr;
}

class shared::graphics::events::IEvent
{
  public:
    virtual ~IEvent() = default;

    /**
     * @brief Event type
     */
    virtual EventType getType() const noexcept = 0;
};
