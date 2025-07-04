/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|****************************icon.h****************************|
|********defines the objects of the ingame type classes********|
\**************************************************************/

#include "icon.h"

#ifndef RemVanilla_omctp
namespace omctp
{
#ifndef RemVanilla_icons
	namespace icons
	{
		icon* main_wnd = new icon;

#ifndef RemVanilla_register_icons
		int register_icons()
		{
			omctp::icons::main_wnd->set("main_wnd", "omctp.main_wnd", "resource/icon/main_wnd.ico", "resource/icon/main_wnd.png", 32, 32);
			return 0;
		}
#endif // RemVanilla_register_icons
#ifndef RemVanilla_delete_pointers
		void delete_pointers()
		{
			delete omctp::icons::main_wnd; omctp::icons::main_wnd = nullptr;

			return;
		}
#endif // RemVanilla_delete_pointers
	}
#endif // RemVanilla_icons
}
#endif // RemVanilla_omctp