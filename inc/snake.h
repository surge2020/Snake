#ifndef SNAKE
#define SNAKE

#include <SDL2/SDL.h>
#include "head.h"

class Snake {
public:
    Snake(SDL_Renderer* renderer);
    Head* head;
    void setDirection(char direction);  
    void update();
    void render();
private:
    SDL_Renderer* renderer;
    char direction;  
};

#endif