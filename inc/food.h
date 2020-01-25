#ifndef FOOD
#define FOOD

#include <SDL2/SDL.h>
#include "snake.h"
#include "part.h"

class Food {
public:
    Food(SDL_Renderer* renderer, Snake* snake);
    SDL_Rect foodRect;
    void generate();
    void render();
private:
    SDL_Renderer* renderer;
    Snake* snake;
};

#endif