/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|***************winfun.h - Functions for Windows***************|
\**************************************************************/

#include "winfun.h"
#include "..\OMCtp_functions_header\used.h"
#include "usefun.h"

#ifndef MAIN_WND_CURSOR
#define MAIN_WND_CURSOR LoadCursor(NULL, IDC_CROSS)
#endif


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
		mainWindow = CreateWindowEx(NULL, TEXT("OMCtp"), TEXT("OMCtp"), WS_OVERLAPPEDWINDOW | WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, 1000, 1000, NULL, NULL, p_winInstance, NULL);
	}
	LRESULT CALLBACK winWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
	{
		switch (msg)
		{
			default:
				return DefWindowProc(hwnd, msg, wParam, lParam);
		}
	}
	void ShowMainWindowStd(HWND mainWindow, int winShowParam)
	{
		ShowWindow(mainWindow, winShowParam);
		UpdateWindow(mainWindow);
	}
};
