#include "collision.h"

Collision::Collision(Snake* snake, Food* food)
{
    this->snake = snake;
    this->food = food;
}

bool Collision::headWindow()
{
    // Top
    if (snake->head->headRect.y < 0) {
        return true;
    }
    // Bottom
    else if (snake->head->headRect.y > 480) {
        return true;
    }
    // Left
    else if (snake->head->headRect.x < 0) {
        return true;
    }
    // Right
    else if (snake->head->headRect.x > 640)
    {
        return true;
    }
    // No collision
    else {
        return false;
    }
}

void Collision::headFood()
{
    if (SDL_HasIntersection(&snake->head->headRect, &food->foodRect)) {
        snake->eat();
        food->generate();
    }
}