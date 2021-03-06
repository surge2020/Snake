#include "snake.h"

Snake::Snake(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    direction = 'r';
    head = new Head(renderer);
    body = new Body(renderer, head);
}

void Snake::setDirection(char direction)
{
    if (direction == 'u' && this->direction != 'd') {
        this->direction = 'u';
    }
    else if (direction == 'd' && this->direction != 'u') {
        this->direction = 'd';
    }
    else if (direction == 'l' && this->direction != 'r') {
        this->direction = 'l';
    }
    else if (direction == 'r' && this->direction != 'l') {
        this->direction = 'r';
    }
}

void Snake::eat()
{
    body->generate();
}

void Snake::update()
{ 
    body->update();
    head->update(direction);  
}

void Snake::render()
{
    head->render();
    body->render();
}