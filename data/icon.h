/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|****************************icon.h****************************|
|********defines the objects of the ingame type classes********|
\**************************************************************/

#include "..\OMCtp_functions_header\ingame_types.h"

//use pointers, so you are able to delete the objects
#ifndef RemVanilla_omctp
namespace omctp
{
#ifndef RemVanilla_icon
	namespace icons
	{
		extern icon* main_wnd;

#ifndef RemVanilla_register_icons
		int register_icons();
#endif // RemVanilla_register_icons
#ifndef RemVanilla_delete_pointers
		void delete_pointers();
#endif // RemVanilla_delete_pointers
	}
#endif // RemVanilla_icon
}
#endif // RemVanilla_omctp