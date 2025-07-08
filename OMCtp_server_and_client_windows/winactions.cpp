/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 07/2025********************|
|********winactions.cpp - Functions for Windows actions********|
\**************************************************************/

#include "winactions.h"
extern HWND mainWindow;

#ifndef RemVanilla_ShowMainWindow
void ShowMainWindow()
{
	ShowWindow(mainWindow, SW_SHOW);
	UpdateWindow(mainWindow);
}
#endif // RemVanilla_ShowMainWindow
