#include "body.h"

Body::Body(SDL_Renderer* renderer, Head* head)
{
    this->renderer = renderer;
    this->head = head;
    Part part(renderer, head->headRect.x - 20, head->headRect.y);
    parts.push_back(part);
}

void Body::update()
{
    parts.back().partRect = head->headRect;
}

void Body::render()
{
    for (Part& part : parts) {
        part.render();
    }
}