//
//  main.c
//  Looping
//
//  Created by Steven Strand on 4/8/15.
//  Copyright (c) 2015 Steven Strand. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i=0;
    while (i < 12) {
        printf("%d. Aaron is Cool\n", i);
        i++;
    }
    
    for (int i = 0; i < 12; i++) {
        printf("%d. Aaron is Cool\n", i);
    }
    
    for (i=0; i < 12; i++) {
        printf("Checking i = %d\n", i);
        if (i + 90 == i*i) {
            break;
        }
    }
    printf("The answer is %d.\n", i);
    
    for (i=0; i<12; i++) {
        if (i%3 == 0) {
            continue;
        }
        printf("Checking i = %d\n", i);
        if (i+90 == i*i) {
            break;
        }
    }
    printf("The answer is %d.\n", i);
    
    i=0;
    do {
        printf("%d. Aaron is Cool\n", i);
        i++;
    } while (i < 12);
    return 0;
}
