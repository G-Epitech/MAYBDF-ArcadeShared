/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** KeyData
*/

#pragma once

#include "../../types/types.hpp"

namespace shared::games::events
{
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
    ControlCode control; // Control key
    ArrowCode arrow;     // Arrow key
    char character;      // ASCII character value
    int func;            // Function key number
  } KeyCode;

  typedef struct
  {
    KeyCode code; // Key code. Interpretation depends on the type
    KeyType type; // Type of the key
  } KeyData;
}
