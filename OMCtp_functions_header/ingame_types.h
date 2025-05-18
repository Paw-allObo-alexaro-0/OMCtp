/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 05/2025********************|
|ingame_types.h - Any things you can see in or used by the game|
\**************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#ifndef OMCTP_INGAME_TYPES_H
#define OMCTP_INGAME_TYPES_H

#include "cstring"

class icon
{
	public:
		char* name = nullptr;
		char* id = nullptr; //ingame id
		char* path_ico = nullptr;
		char* path_png = nullptr;
		short cx = 0;
		short cy = 0;
		void set(const char* p_name, const char* p_id, const char* p_path_ico, const char* p_path_png, unsigned short p_cx, unsigned short p_cy);
};
#endif