#include "game.h"

Game::Game()
{
    window = SDL_CreateWindow(
        "Snake",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640, 480, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
    running = true;
    snake = new Snake(renderer);
}

bool Game::getRunning()
{
    return running;
}

void Game::input()
{
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
            running = false;
            break;
        case SDL_KEYDOWN:
            keyDown(&event);
            break;
        default:
            break;
        }
    }
}

void Game::keyDown(SDL_Event* event)
{
    switch (event->key.keysym.sym) {
    case SDLK_UP:
        snake->setDirection('u');
        break;
    case SDLK_DOWN:
        snake->setDirection('d');
        break;
    case SDLK_LEFT:
        snake->setDirection('l');
        break;
    case SDLK_RIGHT:
        snake->setDirection('r');
        break;
    default:
        break;
    }
}

void Game::logic()
{
    
}

void Game::update()
{
    snake->update();
}

void Game::render()
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    snake->render();
    SDL_RenderPresent(renderer);
}

void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
}