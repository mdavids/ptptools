//
// gcc -lrt taitest.c -o taitest
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
   struct timespec ts_realtime;
   struct timespec ts_tai;

   clock_gettime(CLOCK_REALTIME, &ts_realtime);
   clock_gettime(CLOCK_TAI, &ts_tai);

   printf("Realtime:\t%lld.%.9ld or %s", (long long)ts_realtime.tv_sec, ts_realtime.tv_nsec, ctime(&ts_realtime.tv_sec));
   printf("TAI:\t\t%lld.%.9ld or %s", (long long)ts_tai.tv_sec, ts_tai.tv_nsec, ctime(&ts_tai.tv_sec));
}
