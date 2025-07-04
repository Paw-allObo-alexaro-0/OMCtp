/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|*used.h - defines the used objects of the ingame type classes*|
\**************************************************************/



#include "..\data\icon.h"

#ifndef RemVanilla_used 
namespace used
{
#ifndef RemVanilla_icons
	namespace icons
	{
		extern icon main_wnd;
		extern icon main_wnd_cursor;

#ifndef RemVanilla_register_icons
		int register_icons();
#endif // RemVanilla_register_icons
	}
#endif // RemVanilla_icons
}
#endif // RemVanilla_used