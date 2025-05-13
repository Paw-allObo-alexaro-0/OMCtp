/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|***************winfun.h - Functions for Windows***************|
\**************************************************************/

#include "winfun.h"
#include <used.h>
#include "usefun.h"

#ifndef MAIN_WND_CURSOR
#define MAIN_WND_CURSOR LoadCursor(NULL, IDC_CROSS)
#endif

LRESULT __stdcall winWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
	case WM_CREATE:
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	case WM_CLOSE:
		ShowWindow(hwnd, SW_HIDE);
		break;
	case WM_PAINT:
		break;
	default:
		return DefWindowProc(hwnd, msg, wParam, lParam);
	}
	return 0;
}

namespace omctpfun_win
{
	HWND CreateMainWindowStd(HINSTANCE p_winInstance, char* cmdLine)
	{
		HWND mainWindow;
		WNDCLASSEX wndClass;
		wndClass.cbSize = sizeof(wndClass);
		wndClass.style = 0;
		wndClass.lpfnWndProc = winWndProc;
		wndClass.cbClsExtra = 0;
		wndClass.cbWndExtra = 0;
		wndClass.hInstance = p_winInstance;
		wndClass.hIcon = get_winIcon(used::icons::main_wnd);
		wndClass.hCursor = MAIN_WND_CURSOR;
		wndClass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
		wndClass.lpszMenuName = NULL;
		wndClass.lpszClassName = TEXT("OMCtp");
		wndClass.hIconSm = get_winIcon(used::icons::main_wnd);
		if(!RegisterClassEx(&wndClass))
		{
			MessageBox(NULL, TEXT("Failed to register window class!"), TEXT("OMCtp - ERROR!"), MB_ICONERROR | MB_OK);
			exit(0);
		}
		mainWindow = CreateWindowEx(NULL, TEXT("OMCtp"), TEXT("OMCtp"), WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, p_winInstance, NULL);
		return 0;
	}
};
