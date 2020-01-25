#ifndef COLLISION
#define COLLISION

#include <SDL2/SDL.h>
#include "snake.h"
#include "food.h"

class Collision {
public:
    Collision(Snake* snake, Food* food);
    bool headWindow();
    void headFood();
private:
    Snake* snake;
    Food* food;
};

#endif