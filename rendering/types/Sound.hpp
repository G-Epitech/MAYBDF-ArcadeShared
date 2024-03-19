/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** SoundVolume
*/

#pragma once

namespace shared::rendering
{
  typedef unsigned char SoundVolume;
  typedef enum
  {
    PLAY,
    PAUSE,
    STOP
  } SoundState;
}
