/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 07/2025********************|
|*********timer.h - provides the high resolution timer*********|
\**************************************************************/

#include "../OMCtp_functions_header/sysinfo.h"

#ifdef WINDOWS
#include <Windows.h>
#else
#include <sys/time.h>
#include <unistd.h>
#include <time.h>
#endif

LARGE_INTEGER mhighres_timer();