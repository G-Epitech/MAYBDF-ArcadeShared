/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEvent
*/

#pragma once

namespace shared::rendering::events
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
    TEXT_ENTER          // Text entered
  } EventType;
}

class shared::rendering::events::IEvent
{
  public:
    virtual ~IEvent() = default;

    /**
     * @brief Event type
     */
    const EventType type;
};
