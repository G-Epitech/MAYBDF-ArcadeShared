/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** KeyData
*/

#pragma once

#include "../../types/types.hpp"

namespace shared::games::events {
  typedef enum KeyType;
  typedef union KeyCode;
  typedef struct KeyData;

  typedef enum ControlCode;
  typedef enum ArrowCode;
}

enum shared::games::events::KeyType {
  CONTROL, // Control key (`Ctrl`, `Shift`, `Alt`)
  ARROW, // Arrow key (`Up`, `Down`, `Left`, `Right`)
  FUNC, // Function key (`F1`, `F2`, `F3`, etc.)
  CHAR, // Character key (`a`, `1`, `&`, etc.)
  UNKNOWN // Unknown key
};

enum shared::games::events::ControlCode {
  CTRL, // `Ctrl` key
  SHIFT, // `Shift` key
  ALT // `Alt` key
};

enum shared::games::events::ArrowCode {
  UP, // `Up` arrow key
  DOWN, // `Down` arrow key
  LEFT, // `Left` arrow key
  RIGHT // `Right` arrow key
};

union shared::games::events::KeyCode {
  ControlCode control; // Control key
  ArrowCode arrow; // Arrow key
  char character; // ASCII character value
  int func; // Function key number
};

struct shared::games::events::KeyData {
  KeyCode code; // Key code. Interpretation depends on the type
  KeyType type; // Type of the key
};
