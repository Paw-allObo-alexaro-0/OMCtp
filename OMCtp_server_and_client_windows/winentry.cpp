/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|************winentry.cpp - Entry-point for Windows************|
\**************************************************************/

#include <mods.h>
#include "usefun.h"
#include "winfun.h"

HINSTANCE winInstance;

#if CUSTOM_WIN_MAIN == 1
int WINAPI WinMain(HINSTANCE p_winInstance, HINSTANCE p_winInstancePrev, LPSTR cmdLine, int winShowParam){return customWinMain(p_winInstance, p_winInstancePrev, cmdLine, winShowParam);
#else
int WINAPI WinMain(HINSTANCE p_winInstance, HINSTANCE p_winInstancePrev, LPSTR cmdLine, int winShowParam)
{
	winInstance = p_winInstance;
	HWND mainWindow = CreateMainWindow(p_winInstance, cmdLine);
	ShowMainWindow(&mainWindow, winShowParam);
	command::start_omctp_client(winInstance, mainWindow);
	return 0;
}
#endif