/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|****loop_win.cpp - sends Windows messages to the game loop****|
\**************************************************************/

#include "loop_win.h"
#include "usefun.h"
#include "..\OMCtp_functions_header\usefun.h"

LRESULT __stdcall WinWndProcStd(HWND p_hwnd, UINT p_msg, WPARAM p_wparam, LPARAM p_lparam)
{
	if(p_hwnd != mainWindow)
	{
		return DefWindowProc(p_hwnd, p_msg, p_wparam, p_lparam);
	}
	switch (p_msg)
	{
		case WM_ACTIVATE:
		{
			switch (LOWORD(p_wparam))
			{
			case WA_INACTIVE:
				omctpfun_win::PostMessage(GM_INACTIVATE, nullptr);
				break;
			case WA_ACTIVE || WA_CLICKACTIVE:
				omctpfun_win::PostMessage(GM_ACTIVATE, nullptr);
				break;
			}
			break;
		}
	}
}
