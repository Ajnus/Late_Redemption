// mock of the original

#ifdef WIN32
#pragma comment (lib, "SDL.lib")
#pragma comment (lib, "SDLmain.lib")
#pragma comment (lib, "SDL_Image.lib")
#pragma comment (lib, "SDL_mixer.lib")
#pragma comment (lib, "SDL_ttf.lib")
#endif

#include <SDL.h>
#include <SDL_Image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>


using namespace std;

#define SCREENWIDTH 640
#define SCREENHEIGHT 480
#define SCREENBPP 0
#define SCREENFLAGS SDL_ANYFORMAT

/*
(...)
*/
