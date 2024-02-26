#ifndef LOGICPUZZLE_H_
#define LOGICPUZZLE_H_
#include "SoundManager.h"
#include <SDL.h>
#include "Buttons.h"
#include <random>

class LogicPuzzle {
public:
    LogicPuzzle();
    ~LogicPuzzle();

    void Init(SDL_Renderer* buttonRender);
    void Update(SDL_Event event);
    void Draw(SDL_Renderer* render);
    void fillMatrix();
    void shuffleMatrix();

    void handleMouseButtonDown(SDL_Event event);

    void resetMatrix();

    bool checkIfPuzzleIsSolved();
    
    
private:
    SDL_Renderer* renderer;
    Buttons buttons;
    Buttons buttonSet[3][3];
    Buttons initialButtonSet[3][3];
};

#endif 