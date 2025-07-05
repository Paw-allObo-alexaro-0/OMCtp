/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 07/2025********************|
|*********timer.h - provides the high resolution timer*********|
\**************************************************************/

#include "timer.h"

#ifndef RemVanilla_mhighres_timer
LARGE_INTEGER mhighres_timer()
{
	static int timer_is = -1; /* internal high resolution timer available */
	static LARGE_INTEGER timer_freq;
    if (timer_is == -1)
    {
        if (QueryPerformanceFrequency(&timer_freq) == 0)
            timer_is = 0; // no high resolution timer
        else
			timer_is = 1; // high resolution timer available
    }

    LARGE_INTEGER timer_value;
	QueryPerformanceCounter(&timer_value);
    return timer_value;
}
#endif // RemVanilla_mhighres_timer