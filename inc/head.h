#ifndef HEAD
#define HEAD

#include <SDL2/SDL.h>

class Head {
public:
    Head(SDL_Renderer* renderer);
    void update(char direction);
    void render();
private:
    SDL_Renderer* renderer;
    SDL_Rect headRect;
};

#endif