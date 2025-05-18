/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|*****loop_win.h - sends Windows messages to the game loop*****|
\**************************************************************/

#include <Windows.h>

extern HWND mainWindow;
LRESULT __stdcall WinWndProcStd(HWND p_hwnd, UINT p_msg, WPARAM p_wparam, LPARAM p_lparam);

namespace omctpfun_win
{
	void PostMessage(int p_msg, void* p_data)
	{

	}
}