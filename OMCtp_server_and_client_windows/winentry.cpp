/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|************winentry.cpp - Entry-point for Windows************|
\**************************************************************/

#include "winInclude\wintype.h"

int __stdcall WinMain(winINSTANCE p_winInstance, winINSTANCE p_winPrevInstance, char* cmdLine, int winShowParam)
{
	winWINDOW mainWindow = CreateMainWindow(p_winInstance, cmdLine, winShowParam);
	return 0;
}