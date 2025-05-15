/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|****************************icon.h****************************|
|********defines the objects of the ingame type classes********|
\**************************************************************/



#include "..\OMCtp_functions_header\ingame_types.h"

//use pointers, so you are able to delete the objects
namespace omctp
{
	namespace icons
	{
		extern icon* main_wnd;
		int register_iconsStd();
		void delete_pointers();
	}
}