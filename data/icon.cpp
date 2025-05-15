/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|****************************icon.h****************************|
|********defines the objects of the ingame type classes********|
\**************************************************************/

#include "icon.h"

namespace omctp
{
	namespace icons
	{
		icon* main_wnd = new icon;
		int register_iconsStd()
		{
			// main_wnd
			omctp::icons::main_wnd->name = "main_wnd";
			omctp::icons::main_wnd->id = "main_wnd";
			omctp::icons::main_wnd->path_ico = "OMCtp\\icons\\main_wnd.ico";
			omctp::icons::main_wnd->path_png = "OMCtp\\icons\\main_wnd.png";
			omctp::icons::main_wnd->cx = 32;
			omctp::icons::main_wnd->cy = 32;

			return 0;
		}
		void delete_pointers()
		{
			delete omctp::icons::main_wnd; omctp::icons::main_wnd = nullptr;

			return;
		}
	}
}

