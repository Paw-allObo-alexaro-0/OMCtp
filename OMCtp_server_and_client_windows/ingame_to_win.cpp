/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|***********ingame_to_win.h - Create Windows Handles***********|
\**************************************************************/

#include "ingame_to_win.h"

namespace omctpfun_win
{
	HICON get_winIcon(icon p_icon)
	{
		if (p_icon.winIcon) return p_icon.winIcon; // Return the existing icon if it exists
		else
		{
			HICON winIcon = LoadIcon(NULL, p_icon.path_ico);

	}
}