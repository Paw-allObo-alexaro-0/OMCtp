/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|************winentry.cpp - Entry-point for Windows************|
\**************************************************************/

#include "..\OMCtp_functions_header\mods.h"
#include "winfun.h"

HINSTANCE winInstance;
HWND mainWindow;

#if CUSTOM_WIN_MAIN == 1
int WINAPI WinMain(HINSTANCE p_winInstance, HINSTANCE p_winInstancePrev, LPSTR cmdLine, int winShowParam){return customWinMain(p_winInstance, p_winInstancePrev, cmdLine, winShowParam);
#else
int WINAPI WinMain(HINSTANCE p_winInstance, HINSTANCE p_winInstancePrev, LPSTR cmdLine, int winShowParam)
{
	used::icons::register_icons();
	winInstance = p_winInstance;
	HWND local_mainWindow = CreateMainWindow(p_winInstance, cmdLine);
	mainWindow = local_mainWindow;
	ShowMainWindow(mainWindow, winShowParam);
	MSG msg{};
	while(msg.message != WM_QUIT)
	{
		GetMessage(&msg, mainWindow, 0, 0);
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
//	command::start_omctp_client(winInstance, local_mainWindow);
	return 0;
}
#endif