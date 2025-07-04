/**************************************************************\
|***************OMCtp - OMC in third person mode***************|
|**************Paw all Obo alexaro 0 - Hack24more**************|
|********************NDVX Studios - 07/2025********************|
|*********timer.h - provides the high resolution timer*********|
\**************************************************************/

#include "timer.h"

int mhighres_timer(int query_init)
{
#if (LINUX==0)
    static LARGE_INTEGER timerinit;
    LARGE_INTEGER timervalue;
    int htimer, ret;

    htimer = 0;
    if (HighResTimer) {
        if (query_init == 1) {       /* setup */
            if (QueryPerformanceCounter(&timerinit) == 0)
                ret = -1;
            else {
                htimer = 0;
                ret = 1;
            }
        }
        else if (query_init == 0) {  /* query */
            if (QueryPerformanceCounter(&timervalue) == 0) {
                htimer = 0;
                ret = -1;
            }
            else {
                htimer = (int)(((timervalue.QuadPart - timerinit.QuadPart) * 1000000) / HighResTimerFreq.QuadPart);
                ret = 1;
            }
        }
        else
            ret = -1;
    }
    else {
        htimer = 0;
        ret = -1;
    }
    return (ret);

#else // use this maybe to develop a linux version
    static struct timeval tv, stv;
    static struct timezone tz;
    static int htimer;

    if (query_init == 1) {       /* setup */
        gettimeofday(&stv, &tz);
        //timer_init = clock();
        htimer = 0;
    }
    else if (query_init == 0) {  /* query */
        //htimer = ((clock() - timer_init)*1000)/CLOCKS_PER_SEC;
        gettimeofday(&tv, &tz);
        htimer = (tv.tv_sec - stv.tv_sec) * 1000000
            + (tv.tv_usec - stv.tv_usec); /* in us */
    }
    Macro_ivar[10] = htimer;
    sprintf(Macro_string[1], " %d [us]", htimer);
    return 1;
#endif
}
