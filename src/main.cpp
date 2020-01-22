#include "game.h"

int main()
{
    Game game;
    int timer = 0;
    while (game.getRunning()) {
        game.input(),
        game.logic();
        if (timer == 60) {
            game.update();
            timer = 0;
        }       
        game.render();
        SDL_Delay(1000/60);
        ++timer;
    }
    game.clean();
    return 0;
}