#pragma once

#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <SDL_mixer.h>

class SoundManager {
public:
    static SoundManager& Instance();

    void Init();
    void PlaySwapSound();
    void PlayEndSound();
    void Clean();

private:
    SoundManager();
    ~SoundManager();

    Mix_Chunk* swapSound;
    Mix_Chunk* endSound;
};

#endif 
