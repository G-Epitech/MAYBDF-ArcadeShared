/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** SoundProps
*/

#pragma once

#include <string>
#include <map>
#include <memory>
#include "../games.hpp"
#include "../../types/types.hpp"

using namespace shared::types;

namespace shared::games {
    typedef struct SoundProps;
    typedef enum SoundState;
    typedef unsigned char SoundVolume;
    typedef std::map<UUId, std::unique_ptr<SoundProps>> SoundsPropsMap;
}

enum shared::games::SoundState {
    PLAY,
    PAUSE,
    STOP
};

struct shared::games::SoundProps {
    const std::string path; // Sound file path
    SoundState state; //Current sound state
    SoundVolume volume; //Sound volume
};
