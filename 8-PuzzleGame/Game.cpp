#include "Game.h"

using namespace std;
Game::Game() : window(nullptr), renderer(nullptr), IsRunning(false) {
}
Game::~Game() {
}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;
	if (fullscreen) {
		flags = SDL_WINDOW_FULLSCREEN;
	}
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		cout << "Ready" << endl;
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window) {
			cout << "Window is created" << endl;
		}

		renderer = SDL_CreateRenderer(window, 0, 0);
		if (renderer) {
			SDL_SetRenderDrawColor(renderer, 165, 255, 90, 255);
			cout << "Render is created" << endl;
		}
		IsRunning = true;
	}
	logic.Init(renderer);
	logic.shuffleMatrix();

	
}

void Game::update()
{
	
 SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
    case SDL_QUIT:
        IsRunning = false;
        break;
    case SDL_KEYDOWN:
        switch (event.key.keysym.sym)
        {
        case SDLK_s:
            logic.shuffleMatrix(); // Разбъркваме позициите на обектите.
            break;
        case SDLK_d:
            logic.resetMatrix(); //Тест на играта.
            break;
        }
        break;
    }

    logic.Update(event);
	if (logic.checkIfPuzzleIsSolved()) {
		std::cout << "END" << std::endl;
		SoundManager::Instance().PlayEndSound();
		IsRunning = false;
	}
}

void Game::render()
{
	SDL_RenderClear(renderer);

	logic.Draw(renderer);

	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	SDL_Delay(10000);
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	cout << "Game Cleaned" << endl;
}



