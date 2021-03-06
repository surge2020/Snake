#ifndef GAME
#define GAME

#include <SDL2/SDL.h>
#include "snake.h"
#include "food.h"
#include "collision.h"

class Game {
public:
    Game();
    bool getRunning();
    void input();
    void keyDown(SDL_Event* event);
    void logic();
    void update();
    void render();
    void clean();
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool running;
    Snake* snake;
    Food* food;
    Collision* collision;
};

#endif