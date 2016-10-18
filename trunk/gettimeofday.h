/*
 * From http://www.openasthra.com/c-tidbits/gettimeofday-function-for-windows/
 */
#include <time.h>
//#include <windows.h>
#include <winsock2.h>

#if defined(_MSC_VER) || defined(_MSC_EXTENSIONS)
  #define DELTA_EPOCH_IN_MICROSECS  11644473600000000Ui64
#else
  #define DELTA_EPOCH_IN_MICROSECS  11644473600000000ULL
#endif

struct timezone
{
  int  tz_minuteswest;
  int  tz_dsttime;    
};

int gettimeofday(struct timeval *tv, struct timezone *tz);

