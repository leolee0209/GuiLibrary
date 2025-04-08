#pragma once
#include "LRect.hpp"
#include <vector>
#include <string>
using namespace Limb;

namespace Limb{

class Face{
public:
    Point p;
    std::vector<Shape *> shapes;

private:
};

class Shape
{
public:
    virtual void specificDraw(SDL_Renderer *r, Point parentP);
};
class Circle : public Shape
{
public:
    Rect rect;
    Color color;
    void specificDraw(SDL_Renderer *r, Point parentP);
};
class Rectangle : public Shape
{
public:
    Rect rect;
    Color color;
    void specificDraw(SDL_Renderer *r, Point parentP);
};
class Triangle : public Shape
{
public:
    Rect rect;
    Color color;
    void specificDraw(SDL_Renderer *r, Point parentP);
};
}