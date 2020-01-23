#ifndef BODY
#define BODY

#include <vector>
#include <SDL2/SDL.h>
#include "head.h"
#include "part.h"

class Body {
public:
    Body(SDL_Renderer* renderer, Head* head);
    std::vector<Part> parts;
    void update();
    void render();
private:
    SDL_Renderer* renderer;
    Head* head;
};

#endif