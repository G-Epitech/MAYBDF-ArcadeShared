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
  typedef struct TextureProps;
  typedef struct TextureSources;
}

struct shared::games::TextureSources
{
  const std::string ascii; // ASCII image representation path
  const std::string bin;   // Binary image path
};

struct shared::games::TextureProps
{
  TextureSources sources; // Sources of textures
  Vector2u origin;        // Origin of the texture
};
