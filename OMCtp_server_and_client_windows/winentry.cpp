/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|************winentry.cpp - Entry-point for Windows************|
\**************************************************************/

#include "../mods/mods.h"

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
	winInstance = p_winInstance; // Make instance-handle available globally

	// Create the main window
	HWND local_mainWindow = omctpfun_win::CreateMainWindow(p_winInstance, cmdLine);
	mainWindow = local_mainWindow;
	omctpfun_win::receive_messages(); // Start receiving messages
//	command::start("omctp", "sc", winInstance, local_mainWindow);
	return 0;
}
#endif // RemVanilla_WinMain