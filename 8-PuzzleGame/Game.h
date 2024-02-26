#pragma once
#include <stdio.h>
#include <iostream>

#include "LogicPuzzle.h"


class Game {

public:
	Game();
	~Game();
	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	//void handleEvents();
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
	LogicPuzzle logic;
}; 