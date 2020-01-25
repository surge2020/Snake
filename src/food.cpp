#include "food.h"
#include <iostream>
#include <stdlib.h>

Food::Food(SDL_Renderer* renderer, Snake* snake)
{
    this->renderer = renderer;
    this->snake = snake;
    generate();
}

void Food::generate()
{
    int x;
    int y;
    bool coordinates = true;
    // Generate random x & y positions
    while (coordinates) {
        x = rand() % 620;
        y = rand() % 460;
        if (x % 20 == 0 && y % 20 == 0) {
            coordinates = false;
        }
    }
    foodRect = {x, y, 20, 20};
    std::cout << x << " " << y << std::endl;
}

void Food::render()
{
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    SDL_RenderFillRect(renderer, &foodRect);
}