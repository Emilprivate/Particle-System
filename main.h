#pragma once
#include <SDL.h>
#include <SDL_main.h>

#include <string>
#include <iostream>
#include <sstream>
#include <cstring>
#include <fstream>
#include <conio.h>
#include <vector>
#include <valarray>
#include <complex>
#include <math.h>
#include <limits>
#include <chrono>
#include <condition_variable>
#include <list>
#include <windows.h>

#include "External libs/imgui-master/imgui.h"
#include "External libs/imgui-master/imconfig.h"
#include "External libs/imgui-master/imgui_sdl.h"

#include "UI/Tabs/Particleoptions.h"

#include "UI/Windows/Mainwindow.h"
#include "UI/Windows/Engineoptions.h"

#include "particles.h"

#include "ImGuiInit.h"
#include "SDLinit.h"




namespace Main {
	extern int screenX;
	extern int screenY;
}
