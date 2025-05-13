#include "icon.h"

int omctp::icons::register_icons()
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

void omctp::icons::delete_pointers()
{
	delete omctp::icons::main_wnd; omctp::icons::main_wnd = nullptr;

	return;
}