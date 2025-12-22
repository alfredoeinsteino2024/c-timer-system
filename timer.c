#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>
int main() {

    int hour, second, minute;
    hour = 0, second = 0, minute = 0;
    while(1) {
        system("clear");
        printf("%02dH : %02dM : %02dS ",hour, second, minute);

        fflush(stdout);
        second++;
        sleep(1);

        if(second == 60)
        {
            minute++;
            second = 0;
            hour = 0;
        }

        if(minute == 60) {
            hour++;
            minute = 0;
            second = 0;
        }
        if(hour == 24) {
            hour = 0;
            minute = 0;
            second = 0;
        }

    }
    return 0;
}
