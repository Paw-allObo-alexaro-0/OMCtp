/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|ingame_types.h - Any things you can see in or used by the game|
\**************************************************************/

#include "ingame_types.h"

void icon::set(const char* p_name, const char* p_id, const char* p_path_ico, const char* p_path_png, unsigned short p_cx, unsigned short p_cy)
{
	if(name != nullptr) delete[] name;
	if (p_name != nullptr)
	{
		if (strlen(p_name))
		{
			name = new char[strlen(p_name) + 1];
			strcpy(name, p_name);
		}
	}
	if(id != nullptr) delete[] id;
	if (p_id != nullptr)
	{
		if (strlen(p_id))
		{
			id = new char[strlen(p_id) + 1];
			strcpy(id, p_id);
		}
	}
	if (path_ico != nullptr) delete[] path_ico;
	if (p_path_ico != nullptr)
	{
		if (strlen(p_path_ico))
		{
			path_ico = new char[strlen(p_path_ico) + 1];
			strcpy(path_ico, p_path_ico);
		}
	}
	if (path_png != nullptr) delete[] path_png;
	if (p_path_png != nullptr)
	{
		if (strlen(p_path_png))
		{
			path_png = new char[strlen(p_path_png) + 1];
			strcpy(path_png, p_path_png);
		}
	}
	cx = p_cx;
	cy = p_cy;
	return;
}
