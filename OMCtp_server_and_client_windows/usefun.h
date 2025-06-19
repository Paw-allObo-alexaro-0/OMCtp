// This file is part of the OMCtp project.
//
// To overwrite the functions in this file, you can create a new file like this and include it to mods/usefuns.h.

#ifndef CUSTOM_WIN_MAIN
#define CUSTOM_WIN_MAIN 0 //Use this to set your own WinMain function
#if CUSTOM_WIN_MAIN == 1
#define customWinMain YOUR_CUSTOM_WIN_MAIN_NAME //int ~(HINSTANCE p_winInstance, HINSTANCE p_winInstancePrev, LPSTR cmdLine, int winShowParam);
#endif
#endif

#ifndef CreateMainWindow
#define CreateMainWindow omctpfun_win::CreateMainWindowStd //HWND ~(HINSTANCE p_winInstance, char* cmdLine);
#endif
#ifndef ShowMainWindow
#define ShowMainWindow omctpfun_win::ShowMainWindowStd //void ~(HWND* hwnd, int winShowParam);
#endif
#ifndef winWndProc
#define WinWndProc omctpfun_win::WinWndProcStd //LRESULT CALLBACK ~(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
#endif
#ifndef recive_messages
#define recive_messages omctpfun_win::recive_messagesStd //void ~(void);
#endif

#ifndef get_winIcon
#define get_winIcon omctpfun_win::get_winIconStd //HICON ~(icon p_icon);
#endif