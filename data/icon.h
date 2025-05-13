/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|****************************icon.h****************************|
|********defines the objects of the ingame type classes********|
\**************************************************************/

#include "../OMCtp_functions_header/ingame_types.h"

//use pointers, so you are able to delete the objects
namespace omctp
{
	namespace icons
	{
		int register_icons();
		void delete_pointers();
		icon* main_wnd = new icon;
	}
}