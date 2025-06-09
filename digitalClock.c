#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <time.h>
int main(){
    struct tm *pTime= NULL;
    time_t rawtime= 0;
    bool isRunning = true;

    while (isRunning)
    {
        time(&rawtime);
        sleep(1);
        pTime =localtime(&rawtime);
        printf("%02d:%02d:%02d",pTime->tm_hour,(pTime)->tm_min,(*pTime).tm_sec);
        fflush(stdout);
    }
    

    return 0;
}