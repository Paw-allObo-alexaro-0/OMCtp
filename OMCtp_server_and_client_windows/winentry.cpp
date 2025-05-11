/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|************winentry.cpp - Entry-point for Windows************|
\**************************************************************/

#include "winfun.h"

winINSTANCE winInstance;

int __stdcall WinMain(winINSTANCE p_winInstance, winINSTANCE p_winPrevInstance, char* cmdLine, int winShowParam)
{
	winInstance = p_winInstance;
	winWINDOW mainWindow = CreateMainWindow(p_winInstance, cmdLine);
	ShowMainWindow(&mainWindow, winShowParam);
	command::start_omctp_client(winInstance, mainWindow);
	return 0;
}