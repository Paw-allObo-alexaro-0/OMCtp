/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|***************winfun.h - Functions for Windows***************|
\**************************************************************/

#include "../OMCtp_functions_header/sysinfo.h"

#include <Windows.h>
#include "ingame_to_win.h"
#include "loop_win.h"
#include "../OMCtp_functions_header/used.h"

#ifndef RemVanilla_CreateMainWindow
HWND CreateMainWindow(HINSTANCE p_winInstance, char* cmdLine);
#endif // RemVanilla_CreateMainWindow

#ifndef RemVanillaDestroyWinMainWindow
void DestroyWinMainWindow(void);
#endif // RemVanillaDestroyWinMainWindow

#ifndef RemVanilla_ShowWinMainWindow
void ShowWinMainWindow(void);
#endif // RemVanilla_ShowWinMainWindow

#ifndef RemVanilla_DrawBkgndWin
void DrawBkgndWin();
#endif // RemVanilla_DrawBkgndWin
