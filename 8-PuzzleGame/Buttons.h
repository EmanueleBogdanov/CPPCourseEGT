#ifndef BUTTONS_H_
#define BUTTONS_H_
#include <SDL_image.h>
#include <iostream>


class Buttons {
public:
    Buttons();
    ~Buttons();

    void Init(SDL_Renderer* buttonRender);
    void Update(SDL_Event event);
    void Draw(SDL_Renderer* render);
    void setDest(int x, int y);
    bool operator==(const Buttons& other) const;
    bool isEmpty = false;

    int posIndexX;
    int posIndexY;
    int posDestCoordinatesX;
    int posDestCoordinatesY;
    
   
    SDL_Rect src;
    SDL_Rect dst;
private:

    SDL_Texture* texture;
   
};

#endif 

