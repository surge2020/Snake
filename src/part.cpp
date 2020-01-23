#include "part.h"

Part::Part(SDL_Renderer* renderer, int x, int y)
{
    this->renderer = renderer;
    partRect = {x, y, 20, 20};
}

void Part::update()
{

}

void Part::render()
{
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &partRect);
}