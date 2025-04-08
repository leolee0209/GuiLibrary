#include "LShape.hpp"
#include "LLog.hpp"
#include <SDL2/SDL.h>

void Limb::Circle::specificDraw(SDL_Renderer *r, Point parentP)
{
}

void Limb::Rectangle::specificDraw(SDL_Renderer *r, Point parentP)
{
    SDL_SetRenderDrawColor(r, color.r, color.g, color.b, color.a);

    SDL_Rect absR = toAbsSDLRect(rect, parentP);
    if (SDL_RenderFillRect(r, &absR))
    {
        ERROR("Can't fill rect. " + std::string(SDL_GetError()));
    }
}

void Limb::Triangle::specificDraw(SDL_Renderer *r, Point parentP)
{
}
