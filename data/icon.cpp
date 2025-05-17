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
			omctp::icons::main_wnd->set("main_wnd", "omctp.main_wnd", "resource/icon/main_wnd.ico", "resource/icon/main_wnd.png", 32, 32);
			return 0;
		}
		void delete_pointers()
		{
			delete omctp::icons::main_wnd; omctp::icons::main_wnd = nullptr;

			return;
		}
	}
}

