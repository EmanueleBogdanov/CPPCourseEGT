#include <iostream>
#include <SDL.h>
#include "Game.h"
Game* game = 0;
int main(int argc, char* argv[]) {
   
     game = new Game() ;
     SDL_Init(SDL_INIT_EVERYTHING);
     game->init("Puzzle", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, 0);

    while (game->running()) {
       
        game->update();
        game->render();
            
    }
        game->clean();
   
    return 0;
}