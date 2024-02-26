#include "LogicPuzzle.h"
#include <ctime>
#include <algorithm>
#include <cstdlib>
LogicPuzzle::LogicPuzzle() {}

LogicPuzzle::~LogicPuzzle() {}

void LogicPuzzle::Init(SDL_Renderer* buttonRender) {
    renderer = buttonRender;
    fillMatrix();
    SoundManager::Instance().Init();
    
}

void LogicPuzzle::Update(SDL_Event event) {

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            buttonSet[i][j].Update(event);
        }
    }
   
    if (event.type == SDL_MOUSEBUTTONDOWN) {
        handleMouseButtonDown(event);
    }
}

void LogicPuzzle::Draw(SDL_Renderer* render) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            buttonSet[i][j].dst.x = buttonSet[i][j].posDestCoordinatesX;
           buttonSet[i][j].dst.y = buttonSet[i][j].posDestCoordinatesY;
            buttonSet[i][j].Draw(render);
        }
    }
}

void LogicPuzzle::fillMatrix() {

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            buttonSet[i][j].Init(renderer); 

            buttonSet[i][j].src.x = 102 * (j * 3 + i);
            buttonSet[i][j].src.y = 0;
            buttonSet[i][j].src.w = 102;
            buttonSet[i][j].src.h = 102;

            buttonSet[i][j].posIndexX = j;
            buttonSet[i][j].posIndexY = i;

            buttonSet[i][j].posDestCoordinatesX = 102 * i;
            buttonSet[i][j].posDestCoordinatesY = 102 * j;

            buttonSet[i][j].setDest(102 * i, 102 * j);

            if (i == 2 && j == 2) {
                buttonSet[i][j].isEmpty = true;
                std::cout << "is Empty is correct";
            }
            else {
                buttonSet[i][j].isEmpty = false;
            }

            initialButtonSet[i][j] = buttonSet[i][j]; 
        }
    }
    
}

void LogicPuzzle::shuffleMatrix() {
    srand(time(NULL));
    for (int i = 2; i > 0; --i) {
        for (int j = 2; j > 0; --j) {
          
            int rand_i = rand() % 3;
            int rand_j = rand() % 3;

            
            std::swap(buttonSet[i][j], buttonSet[rand_i][rand_j]);
            buttonSet[i][j].posDestCoordinatesX = 102 * i;
            buttonSet[i][j].posDestCoordinatesY = 102 * j;
            buttonSet[rand_i][rand_j].posDestCoordinatesX = 102 * rand_i;
            buttonSet[rand_i][rand_j].posDestCoordinatesY = 102 * rand_j;

        }
    }
   
}

void LogicPuzzle::handleMouseButtonDown(SDL_Event event) {
    int clickX, clickY;
    SDL_GetMouseState(&clickX, &clickY);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (!buttonSet[i][j].isEmpty) {
                if ((clickX > buttonSet[i][j].dst.x) && (clickX < buttonSet[i][j].dst.x + buttonSet[i][j].dst.w) &&
                    (clickY > buttonSet[i][j].dst.y) && (clickY < buttonSet[i][j].dst.y + buttonSet[i][j].dst.h)) {
                  
                    for (int k = 0; k < 3; k++) {
                        for (int l = 0; l < 3; l++) {
                            if (buttonSet[k][l].isEmpty) {
                                if (((i == k) && (std::abs(j - l) == 1)) || ((j == l) && (std::abs(i - k) == 1))) {
                                    std::swap(buttonSet[i][j], buttonSet[k][l]);
                                    std::swap(buttonSet[i][j].posDestCoordinatesX, buttonSet[k][l].posDestCoordinatesX);
                                    std::swap(buttonSet[i][j].posDestCoordinatesY, buttonSet[k][l].posDestCoordinatesY);
                                    buttonSet[i][j].setDest(buttonSet[i][j].posDestCoordinatesX, buttonSet[i][j].posDestCoordinatesY);
                                    buttonSet[k][l].setDest(buttonSet[k][l].posDestCoordinatesX, buttonSet[k][l].posDestCoordinatesY);
                                    SoundManager::Instance().PlaySwapSound();
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
void LogicPuzzle::resetMatrix() {
   
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            buttonSet[i][j] = initialButtonSet[i][j];
        }
    }
}

bool LogicPuzzle::checkIfPuzzleIsSolved() {
 
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (!(buttonSet[i][j] == initialButtonSet[i][j])) {
                return false;
            }
        }
    }
    return true;
}