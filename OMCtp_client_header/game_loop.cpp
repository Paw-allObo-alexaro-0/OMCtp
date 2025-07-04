/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|****************game_loop.cpp - game main loop****************|
\**************************************************************/

#include "game_loop.h"

#ifndef RemMsgQueue

message::message(int p_msg, void* p_data)
{
	msg = p_msg;
	data = p_data;
}

std::queue<message> i;
#endif //RemMsgQueue

#ifndef RemVanilla_PostMsg
void PostMsg(int p_msg, void* p_data)
{
	i.push(message(p_msg, p_data));
}
#endif //RemVanilla_PostMsg

#ifndef RemMsgQueue
bool loop(char task)
{
	switch (task)
	{
	case GT_IDLE:
		// Handle idle state
		return true;
	case GT_CHKMSG:
		if (!i.empty())
		{
			message msg = i.front();
			i.pop();
			// Process message
			return true;
		}
		return false;
	case GT_DRAW:
		// Draw something on the screen
		return true;
	case GT_REDRAW:
		// Redraw the screen
		return true;
	case GT_TICK:
		// Process a tick
		return true;
	default:
		return false;
	}
}
#endif