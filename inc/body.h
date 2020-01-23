#ifndef BODY
#define BODY

#include <vector>
#include <algorithm>
#include <SDL2/SDL.h>
#include "head.h"
#include "part.h"

class Body {
public:
    Body(SDL_Renderer* renderer, Head* head);
    std::vector<Part> parts;
    void generate();
    void update();
    void render();
private:
    SDL_Renderer* renderer;
    Head* head;
};

#endif