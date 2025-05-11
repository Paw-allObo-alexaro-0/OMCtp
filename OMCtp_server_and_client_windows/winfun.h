/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|***************winfun.h - Functions for Windows***************|
\**************************************************************/

#include "winInclude\winthings.h"

#include <ingame_types.h>

//Pre-declared functions
winWNDPROC winWndProc(winWINDOW, unsigned int, unsigned long long, long long);

winWINDOW CreateMainWindow(winINSTANCE p_winInstance, char* cmdLine)
{
	winWINDOW mainWindow;
	winWNDCLASS wndClass;
	wndClass.cbSize = sizeof(wndClass);
	wndClass.style = 0;
	wndClass.lpfnWndProc = winWndProc;
	wndClass.cbClsExtra = 0;
	wndClass.cbWndExtra = 0;
	wndClass.hInstance = p_winInstance;
	wndClass.hIcon = get_winIcon(used::icons::main_wnd);
	wndClass.hCursor = get_winIcon(used::icons::main_wnd_cursor);//(winCURSOR)((wchar_t*)((unsigned long long)((unsigned short)(32515))));

}