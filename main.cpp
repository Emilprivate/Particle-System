#include "main.h"

using namespace std;

SDLMain* sdlwindow = nullptr;

int Main::screenX = 1280;
int Main::screenY = 720;

int main()
{
	sdlwindow = new SDLMain();!

	sdlwindow->Init("Particle System", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, Main::screenX, Main::screenY);

	while (sdlwindow->online()) {
		sdlwindow->handleEvents();
		sdlwindow->Update();
		sdlwindow->Render();
	}

	sdlwindow->Clean();
	return 0;
}
