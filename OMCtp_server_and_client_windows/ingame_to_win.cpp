/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|ingame_to_win.cpp - Create Windows Handles from ingame classes|
\**************************************************************/

#include "ingame_to_win.h"

namespace omctpfun_win
{
	HICON get_winIconStd(icon p_icon)
	{
		return LoadIconA(NULL, p_icon.path_ico);
	}
};