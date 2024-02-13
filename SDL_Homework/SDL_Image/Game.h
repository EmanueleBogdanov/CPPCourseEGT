#pragma once
#include "SDL.h"
#include <stdio.h>

class Game {

public:
	Game();
	~Game();
	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void handleEvents();
	void update();
	void render();
	void clean();

	bool running() {
		return IsRunning;
	}

private:
	bool IsRunning;
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Texture* texture; 
	SDL_Rect sourceRectangle; 
	SDL_Rect destinationRectangle; 
	int speed; 
	bool moveRight;
	int SCREEN_WIDTH;
};