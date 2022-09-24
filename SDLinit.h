#pragma once
#undef main

#include "main.h"

class Particle; class ImGuiInit;

class SDLMain {
public:
	void Init(const char* TITLE, int XPOS, int YPOS, int WIDTH, int HEIGHT);
	void handleEvents();
	void Update();
	void Render();
	void Clean();

	SDL_Surface* getWindowSurface() { return windowSurface; }
	SDL_Renderer* getRenderer() { return renderer; }

	bool online() {
		return isOnline;
	}

	SDL_Renderer* renderer = nullptr;
	SDL_Surface* windowSurface = nullptr;

private:
	bool isOnline;

	SDL_Window* window = nullptr;
};