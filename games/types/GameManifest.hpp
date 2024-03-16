/*
** EPITECH PROJECT, 2024
** shared-arcade
** File description:
** GameManifest
*/

#pragma once
#include <string>
#include <vector>

namespace shared::games
{
  typedef struct GameManifest;
  typedef struct Author;

}

struct shared::games::Author
{
  std::string name;    // Name of the author
  std::string email;   // Public contact email
  std::string website; // Website of the author (`github`, `gitlab`, etc.)
};

struct shared::games::GameManifest
{
  const std::string name;            // Name of the game
  const std::string description;     // Description of the game
  const std::string version;         // Version of the game
  const std::vector<Author> authors; // Authors
};
