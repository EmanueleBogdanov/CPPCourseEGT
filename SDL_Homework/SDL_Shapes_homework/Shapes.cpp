#include "Shapes.h"

#include <math.h>

void Shapes::drawRecnatgle(SDL_Renderer* renderer, int xpos, int ypos, int width, int height, int border) {
	SDL_Rect fillRect = { xpos, ypos, width, height };
	SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
	SDL_RenderFillRect(renderer, &fillRect);

	SDL_Rect secondFillRect = { xpos + border, ypos + border, width - (border * 2), height - (border * 2) };
	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderFillRect(renderer, &secondFillRect);
}

void Shapes::drawPentagon(SDL_Renderer* renderer, int xpos, int ypos, int side) {
	int x, y;
	int n = 5;
	double angle = (2 * M_PI) / n;
	double radius = side / (2 * sin(M_PI / n));
	SDL_Point points[6];
	for (int i = 0; i < n + 1; ++i) {
		y = (int)round(sin(angle * i) * radius);
		x = (int)round(cos(angle * i) * radius);
		points[i] = { x + xpos, y + ypos };
	}
	const SDL_Point* pts = points;
	SDL_RenderDrawLines(renderer, pts, n + 1);
}

void Shapes::drawHexagon(SDL_Renderer* renderer, int xpos, int ypos, int side) {
	int x, y;
	int n = 6;
	double angle = (2 * M_PI) / n;
	double radius = side / (2 * sin(M_PI / n));
	SDL_Point points[7];
	for (int i = 0; i < n + 1; ++i) {
		y = (int)round(sin(angle * i) * radius);
		x = (int)round(cos(angle * i) * radius);
		points[i] = { x + xpos, y + ypos };
	}
	const SDL_Point* pts = points;
	SDL_RenderDrawLines(renderer, pts, n + 1);
}


