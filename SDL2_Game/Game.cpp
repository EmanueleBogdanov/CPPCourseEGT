#include "Game.h"
#include <iostream>

int c = 0; 

bool Game2::init(const char* title, int xpos, int ypos, int width, int height, int flags) 
{
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success\n";
		
		
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) 
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) 
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

				
				SDL_Surface* tempSurface = SDL_LoadBMP("folder,image.bmp"); 
				texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
				SDL_FreeSurface(tempSurface);

				SDL_QueryTexture(texture, NULL, NULL, &sourceRectangle.w, &sourceRectangle.h);

				
				destinationRectangle.x = sourceRectangle.x = 0; 
				destinationRectangle.y = sourceRectangle.y = 0;


				 
				destinationRectangle.h = sourceRectangle.h;
				destinationRectangle.w = sourceRectangle.w;

			}
			else {
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else {
			std::cout << "window init failed\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail\n";
		return false;
	}
	std::cout << "init success\n";
	running = true;
	return true;
}
void Game2::render() { 
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, &sourceRectangle, &destinationRectangle); 
	SDL_RenderPresent(renderer);
}
void Game2::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		default: break;
		}
	}
}
void Game2::update() {
	
	if (c % 50 == 0) 
	{
		destinationRectangle.x++;
		destinationRectangle.y++;
		sourceRectangle.x++;

	}
}

void Game2::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
bool Game2::isRunning() {
	return Game2::running;
}
Game2::Game2() {
	Game2::window = NULL;
	Game2::renderer = NULL;
	Game2::running = true;
	Game2::sourceRectangle.x = Game2::sourceRectangle.y = Game2::sourceRectangle.w = Game2::sourceRectangle.h = 0;
	Game2::destinationRectangle.x = Game2::destinationRectangle.y = Game2::destinationRectangle.w = Game2::destinationRectangle.h = 0;
}

Game2::~Game2() 
{
}