//
//  main.c
//  CountDown
//
//  Created by Steven Strand on 4/8/15.
//  Copyright (c) 2015 Steven Strand. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    for (int i=99; i>-1; i-=3) {
        printf("%d\n", i);
        if ((i % 5) == 0) {
            printf("Found One!\n");
        }
    }
    return 0;
}
