/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|*****loop_win.h - sends Windows messages to the game loop*****|
\**************************************************************/

#include <Windows.h>
#include <windowsx.h>
#include <shellapi.h>
#include "usefun.h"
#include "..\OMCtp_client_header\usefun.h"
#include "..\OMCtp_functions_header\usefun.h"
#include "..\OMCtp_client_header\game_loop.h"

extern HWND mainWindow;
namespace omctpfun_win
{
	LRESULT __stdcall WinWndProcStd(HWND p_hwnd, UINT p_msg, WPARAM p_wparam, LPARAM p_lparam);
}