#include <SDL2/SDL.h>
#include <iostream>

class SDLWindow {
  SDL_Window *window;
  public:
  SDLWindow(const char* title) : window{SDL_CreateWindow(title, 0, 0, 800, 600, SDL_WINDOW_SHOWN)} {}

  ~SDLWindow() {
    SDL_DestroyWindow(window);
  }
};

int main() {
  if(SDL_Init(SDL_INIT_VIDEO) != 0) 
    std:: cout << "Error: " << SDL_GetError();
  else {
    SDLWindow myWindow("Test Window");
    SDL_Delay(5000);
  }

  SDL_Quit();
  return 0;
}