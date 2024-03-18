/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** TextureProps
*/

#pragma once

#include <map>
#include <memory>
#include <string>
#include "../../types/types.hpp"

using namespace shared::types;

namespace shared::games
{
  typedef struct
  {
    const std::string ascii; // ASCII image representation path
    const std::string bin;   // Binary image path
    Vector2f binTileSize;    // Size of the binary tile
  } TextureProps;

  typedef struct
  {
    TextureSources sources; // Sources of textures
    Vector2u origin;        // Origin of the texture
  } TextureSources;
}
