//
//  main.c
//  Time
//
//  Created by Steven Strand on 4/9/15.
//  Copyright (c) 2015 Steven Strand. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    long secondsSince1970 = time(NULL);
    printf("It has been %ld seconds since 1970\n", secondsSince1970);
    
    struct tm now;
    localtime_r(&secondsSince1970, &now);
    printf("The time is %d:%02d:%02d\n", now.tm_hour, now.tm_min, now.tm_sec);
    
    struct tm fourMillionSeconds;
    long fourMillion = 4000000;
    localtime_r(&fourMillion, &fourMillionSeconds);
    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    printf("The date in four million seconds from 1970 is: %s %d, %d\n", month[fourMillionSeconds.tm_mon], fourMillionSeconds.tm_mday, fourMillionSeconds.tm_year + 1900);
    printf("The time is at four millions seconds from 1970 is: %d:%02d:%02d\n", fourMillionSeconds.tm_hour, fourMillionSeconds.tm_min, fourMillionSeconds.tm_sec);
    // printf("It has been %ld seconds since 1970\n", fourMillionsSeconds);
    
    return 0;
}
