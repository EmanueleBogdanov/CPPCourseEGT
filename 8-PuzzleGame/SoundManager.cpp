
#include "SoundManager.h"

SoundManager& SoundManager::Instance() {
    static SoundManager instance;
    return instance;
}

SoundManager::SoundManager() {
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 10000);
    swapSound = Mix_LoadWAV("assets/noti-212.wav");
    endSound = Mix_LoadWAV("assets/Win.wav");
}

SoundManager::~SoundManager() {
    Mix_FreeChunk(swapSound);
    Mix_FreeChunk(endSound);
    Mix_CloseAudio();
}

void SoundManager::Init() {}

void SoundManager::PlaySwapSound() {
    Mix_PlayChannel(-1, swapSound, 0);
}

void SoundManager::PlayEndSound() {
    Mix_PlayChannel(-1, endSound, 0);
}

void SoundManager::Clean() {}
