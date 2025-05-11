/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|**********************winthings.h: extra**********************|
|****Windows-things, so you dont need to include Windows.h.****|
\**************************************************************/

#ifndef WINTHINGS_H
#define WINTHINGS_H



typedef __int64(__stdcall* winWNDPROC)(winWINDOW, unsigned int, unsigned long long, long long);

typedef struct winHANDLE { int unused; }*winINSTANCE, * winWINDOW, * winICON, * winCURSOR, * winBRUSH;

typedef struct winWNDCLASS
{
    unsigned int cbSize;
    unsigned int style;
    winWNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    winINSTANCE hInstance;
    winICON hIcon;
    winCURSOR hCursor;
    winBRUSH hbrBackground;
    wchar_t* lpszMenuName;
    const wchar_t* lpszClassName;
    winICON hIconSm;
};

#endif