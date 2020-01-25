#include "head.h"

Head::Head(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    headRect = {100, 100, 20, 20};
}

void Head::update(char direction)
{
    if (direction == 'u') {
        headRect.y -= 20;
    }
    else if (direction == 'd') {
        headRect.y += 20;
    }
    else if (direction == 'l') {
        headRect.x -= 20;
    }
    else if (direction == 'r') {
        headRect.x += 20;
    }
}

void Head::render()
{
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &headRect);
}