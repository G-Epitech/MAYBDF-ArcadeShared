/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** LibraryType
*/

#pragma once

#include "../games/IGameProvider.hpp"
#include "../graphics/IGraphicsFactory.hpp"

#define SHARED_GAME_PROVIDER_LOADER_NAME arcadeLibGetGameProvider
#define SHARED_GRAPHICS_FACTORY_LOADER_NAME arcadeLibGetGraphicsFactory
#define SHARED_LIBRARY_TYPE_GETTER_NAME arcadeLibGetType
#define SHARED_STRINGIFY(x) #x

namespace shared::types
{
  typedef enum {
    GAME,
    GRAPHIC,
  } LibraryType;

  typedef std::shared_ptr<shared::games::IGameProvider> (*GameProvider)(void);
  typedef std::shared_ptr<shared::graphics::IGraphicsFactory> (*GraphicsFactoryLoader)(void);
  typedef LibraryType (*LibraryTypeGetter)(void);
}
