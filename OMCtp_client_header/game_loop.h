/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|****************game_loop.cpp - game main loop****************|
\**************************************************************/

#ifndef RemMsgQueue
#include <queue>

class message
{
public:
	int msg;
	void* data;
	message(int p_msg, void* p_data);
};

extern std::queue<message> i;
#endif //RemMsgQueue

#ifndef RemVanilla_PostMsg
//Preprocessor definitions
#define GM_SYSTIMECHANGE			0x0001
#define GM_LOWMEM					0x0002
#define GM_EXIT						0x0003

#define GM_MAINWIN_CREATE			0x0101
#define GM_MAINWIN_ACTIVATE			0x0102
#define GM_MAINWIN_DEACTIVATE		0x0103
#define GM_MAINWIN_CLOSE			0x0104
#define GM_MAINWIN_DESTROY			0x0105
#define GM_MAINWIN_CONTEXT			0x0106
#define GM_MAINWIN_RELOADGRAPHICS	0x0107
#define GM_MAINWIN_DROPFILES		0x0108
#define GM_MAINWIN_MOUSEWHEEL		0x0109
#define GM_MAINWIN_MOUSELEAVE		0x010A
#define GM_MAINWIN_REPAINT			0x010B
#define GM_MAINWIN_SHOWBKGND		0x010C
#define GM_MAINWIN_SYSCOMMAND		0x010D
#endif //RemoveVanilla_PostMsg

#ifndef RemVanilla_PostMsg
void PostMsg(int p_msg, void* p_data);
#endif //RemVanilla_PostMsg

#ifndef RemMsgQueue
#define GT_IDLE		0x0000
#define GT_CHKMSG	0x0001
#define GT_DRAW		0x0002
#define GT_REDRAW	0x0003
#define GT_TICK		0x0004

bool loop(char task);// Returns true if GT_IDLE is set, there was a message, anything was drawn succesfully on the screen, GT_REDRAW was succesful or a tick was processed
#endif //RemMsgQueue