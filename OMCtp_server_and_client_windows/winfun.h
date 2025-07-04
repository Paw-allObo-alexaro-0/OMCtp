/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|***************winfun.h - Functions for Windows***************|
\**************************************************************/

#include <Windows.h>
#include "ingame_to_win.h"
#include "loop_win.h"
#include "../OMCtp_functions_header/used.h"

#ifndef RemVanilla_omctpfun_win
namespace omctpfun_win
{
#ifndef RemVanilla_CreateMainWindow
	HWND CreateMainWindow(HINSTANCE p_winInstance, char* cmdLine);
#endif // RemVanilla_CreateMainWindow
#ifndef RemVanilla_ShowMainWindow
	void ShowMainWindow(HWND mainWindow, int winShowParam);
#endif // RemVanilla_ShowMainWindow
#ifndef RemVanilla_recive_messages
	void recive_messages(void);
#endif // RemVanilla_recive_messages
};
#endif // RemVanilla_omctpfun_win
