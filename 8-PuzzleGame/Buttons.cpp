#include "Buttons.h"

Buttons::Buttons() {}

Buttons::~Buttons() {}

void Buttons::Init(SDL_Renderer* buttonRender) {
    SDL_Surface* buttons = IMG_Load("assets/buttons.png");
    texture = SDL_CreateTextureFromSurface(buttonRender, buttons);
    SDL_FreeSurface(buttons);
}

void Buttons::Update(SDL_Event event) {
    if (event.type == SDL_MOUSEBUTTONDOWN) {
        int x, y;
        SDL_GetMouseState(&x, &y);

        if ((x > dst.x) && (x < dst.x + dst.w) && (y > dst.y) && (y < dst.y + dst.h)) {
            std::cout << "BUTTON " << "posIndexX " << this->posIndexX << std::endl;
           std::cout << "BUTTON " << "posIndexY " << this->posIndexY << std::endl;

           std::cout << "BUTTON " << "destCoordinatesX " << this->posDestCoordinatesX << std::endl;
            std::cout << "BUTTON " << "destCoordinatesY " << this->posDestCoordinatesY << std::endl;
        }
    }

}

void Buttons::Draw(SDL_Renderer* render) {
    SDL_RenderCopy(render, texture, &src, &dst);
}

void Buttons::setDest(int x, int y) {
    dst.x = x;
    dst.y = y;
    dst.w = 102;
    dst.h = 102;
}

bool Buttons::operator==(const Buttons& other) const {
    return (this->posIndexX == other.posIndexX &&
        this->posIndexY == other.posIndexY &&
        this->posDestCoordinatesX == other.posDestCoordinatesX &&
        this->posDestCoordinatesY == other.posDestCoordinatesY);
}
