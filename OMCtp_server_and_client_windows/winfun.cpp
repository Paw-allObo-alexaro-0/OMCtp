/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|***************winfun.h - Functions for Windows***************|
\**************************************************************/

#include "winfun.h"

#ifndef RemVanilla_MAIN_WND_CURSOR
#define MAIN_WND_CURSOR LoadCursor(NULL, IDC_CROSS)
#endif // RemVanilla_MAIN_WND_CURSOR
#ifndef RemVanilla_MAIN_WND_LOADING_ICON
#define MAIN_WND_LOADING_ICON LoadIcon(NULL, IDI_APPLICATION)
#endif // RemVanilla_MAIN_WND_LOADING_ICON
#ifndef RemVanilla_MAIN_WND_LOADING_BRUSH
#define MAIN_WND_LOADING_BRUSH (HBRUSH)CreatePen(PS_SOLID, 1, RGB(0, 0, 0))
#endif // RemVanilla_MAIN_WND_LOADING_BRUSH
#ifndef RemVanilla_WND_CLASS
#define USED_WND_CLASS TEXT("OMCtp")
#endif // RemVanilla_WND_CLASS
#ifndef RemVanilla_mainWindowTitle
LPCTSTR mainWindowTitle = TEXT("OMCtp");
#endif // RemVanilla_mainWindowTitle

#ifndef RemVanilla_CreateMainWindow
HWND CreateMainWindow(HINSTANCE p_winInstance, char* cmdLine)
{
	HWND mainWindow;
#ifndef RemVanilla_wndClass
	WNDCLASSEX wndClass;
	wndClass.lpszClassName = TEXT("OMCtp");
	wndClass.cbSize = sizeof(wndClass);
	wndClass.style = 0;
	wndClass.lpfnWndProc = WinWndProc;
	wndClass.cbClsExtra = 0;
	wndClass.cbWndExtra = 0;
	wndClass.hInstance = p_winInstance;
	wndClass.hIcon = MAIN_WND_LOADING_ICON;
	wndClass.hCursor = MAIN_WND_CURSOR;
	wndClass.hbrBackground = MAIN_WND_LOADING_BRUSH;
	wndClass.lpszMenuName = NULL; // TODO: Add menu
	wndClass.hIconSm = MAIN_WND_LOADING_ICON;
	if(!RegisterClassEx(&wndClass))
	{
		MessageBox(NULL, TEXT("Failed to register window class!"), TEXT("OMCtp - ERROR!"), MB_ICONERROR | MB_OK);
		exit(0);
	}
#endif // RemVanilla_wndClass

	mainWindow = CreateWindowEx(NULL, USED_WND_CLASS, mainWindowTitle, WS_OVERLAPPEDWINDOW | WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, 1000, 1000, NULL, NULL, p_winInstance, NULL);
	if(!mainWindow)
	{
		MessageBox(NULL, TEXT("Failed to create main window!"), TEXT("OMCtp - ERROR!"), MB_ICONERROR | MB_OK);
		exit(0);
	}
	return mainWindow;
}
#endif // RemVanilla_CreateMainWindow

#ifndef RemVanilla_DestroyWinMainWindow
void DestroyWinMainWindow(void)
{
	DestroyWindow(mainWindow);
}
#endif // RemVanilla_DestroyWinMainWindow
#ifndef RemVanilla_ShowWinMainWindow
void ShowWinMainWindow(void)
{
	ShowWindow(mainWindow, SW_SHOW);
	UpdateWindow(mainWindow);
}
#endif // RemVanilla_ShowWinMainWindow
#ifndef RemVanilla_ExitProgWin
void ExitProgWin(void)
{
	PostMessage(mainWindow, WM_QUIT, 0, 0);
}
#endif // RemVanilla_ExitProgWin
#ifndef RemVanilla_DrawBkgndWin
void DrawBkgndWin(void)
{
	// Todo: Temporary background painting
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
	// End of temporary background painting
}
#endif // RemVanilla_DrawBkgndWin