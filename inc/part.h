#ifndef PART
#define PART

#include <SDL2/SDL.h>

class Part {
public:
    Part(SDL_Renderer* renderer, int x, int y);
    SDL_Rect partRect;
    void update();
    void render();
private:
    SDL_Renderer* renderer;
};

#endif