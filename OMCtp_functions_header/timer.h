/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 07/2025********************|
|*********timer.h - provides the high resolution timer*********|
\**************************************************************/

#ifdef _WIN32
#include <Windows.h>
#else
#include <sys/time.h>
#include <unistd.h>
#include <time.h>
#endif

int mhighres_timer(int query_init);