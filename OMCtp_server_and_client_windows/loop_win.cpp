/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|****loop_win.cpp - sends Windows messages to the game loop****|
\**************************************************************/

#include "loop_win.h"

LRESULT __stdcall omctpfun_win::WinWndProcStd(HWND p_hwnd, UINT p_msg, WPARAM p_wparam, LPARAM p_lparam)
{
	if(p_hwnd != mainWindow)
	{
		return DefWindowProc(p_hwnd, p_msg, p_wparam, p_lparam);
	}
	switch (p_msg)
	{
		case WM_ACTIVATE:
		case WM_ACTIVATEAPP:
		{
			switch (LOWORD(p_wparam))
			{
				case WA_INACTIVE:
					PostMsg(GM_MAINWIN_DEACTIVATE, nullptr);
					break;
				case WA_ACTIVE || WA_CLICKACTIVE:
					PostMsg(GM_MAINWIN_ACTIVATE, nullptr);
					break;
				default:
					break;
			}
			break;
		}
		case WM_CLOSE:
		{
			PostMsg(GM_MAINWIN_CLOSE, nullptr);
			break;
		}
		case WM_COMMAND:
		{
			switch (HIWORD(p_wparam))
			{
				case 0:
					//Todo: Menü einbauen!
					break;
				case 1:
					//Todo: Tastenkombinationen einbauen!
					break;
				default:
					//Todo: Buttons
					break;
			}
			break;
		}
		case WM_COMPACTING:
		{
			PostMsg(GM_LOWMEM, nullptr);
			break;
		}
		case WM_CONTEXTMENU:
		{
			if((GET_X_LPARAM(p_lparam) == -1 ) && (GET_Y_LPARAM(p_lparam) == -1) && ( (HWND)p_wparam == mainWindow))
				PostMsg(GM_MAINWIN_CONTEXT, nullptr);
			break;

		}
		case WM_CREATE:
		{
			PostMsg(GM_MAINWIN_CREATE, nullptr);
			break;
		}
		case WM_DESTROY:
		{
			PostMsg(GM_MAINWIN_DESTROY, nullptr);
			break;
		}
		case WM_DISPLAYCHANGE:
		{
			PostMsg(GM_MAINWIN_RELOADGRAPHICS, nullptr);
			break;
		}
		case WM_DROPFILES:
		{
			PostMsg(GM_MAINWIN_DROPFILES, (void*)p_wparam);
			break;
		}
		default:
		{
			return DefWindowProc(p_hwnd, p_msg, p_wparam, p_lparam);
		}
	}
	return 0;
}

