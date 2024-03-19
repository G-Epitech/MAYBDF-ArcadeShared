/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** SoundProps
*/

#pragma once

#include <map>
#include <string>
#include <memory>
#include <uuid/uuid.h>
#include "../../types/types.hpp"

using namespace shared::types;

namespace shared::games
{
  typedef unsigned char SoundVolume;

  typedef enum
  {
    PLAY,
    PAUSE,
    STOP
  } SoundState;

  typedef struct
  {
    const std::string path; // Sound file path
    SoundState state;       // Current sound state
    SoundVolume volume;     // Sound volume
    bool loop;              // Loop sound
  } SoundProps;

  typedef std::map<uuid_t, std::unique_ptr<SoundProps>> SoundsPropsMap;
}
