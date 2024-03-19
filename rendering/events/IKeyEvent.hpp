/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IKeyEvent
*/

#pragma once

#include "IEvent.hpp"

namespace shared::rendering::events {
  class IKeyEvent;

  typedef enum
  {
    CONTROL, // Control key (`Ctrl`, `Shift`, `Alt`)
    ARROW,   // Arrow key (`Up`, `Down`, `Left`, `Right`)
    FUNC,    // Function key (`F1`, `F2`, `F3`, etc.)
    CHAR,    // Character key (`a`, `1`, `&`, etc.)
    UNKNOWN  // Unknown key
  } KeyType;

  typedef enum
  {
    CTRL,  // `Ctrl` key
    SHIFT, // `Shift` key
    ALT    // `Alt` key
  } ControlCode;

  typedef enum
  {
    UP,   // `Up` arrow key
    DOWN, // `Down` arrow key
    LEFT, // `Left` arrow key
    RIGHT // `Right` arrow key
  } ArrowCode;

  typedef union
  {
    ControlCode control;     // Control key
    ArrowCode arrow;         // Arrow key
    char character; // ASCII character value
    unsigned char func;      // Function key number
  } KeyCode;
}

class shared::rendering::events::IKeyEvent: public IEvent {
  public:
    virtual ~IKeyEvent() = default;

    /**
     * @brief Key code content
     *
     */
    const KeyCode code;

    /**
     * @brief Key type
     *
     */
    const KeyType type;
};
