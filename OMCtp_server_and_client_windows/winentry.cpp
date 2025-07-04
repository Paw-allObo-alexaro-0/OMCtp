/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|************winentry.cpp - Entry-point for Windows************|
\**************************************************************/

#include "winfun.h"

#ifndef RemVanilla_winInstance
HINSTANCE winInstance;
#endif // RemVanilla_winInstance
#ifndef RemVanilla_mainWindow
HWND mainWindow;
#endif // RemVanilla_mainWindow

#ifndef RemVanilla_WinMain
int WINAPI WinMain(HINSTANCE p_winInstance, HINSTANCE p_winInstancePrev, LPSTR cmdLine, int winShowParam)
{
	used::icons::register_icons();
	winInstance = p_winInstance;
	HWND local_mainWindow = omctpfun_win::CreateMainWindow(p_winInstance, cmdLine);
	mainWindow = local_mainWindow;
	omctpfun_win::ShowMainWindow(mainWindow, winShowParam);
	MSG msg{};
	omctpfun_win::recive_messages();
//	command::start_omctp_client(winInstance, local_mainWindow);
	return 0;
}
#endif // RemVanilla_WinMain