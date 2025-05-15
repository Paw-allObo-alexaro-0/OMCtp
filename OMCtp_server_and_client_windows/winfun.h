/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|***************winfun.h - Functions for Windows***************|
\**************************************************************/



#include <Windows.h>
#include "usefun.h"
#include "ingame_to_win.h"

namespace omctpfun_win
{
	HWND CreateMainWindowStd(HINSTANCE p_winInstance, char* cmdLine);
	LRESULT CALLBACK winWndProcStd(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
	void ShowMainWindowStd(HWND mainWindow, int winShowParam);
};