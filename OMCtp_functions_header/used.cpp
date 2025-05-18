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
		int register_iconsStd()
		{
			// main_wnd
			omctp::icons::register_iconsStd();
			if(main_wnd.id == nullptr)
			{
				main_wnd.id = omctp::icons::main_wnd->id;
			}
			if(main_wnd.name == nullptr)
			{
				main_wnd.name = omctp::icons::main_wnd->name;
			}
			if(main_wnd.path_ico == nullptr)
			{
				main_wnd.path_ico = omctp::icons::main_wnd->path_ico;
			}
			if(main_wnd.path_png == nullptr)
			{
				main_wnd.path_png = omctp::icons::main_wnd->path_png;
			}
			omctp::icons::delete_pointers();
			return 0;
		}
	}
}