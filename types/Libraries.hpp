/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** LibraryType
*/

#pragma once

#include "games/IGame.hpp"
#include "graphics/IGraphicsFactory.hpp"

#define GAME_LOADER_NAME "arcadeLibGetGame"
#define GRAPHICS_LOADER_NAME "arcadeLibGetGraphicsFactory"
#define LIBRARY_TYPE_GETTER_NAME "arcadeLibGetType"

namespace shared::types
{
  typedef enum {
    GAME,
    GRAPHIC,
  } LibraryType;

  typedef std::unique_ptr<shared::games::game::IGame> (*GameLoader)(void);
  typedef std::unique_ptr<shared::graphics::IGraphicsFactory> (*GraphicsFactoryLoader)(void);
  typedef LibraryType (*LibraryTypeGetter)(void);
}
