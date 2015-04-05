//
//  main.c
//  TwoFloats
//
//  Created by Steven Strand on 4/5/15.
//  Copyright (c) 2015 Steven Strand. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Declare Float One
    float one = 3.14;
    
    // Declare Float Two
    float two = 42.0;

    // Declare and set value of Sum
    double sum = one + two;
    
    // Print the value of the Sum
    printf("The sum of %f and %f is equal to %f.\n", one, two, sum);
    return 0;
}
