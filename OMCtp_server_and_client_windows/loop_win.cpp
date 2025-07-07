/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|****loop_win.cpp - sends Windows messages to the game loop****|
\**************************************************************/

#include "loop_win.h"
#include  "timer.h"

#ifndef RemVanilla_WinWndProc
LRESULT __stdcall omctpfun_win::WinWndProc(HWND p_hwnd, UINT p_msg, WPARAM p_wparam, LPARAM p_lparam)
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
			return 0;
		}
		case WM_CLOSE:
		{
			PostMsg(GM_MAINWIN_CLOSE, nullptr);
			return 0;
		}
		case WM_COMMAND:
		{
			switch (HIWORD(p_wparam))
			{
				case 0:
					//Todo: Add Menu!
					break;
				case 1:
					//Todo: Add Accs!
					break;
				default:
					//Todo: Buttons
					break;
			}
			return 0;
		}
		case WM_COMPACTING:
		{
			PostMsg(GM_LOWMEM, nullptr);
			return 0;
		}
		case WM_CONTEXTMENU:
		{
			if((GET_X_LPARAM(p_lparam) == -1 ) && (GET_Y_LPARAM(p_lparam) == -1) && ( (HWND)p_wparam == mainWindow))
				PostMsg(GM_MAINWIN_CONTEXT, nullptr);
			break;
			return 0;
		}
		case WM_CREATE:
		{
			PostMsg(GM_MAINWIN_CREATE, nullptr);
			return 0;
		}
		case WM_DESTROY:
		{
			PostMsg(GM_MAINWIN_DESTROY, nullptr);
			return 0;
		}
		case WM_DISPLAYCHANGE:
		{
			PostMsg(GM_MAINWIN_RELOADGRAPHICS, nullptr);
			return 0;
		}
		case WM_DROPFILES:
		{
			PostMsg(GM_MAINWIN_DROPFILES, (void*)p_wparam);
			return 0;
		}
		case WM_ERASEBKGND:
		{
			return 1;
		}
		case WM_INPUT:
		{
			//Todo: Setup Controller Input
			return 0;
		}
		case WM_INPUT_DEVICE_CHANGE:
		{
			//Todo: Setup Controller Input
			return 0;
		}
		case WM_MOUSEWHEEL:
		{
			PostMsg(GM_MAINWIN_MOUSEWHEEL, (void*)GET_WHEEL_DELTA_WPARAM(p_wparam));
			return 0;
		}
		case WM_MOUSELEAVE:
		{
			PostMsg(GM_MAINWIN_MOUSELEAVE, nullptr);
			return 0;
		}
		case WM_NULL:
		{
			// Todo: Setup Auto-Cancel
			return 0;
		}
		case WM_PAINT:
		{
			HDC hdc = GetDC(mainWindow);
			RECT rc;
			GetClientRect(mainWindow, &rc);
			int width = rc.right - rc.left;
			int height = rc.bottom - rc.top;
			COLORREF start = RGB(0, 0, 0); // Start color (black)
			COLORREF end = RGB(255, 255, 255); // End color (white)

			for (int i = 0; i < height; i++) {
				float ratio = (float)i / height;
				int r = GetRValue(start) + ratio * (GetRValue(end) - GetRValue(start));
				int g = GetGValue(start) + ratio * (GetGValue(end) - GetGValue(start));
				int b = GetBValue(start) + ratio * (GetBValue(end) - GetBValue(start));

				HBRUSH hBrush = CreateSolidBrush(RGB(r, g, b));
				RECT line = { rc.left, rc.top + i, rc.right, rc.top + i + 1 };
				FillRect(hdc, &line, hBrush);
				DeleteObject(hBrush);
			}
			ReleaseDC(mainWindow, hdc);
			ValidateRect(mainWindow, nullptr);
			PostMsg(GM_MAINWIN_REPAINT, nullptr);
			return 0;
		}
		case WM_QUIT:
		{
			PostMsg(GM_EXIT, nullptr);
			return 0;
		}
		case WM_SIZE:
		{
			PostMsg(GM_MAINWIN_RELOADGRAPHICS, nullptr);
			return 0;
		}
		case WM_SIZING:
		{
			PostMsg(GM_MAINWIN_SHOWBKGND, nullptr);
			return 0;
		}
		case WM_SYSCOMMAND:
		{
			PostMsg(GM_MAINWIN_SYSCOMMAND, (void*)p_wparam);
			return 0;
		}
		case WM_TIMECHANGE:
		{
			PostMsg(GM_SYSTIMECHANGE, nullptr);
			return 0;
		}
		default:
		{
			return DefWindowProc(p_hwnd, p_msg, p_wparam, p_lparam);
		}
	}
}

#endif // RemVanilla_WinWndProc

#ifndef RemVanilla_recive_messages
namespace omctpfun_win
{
	void receive_messages(void)
	{
		LARGE_INTEGER time;
		LARGE_INTEGER old_time = {};
		MSG msg;
		while (true)
		{
			GetMessage(&msg, NULL, 0, 0);
			WinWndProc(msg.hwnd, msg.message, msg.wParam, msg.lParam);
			time = mhighres_timer();
			loop(GT_CHKMSG);

			if (old_time.QuadPart + 10000 < time.QuadPart)
			{
				old_time = time;
				loop(GT_TICK);
				loop(GT_DRAW);
			}
		}
	}
}
#endif // RemVanilla_recive_messages
