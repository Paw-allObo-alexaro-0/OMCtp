/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|used.cpp - defines the used objects of the ingame type classes|
\**************************************************************/



#include "used.h"

namespace used
{
	namespace icons
	{
		icon main_wnd;
		icon main_wnd_cursor;
		int register_iconsStd()
		{
			omctp::icons::register_iconsStd();
			main_wnd = *omctp::icons::main_wnd;
			omctp::icons::delete_pointers();
			return 0;
		}
	}
}