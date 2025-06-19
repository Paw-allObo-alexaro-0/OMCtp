/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|****************game_loop.cpp - game main loop****************|
\**************************************************************/

//Preprocessor definitions
#define GM_LOWMEM					0x0001
#define GM_EXIT						0x0002

#define GM_MAINWIN_CREATE			0x0101
#define GM_MAINWIN_ACTIVATE			0x0102
#define GM_MAINWIN_DEACTIVATE		0x0103
#define GM_MAINWIN_CLOSE			0x0104
#define GM_MAINWIN_DESTROY			0x0105
#define GM_MAINWIN_CONTEXT			0x0106
#define GM_MAINWIN_RELOADGRAPHICS	0x0107
#define GM_MAINWIN_DROPFILES		0x0108
#define GM_MAINWIN_MOUSEWHEEL		0x0109
#define GM_MAINWIN_MOUSELEAVE		0x0110
#define GM_MAINWIN_REPAINT			0x0111
#define GM_MAINWIN_SHOWBKGND		0x0112
#define GM_MAINWIN_SYSCOMMAND		0x0113

void PostMsgStd(int p_msg, void* p_data);