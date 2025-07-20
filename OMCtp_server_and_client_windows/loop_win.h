/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|*****loop_win.h - sends Windows messages to the game loop*****|
\**************************************************************/

#include "../OMCtp_functions_header/sysinfo.h"

#include <Windows.h>
#include <windowsx.h>
#include <shellapi.h>
#include "..\OMCtp_client_header\game_loop.h"
#include  "timer.h"

#ifndef RemVanilla_receive_messages
void receive_messages(void);
#endif // RemVanilla_receive_messages

#ifndef RemVanilla_mainWindow
extern HWND mainWindow;
#endif // RemVanilla_mainWindow

#ifndef RemVanilla_WinWndProc
LRESULT __stdcall WinWndProc(HWND p_hwnd, UINT p_msg, WPARAM p_wparam, LPARAM p_lparam);
#endif // RemVanilla_WinWndProc