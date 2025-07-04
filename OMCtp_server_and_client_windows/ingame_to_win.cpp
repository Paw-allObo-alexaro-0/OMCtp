/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|ingame_to_win.cpp - Create Windows Handles from ingame classes|
\**************************************************************/

#include "ingame_to_win.h"

#ifndef RemVanilla_omctpfun_win
namespace omctpfun_win
{
#ifndef RemVamilla_get_winIcon
	HICON get_winIcon(icon p_icon)
	{
		return (HICON) LoadImageA(NULL, p_icon.path_ico, IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_DEFAULTSIZE);
	}
#endif // RemVamilla_get_winIcon
};
#endif // RemVanilla_omctpfun_win