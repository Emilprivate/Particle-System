#pragma once
#include "main.h"


//Klasse af ImGUI
class ImGuiInit {
public:
	void Init(SDL_Renderer* renderern);
	void Clean();
};