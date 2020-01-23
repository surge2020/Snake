#ifndef SNAKE
#define SNAKE

#include <SDL2/SDL.h>
#include "head.h"
#include "body.h"

class Snake {
public:
    Snake(SDL_Renderer* renderer);
    Head* head;
    Body* body;
    void setDirection(char direction);
    void eat();  
    void update();
    void render();
private:
    SDL_Renderer* renderer;
    char direction;  
};

#endif