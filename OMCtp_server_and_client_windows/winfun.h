/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|***************winfun.h - Functions for Windows***************|
\**************************************************************/

#include <Windows.h>
#include "usefun.h"
#include "..\OMCtp_functions_header\usefun.h"
#include "ingame_to_win.h"
#include "loop_win.h"

namespace omctpfun_win
{
	HWND CreateMainWindowStd(HINSTANCE p_winInstance, char* cmdLine);
	void ShowMainWindowStd(HWND mainWindow, int winShowParam);
	void recive_messagesStd(void);
};