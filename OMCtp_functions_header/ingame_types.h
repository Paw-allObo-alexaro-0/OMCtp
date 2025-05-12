/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|***********ingame_types.h - Entry-point for Windows***********|
\**************************************************************/

class icon
{
	public:
		char* name;
		char* id; //ingame id
		char* path_ico;
		char* path_png;
		char cx;
		char cy;
#ifdef _WIN32
		HANDLE winIcon;
#endif
};