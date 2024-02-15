
#include "Game.h"
#include <iostream>
#include <string>

Game::Game() {}
Game::~Game() {}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	SCREEN_WIDTH = width;
	int flags = 0;
	if (fullscreen) {
		flags = SDL_WINDOW_FULLSCREEN;
	}
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "Ready" << std::endl;
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window) {
			std::cout << "Window is created" << std::endl;
		}

		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer) {
			SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
			std::cout << "Render is created" << std::endl;
		}

		
		SDL_Surface* loadedSurface = SDL_LoadBMP("assets/bmp2.bmp");
		if (loadedSurface == nullptr) {
			std::cerr << "Unable to load image! SDL Error: " << SDL_GetError() << std::endl;
			IsRunning = false;
			return;
		}

		texture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
		if (texture == nullptr) {
			std::cerr << "Unable to create texture from image! SDL Error: " << SDL_GetError() << std::endl;
			IsRunning = false;
			return;
		}

		SDL_FreeSurface(loadedSurface);

		
		speed = 1;
		moveRight = true;

		destinationRectangle.w = 100;  
		destinationRectangle.h = 100;  
		destinationRectangle.x = 0;    
		destinationRectangle.y = (height - destinationRectangle.h) / 2;  

		IsRunning = true;
	}
	else {
		IsRunning = false;
	}
}

void Game::handleEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type) {
	case SDL_QUIT:
		IsRunning = false;
		break;

	default:
		break;
	}
}

void Game::update()
{
	
	if (moveRight) {
		destinationRectangle.x += speed;
	}
	else {
		destinationRectangle.x -= speed;
	}

	
	if (destinationRectangle.x + destinationRectangle.w >= SCREEN_WIDTH) {
		if (moveRight) {
			moveRight = false; 
			speed++; 
		}
	}
	else if (destinationRectangle.x <= 0) {
		if (!moveRight) {
			moveRight = true; 
			speed++; 
		}
	}


	if (speed > 5) {
		speed = 1;
	}
}

void Game::render()
{
	
	SDL_RenderClear(renderer);

	
	SDL_RenderCopy(renderer, texture, NULL, &destinationRectangle);

	
	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyTexture(texture);
	SDL_Quit();
	std::cout << "Game Cleaned" << std::endl;
}