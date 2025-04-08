#pragma once
#include <SDL2/SDL.h>
#include <thread>
namespace Limb
{
    class Root;
    class LWindow
    {
    public:
        void run(Limb::Root *root);
        bool create(int screenWidth, int screenHeight);
        bool close();
        void clear();
        void present();
        SDL_Renderer *getRenderer();


    private:
        static void run2(Limb::Root *root,Limb::LWindow* w);
        std::thread *r;
        SDL_Window *window;
        SDL_Renderer *renderer;
    };
}
