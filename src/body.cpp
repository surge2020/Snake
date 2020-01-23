#include "body.h"

Body::Body(SDL_Renderer* renderer, Head* head)
{
    this->renderer = renderer;
    this->head = head;
    Part part(renderer, head->headRect.x - 20, head->headRect.y);
    parts.push_back(part);
}

void Body::generate()
{
    Part part(renderer, head->headRect.x, head->headRect.y);
    parts.insert(parts.begin(), part);
}

void Body::update()
{  
    std::rotate(parts.begin(), parts.begin() + 1, parts.end());
    parts.back().partRect = head->headRect;
}

void Body::render()
{
    for (Part& part : parts) {
        part.render();
    }
}